#include "Config.h"
#include <iostream>

bool ConfigSystem::InternalConfigSystem(std::string ConfigName, std::string Path) {
	this->ConfigSettingsInternal = new ConfigSystemInternalSettings();

	if (Path == "")
		Path = this->ConfigSettingsInternal->ConfigPath;

	this->failed = false;
	this->LastErrors.clear();

	if (!std::filesystem::exists(Path))
	{
		FailConfig("Couldn't finish Internal Config System, Input Path doesn't Exist!");
		return false;
	}

	try {
		std::filesystem::create_directory(Path);

		// Get existing config files
		for (const auto& entry : std::filesystem::directory_iterator(Path)) {
			if (entry.path().extension() == ConfigSettingsInternal->ExtensionConfig) {
				Configs.push_back(entry);
			}
		}

		return ActivateConfig(ConfigName, Path);
	}
	catch (const std::exception& e) {
#if Debug
		std::cerr << "Error in InternalConfigSystem: " << e.what() << std::endl;
#endif
		return false;
	}
}

#if Debug
std::vector<unsigned char> ByteArray;
#endif

bool ConfigSystem::ActivateConfig(std::string ConfigName,std::string Path) {
	if (!std::filesystem::exists(Path))
	{
		FailConfig("Failed to ActivateConfig, Input Path doesn't Exist!");
		return false;
	}

	std::string ConfigFileName = ConfigName + "." + ConfigSettingsInternal->ExtensionConfig;
	std::string ConfigPath_ = Path + "/" + ConfigFileName;

    std::ifstream ConfigOut(ConfigPath_, std::ios::binary);
    std::vector<Field_Config> Fields;

    bool result = false;

    LastConfigName.clear();
    LastPath.clear();
    FieldReferences.clear();

    if (ConfigOut.is_open()) {
        // Get file size
        ConfigOut.seekg(0, std::ios::end);
        auto ByteNumb = ConfigOut.tellg();
        ConfigOut.seekg(0, std::ios::beg);

        std::vector<unsigned char> buffer(ByteNumb);

        if (!buffer.empty()) {
            ConfigOut.read((char*)buffer.data(), ByteNumb);


#if Debug
			for (size_t i = 0; i < ByteArray.size(); i++)
			{
				if (ByteArray[i] != buffer[i]) {
					std::cout << "Byte is not the same! At: " << i << "\n";
					break;
				}
			}

			std::cout << "Read out Data size of: " << ByteNumb << " Bytes!\n";
#endif

            size_t FieldStructSize = sizeof(Field_Config);
            size_t BuffSize = buffer.size();

            for (size_t i = 0, b_ = 0; i < BuffSize && b_ < ConfigSettingsInternal->MaxFieldCount; b_++) {
                try {
                    Fields.push_back(Field_Config(this->ConfigSettingsInternal, buffer, i));
                } catch (const std::exception& e) {
#if Debug
                    std::cerr << "Error: " << e.what() << "\n";
#endif
                    break;
                }
            }
        }
        ConfigOut.close();
        result = true;
    }

    if (!result) {
        std::ofstream some_(ConfigPath_);
        if (some_.is_open())
            result = true;
        some_.close();
    }

    if (result) {
        LastConfigName = ConfigFileName;
        LastPath = Path;
        this->Fields = Fields;
    }

    return result;
}


//Writes Data retrieved from Config File to corresponding Fields
bool ConfigSystem::WriteToFields() {
	bool wroteField = false;

	for (auto& FieldCurrent : FieldReferences) {
		if (FieldCurrent.OwningConfigField) {
			wroteField = true;
			std::memcpy(FieldCurrent.PtrToOwningField, FieldCurrent.OwningConfigField->Data.data(), FieldCurrent.TypeSize);
		}
		else {
			for (const auto& FieldRealCurrent : Fields) {
				if (FieldCurrent.ID == FieldRealCurrent.ID) {
					wroteField = true;
					std::memcpy(FieldCurrent.PtrToOwningField, FieldRealCurrent.Data.data(), FieldCurrent.TypeSize);
					break;
				}
			}
		}
	}

	return wroteField;
}

//Writes Fields to the Config Files
void ConfigSystem::WriteToConfigFile() {
	if (LastPath.empty() || failed)
		return;

	std::ofstream Config(LastPath + "/" + LastConfigName, std::ios::binary);

	if (Config.is_open()) {
		std::vector<char> DataBuf;

		for (auto FieldRef : FieldReferences) {
			auto FieldData = std::vector<unsigned char>(FieldRef.FieldToChars());

#if Debug
			bool DataValid = false;

			try
			{
				size_t index = 0;
				Field_Config test_(FieldData, index);
				DataValid = true;
			}
			catch (const std::exception&)
			{

			}

			std::cout << "Data check: " << (DataValid ? "true" : "false") << "\n";
#endif


			DataBuf.insert(DataBuf.begin(), FieldData.begin(), FieldData.end());
		}

#if Debug
		ByteArray.insert(ByteArray.begin(), DataBuf.begin(), DataBuf.end());
		std::cout << "Wrote " << DataBuf.size() << " Bytes to File!\n";

			std::cout << std::to_string(DataBuf[352]) << "\n";
			std::cout << std::to_string(DataBuf[353]) << "\n";
#endif
		Config.clear();

		for (size_t i = 0; i < DataBuf.size(); i++)
		{
			
			Config << DataBuf[i];
		}

		//Config.write(DataBuf.data(), DataBuf.size());


		Config.close();
	}
}



//Call this Function only after Adding the Fields and having all Fields inside a File, else this function just does nothing except write back already existing data to the Config ._.
void ConfigSystem::WriteToConfigFile(int ID) {
	if (LastPath.empty())
		return;

	std::ofstream Config(LastPath + "/" + LastConfigName,std::ios::binary);

	if (Config.is_open()) {
		std::vector<char> DataBuf;

		for (auto Field_ : Fields) {
			if (Field_.ID == ID)
				continue;

			if (DataBuf.size() > 300) {
				Config.write(DataBuf.data(), DataBuf.size());
				DataBuf.clear();
			}

			try {
				auto out_ = Field_.ToCharType(this->ConfigSettingsInternal);
				DataBuf.insert(DataBuf.begin(), out_.begin(), out_.end());
			}
			catch (const std::exception&) {

			}
		}

		for (auto FieldRef : FieldReferences) {
			if (FieldRef.ID == ID) {
				auto FieldData = FieldRef.FieldToChars();
				DataBuf.insert(DataBuf.begin(), FieldData.begin(), FieldData.end());
				break;
			}
		}

		Config.write(DataBuf.data(), DataBuf.size());
		Config.close();
	}
}

//Resizes the Field that got added to the System. (use for Types that are Dynamically Sized)
void ConfigSystem::ResizeField(size_t Size, int ID)
{
	for (auto& RefField : FieldReferences)
	{
		if (RefField.ID == ID)
		{
			RefField.TypeSize = Size;
			return;
		}
	}
}

//Returns an list of Errors that happened on the System. (Use this to find out what went wrong to the Config System)
std::vector<std::string> ConfigSystem::GetLastErrors()
{
	std::vector<std::string> Errors = LastErrors;

	if (LastErrors.size() > 0)
		LastErrors.clear();

	return Errors;
}

//Checks if from Config Loaded Field exists
bool ConfigSystem::IsFieldExisting(int ID)
{
	auto FieldListSize = this->Fields.size();

	for (size_t i = 0; i < FieldListSize; i++)
	{
		if (this->Fields[i].ID == ID) return true;
	}

	return false;
}

//Calls when something goes wrong and the System cant continue
void ConfigSystem::FailConfig(std::string Reason, bool FailConfigSystem)
{
	if(FailConfigSystem)
	       this->failed = true;
#if Debug == true
	std::cout << "[~Error] : " << Reason << "\n";
#else
	this->LastErrors.push_back(Reason);
#endif
}

ConfigSystem::ConfigSystem(std::string ConfigName) {
	if (!InternalConfigSystem(ConfigName, ""));
	       FailConfig("Internal ConfigSystem failed!");
}

ConfigSystem::ConfigSystem(std::string ConfigName, std::string path) {
	if (!InternalConfigSystem(ConfigName, path));
	       FailConfig("Internal ConfigSystem failed!");
}


std::wstring ConfigSystem::GetCurrentConfigNameW() {
	      std::wstring wstr(LastConfigName.length(), L' ');
	      std::copy(LastConfigName.begin(), LastConfigName.end(), wstr.begin());
    return wstr;
}

std::string ConfigSystem::GetCurrentConfigName() {
	return LastConfigName;
}

ByteType::ByteType(ConfigSystemInternalSettings* configSettings, std::vector<unsigned char> Data, size_t& Index) {
	const int Size_t_Size = sizeof(size_t);

	std::string Message = "Couldn't Create ByteType, because ";

	unsigned char* Data_Copy = nullptr;

	size_t FieldSize = 0;
	Data_Copy = (unsigned char*)&FieldSize;

	// Check if there's enough data to read
	if (Data.size() - Index < Size_t_Size) {
		throw std::exception((Message + "Not enough data to read size").c_str());
	}

	//Get Size of Field
	for (size_t i = 0; i < Size_t_Size; i++, Index++) {
		Data_Copy[i] = Data[Index];
	}

	if (FieldSize > configSettings->MaxTypeSize) {
		throw std::exception((Message + "Data was Bigger than allowed Size!").c_str());
	}
	else if (FieldSize <= 0) {
		throw std::exception((Message + "Data was Invalid!").c_str());
	}

	Size = FieldSize;

	// Get Data of Field
	for (size_t i = 0; i < FieldSize; i++, Index++) {
		this->Data.push_back(Data[Index]);
	}
}

//Dont call Directly, Internal Config System uses Protection and fail checks, calling raw doesnt use these Checks
Field_Config::Field_Config(ConfigSystemInternalSettings* configSettings, std::vector<unsigned char> Data, size_t& Index)
{
	if (Data.size() - 1 < Index + sizeof(size_t) + 1)
		throw std::exception(std::string("Data was Invalid, ini" + std::to_string(Data.size()) + ", max:" + std::to_string(Index + sizeof(size_t) + 1)).c_str()); // Throwing a proper exception

	ByteType normalType = ByteType(configSettings, Data, Index);

	ByteType idType = ByteType(configSettings, Data, Index);

	this->Data = normalType.Data;
	this->FieldSize = normalType.Size;
	this->ID = idType.GetType<int>();
}


std::vector<char> Field_Config::ToCharType(ConfigSystemInternalSettings* configSettings)
{
	if (this->FieldSize >= configSettings->MaxTypeSize || this->Data.size() != (this->FieldSize + 1))
		throw std::exception("Field Data was faulty, couldnt create Data!");

	size_t size_size_t = sizeof(size_t);
	size_t size_int = sizeof(int);

	size_t total_size = size_size_t + this->FieldSize + size_size_t + size_int;

	// Allocate vector with the correct size
	std::vector<char> Data_(total_size);

	// Copy the TypeSize
	std::memcpy(Data_.data(), &this->FieldSize, size_size_t);

	// Copy the field data pointed by PtrToOwningField
	std::memcpy(Data_.data() + size_size_t, this->Data.data(), this->FieldSize);

	// Copy the size of int (though this seems unnecessary)
	std::memcpy(Data_.data() + size_size_t + this->FieldSize, &size_int, size_size_t);

	// Copy the ID
	std::memcpy(Data_.data() + size_size_t + this->FieldSize + size_size_t, &ID, size_int);

	return Data_;
}

std::vector<unsigned char> FieldOwning::FieldToChars()
{
	size_t size_size_t = sizeof(size_t);
	size_t size_int = sizeof(int);

	size_t total_size = size_size_t + TypeSize + size_size_t + size_int;

	// Allocate vector with the correct size
	std::vector<unsigned char> Data_(total_size);

	// Copy the TypeSize
	std::memcpy(Data_.data(), &TypeSize, size_size_t);

	// Copy the field data pointed by PtrToOwningField
	std::memcpy(Data_.data() + size_size_t, PtrToOwningField, TypeSize);

	// Copy the size of int (though this seems unnecessary)
	std::memcpy(Data_.data() + size_size_t + TypeSize, &size_int, size_size_t);

	// Copy the ID
	std::memcpy(Data_.data() + size_size_t + TypeSize + size_size_t, &ID, size_int);

	return Data_;
}

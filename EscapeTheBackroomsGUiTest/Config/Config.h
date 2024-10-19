#pragma once

#include <iostream>
#include <filesystem>
#include <string>
#include <vector>
#include <fstream>
#include <functional>

template<typename T, typename T1> //Check if Type is the Type you wanna avoid
constexpr bool isWrongType()
{
	return T == T1;
}

struct ConfigSystemInternalSettings {
	//Adjust Values how ever is needed!
	int MaxTypeSize = 25; //The Max Byte Size of an Type that can be added and used
	int MaxFieldCount = 70; //The Max amount of Fields that get Loaded
	std::string ConfigPath = R"(C:/Bloodhunt)"; //The Directory that stores the Safefiles and reads them from
	std::string ExtensionConfig = "escp"; //the extension of the file we wanna make. (if you wanna ignore some values or some
};

// Test not finished functions early, (Only Activate if you know what you are doing)
#define Test false 

//for debugging Purposes obviously
#define Debug false

//if your scared of fucking something up make this to true
#define IdkMode false

#define dataLimit_String 50

inline std::vector < std::pair<void*, int> > FieldRefs;

//
//#if Debug == true
//using EventHandler = std::function<void(std::string Error)>;
//EventHandler PrintOutError_Config;
//#endif

struct ByteType {
	size_t Size = 0;
	std::vector<unsigned char> Data;

	ByteType(ConfigSystemInternalSettings* configSettings, std::vector<unsigned char> Data, size_t& Index);

	template <typename T>
	static std::vector<unsigned char> TypeToByteType_Char(T type) {
		const int size_ = sizeof(size_t);

		auto Size_ = sizeof(T);
		auto Data_ = std::vector<unsigned char>(size_ + Size_);

		std::memcpy(Data_.data(), &Size_, size_);
		std::memcpy((void*)((uintptr_t)Data_.data() + size_), &type, Size_);


		return Data_;
	}

	template <typename T>
	T GetType() {
		T typeOut = T();
		auto TypeSize = sizeof(T);

		if (Size >= TypeSize && Size <= TypeSize)
			std::memcpy(&typeOut, Data.data(), Size);
		

		return typeOut;
	}
};

struct Field_Config {
	size_t FieldSize = 0;
	std::vector<unsigned char> Data;
	int ID = -1;

	Field_Config(ConfigSystemInternalSettings* configSettings, std::vector<unsigned char> Data, size_t& Index);
	std::vector<char> ToCharType(ConfigSystemInternalSettings* configSettings);
};


struct FieldOwning {
	size_t TypeSize = 0;
	void* PtrToOwningField = nullptr;
	Field_Config* OwningConfigField = nullptr;
	int ID = -1;

	FieldOwning(size_t TypeSize, void* FieldPtr, int ID) {
		this->TypeSize = TypeSize;
		this->ID = ID;
		this->PtrToOwningField = FieldPtr;
	}

	std::vector<unsigned char> FieldToChars();
};

class ConfigSystem 
{
private:
	std::vector<Field_Config> Fields;
	std::vector<std::filesystem::directory_entry> Configs;
	std::vector<FieldOwning> FieldReferences;
	std::string LastPath = "";
	std::string LastConfigName = "";
	std::vector<std::string> LastErrors;
	bool failed = false;

	ConfigSystemInternalSettings* ConfigSettingsInternal = nullptr;

	bool InternalConfigSystem(std::string ConfigName, std::string Path);
	bool IsFieldExisting(int ID);
	void FailConfig(std::string Reason, bool FailConfigSystem = false);
public:

	ConfigSystem(std::string ConfigName);
	ConfigSystem(std::string ConfigName, std::string Path);

	~ConfigSystem() {
		delete ConfigSettingsInternal;
	}

	std::vector<std::string> GetLastErrors();

	//See if the Config System has failed anywhere
	constexpr bool hasConfigFailed() const { return failed; };
	//Call when switching Configs
	bool ActivateConfig(std::string ConfigName, std::string Path);
	bool WriteToFields();
	void WriteToConfigFile();
	void WriteToConfigFile(int ID);
	void ResizeField(size_t Size, int ID);
	std::wstring GetCurrentConfigNameW();
	std::string GetCurrentConfigName();

	//Settings shit
	std::string GetSettingsPath() { return this->ConfigSettingsInternal->ConfigPath; };
	std::string GetSettingsExtension() { return this->ConfigSettingsInternal->ExtensionConfig;};
	int GetSettingsMaxTypeSize() { return this->ConfigSettingsInternal->MaxTypeSize; };
	int GetSettingsMaxFieldCount() { return this->ConfigSettingsInternal->MaxFieldCount; };

	void SetSettingsPath(std::string Path) { this->ConfigSettingsInternal->ConfigPath = Path; };
	void SetSettingsExtension(std::string Extension) { this->ConfigSettingsInternal->ExtensionConfig = Extension; };
	void SetSettingsMaxTypeSize(int MaxTypeSize) { this->ConfigSettingsInternal->MaxTypeSize = MaxTypeSize; };
	void SetSettingsMaxFieldCount(int MaxFieldCount) { this->ConfigSettingsInternal->MaxFieldCount = MaxFieldCount; };

	//void* FindConfigField

	//Adding Fields with the Same ID will result in weird behaviour
	template <typename T>
	void AddField(T* type, int ID) {
		static_assert(isWrongType<T, std::string>(), "Config Error!, Tried adding String to Config through wrong Function, please use the overloaded function!");
#if Babymode == true
		for (auto& RefField : FieldReferences)
		{
			if (RefField.ID == ID)
			{
            #if Debug == true
				std::cout << "AddField failed! An Field with the Same ID was already Added. ID: " << ID << "\n";
            #endif
				return;
			}
		}
#endif

		FieldOwning in(sizeof(T), type, ID);

		for (auto& field : Fields) { //Look if config is looking for this type
			if (field.ID == ID) {
				in.OwningConfigField = &field;
				break;
			}
		}

		FieldReferences.push_back(in);
	}

#if Test == true

	//assign the max Length of the String it can hold and should hold, the rest wont be written
	void AddField(std::string* type, int ID, unsigned int stringLen) {
#if Babymode == true
		for (auto& RefField : FieldReferences)
		{
			if (RefField.ID == ID)
			{
#if Debug == true
				std::cout << "AddField failed! An Field with the Same ID was already Added. ID: " << ID << "\n";
#endif
				return;
			}
		}
#endif

		FieldOwning in(stringLen * sizeof(char), type, ID);

		for (auto& field : Fields) { //Look if config is looking for string
			if (field.ID == ID) {

				if (field.FieldSize > (dataLimit_String * sizeof(char))) //Check if string follows max dataLimit, if not return
				{
					return;
				}

				//reserve space for string, to store data from config
				type->reserve(field.FieldSize);

				in.TypeSize = (field.FieldSize * sizeof(char)); //normally dont trust the config field size, but here its kinda needed since we dont know the size

				in.OwningConfigField = &field;
				break;
			}
		}

		FieldReferences.push_back(in);
	}

#endif // Test
};

#include "Localization.h"

enum FileEncoding_Text
{
	Unknown = -1,
	UTF8,
	UTF16_LE,
	UTF16_BE,
	UTF32_LE,
	UTF32_BE
};

namespace Localization
{
	std::filesystem::path mainpath;

	FileEncoding_Text GetFileTypeEncoding(std::vector<unsigned char>& Data)
	{
		if (Data.size() < 4)
			return Unknown;
		
		if (Data[0] == (char)0xEF && Data[1] == (char)0xBB && Data[2] == (char)0xBF)
			return UTF8;

		else if (Data[0] == (char)0xFF && Data[1] == (char)0xFE) {
			if (Data.size() >= 4 && Data[2] == (char)0x00 && Data[3] == (char)0x00)
				return UTF32_LE;


			return UTF16_LE;
		}
		else if (Data[0] == (char)0xFE && Data[1] == (char)0xFF) {
			if (Data.size() >= 4 && Data[2] == (char)0x00 && Data[3] == (char)0x00)
				return UTF32_BE;


			return UTF16_BE;
		}

		return Unknown;
	}

	bool ProcessLocalization(std::vector<unsigned char>& Data, std::vector<std::wstring>& OutData)
	{
		FileEncoding_Text encoding = GetFileTypeEncoding(Data);

		switch (encoding)
		{
		case Unknown:
#ifdef DEBUG
			std::cout << "Invalid File was passed!\n";
#endif
			return false;
			break;

		case UTF8:
		{
			bool storingStringCurrently = false;
			std::wstring stringToStore = L"";

			for (size_t i = 3; i < Data.size(); i++)
			{
				if (Data[i] == L'"')
				{
					if (storingStringCurrently)
						OutData.push_back(stringToStore);

					storingStringCurrently = !storingStringCurrently;
					stringToStore = L"";
				}
				else
				{
					stringToStore += Data[i];
				}
			}
		}
			break;
			/*
		case UTF16_LE:
			break;
		case UTF16_BE:
			break;
		case UTF32_LE:
			break;
		case UTF32_BE:
			break;*/

		default:
			//Non Implemented Type was passed dont process
#ifdef DEBUG
			std::cout << "Non Implemented Type was passed!\n";
#endif

			return false;
			break;
		}
	}

	bool LoadLocalization(std::filesystem::path File, std::string language)
	{
		//todo: 1. Find Certain language file, 2.Load File XDDDDDDD, 3. Parse Bytes to Processing func
		localizationMap.clear();


		std::ifstream localFile(File, std::ios::binary);

		if (!localFile.is_open())
			return false;

		localFile.seekg(0, std::ios::end);
		auto ByteNumb = localFile.tellg(); 
		localFile.seekg(0, std::ios::beg);

		if (ByteNumb > FileSizeLimit) return false; //if Bigger than allowed File Size, return false and handle this

		std::vector<unsigned char> data(ByteNumb);
		std::vector<std::wstring> outData;

		if (!ProcessLocalization(data, outData))
			return false;

		//Quick check for Format
		float Size_ = (outData.size() / 2);
		int Size__ = Size_;

		if (Size__ != Size_) //has to be an even number 
			return false;

		for (size_t i = 0; i <= Size__; i++)
		{
			auto hash_key = Hash_String_Func(outData[i]);

			if(localizedInstances.find(hash_key) != localizedInstances.end())
				localizationMap.emplace(std::make_pair(hash_key, outData[i + 1]));
#ifndef DEBUG
			else
			{
				std::wcout << "Hashed Key: " << outData[i] << " wasnt Found!\n";
			}
#endif

		}
	}

	void RemoveLocalizer(TextLocalized* instance)
	{
		auto it_ = localizedInstances.find(instance->GetHashedKey());

		if (it_ != localizedInstances.end())
		{
			localizedInstances.erase(it_);
		}
	}
}

TextLocalized::TextLocalized(std::wstring Key)
{
	this->hashedKeyName = Hash_String_Func(Key);
	this->localizedOut = L"";

	Localization::localizedInstances.emplace(std::make_pair(hashedKeyName, this));
}

TextLocalized::~TextLocalized()
{
	Localization::RemoveLocalizer(this);
}
#pragma once

#include <string>
#include <vector>
#include <filesystem>
#include <iostream>
#include <fstream>
#include <unordered_map>

#define FileSizeLimit 100000000 //100mb. More than this will be ignored.
                                //if you wanna load some thats bigger than this then change the Size Limit
#define FileType "loc"
#define LocalizationPath  R"(C:/EscapeInternal/Localization)";

class TextLocalized;
typedef size_t Hash;

std::hash<std::wstring> Hash_String_Func;

namespace Localization
{
	inline std::unordered_map<Hash, TextLocalized*> localizedInstances;
	inline std::unordered_map<Hash, std::wstring> localizationMap;

	bool LoadLocalization(std::filesystem::path File, std::string language); //if fails switch to Embeded Localization
}

class TextLocalized
{
private:
	std::wstring localizedOut;
	Hash hashedKeyName;

public:
	constexpr std::wstring GetLocalizedText() const { return localizedOut; };
	constexpr Hash GetHashedKey() const { return hashedKeyName; };

	TextLocalized(std::wstring Key);
	~TextLocalized();
};
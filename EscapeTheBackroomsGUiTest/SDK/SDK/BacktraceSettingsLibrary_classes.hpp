#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x48 (0x80 - 0x38)
// Class BacktraceSettingsLibrary.BacktraceSettings
class UBacktraceSettings : public UDeveloperSettings
{
public:
	class FString                                Token;                                             // 0x38(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, DisableEditOnInstance, GlobalConfig, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                SymbolsToken;                                      // 0x48(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, DisableEditOnInstance, GlobalConfig, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Universe;                                          // 0x58(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, DisableEditOnInstance, GlobalConfig, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ProjectName;                                       // 0x68(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, DisableEditOnInstance, GlobalConfig, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bShouldSendDebugBulids;                            // 0x78(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, DisableEditOnInstance, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bShouldSendReleaseBulids;                          // 0x79(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, DisableEditOnInstance, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bOverrideGlobalCrashReporterSettings;              // 0x7A(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, DisableEditOnInstance, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bPortedOldSettingsStyle;                           // 0x7B(0x1)(ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_ABF[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UBacktraceSettings* GetDefaultObj();

};

}



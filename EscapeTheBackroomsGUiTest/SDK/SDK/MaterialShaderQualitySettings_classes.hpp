#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x50 (0x78 - 0x28)
// Class MaterialShaderQualitySettings.MaterialShaderQualitySettings
class UMaterialShaderQualitySettings : public UObject
{
public:
	TMap<class FName, class UShaderPlatformQualitySettings*> ForwardSettingMap;                                 // 0x28(0x50)(NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UMaterialShaderQualitySettings* GetDefaultObj();

};

// 0x38 (0x60 - 0x28)
// Class MaterialShaderQualitySettings.ShaderPlatformQualitySettings
class UShaderPlatformQualitySettings : public UObject
{
public:
	struct FMaterialQualityOverrides             QualityOverrides[0x4];                             // 0x28(0x24)(Edit, Config, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_1A6A[0x14];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UShaderPlatformQualitySettings* GetDefaultObj();

};

}



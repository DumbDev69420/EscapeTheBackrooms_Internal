#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// Class AsyncLoadingScreen.AsyncLoadingScreenLibrary
class UAsyncLoadingScreenLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UAsyncLoadingScreenLibrary* GetDefaultObj();

	void StopLoadingScreen();
	void SetDisplayTipTextIndex(int32 TipTextIndex);
	void SetDisplayMovieIndex(int32 MovieIndex);
	void SetDisplayBackgroundIndex(int32 BackgroundIndex);
};

// 0xCC8 (0xD00 - 0x38)
// Class AsyncLoadingScreen.LoadingScreenSettings
class ULoadingScreenSettings : public UDeveloperSettings
{
public:
	struct FALoadingScreenSettings               StartupLoadingScreen;                              // 0x38(0x430)(Edit, Config, NativeAccessSpecifierPublic)
	struct FALoadingScreenSettings               DefaultLoadingScreen;                              // 0x468(0x430)(Edit, Config, NativeAccessSpecifierPublic)
	struct FClassicLayoutSettings                Classic;                                           // 0x898(0xA8)(Edit, Config, NativeAccessSpecifierPublic)
	struct FCenterLayoutSettings                 Center;                                            // 0x940(0xA0)(Edit, Config, NativeAccessSpecifierPublic)
	struct FLetterboxLayoutSettings              Letterbox;                                         // 0x9E0(0x138)(Edit, Config, NativeAccessSpecifierPublic)
	struct FSidebarLayoutSettings                Sidebar;                                           // 0xB18(0xB0)(Edit, Config, NativeAccessSpecifierPublic)
	struct FDualSidebarLayoutSettings            DualSidebar;                                       // 0xBC8(0x138)(Edit, Config, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class ULoadingScreenSettings* GetDefaultObj();

};

}



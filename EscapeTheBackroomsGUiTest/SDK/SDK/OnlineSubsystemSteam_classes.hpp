#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// Class OnlineSubsystemSteam.SteamAuthComponentModuleInterface
class USteamAuthComponentModuleInterface : public UHandlerComponentFactory
{
public:

	static class UClass* StaticClass();
	static class USteamAuthComponentModuleInterface* GetDefaultObj();

};

// 0x8 (0x1C50 - 0x1C48)
// Class OnlineSubsystemSteam.SteamNetConnection
class USteamNetConnection : public UIpConnection
{
public:
	bool                                         bIsPassthrough;                                    // 0x1C48(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_921[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class USteamNetConnection* GetDefaultObj();

};

// 0x8 (0x7D8 - 0x7D0)
// Class OnlineSubsystemSteam.SteamNetDriver
class USteamNetDriver : public UIpNetDriver
{
public:
	uint8                                        Pad_922[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class USteamNetDriver* GetDefaultObj();

};

}



#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
//---------------------------------------------------------------------------------------------------------------------
// PARAMETERS
//---------------------------------------------------------------------------------------------------------------------

// 0x1 (0x1 - 0x0)
// Function Lobby_PlayerList_Item.Lobby_PlayerList_Item_C.Set_Speaking
struct ULobby_PlayerList_Item_C_Set_Speaking_Params
{
public:
	bool                                         IsSpeaking;                                        // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x11 (0x11 - 0x0)
// Function Lobby_PlayerList_Item.Lobby_PlayerList_Item_C.KickPlayer
struct ULobby_PlayerList_Item_C_KickPlayer_Params
{
public:
	class AGameModeBase*                         CallFunc_GetGameMode_ReturnValue;                  // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABase_GM_C*                            K2Node_DynamicCast_AsBase_GM;                      // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x19 (0x19 - 0x0)
// Function Lobby_PlayerList_Item.Lobby_PlayerList_Item_C.Set_Avatar
struct ULobby_PlayerList_Item_C_Set_Avatar_Params
{
public:
	struct FLinearColor                          K2Node_MakeStruct_LinearColor;                     // 0x0(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1F47[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Blueprint_GetSizeX_ReturnValue;           // 0x14(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_IntInt_ReturnValue;               // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x18 (0x18 - 0x0)
// Function Lobby_PlayerList_Item.Lobby_PlayerList_Item_C.Set_Username
struct ULobby_PlayerList_Item_C_Set_Username_Params
{
public:
	class FText                                  CallFunc_Conv_StringToText_ReturnValue;            // 0x0(0x18)(None)
};

// 0x1 (0x1 - 0x0)
// Function Lobby_PlayerList_Item.Lobby_PlayerList_Item_C.Set_KickButton
struct ULobby_PlayerList_Item_C_Set_KickButton_Params
{
public:
	bool                                         CallFunc_IsServer_ReturnValue;                     // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x30 (0x30 - 0x0)
// Function Lobby_PlayerList_Item.Lobby_PlayerList_Item_C.Set_ReadyStatus
struct ULobby_PlayerList_Item_C_Set_ReadyStatus_Params
{
public:
	class FText                                  CallFunc_Conv_StringToText_ReturnValue;            // 0x0(0x18)(None)
	class FText                                  CallFunc_Conv_StringToText_ReturnValue_1;          // 0x18(0x18)(None)
};

// 0x4 (0x4 - 0x0)
// Function Lobby_PlayerList_Item.Lobby_PlayerList_Item_C.ExecuteUbergraph_Lobby_PlayerList_Item
struct ULobby_PlayerList_Item_C_ExecuteUbergraph_Lobby_PlayerList_Item_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}



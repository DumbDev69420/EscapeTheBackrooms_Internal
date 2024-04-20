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
// Function BasePS.BasePS_C.Load_Player_Headset
struct ABasePS_C_Load_Player_Headset_Params
{
public:
	bool                                         CallFunc_IsHeadMountedDisplayEnabled_ReturnValue;  // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x78 (0x78 - 0x0)
// Function BasePS.BasePS_C.Load_Player_UserProfile
struct ABasePS_C_Load_Player_UserProfile_Params
{
public:
	class FString                                CallFunc_GetPlayerName_ReturnValue;                // 0x0(0x10)(ZeroConstructor, HasGetValueTypeHash)
	struct FS_UserProfile                        K2Node_MakeStruct_S_UserProfile;                   // 0x10(0x18)(ZeroConstructor, ContainsInstancedReference, HasGetValueTypeHash)
	struct FBPUniqueNetId                        CallFunc_GetUniqueNetIDFromPlayerState_UniqueNetId; // 0x28(0x20)(None)
	enum class EBlueprintAsyncResultSwitch       CallFunc_GetSteamFriendAvatar_Result;              // 0x48(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1EE5[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTexture2D*                            CallFunc_GetSteamFriendAvatar_ReturnValue;         // 0x50(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x58(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1EE6[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_UserProfile                        K2Node_MakeStruct_S_UserProfile_1;                 // 0x60(0x18)(ZeroConstructor, ContainsInstancedReference, HasGetValueTypeHash)
};

// 0x15 (0x15 - 0x0)
// Function BasePS.BasePS_C.Load_Player_ConnectionInfo
struct ABasePS_C_Load_Player_ConnectionInfo_Params
{
public:
	bool                                         Client_ReadyStatus;                                // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1EE7[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_PlayerConnectionInfo               K2Node_MakeStruct_S_PlayerConnectionInfo;          // 0x4(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FS_PlayerConnectionInfo               K2Node_MakeStruct_S_PlayerConnectionInfo_1;        // 0xC(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsServer_ReturnValue;                     // 0x14(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x18 (0x18 - 0x0)
// Function BasePS.BasePS_C.SR_Update_Player_UserProfile
struct ABasePS_C_SR_Update_Player_UserProfile_Params
{
public:
	struct FS_UserProfile                        Player_UserProfile;                                // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, ContainsInstancedReference, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function BasePS.BasePS_C.SR_Update_Player_ConnectionInfo
struct ABasePS_C_SR_Update_Player_ConnectionInfo_Params
{
public:
	struct FS_PlayerConnectionInfo               Player_ConnectionInfo;                             // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function BasePS.BasePS_C.SR_LoadHeadset
struct ABasePS_C_SR_LoadHeadset_Params
{
public:
	enum class E_HeadsetType                     HeadsetType;                                       // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1EE8[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        PlayerId;                                          // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xB8 (0xB8 - 0x0)
// Function BasePS.BasePS_C.ExecuteUbergraph_BasePS
struct ABasePS_C_ExecuteUbergraph_BasePS_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1EE9[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FBPUniqueNetId                        CallFunc_GetUniqueNetIDFromPlayerState_UniqueNetId; // 0x8(0x20)(None)
	class FString                                CallFunc_UniqueNetIdToString_String;               // 0x28(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Concat_StrStr_ReturnValue;                // 0x38(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_1;              // 0x48(0x10)(ZeroConstructor, HasGetValueTypeHash)
	struct FS_UserProfile                        K2Node_CustomEvent_Player_UserProfile;             // 0x58(0x18)(ZeroConstructor, ContainsInstancedReference, HasGetValueTypeHash)
	struct FS_PlayerConnectionInfo               K2Node_CustomEvent_Player_ConnectionInfo;          // 0x70(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class E_HeadsetType                     K2Node_CustomEvent_HeadsetType;                    // 0x78(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1EEA[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        K2Node_CustomEvent_PlayerId;                       // 0x7C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UGameInstance*                         CallFunc_GetGameInstance_ReturnValue;              // 0x80(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                CallFunc_GetEnumeratorUserFriendlyName_ReturnValue; // 0x88(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class UBP_MyGameInstance_C*                  K2Node_DynamicCast_AsBP_My_Game_Instance;          // 0x98(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0xA0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1EEB[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_Concat_StrStr_ReturnValue_2;              // 0xA8(0x10)(ZeroConstructor, HasGetValueTypeHash)
};

}
}



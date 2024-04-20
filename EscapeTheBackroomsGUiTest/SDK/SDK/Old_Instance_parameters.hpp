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
// Function Old_Instance.Old_Instance_C.ToggleVoiceIngame
struct UOld_Instance_C_ToggleVoiceIngame_Params
{
public:
	bool                                         IsActivated;                                       // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x28 (0x28 - 0x0)
// Function Old_Instance.Old_Instance_C.CheckCodeUnique
struct UOld_Instance_C_CheckCodeUnique_Params
{
public:
	struct FSessionsSearchSetting                Code;                                              // 0x0(0x28)(BlueprintVisible, BlueprintReadOnly, Parm)
};

// 0x58 (0x58 - 0x0)
// Function Old_Instance.Old_Instance_C.GenerateCode
struct UOld_Instance_C_GenerateCode_Params
{
public:
	TArray<class FString>                        CharacterSet;                                      // 0x0(0x10)(Edit, BlueprintVisible)
	int32                                        Temp_int_Variable;                                 // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_LessEqual_IntInt_ReturnValue;             // 0x14(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_24D8[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_24D9[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class FString>                        K2Node_MakeArray_Array;                            // 0x20(0x10)(ReferenceParm)
	int32                                        CallFunc_RandomInteger_ReturnValue;                // 0x30(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_24DA[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_Array_Get_Item;                           // 0x38(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Concat_StrStr_ReturnValue;                // 0x48(0x10)(ZeroConstructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function Old_Instance.Old_Instance_C.OnFailure_B6FBFD1148DA3110AD7A2090ADB4971D
struct UOld_Instance_C_OnFailure_B6FBFD1148DA3110AD7A2090ADB4971D_Params
{
public:
	TArray<struct FBlueprintSessionResult>       Results;                                           // 0x0(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// 0x10 (0x10 - 0x0)
// Function Old_Instance.Old_Instance_C.OnSuccess_B6FBFD1148DA3110AD7A2090ADB4971D
struct UOld_Instance_C_OnSuccess_B6FBFD1148DA3110AD7A2090ADB4971D_Params
{
public:
	TArray<struct FBlueprintSessionResult>       Results;                                           // 0x0(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// 0x10 (0x10 - 0x0)
// Function Old_Instance.Old_Instance_C.OnFailure_887915044268FE8E01B793860BA0535C
struct UOld_Instance_C_OnFailure_887915044268FE8E01B793860BA0535C_Params
{
public:
	TArray<struct FBlueprintSessionResult>       Results;                                           // 0x0(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// 0x10 (0x10 - 0x0)
// Function Old_Instance.Old_Instance_C.OnSuccess_887915044268FE8E01B793860BA0535C
struct UOld_Instance_C_OnSuccess_887915044268FE8E01B793860BA0535C_Params
{
public:
	TArray<struct FBlueprintSessionResult>       Results;                                           // 0x0(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// 0x10 (0x10 - 0x0)
// Function Old_Instance.Old_Instance_C.OnFailure_ED213154495FF5E71DED67A697B987EA
struct UOld_Instance_C_OnFailure_ED213154495FF5E71DED67A697B987EA_Params
{
public:
	class FName                                  WrittenAchievementName;                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        WrittenProgress;                                   // 0x8(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        WrittenUserTag;                                    // 0xC(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function Old_Instance.Old_Instance_C.OnSuccess_ED213154495FF5E71DED67A697B987EA
struct UOld_Instance_C_OnSuccess_ED213154495FF5E71DED67A697B987EA_Params
{
public:
	class FName                                  WrittenAchievementName;                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        WrittenProgress;                                   // 0x8(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        WrittenUserTag;                                    // 0xC(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x40 (0x40 - 0x0)
// Function Old_Instance.Old_Instance_C.CreateServer
struct UOld_Instance_C_CreateServer_Params
{
public:
	class APlayerController*                     PlayerController;                                  // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWidget*                               WidgetRef;                                         // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWidget*                               ParentRef;                                         // 0x10(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  LevelName;                                         // 0x18(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        MaxPlayer;                                         // 0x20(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsPrivate;                                         // 0x24(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_24DB[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  ServerName;                                        // 0x28(0x18)(BlueprintVisible, BlueprintReadOnly, Parm)
};

// 0x20 (0x20 - 0x0)
// Function Old_Instance.Old_Instance_C.JoinServerCode
struct UOld_Instance_C_JoinServerCode_Params
{
public:
	class FString                                Code;                                              // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	class APlayerController*                     PlayerController;                                  // 0x10(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWidget*                               ParentRef;                                         // 0x18(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x20 (0x20 - 0x0)
// Function Old_Instance.Old_Instance_C.ShowLoadingScreen
struct UOld_Instance_C_ShowLoadingScreen_Params
{
public:
	class APlayerController*                     PlayerController;                                  // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  Message;                                           // 0x8(0x18)(BlueprintVisible, BlueprintReadOnly, Parm)
};

// 0x119 (0x119 - 0x0)
// Function Old_Instance.Old_Instance_C.JoinServerSession
struct UOld_Instance_C_JoinServerSession_Params
{
public:
	struct FBlueprintSessionResult               Session;                                           // 0x0(0x108)(BlueprintVisible, BlueprintReadOnly, Parm)
	class APlayerController*                     PlayerController;                                  // 0x108(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWidget*                               ParentRef;                                         // 0x110(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ShowLoadingScreen;                                 // 0x118(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x10 (0x10 - 0x0)
// Function Old_Instance.Old_Instance_C.ResetAfterErrorFocus
struct UOld_Instance_C_ResetAfterErrorFocus_Params
{
public:
	class APlayerController*                     PlayerController;                                  // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWidget*                               Widget;                                            // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x130 (0x130 - 0x0)
// Function Old_Instance.Old_Instance_C.OnSessionInviteAccepted
struct UOld_Instance_C_OnSessionInviteAccepted_Params
{
public:
	int32                                        LocalPlayerNum;                                    // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_24DC[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FBPUniqueNetId                        PersonInvited;                                     // 0x8(0x20)(BlueprintVisible, BlueprintReadOnly, Parm)
	struct FBlueprintSessionResult               SessionToJoin;                                     // 0x28(0x108)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// 0x21 (0x21 - 0x0)
// Function Old_Instance.Old_Instance_C.OnPlayerTalkingStateChanged
struct UOld_Instance_C_OnPlayerTalkingStateChanged_Params
{
public:
	struct FBPUniqueNetId                        PlayerId;                                          // 0x0(0x20)(BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                         bIsTalking;                                        // 0x20(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function Old_Instance.Old_Instance_C.UnlockAchievement
struct UOld_Instance_C_UnlockAchievement_Params
{
public:
	class FName                                  AchievementName;                                   // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x802 (0x802 - 0x0)
// Function Old_Instance.Old_Instance_C.ExecuteUbergraph_Old_Instance
struct UOld_Instance_C_ExecuteUbergraph_Old_Instance_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_24DD[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APlayerController*                     CallFunc_GetPlayerController_ReturnValue;          // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FBPUniqueNetId                        CallFunc_GetUniqueNetID_UniqueNetId;               // 0x10(0x20)(None)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x30(0x10)(ZeroConstructor, NoDestructor)
	class FName                                  K2Node_CustomEvent_WrittenAchievementName_1;       // 0x40(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_CustomEvent_WrittenProgress_1;              // 0x48(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        K2Node_CustomEvent_WrittenUserTag_1;               // 0x4C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_1;            // 0x50(0x10)(ZeroConstructor, NoDestructor)
	class FName                                  K2Node_CustomEvent_WrittenAchievementName;         // 0x60(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_CustomEvent_WrittenProgress;                // 0x68(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        K2Node_CustomEvent_WrittenUserTag;                 // 0x6C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_2;            // 0x70(0x10)(ZeroConstructor, NoDestructor)
	int32                                        Temp_int_Variable;                                 // 0x80(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Temp_float_Variable;                               // 0x84(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  Temp_name_Variable;                                // 0x88(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                     K2Node_CustomEvent_PlayerController_4;             // 0x90(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWidget*                               K2Node_CustomEvent_WidgetRef;                      // 0x98(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWidget*                               K2Node_CustomEvent_ParentRef_2;                    // 0xA0(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  K2Node_CustomEvent_LevelName;                      // 0xA8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        K2Node_CustomEvent_MaxPlayer;                      // 0xB0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_CustomEvent_IsPrivate;                      // 0xB4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_24DE[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  K2Node_CustomEvent_ServerName;                     // 0xB8(0x18)(None)
	class FString                                CallFunc_Conv_TextToString_ReturnValue;            // 0xD0(0x10)(ZeroConstructor, HasGetValueTypeHash)
	struct FSessionPropertyKeyPair               CallFunc_MakeLiteralSessionPropertyBool_ReturnValue; // 0xE0(0x20)(None)
	struct FSessionPropertyKeyPair               CallFunc_MakeLiteralSessionPropertyString_ReturnValue; // 0x100(0x20)(None)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x120(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_24DF[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                K2Node_CustomEvent_Code;                           // 0x128(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class APlayerController*                     K2Node_CustomEvent_PlayerController_3;             // 0x138(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWidget*                               K2Node_CustomEvent_ParentRef_1;                    // 0x140(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_3;            // 0x148(0x10)(ZeroConstructor, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x158(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x159(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_24E0[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSessionPropertyKeyPair               CallFunc_MakeLiteralSessionPropertyString_ReturnValue_1; // 0x160(0x20)(None)
	struct FSessionsSearchSetting                CallFunc_MakeLiteralSessionSearchProperty_ReturnValue; // 0x180(0x28)(None)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_4;            // 0x1A8(0x10)(ZeroConstructor, NoDestructor)
	class APlayerController*                     K2Node_CustomEvent_PlayerController_2;             // 0x1B8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  K2Node_CustomEvent_Message;                        // 0x1C0(0x18)(None)
	class UW_LoadingScreen_C*                    CallFunc_Create_ReturnValue;                       // 0x1D8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_2;                    // 0x1E0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_24E1[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_5;            // 0x1E4(0x10)(ZeroConstructor, NoDestructor)
	uint8                                        Pad_24E2[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FBlueprintSessionResult>       Temp_struct_Variable;                              // 0x1F8(0x10)(ReferenceParm)
	struct FBlueprintSessionResult               CallFunc_Array_Get_Item;                           // 0x208(0x108)(None)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x310(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_24E3[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FBlueprintSessionResult               K2Node_CustomEvent_Session;                        // 0x318(0x108)(None)
	class APlayerController*                     K2Node_CustomEvent_PlayerController_1;             // 0x420(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWidget*                               K2Node_CustomEvent_ParentRef;                      // 0x428(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_CustomEvent_ShowLoadingScreen;              // 0x430(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_GreaterEqual_IntInt_ReturnValue;          // 0x431(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_24E4[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UJoinSessionCallbackProxy*             CallFunc_JoinSession_ReturnValue;                  // 0x438(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_3;                    // 0x440(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_24E5[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FBlueprintSessionResult>       K2Node_CustomEvent_Results;                        // 0x448(0x10)(ConstParm, ReferenceParm)
	TArray<struct FBlueprintSessionResult>       K2Node_CustomEvent_Results_1;                      // 0x458(0x10)(ConstParm, ReferenceParm)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_6;            // 0x468(0x10)(ZeroConstructor, NoDestructor)
	class APlayerController*                     K2Node_CustomEvent_PlayerController;               // 0x478(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWidget*                               K2Node_CustomEvent_Widget;                         // 0x480(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UW_MainMenu_C*                         K2Node_DynamicCast_AsW_Main_Menu;                  // 0x488(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x490(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue_4;                    // 0x491(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_24E6[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_7;            // 0x494(0x10)(ZeroConstructor, NoDestructor)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_8;            // 0x4A4(0x10)(ZeroConstructor, NoDestructor)
	uint8                                        Pad_24E7[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FBlueprintSessionResult>       Temp_struct_Variable_1;                            // 0x4B8(0x10)(ReferenceParm)
	int32                                        CallFunc_Array_Length_ReturnValue_1;               // 0x4C8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x4CC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_24E8[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FBlueprintSessionResult>       K2Node_CustomEvent_Results_2;                      // 0x4D0(0x10)(ConstParm, ReferenceParm)
	struct FSessionPropertyKeyPair               CallFunc_MakeLiteralSessionPropertyString_ReturnValue_2; // 0x4E0(0x20)(None)
	struct FSessionsSearchSetting                CallFunc_MakeLiteralSessionSearchProperty_ReturnValue_1; // 0x500(0x28)(None)
	TArray<struct FSessionsSearchSetting>        K2Node_MakeArray_Array;                            // 0x528(0x10)(ConstParm, ReferenceParm)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_9;            // 0x538(0x10)(ZeroConstructor, NoDestructor)
	class UFindSessionsCallbackProxyAdvanced*    CallFunc_FindSessionsAdvanced_ReturnValue;         // 0x548(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_10;           // 0x550(0x10)(ZeroConstructor, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue_5;                    // 0x560(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_24E9[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FBlueprintSessionResult>       K2Node_CustomEvent_Results_3;                      // 0x568(0x10)(ConstParm, ReferenceParm)
	struct FSessionPropertyKeyPair               CallFunc_MakeLiteralSessionPropertyBool_ReturnValue_1; // 0x578(0x20)(None)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_11;           // 0x598(0x10)(ZeroConstructor, NoDestructor)
	TArray<struct FSessionPropertyKeyPair>       K2Node_MakeArray_Array_1;                          // 0x5A8(0x10)(ConstParm, ReferenceParm)
	class UCreateSessionCallbackProxyAdvanced*   CallFunc_CreateAdvancedSession_ReturnValue;        // 0x5B8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSessionPropertyKeyPair               CallFunc_MakeLiteralSessionPropertyBool_ReturnValue_2; // 0x5C0(0x20)(None)
	struct FSessionsSearchSetting                CallFunc_MakeLiteralSessionSearchProperty_ReturnValue_2; // 0x5E0(0x28)(None)
	bool                                         CallFunc_IsValid_ReturnValue_6;                    // 0x608(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_24EA[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FSessionsSearchSetting>        K2Node_MakeArray_Array_2;                          // 0x610(0x10)(ConstParm, ReferenceParm)
	class UFindSessionsCallbackProxyAdvanced*    CallFunc_FindSessionsAdvanced_ReturnValue_1;       // 0x620(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_7;                    // 0x628(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_24EB[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        K2Node_Event_LocalPlayerNum;                       // 0x62C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FBPUniqueNetId                        K2Node_Event_PersonInvited;                        // 0x630(0x20)(None)
	struct FBlueprintSessionResult               K2Node_Event_SessionToJoin;                        // 0x650(0x108)(ConstParm)
	class APlayerController*                     CallFunc_GetPlayerController_ReturnValue_1;        // 0x758(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UDestroySessionCallbackProxy*          CallFunc_DestroySession_ReturnValue;               // 0x760(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_12;           // 0x768(0x10)(ZeroConstructor, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue_8;                    // 0x778(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_24EC[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UJoinSessionCallbackProxy*             CallFunc_JoinSession_ReturnValue_1;                // 0x780(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_9;                    // 0x788(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_24ED[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FBPUniqueNetId                        K2Node_Event_PlayerId;                             // 0x790(0x20)(None)
	bool                                         K2Node_Event_bIsTalking;                           // 0x7B0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_24EE[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_13;           // 0x7B4(0x10)(ZeroConstructor, NoDestructor)
	bool                                         CallFunc_EqualEqual_UNetIDUnetID_ReturnValue;      // 0x7C4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_24EF[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  K2Node_CustomEvent_AchievementName;                // 0x7C8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                     CallFunc_GetPlayerController_ReturnValue_2;        // 0x7D0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                     CallFunc_GetPlayerController_ReturnValue_3;        // 0x7D8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAchievementWriteCallbackProxy*        CallFunc_WriteAchievementProgress_ReturnValue;     // 0x7E0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AMP_PlayerController_C*                K2Node_DynamicCast_AsMP_Player_Controller;         // 0x7E8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0x7F0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue_10;                   // 0x7F1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_24F0[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ALobby_PlayerController_C*             K2Node_DynamicCast_AsLobby_Player_Controller;      // 0x7F8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_2;                     // 0x800(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue_11;                   // 0x801(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

}
}



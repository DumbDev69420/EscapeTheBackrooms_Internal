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

// 0x11 (0x11 - 0x0)
// Function WB_SettingsPanel_Theme2.WB_SettingsPanel_Theme2_C.interpret_ShowEventContent
struct UWB_SettingsPanel_Theme2_C_Interpret_ShowEventContent_Params
{
public:
	class FString                                Option;                                            // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchString_CmpSuccess;                    // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x11 (0x11 - 0x0)
// Function WB_SettingsPanel_Theme2.WB_SettingsPanel_Theme2_C.interpret_CameraShake
struct UWB_SettingsPanel_Theme2_C_Interpret_CameraShake_Params
{
public:
	class FString                                Option;                                            // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchString_CmpSuccess;                    // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x40 (0x40 - 0x0)
// Function WB_SettingsPanel_Theme2.WB_SettingsPanel_Theme2_C.interpret_Gamma
struct UWB_SettingsPanel_Theme2_C_Interpret_Gamma_Params
{
public:
	float                                        Gamma;                                             // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_272E[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                MotionBlur_;                                       // 0x8(0x10)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Conv_FloatToString_ReturnValue;           // 0x18(0x10)(ZeroConstructor, HasGetValueTypeHash)
	bool                                         CallFunc_NearlyEqual_FloatFloat_ReturnValue;       // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_272F[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_Concat_StrStr_ReturnValue;                // 0x30(0x10)(ZeroConstructor, HasGetValueTypeHash)
};

// 0x11 (0x11 - 0x0)
// Function WB_SettingsPanel_Theme2.WB_SettingsPanel_Theme2_C.interpret_ShowGore
struct UWB_SettingsPanel_Theme2_C_Interpret_ShowGore_Params
{
public:
	class FString                                Option;                                            // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchString_CmpSuccess;                    // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x11 (0x11 - 0x0)
// Function WB_SettingsPanel_Theme2.WB_SettingsPanel_Theme2_C.ChangeAudioCaptureDevice
struct UWB_SettingsPanel_Theme2_C_ChangeAudioCaptureDevice_Params
{
public:
	class FString                                NewDevice;                                         // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	bool                                         bSave;                                             // 0x10(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x11 (0x11 - 0x0)
// Function WB_SettingsPanel_Theme2.WB_SettingsPanel_Theme2_C.interpret_SmoothRotation
struct UWB_SettingsPanel_Theme2_C_Interpret_SmoothRotation_Params
{
public:
	class FString                                Option;                                            // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchString_CmpSuccess;                    // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x11 (0x11 - 0x0)
// Function WB_SettingsPanel_Theme2.WB_SettingsPanel_Theme2_C.interpret_PushToTalk
struct UWB_SettingsPanel_Theme2_C_Interpret_PushToTalk_Params
{
public:
	class FString                                Option;                                            // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchString_CmpSuccess;                    // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1F9 (0x1F9 - 0x0)
// Function WB_SettingsPanel_Theme2.WB_SettingsPanel_Theme2_C.OnKeyDown
struct UWB_SettingsPanel_Theme2_C_OnKeyDown_Params
{
public:
	struct FGeometry                             MyGeometry;                                        // 0x0(0x38)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FKeyEvent                             InKeyEvent;                                        // 0x38(0x38)(BlueprintVisible, BlueprintReadOnly, Parm)
	struct FEventReply                           ReturnValue;                                       // 0x70(0xB8)(Parm, OutParm, ReturnParm)
	struct FKey                                  CallFunc_GetKey_ReturnValue;                       // 0x128(0x18)(HasGetValueTypeHash)
	struct FEventReply                           CallFunc_Handled_ReturnValue;                      // 0x140(0xB8)(None)
	bool                                         CallFunc_EqualEqual_KeyKey_ReturnValue;            // 0x1F8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x10 (0x10 - 0x0)
// Function WB_SettingsPanel_Theme2.WB_SettingsPanel_Theme2_C.SetBooleanOption
struct UWB_SettingsPanel_Theme2_C_SetBooleanOption_Params
{
public:
	bool                                         IsEnabled;                                         // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2730[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UWB_OptionSwitcher_Theme2_C*           Dropdown;                                          // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x11 (0x11 - 0x0)
// Function WB_SettingsPanel_Theme2.WB_SettingsPanel_Theme2_C.interpret_InvertMouse
struct UWB_SettingsPanel_Theme2_C_Interpret_InvertMouse_Params
{
public:
	class FString                                Option;                                            // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchString_CmpSuccess;                    // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x11 (0x11 - 0x0)
// Function WB_SettingsPanel_Theme2.WB_SettingsPanel_Theme2_C.interpret_ShowBody
struct UWB_SettingsPanel_Theme2_C_Interpret_ShowBody_Params
{
public:
	class FString                                Option;                                            // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchString_CmpSuccess;                    // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x21 (0x21 - 0x0)
// Function WB_SettingsPanel_Theme2.WB_SettingsPanel_Theme2_C.interpret_VHSEffect
struct UWB_SettingsPanel_Theme2_C_Interpret_VHSEffect_Params
{
public:
	class FString                                Option;                                            // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	class FString                                Command;                                           // 0x10(0x10)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchString_CmpSuccess;                    // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x31 (0x31 - 0x0)
// Function WB_SettingsPanel_Theme2.WB_SettingsPanel_Theme2_C.CheckWaterSettings
struct UWB_SettingsPanel_Theme2_C_CheckWaterSettings_Params
{
public:
	class AGameModeBase*                         CallFunc_GetGameMode_ReturnValue;                  // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsStandalone_ReturnValue;                 // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2731[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AMP_PoolRooms_C*                       K2Node_DynamicCast_AsMP_Pool_Rooms;                // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2732[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_GetCurrentLevelName_ReturnValue;          // 0x20(0x10)(ZeroConstructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_StrStr_ReturnValue;            // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x38 (0x38 - 0x0)
// Function WB_SettingsPanel_Theme2.WB_SettingsPanel_Theme2_C.interpret_MotionBlur
struct UWB_SettingsPanel_Theme2_C_Interpret_MotionBlur_Params
{
public:
	class FString                                Option;                                            // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	class UGameUserSettings*                     GameUserSettings;                                  // 0x10(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                MotionBlur_;                                       // 0x18(0x10)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchString_CmpSuccess;                    // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2733[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UGameUserSettings*                     CallFunc_GetGameUserSettings_ReturnValue;          // 0x30(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xC (0xC - 0x0)
// Function WB_SettingsPanel_Theme2.WB_SettingsPanel_Theme2_C.Hide
struct UWB_SettingsPanel_Theme2_C_Hide_Params
{
public:
	class ABP_MenuActor_C*                       CallFunc_GetActorOfClass_ReturnValue;              // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsHeadMountedDisplayEnabled_ReturnValue;  // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  CallFunc_GetVisibility_ReturnValue;                // 0xA(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0xB(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x32 (0x32 - 0x0)
// Function WB_SettingsPanel_Theme2.WB_SettingsPanel_Theme2_C.Save_ControlsSettings
struct UWB_SettingsPanel_Theme2_C_Save_ControlsSettings_Params
{
public:
	class UBP_SG_GameSettings_C*                 SaveGameObject;                                    // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UBP_SG_GameSettings_C*                 CallFunc_LoadSettings_SaveGame;                    // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_FClamp_ReturnValue;                       // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2734[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ACharacter*                            CallFunc_GetPlayerCharacter_ReturnValue;           // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2735[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ABPCharacter_Demo_C*                   K2Node_DynamicCast_AsBPCharacter_Demo;             // 0x28(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_SaveGameToSlot_ReturnValue;               // 0x31(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x31 (0x31 - 0x0)
// Function WB_SettingsPanel_Theme2.WB_SettingsPanel_Theme2_C.Save_AudioSettings
struct UWB_SettingsPanel_Theme2_C_Save_AudioSettings_Params
{
public:
	struct FS_AudioSettings                      S_GameSettings;                                    // 0x0(0x1C)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2736[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UBP_SG_GameSettings_C*                 SaveGameObject;                                    // 0x20(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UBP_SG_GameSettings_C*                 CallFunc_LoadSettings_SaveGame;                    // 0x28(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_SaveGameToSlot_ReturnValue;               // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x28 (0x28 - 0x0)
// Function WB_SettingsPanel_Theme2.WB_SettingsPanel_Theme2_C.interpret_AudioQuality
struct UWB_SettingsPanel_Theme2_C_Interpret_AudioQuality_Params
{
public:
	class FString                                Option;                                            // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	class UGameUserSettings*                     GameUserSettings;                                  // 0x10(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Quality;                                           // 0x18(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchString_CmpSuccess;                    // 0x1C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2737[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UGameUserSettings*                     CallFunc_GetGameUserSettings_ReturnValue;          // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xA (0xA - 0x0)
// Function WB_SettingsPanel_Theme2.WB_SettingsPanel_Theme2_C.Get_HDR
struct UWB_SettingsPanel_Theme2_C_Get_HDR_Params
{
public:
	class UGameUserSettings*                     GameUserSettings;                                  // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsHDREnabled_ReturnValue;                 // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_SupportsHDRDisplayOutput_ReturnValue;     // 0x9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x9 (0x9 - 0x0)
// Function WB_SettingsPanel_Theme2.WB_SettingsPanel_Theme2_C.Get_DynamicResolution
struct UWB_SettingsPanel_Theme2_C_Get_DynamicResolution_Params
{
public:
	class UGameUserSettings*                     GameUserSettings;                                  // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsDynamicResolutionEnabled_ReturnValue;   // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x20 (0x20 - 0x0)
// Function WB_SettingsPanel_Theme2.WB_SettingsPanel_Theme2_C.Get_Shading_Quality
struct UWB_SettingsPanel_Theme2_C_Get_Shading_Quality_Params
{
public:
	class UGameUserSettings*                     GameUserSettings;                                  // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_GetShadingQuality_ReturnValue;            // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2738[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_Interpret_QualityINT_Quality;             // 0x10(0x10)(ZeroConstructor, HasGetValueTypeHash)
};

// 0x20 (0x20 - 0x0)
// Function WB_SettingsPanel_Theme2.WB_SettingsPanel_Theme2_C.Get_Foliage_Quality
struct UWB_SettingsPanel_Theme2_C_Get_Foliage_Quality_Params
{
public:
	class UGameUserSettings*                     GameUserSettings;                                  // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_GetFoliageQuality_ReturnValue;            // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2739[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_Interpret_QualityINT_Quality;             // 0x10(0x10)(ZeroConstructor, HasGetValueTypeHash)
};

// 0x20 (0x20 - 0x0)
// Function WB_SettingsPanel_Theme2.WB_SettingsPanel_Theme2_C.Get_PostProcessing_Quality
struct UWB_SettingsPanel_Theme2_C_Get_PostProcessing_Quality_Params
{
public:
	class UGameUserSettings*                     GameUserSettings;                                  // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_GetPostProcessingQuality_ReturnValue;     // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_273A[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_Interpret_QualityINT_Quality;             // 0x10(0x10)(ZeroConstructor, HasGetValueTypeHash)
};

// 0x20 (0x20 - 0x0)
// Function WB_SettingsPanel_Theme2.WB_SettingsPanel_Theme2_C.Get_VisualEffects_Quality
struct UWB_SettingsPanel_Theme2_C_Get_VisualEffects_Quality_Params
{
public:
	class UGameUserSettings*                     GameUserSettings;                                  // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_GetVisualEffectQuality_ReturnValue;       // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_273B[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_Interpret_QualityINT_Quality;             // 0x10(0x10)(ZeroConstructor, HasGetValueTypeHash)
};

// 0x20 (0x20 - 0x0)
// Function WB_SettingsPanel_Theme2.WB_SettingsPanel_Theme2_C.Get_Texture_Quality
struct UWB_SettingsPanel_Theme2_C_Get_Texture_Quality_Params
{
public:
	class UGameUserSettings*                     GameUserSettings;                                  // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_GetTextureQuality_ReturnValue;            // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_273C[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_Interpret_QualityINT_Quality;             // 0x10(0x10)(ZeroConstructor, HasGetValueTypeHash)
};

// 0x20 (0x20 - 0x0)
// Function WB_SettingsPanel_Theme2.WB_SettingsPanel_Theme2_C.Get_AntiAliasing_Quality
struct UWB_SettingsPanel_Theme2_C_Get_AntiAliasing_Quality_Params
{
public:
	class UGameUserSettings*                     GameUserSettings;                                  // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_GetAntiAliasingQuality_ReturnValue;       // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_273D[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_Interpret_QualityINT_Quality;             // 0x10(0x10)(ZeroConstructor, HasGetValueTypeHash)
};

// 0x20 (0x20 - 0x0)
// Function WB_SettingsPanel_Theme2.WB_SettingsPanel_Theme2_C.Get_Shadow_Quality
struct UWB_SettingsPanel_Theme2_C_Get_Shadow_Quality_Params
{
public:
	class UGameUserSettings*                     GameUserSettings;                                  // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_GetShadowQuality_ReturnValue;             // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_273E[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_Interpret_QualityINT_Quality;             // 0x10(0x10)(ZeroConstructor, HasGetValueTypeHash)
};

// 0x20 (0x20 - 0x0)
// Function WB_SettingsPanel_Theme2.WB_SettingsPanel_Theme2_C.Get_ViewDistance_Quality
struct UWB_SettingsPanel_Theme2_C_Get_ViewDistance_Quality_Params
{
public:
	class UGameUserSettings*                     GameUserSettings;                                  // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_GetViewDistanceQuality_ReturnValue;       // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_273F[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_Interpret_QualityINT_Quality;             // 0x10(0x10)(ZeroConstructor, HasGetValueTypeHash)
};

// 0x21 (0x21 - 0x0)
// Function WB_SettingsPanel_Theme2.WB_SettingsPanel_Theme2_C.Get_OverallScalability_Quality
struct UWB_SettingsPanel_Theme2_C_Get_OverallScalability_Quality_Params
{
public:
	class UGameUserSettings*                     GameUserSettings;                                  // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_GetOverallScalabilityLevel_ReturnValue;   // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2740[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_Interpret_QualityINT_Quality;             // 0x10(0x10)(ZeroConstructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x10 (0x10 - 0x0)
// Function WB_SettingsPanel_Theme2.WB_SettingsPanel_Theme2_C.Adjust_AllQualityLevels
struct UWB_SettingsPanel_Theme2_C_Adjust_AllQualityLevels_Params
{
public:
	class FString                                SelectedOption;                                    // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// 0x9 (0x9 - 0x0)
// Function WB_SettingsPanel_Theme2.WB_SettingsPanel_Theme2_C.Get_VSync
struct UWB_SettingsPanel_Theme2_C_Get_VSync_Params
{
public:
	class UGameUserSettings*                     GameUserSettings;                                  // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsVSyncEnabled_ReturnValue;               // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x21 (0x21 - 0x0)
// Function WB_SettingsPanel_Theme2.WB_SettingsPanel_Theme2_C.Get_FrameRateLimit
struct UWB_SettingsPanel_Theme2_C_Get_FrameRateLimit_Params
{
public:
	class UGameUserSettings*                     GameUserSettings;                                  // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_GetFrameRateLimit_ReturnValue;            // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_FFloor_ReturnValue;                       // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                CallFunc_Conv_IntToString_ReturnValue;             // 0x10(0x10)(ZeroConstructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_FloatFloat_ReturnValue;        // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x50 (0x50 - 0x0)
// Function WB_SettingsPanel_Theme2.WB_SettingsPanel_Theme2_C.Get_Resolution
struct UWB_SettingsPanel_Theme2_C_Get_Resolution_Params
{
public:
	class UGameUserSettings*                     GameUserSettings;                                  // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FIntPoint                             CallFunc_GetScreenResolution_ReturnValue;          // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                CallFunc_Conv_IntToString_ReturnValue;             // 0x10(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Conv_IntToString_ReturnValue_1;           // 0x20(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Concat_StrStr_ReturnValue;                // 0x30(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_1;              // 0x40(0x10)(ZeroConstructor, HasGetValueTypeHash)
};

// 0xA (0xA - 0x0)
// Function WB_SettingsPanel_Theme2.WB_SettingsPanel_Theme2_C.Get_WindowMode
struct UWB_SettingsPanel_Theme2_C_Get_WindowMode_Params
{
public:
	class UGameUserSettings*                     GameUserSettings;                                  // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EWindowMode                       CallFunc_GetFullscreenMode_ReturnValue;            // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x28 (0x28 - 0x0)
// Function WB_SettingsPanel_Theme2.WB_SettingsPanel_Theme2_C.interpret_HDR
struct UWB_SettingsPanel_Theme2_C_Interpret_HDR_Params
{
public:
	class FString                                Option;                                            // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	class UGameUserSettings*                     GameUserSettings;                                  // 0x10(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         HDR_;                                              // 0x18(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_SwitchString_CmpSuccess;                    // 0x19(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2741[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UGameUserSettings*                     CallFunc_GetGameUserSettings_ReturnValue;          // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x28 (0x28 - 0x0)
// Function WB_SettingsPanel_Theme2.WB_SettingsPanel_Theme2_C.interpret_DynamicResolution
struct UWB_SettingsPanel_Theme2_C_Interpret_DynamicResolution_Params
{
public:
	class FString                                Option;                                            // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	class UGameUserSettings*                     GameUserSettings;                                  // 0x10(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         DynamicResolution_;                                // 0x18(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_SwitchString_CmpSuccess;                    // 0x19(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2742[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UGameUserSettings*                     CallFunc_GetGameUserSettings_ReturnValue;          // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x30 (0x30 - 0x0)
// Function WB_SettingsPanel_Theme2.WB_SettingsPanel_Theme2_C.interpret_FrameRateLimit
struct UWB_SettingsPanel_Theme2_C_Interpret_FrameRateLimit_Params
{
public:
	class FString                                Option;                                            // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	class UGameUserSettings*                     GameUserSettings;                                  // 0x10(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        FrameRateLimit;                                    // 0x18(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_StriStri_ReturnValue;          // 0x1C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2743[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CallFunc_Conv_StringToFloat_ReturnValue;           // 0x20(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2744[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UGameUserSettings*                     CallFunc_GetGameUserSettings_ReturnValue;          // 0x28(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x28 (0x28 - 0x0)
// Function WB_SettingsPanel_Theme2.WB_SettingsPanel_Theme2_C.interpret_VSync
struct UWB_SettingsPanel_Theme2_C_Interpret_VSync_Params
{
public:
	class FString                                Option;                                            // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	class UGameUserSettings*                     GameUserSettings;                                  // 0x10(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         VSync_;                                            // 0x18(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_SwitchString_CmpSuccess;                    // 0x19(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2745[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UGameUserSettings*                     CallFunc_GetGameUserSettings_ReturnValue;          // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x60 (0x60 - 0x0)
// Function WB_SettingsPanel_Theme2.WB_SettingsPanel_Theme2_C.interpret_Resolution
struct UWB_SettingsPanel_Theme2_C_Interpret_Resolution_Params
{
public:
	class FString                                Option;                                            // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	class UGameUserSettings*                     GameUserSettings;                                  // 0x10(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FIntPoint                             Resolution;                                        // 0x18(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                CallFunc_Split_LeftS;                              // 0x20(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Split_RightS;                             // 0x30(0x10)(ZeroConstructor, HasGetValueTypeHash)
	bool                                         CallFunc_Split_ReturnValue;                        // 0x40(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2746[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Conv_StringToInt_ReturnValue;             // 0x44(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Conv_StringToInt_ReturnValue_1;           // 0x48(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FIntPoint                             K2Node_MakeStruct_IntPoint;                        // 0x4C(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2747[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UGameUserSettings*                     CallFunc_GetGameUserSettings_ReturnValue;          // 0x58(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x70 (0x70 - 0x0)
// Function WB_SettingsPanel_Theme2.WB_SettingsPanel_Theme2_C.interpret_WindowMode
struct UWB_SettingsPanel_Theme2_C_Interpret_WindowMode_Params
{
public:
	class FString                                Option;                                            // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	class UGameUserSettings*                     GameUserSettings;                                  // 0x10(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EWindowMode                       WindowMode;                                        // 0x18(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchString_CmpSuccess;                    // 0x19(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2748[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UGameUserSettings*                     CallFunc_GetGameUserSettings_ReturnValue;          // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FIntPoint                             CallFunc_GetDesktopResolution_ReturnValue;         // 0x28(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                CallFunc_Conv_IntToString_ReturnValue;             // 0x30(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Conv_IntToString_ReturnValue_1;           // 0x40(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Concat_StrStr_ReturnValue;                // 0x50(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_1;              // 0x60(0x10)(ZeroConstructor, HasGetValueTypeHash)
};

// 0x28 (0x28 - 0x0)
// Function WB_SettingsPanel_Theme2.WB_SettingsPanel_Theme2_C.interpret_GraphicQuality
struct UWB_SettingsPanel_Theme2_C_Interpret_GraphicQuality_Params
{
public:
	class FString                                Option;                                            // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	class UGameUserSettings*                     GameUserSettings;                                  // 0x10(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Quality;                                           // 0x18(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchString_CmpSuccess;                    // 0x1C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2749[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UGameUserSettings*                     CallFunc_GetGameUserSettings_ReturnValue;          // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x19 (0x19 - 0x0)
// Function WB_SettingsPanel_Theme2.WB_SettingsPanel_Theme2_C.Interpret_QualityINT
struct UWB_SettingsPanel_Theme2_C_Interpret_QualityINT_Params
{
public:
	int32                                        Selection;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_274A[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                Quality;                                           // 0x8(0x10)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchInteger_CmpSuccess;                   // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function WB_SettingsPanel_Theme2.WB_SettingsPanel_Theme2_C.Retrieve_VideoSettings
struct UWB_SettingsPanel_Theme2_C_Retrieve_VideoSettings_Params
{
public:
	class UGameUserSettings*                     GameUserSettings;                                  // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xC8 (0xC8 - 0x0)
// Function WB_SettingsPanel_Theme2.WB_SettingsPanel_Theme2_C.Retrieve_AudioSettings
struct UWB_SettingsPanel_Theme2_C_Retrieve_AudioSettings_Params
{
public:
	float                                        CallFunc_Conv_IntToFloat_ReturnValue;              // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_274B[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UGameUserSettings*                     CallFunc_interpret_MotionBlur_GameUserSettings;    // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                CallFunc_interpret_MotionBlur_MotionBlur_;         // 0x10(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class UGameUserSettings*                     CallFunc_interpret_MotionBlur_GameUserSettings_1;  // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                CallFunc_interpret_MotionBlur_MotionBlur__1;       // 0x28(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class UGameUserSettings*                     CallFunc_interpret_MotionBlur_GameUserSettings_2;  // 0x38(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                CallFunc_interpret_MotionBlur_MotionBlur__2;       // 0x40(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class UGameUserSettings*                     CallFunc_interpret_MotionBlur_GameUserSettings_3;  // 0x50(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                CallFunc_interpret_MotionBlur_MotionBlur__3;       // 0x58(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_GetEnumeratorUserFriendlyName_ReturnValue; // 0x68(0x10)(ZeroConstructor, HasGetValueTypeHash)
	float                                        CallFunc_Conv_IntToFloat_ReturnValue_1;            // 0x78(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_274C[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class USaveGame*                             CallFunc_LoadGameFromSlot_ReturnValue;             // 0x80(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBP_SG_GameSettings_C*                 K2Node_DynamicCast_AsBP_SG_Game_Settings;          // 0x88(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x90(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_DoesSaveGameExist_ReturnValue;            // 0x91(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_274D[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_interpret_Gamma_MotionBlur_;              // 0x98(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Conv_FloatToString_ReturnValue;           // 0xA8(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Concat_StrStr_ReturnValue;                // 0xB8(0x10)(ZeroConstructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function WB_SettingsPanel_Theme2.WB_SettingsPanel_Theme2_C.Retrieve_AllSettings
struct UWB_SettingsPanel_Theme2_C_Retrieve_AllSettings_Params
{
public:
	class UGameUserSettings*                     CallFunc_GetGameUserSettings_ReturnValue;          // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1C (0x1C - 0x0)
// Function WB_SettingsPanel_Theme2.WB_SettingsPanel_Theme2_C.Reset_AudioSettings
struct UWB_SettingsPanel_Theme2_C_Reset_AudioSettings_Params
{
public:
	struct FS_AudioSettings                      K2Node_MakeStruct_S_AudioSettings;                 // 0x0(0x1C)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1C48 (0x1C48 - 0x0)
// Function WB_SettingsPanel_Theme2.WB_SettingsPanel_Theme2_C.Switch_ActiveTab
struct UWB_SettingsPanel_Theme2_C_Switch_ActiveTab_Params
{
public:
	int32                                        ActiveIndex;                                       // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchInteger_CmpSuccess;                   // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_274E[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSlateBrush                           K2Node_MakeStruct_SlateBrush;                      // 0x8(0x88)(None)
	struct FSlateBrush                           K2Node_MakeStruct_SlateBrush_1;                    // 0x90(0x88)(None)
	struct FSlateBrush                           K2Node_MakeStruct_SlateBrush_2;                    // 0x118(0x88)(None)
	struct FSlateBrush                           K2Node_MakeStruct_SlateBrush_3;                    // 0x1A0(0x88)(None)
	struct FSlateBrush                           K2Node_MakeStruct_SlateBrush_4;                    // 0x228(0x88)(None)
	struct FSlateBrush                           K2Node_MakeStruct_SlateBrush_5;                    // 0x2B0(0x88)(None)
	struct FSlateBrush                           K2Node_MakeStruct_SlateBrush_6;                    // 0x338(0x88)(None)
	struct FSlateBrush                           K2Node_MakeStruct_SlateBrush_7;                    // 0x3C0(0x88)(None)
	struct FButtonStyle                          K2Node_MakeStruct_ButtonStyle;                     // 0x448(0x278)(None)
	struct FSlateBrush                           K2Node_MakeStruct_SlateBrush_8;                    // 0x6C0(0x88)(None)
	struct FSlateBrush                           K2Node_MakeStruct_SlateBrush_9;                    // 0x748(0x88)(None)
	struct FSlateBrush                           K2Node_MakeStruct_SlateBrush_10;                   // 0x7D0(0x88)(None)
	struct FSlateBrush                           K2Node_MakeStruct_SlateBrush_11;                   // 0x858(0x88)(None)
	struct FButtonStyle                          K2Node_MakeStruct_ButtonStyle_1;                   // 0x8E0(0x278)(None)
	struct FButtonStyle                          K2Node_MakeStruct_ButtonStyle_2;                   // 0xB58(0x278)(None)
	struct FSlateBrush                           K2Node_MakeStruct_SlateBrush_12;                   // 0xDD0(0x88)(None)
	struct FSlateBrush                           K2Node_MakeStruct_SlateBrush_13;                   // 0xE58(0x88)(None)
	struct FSlateBrush                           K2Node_MakeStruct_SlateBrush_14;                   // 0xEE0(0x88)(None)
	struct FButtonStyle                          K2Node_MakeStruct_ButtonStyle_3;                   // 0xF68(0x278)(None)
	struct FSlateBrush                           K2Node_MakeStruct_SlateBrush_15;                   // 0x11E0(0x88)(None)
	struct FButtonStyle                          K2Node_MakeStruct_ButtonStyle_4;                   // 0x1268(0x278)(None)
	struct FButtonStyle                          K2Node_MakeStruct_ButtonStyle_5;                   // 0x14E0(0x278)(None)
	struct FButtonStyle                          K2Node_MakeStruct_ButtonStyle_6;                   // 0x1758(0x278)(None)
	struct FButtonStyle                          K2Node_MakeStruct_ButtonStyle_7;                   // 0x19D0(0x278)(None)
};

// 0x10 (0x10 - 0x0)
// Function WB_SettingsPanel_Theme2.WB_SettingsPanel_Theme2_C.BndEvt__WB_SettingsPanel_WB_Dropdown_Quality_K2Node_ComponentBoundEvent_13_OnOptionSwitched__DelegateSignature
struct UWB_SettingsPanel_Theme2_C_BndEvt__WB_SettingsPanel_WB_Dropdown_Quality_K2Node_ComponentBoundEvent_13_OnOptionSwitched__DelegateSignature_Params
{
public:
	class FString                                SelectedOption;                                    // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function WB_SettingsPanel_Theme2.WB_SettingsPanel_Theme2_C.BndEvt__WB_SettingsPanel_WB_Dropdown_WindowMode_K2Node_ComponentBoundEvent_14_OnOptionSwitched__DelegateSignature
struct UWB_SettingsPanel_Theme2_C_BndEvt__WB_SettingsPanel_WB_Dropdown_WindowMode_K2Node_ComponentBoundEvent_14_OnOptionSwitched__DelegateSignature_Params
{
public:
	class FString                                SelectedOption;                                    // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function WB_SettingsPanel_Theme2.WB_SettingsPanel_Theme2_C.BndEvt__WB_SettingsPanel_WB_Dropdown_Resolution_K2Node_ComponentBoundEvent_15_OnOptionSwitched__DelegateSignature
struct UWB_SettingsPanel_Theme2_C_BndEvt__WB_SettingsPanel_WB_Dropdown_Resolution_K2Node_ComponentBoundEvent_15_OnOptionSwitched__DelegateSignature_Params
{
public:
	class FString                                SelectedOption;                                    // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function WB_SettingsPanel_Theme2.WB_SettingsPanel_Theme2_C.BndEvt__WB_SettingsPanel_WB_OptionSwitcher_OverallQuality_K2Node_ComponentBoundEvent_17_OnOptionSwitched__DelegateSignature
struct UWB_SettingsPanel_Theme2_C_BndEvt__WB_SettingsPanel_WB_OptionSwitcher_OverallQuality_K2Node_ComponentBoundEvent_17_OnOptionSwitched__DelegateSignature_Params
{
public:
	class FString                                SelectedOption;                                    // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function WB_SettingsPanel_Theme2.WB_SettingsPanel_Theme2_C.BndEvt__WB_SettingsPanel_WB_OptionSwitcher_ViewDistance_K2Node_ComponentBoundEvent_18_OnOptionSwitched__DelegateSignature
struct UWB_SettingsPanel_Theme2_C_BndEvt__WB_SettingsPanel_WB_OptionSwitcher_ViewDistance_K2Node_ComponentBoundEvent_18_OnOptionSwitched__DelegateSignature_Params
{
public:
	class FString                                SelectedOption;                                    // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function WB_SettingsPanel_Theme2.WB_SettingsPanel_Theme2_C.BndEvt__WB_SettingsPanel_WB_OptionSwitcher_ShadowQuality_K2Node_ComponentBoundEvent_19_OnOptionSwitched__DelegateSignature
struct UWB_SettingsPanel_Theme2_C_BndEvt__WB_SettingsPanel_WB_OptionSwitcher_ShadowQuality_K2Node_ComponentBoundEvent_19_OnOptionSwitched__DelegateSignature_Params
{
public:
	class FString                                SelectedOption;                                    // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function WB_SettingsPanel_Theme2.WB_SettingsPanel_Theme2_C.BndEvt__WB_SettingsPanel_WB_OptionSwitcher_Anti-Aliasing_Quality_K2Node_ComponentBoundEvent_20_OnOptionSwitched__DelegateSignature
struct UWB_SettingsPanel_Theme2_C_BndEvt__WB_SettingsPanel_WB_OptionSwitcher_AntiMinusAliasing_Quality_K2Node_ComponentBoundEvent_20_OnOptionSwitched__DelegateSignature_Params
{
public:
	class FString                                SelectedOption;                                    // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function WB_SettingsPanel_Theme2.WB_SettingsPanel_Theme2_C.BndEvt__WB_SettingsPanel_WB_OptionSwitcher_Texture_Quality_1_K2Node_ComponentBoundEvent_21_OnOptionSwitched__DelegateSignature
struct UWB_SettingsPanel_Theme2_C_BndEvt__WB_SettingsPanel_WB_OptionSwitcher_Texture_Quality_1_K2Node_ComponentBoundEvent_21_OnOptionSwitched__DelegateSignature_Params
{
public:
	class FString                                SelectedOption;                                    // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function WB_SettingsPanel_Theme2.WB_SettingsPanel_Theme2_C.BndEvt__WB_SettingsPanel_WB_OptionSwitcher_VisualEffects_Quality_K2Node_ComponentBoundEvent_22_OnOptionSwitched__DelegateSignature
struct UWB_SettingsPanel_Theme2_C_BndEvt__WB_SettingsPanel_WB_OptionSwitcher_VisualEffects_Quality_K2Node_ComponentBoundEvent_22_OnOptionSwitched__DelegateSignature_Params
{
public:
	class FString                                SelectedOption;                                    // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function WB_SettingsPanel_Theme2.WB_SettingsPanel_Theme2_C.BndEvt__WB_SettingsPanel_WB_OptionSwitcher_PostProcessing_Quality_K2Node_ComponentBoundEvent_23_OnOptionSwitched__DelegateSignature
struct UWB_SettingsPanel_Theme2_C_BndEvt__WB_SettingsPanel_WB_OptionSwitcher_PostProcessing_Quality_K2Node_ComponentBoundEvent_23_OnOptionSwitched__DelegateSignature_Params
{
public:
	class FString                                SelectedOption;                                    // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function WB_SettingsPanel_Theme2.WB_SettingsPanel_Theme2_C.BndEvt__WB_SettingsPanel_WB_OptionSwitcher_Foliage_Quality_K2Node_ComponentBoundEvent_24_OnOptionSwitched__DelegateSignature
struct UWB_SettingsPanel_Theme2_C_BndEvt__WB_SettingsPanel_WB_OptionSwitcher_Foliage_Quality_K2Node_ComponentBoundEvent_24_OnOptionSwitched__DelegateSignature_Params
{
public:
	class FString                                SelectedOption;                                    // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function WB_SettingsPanel_Theme2.WB_SettingsPanel_Theme2_C.BndEvt__WB_SettingsPanel_WB_OptionSwitcher_Shading_Quality_K2Node_ComponentBoundEvent_25_OnOptionSwitched__DelegateSignature
struct UWB_SettingsPanel_Theme2_C_BndEvt__WB_SettingsPanel_WB_OptionSwitcher_Shading_Quality_K2Node_ComponentBoundEvent_25_OnOptionSwitched__DelegateSignature_Params
{
public:
	class FString                                SelectedOption;                                    // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function WB_SettingsPanel_Theme2.WB_SettingsPanel_Theme2_C.BndEvt__WB_SettingsPanel_WB_Dropdown_DynamicResolution_K2Node_ComponentBoundEvent_26_OnOptionSwitched__DelegateSignature
struct UWB_SettingsPanel_Theme2_C_BndEvt__WB_SettingsPanel_WB_Dropdown_DynamicResolution_K2Node_ComponentBoundEvent_26_OnOptionSwitched__DelegateSignature_Params
{
public:
	class FString                                SelectedOption;                                    // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function WB_SettingsPanel_Theme2.WB_SettingsPanel_Theme2_C.BndEvt__WB_SettingsPanel_WB_Dropdown_HDR_K2Node_ComponentBoundEvent_27_OnOptionSwitched__DelegateSignature
struct UWB_SettingsPanel_Theme2_C_BndEvt__WB_SettingsPanel_WB_Dropdown_HDR_K2Node_ComponentBoundEvent_27_OnOptionSwitched__DelegateSignature_Params
{
public:
	class FString                                SelectedOption;                                    // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function WB_SettingsPanel_Theme2.WB_SettingsPanel_Theme2_C.BndEvt__WB_SettingsPanel_WB_Dropdown_Vsync_K2Node_ComponentBoundEvent_29_OnOptionSwitched__DelegateSignature
struct UWB_SettingsPanel_Theme2_C_BndEvt__WB_SettingsPanel_WB_Dropdown_Vsync_K2Node_ComponentBoundEvent_29_OnOptionSwitched__DelegateSignature_Params
{
public:
	class FString                                SelectedOption;                                    // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function WB_SettingsPanel_Theme2.WB_SettingsPanel_Theme2_C.BndEvt__WB_SettingsPanel_WB_Slider_MasterVolume_K2Node_ComponentBoundEvent_7_OnValueChanged__DelegateSignature
struct UWB_SettingsPanel_Theme2_C_BndEvt__WB_SettingsPanel_WB_Slider_MasterVolume_K2Node_ComponentBoundEvent_7_OnValueChanged__DelegateSignature_Params
{
public:
	float                                        Volume;                                            // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function WB_SettingsPanel_Theme2.WB_SettingsPanel_Theme2_C.BndEvt__WB_SettingsPanel_WB_Slider_MusicVolume_K2Node_ComponentBoundEvent_8_OnValueChanged__DelegateSignature
struct UWB_SettingsPanel_Theme2_C_BndEvt__WB_SettingsPanel_WB_Slider_MusicVolume_K2Node_ComponentBoundEvent_8_OnValueChanged__DelegateSignature_Params
{
public:
	float                                        Volume;                                            // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function WB_SettingsPanel_Theme2.WB_SettingsPanel_Theme2_C.BndEvt__WB_SettingsPanel_WB_Slider_AmbientVolume_K2Node_ComponentBoundEvent_16_OnValueChanged__DelegateSignature
struct UWB_SettingsPanel_Theme2_C_BndEvt__WB_SettingsPanel_WB_Slider_AmbientVolume_K2Node_ComponentBoundEvent_16_OnValueChanged__DelegateSignature_Params
{
public:
	float                                        Volume;                                            // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function WB_SettingsPanel_Theme2.WB_SettingsPanel_Theme2_C.BndEvt__WB_SettingsPanel_WB_OptionSwitcher_Audio_Quality_K2Node_ComponentBoundEvent_32_OnOptionSwitched__DelegateSignature
struct UWB_SettingsPanel_Theme2_C_BndEvt__WB_SettingsPanel_WB_OptionSwitcher_Audio_Quality_K2Node_ComponentBoundEvent_32_OnOptionSwitched__DelegateSignature_Params
{
public:
	class FString                                SelectedOption;                                    // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function WB_SettingsPanel_Theme2.WB_SettingsPanel_Theme2_C.BndEvt__WB_SettingsPanel_Theme2_WB_Sensitivity_Theme2_K2Node_ComponentBoundEvent_44_OnValueChanged__DelegateSignature
struct UWB_SettingsPanel_Theme2_C_BndEvt__WB_SettingsPanel_Theme2_WB_Sensitivity_Theme2_K2Node_ComponentBoundEvent_44_OnValueChanged__DelegateSignature_Params
{
public:
	float                                        Volume;                                            // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function WB_SettingsPanel_Theme2.WB_SettingsPanel_Theme2_C.BndEvt__WB_SettingsPanel_Theme2_WB_Slider_FootstepVolume_K2Node_ComponentBoundEvent_9_OnValueChanged__DelegateSignature
struct UWB_SettingsPanel_Theme2_C_BndEvt__WB_SettingsPanel_Theme2_WB_Slider_FootstepVolume_K2Node_ComponentBoundEvent_9_OnValueChanged__DelegateSignature_Params
{
public:
	float                                        Volume;                                            // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function WB_SettingsPanel_Theme2.WB_SettingsPanel_Theme2_C.BndEvt__WB_SettingsPanel_Theme2_WB_Slider_SFXVolume_K2Node_ComponentBoundEvent_12_OnValueChanged__DelegateSignature
struct UWB_SettingsPanel_Theme2_C_BndEvt__WB_SettingsPanel_Theme2_WB_Slider_SFXVolume_K2Node_ComponentBoundEvent_12_OnValueChanged__DelegateSignature_Params
{
public:
	float                                        Volume;                                            // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function WB_SettingsPanel_Theme2.WB_SettingsPanel_Theme2_C.BndEvt__WB_SettingsPanel_Theme2_WB_Slider_UIVolume_K2Node_ComponentBoundEvent_30_OnValueChanged__DelegateSignature
struct UWB_SettingsPanel_Theme2_C_BndEvt__WB_SettingsPanel_Theme2_WB_Slider_UIVolume_K2Node_ComponentBoundEvent_30_OnValueChanged__DelegateSignature_Params
{
public:
	float                                        Volume;                                            // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function WB_SettingsPanel_Theme2.WB_SettingsPanel_Theme2_C.BndEvt__WB_SettingsPanel_Theme2_WB_Dropdown_MotionBlur_K2Node_ComponentBoundEvent_36_OnOptionSwitched__DelegateSignature
struct UWB_SettingsPanel_Theme2_C_BndEvt__WB_SettingsPanel_Theme2_WB_Dropdown_MotionBlur_K2Node_ComponentBoundEvent_36_OnOptionSwitched__DelegateSignature_Params
{
public:
	class FString                                SelectedOption;                                    // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function WB_SettingsPanel_Theme2.WB_SettingsPanel_Theme2_C.BndEvt__WB_SettingsPanel_Theme2_WB_Slider_InputGain_K2Node_ComponentBoundEvent_10_OnValueChanged__DelegateSignature
struct UWB_SettingsPanel_Theme2_C_BndEvt__WB_SettingsPanel_Theme2_WB_Slider_InputGain_K2Node_ComponentBoundEvent_10_OnValueChanged__DelegateSignature_Params
{
public:
	float                                        Volume;                                            // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function WB_SettingsPanel_Theme2.WB_SettingsPanel_Theme2_C.BndEvt__WB_SettingsPanel_Theme2_WB_OptionSwitcher_Theme2_K2Node_ComponentBoundEvent_43_OnOptionSwitched__DelegateSignature
struct UWB_SettingsPanel_Theme2_C_BndEvt__WB_SettingsPanel_Theme2_WB_OptionSwitcher_Theme2_K2Node_ComponentBoundEvent_43_OnOptionSwitched__DelegateSignature_Params
{
public:
	class FString                                SelectedOption;                                    // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function WB_SettingsPanel_Theme2.WB_SettingsPanel_Theme2_C.BndEvt__WB_SettingsPanel_Theme2_WB_OptionSwitcher_Theme2_1_K2Node_ComponentBoundEvent_48_OnOptionSwitched__DelegateSignature
struct UWB_SettingsPanel_Theme2_C_BndEvt__WB_SettingsPanel_Theme2_WB_OptionSwitcher_Theme2_1_K2Node_ComponentBoundEvent_48_OnOptionSwitched__DelegateSignature_Params
{
public:
	class FString                                SelectedOption;                                    // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function WB_SettingsPanel_Theme2.WB_SettingsPanel_Theme2_C.BndEvt__WB_SettingsPanel_Theme2_WB_OptionSwitcher_Theme2_2_K2Node_ComponentBoundEvent_49_OnOptionSwitched__DelegateSignature
struct UWB_SettingsPanel_Theme2_C_BndEvt__WB_SettingsPanel_Theme2_WB_OptionSwitcher_Theme2_2_K2Node_ComponentBoundEvent_49_OnOptionSwitched__DelegateSignature_Params
{
public:
	class FString                                SelectedOption;                                    // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function WB_SettingsPanel_Theme2.WB_SettingsPanel_Theme2_C.BndEvt__WB_SettingsPanel_Theme2_WB_OptionSwitcher_PushToTalk_K2Node_ComponentBoundEvent_51_OnOptionSwitched__DelegateSignature
struct UWB_SettingsPanel_Theme2_C_BndEvt__WB_SettingsPanel_Theme2_WB_OptionSwitcher_PushToTalk_K2Node_ComponentBoundEvent_51_OnOptionSwitched__DelegateSignature_Params
{
public:
	class FString                                SelectedOption;                                    // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function WB_SettingsPanel_Theme2.WB_SettingsPanel_Theme2_C.BndEvt__WB_SettingsPanel_Theme2_WB_Slider_UIVolume_1_K2Node_ComponentBoundEvent_52_OnValueChanged__DelegateSignature
struct UWB_SettingsPanel_Theme2_C_BndEvt__WB_SettingsPanel_Theme2_WB_Slider_UIVolume_1_K2Node_ComponentBoundEvent_52_OnValueChanged__DelegateSignature_Params
{
public:
	float                                        Volume;                                            // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function WB_SettingsPanel_Theme2.WB_SettingsPanel_Theme2_C.BndEvt__WB_SettingsPanel_Theme2_WB_OptionSwitcher_ShowBody_1_K2Node_ComponentBoundEvent_53_OnValueChanged__DelegateSignature
struct UWB_SettingsPanel_Theme2_C_BndEvt__WB_SettingsPanel_Theme2_WB_OptionSwitcher_ShowBody_1_K2Node_ComponentBoundEvent_53_OnValueChanged__DelegateSignature_Params
{
public:
	float                                        Volume;                                            // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function WB_SettingsPanel_Theme2.WB_SettingsPanel_Theme2_C.BndEvt__WB_SettingsPanel_Theme2_WB_OptionSwitcher_SmoothRotation_K2Node_ComponentBoundEvent_38_OnOptionSwitched__DelegateSignature
struct UWB_SettingsPanel_Theme2_C_BndEvt__WB_SettingsPanel_Theme2_WB_OptionSwitcher_SmoothRotation_K2Node_ComponentBoundEvent_38_OnOptionSwitched__DelegateSignature_Params
{
public:
	class FString                                SelectedOption;                                    // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function WB_SettingsPanel_Theme2.WB_SettingsPanel_Theme2_C.BndEvt__WB_SettingsPanel_Theme2_WB_Gamma_Theme2_K2Node_ComponentBoundEvent_57_OnValueChanged__DelegateSignature
struct UWB_SettingsPanel_Theme2_C_BndEvt__WB_SettingsPanel_Theme2_WB_Gamma_Theme2_K2Node_ComponentBoundEvent_57_OnValueChanged__DelegateSignature_Params
{
public:
	float                                        Gamma;                                             // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function WB_SettingsPanel_Theme2.WB_SettingsPanel_Theme2_C.BndEvt__WB_SettingsPanel_Theme2_WB_OptionSwitcher_ShowGore_K2Node_ComponentBoundEvent_61_OnOptionSwitched__DelegateSignature
struct UWB_SettingsPanel_Theme2_C_BndEvt__WB_SettingsPanel_Theme2_WB_OptionSwitcher_ShowGore_K2Node_ComponentBoundEvent_61_OnOptionSwitched__DelegateSignature_Params
{
public:
	class FString                                SelectedOption;                                    // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function WB_SettingsPanel_Theme2.WB_SettingsPanel_Theme2_C.BndEvt__WB_SettingsPanel_Theme2_WB_OptionSwitcher_ShowGore_1_K2Node_ComponentBoundEvent_48_OnOptionSwitched__DelegateSignature
struct UWB_SettingsPanel_Theme2_C_BndEvt__WB_SettingsPanel_Theme2_WB_OptionSwitcher_ShowGore_1_K2Node_ComponentBoundEvent_48_OnOptionSwitched__DelegateSignature_Params
{
public:
	class FString                                SelectedOption;                                    // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function WB_SettingsPanel_Theme2.WB_SettingsPanel_Theme2_C.BndEvt__WB_SettingsPanel_Theme2_WB_OptionSwitcher_EventContent_K2Node_ComponentBoundEvent_63_OnOptionSwitched__DelegateSignature
struct UWB_SettingsPanel_Theme2_C_BndEvt__WB_SettingsPanel_Theme2_WB_OptionSwitcher_EventContent_K2Node_ComponentBoundEvent_63_OnOptionSwitched__DelegateSignature_Params
{
public:
	class FString                                SelectedOption;                                    // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// 0x521 (0x521 - 0x0)
// Function WB_SettingsPanel_Theme2.WB_SettingsPanel_Theme2_C.ExecuteUbergraph_WB_SettingsPanel_Theme2
struct UWB_SettingsPanel_Theme2_C_ExecuteUbergraph_WB_SettingsPanel_Theme2_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x4(0x10)(ZeroConstructor, NoDestructor)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_1;            // 0x14(0x10)(ZeroConstructor, NoDestructor)
	uint8                                        Pad_274F[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UGameUserSettings*                     CallFunc_GetGameUserSettings_ReturnValue;          // 0x28(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UGameUserSettings*                     CallFunc_GetGameUserSettings_ReturnValue_1;        // 0x30(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UGameUserSettings*                     CallFunc_GetGameUserSettings_ReturnValue_2;        // 0x38(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                K2Node_ComponentBoundEvent_SelectedOption_24;      // 0x40(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                K2Node_ComponentBoundEvent_SelectedOption_23;      // 0x50(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class UGameUserSettings*                     CallFunc_interpret_FrameRateLimit_GameUserSettings; // 0x60(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_interpret_FrameRateLimit_FrameRateLimit;  // 0x68(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2750[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UGameUserSettings*                     CallFunc_interpret_WindowMode_GameUserSettings;    // 0x70(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EWindowMode                       CallFunc_interpret_WindowMode_WindowMode;          // 0x78(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2751[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                K2Node_ComponentBoundEvent_SelectedOption_22;      // 0x80(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class UGameUserSettings*                     CallFunc_GetGameUserSettings_ReturnValue_3;        // 0x90(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UGameUserSettings*                     CallFunc_interpret_Resolution_GameUserSettings;    // 0x98(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FIntPoint                             CallFunc_interpret_Resolution_Resolution;          // 0xA0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                K2Node_ComponentBoundEvent_SelectedOption_21;      // 0xA8(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                K2Node_ComponentBoundEvent_SelectedOption_20;      // 0xB8(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class UGameUserSettings*                     CallFunc_interpret_GraphicQuality_GameUserSettings; // 0xC8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_interpret_GraphicQuality_Quality;         // 0xD0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2752[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UGameUserSettings*                     CallFunc_interpret_GraphicQuality_GameUserSettings_1; // 0xD8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_interpret_GraphicQuality_Quality_1;       // 0xE0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2753[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                K2Node_ComponentBoundEvent_SelectedOption_19;      // 0xE8(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                K2Node_ComponentBoundEvent_SelectedOption_18;      // 0xF8(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class UGameUserSettings*                     CallFunc_interpret_GraphicQuality_GameUserSettings_2; // 0x108(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_interpret_GraphicQuality_Quality_2;       // 0x110(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2754[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UGameUserSettings*                     CallFunc_interpret_GraphicQuality_GameUserSettings_3; // 0x118(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_interpret_GraphicQuality_Quality_3;       // 0x120(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2755[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                K2Node_ComponentBoundEvent_SelectedOption_17;      // 0x128(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                K2Node_ComponentBoundEvent_SelectedOption_16;      // 0x138(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class UGameUserSettings*                     CallFunc_interpret_GraphicQuality_GameUserSettings_4; // 0x148(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_interpret_GraphicQuality_Quality_4;       // 0x150(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2756[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UGameUserSettings*                     CallFunc_interpret_GraphicQuality_GameUserSettings_5; // 0x158(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_interpret_GraphicQuality_Quality_5;       // 0x160(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2757[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                K2Node_ComponentBoundEvent_SelectedOption_15;      // 0x168(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                K2Node_ComponentBoundEvent_SelectedOption_14;      // 0x178(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class UGameUserSettings*                     CallFunc_interpret_GraphicQuality_GameUserSettings_6; // 0x188(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_interpret_GraphicQuality_Quality_6;       // 0x190(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2758[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UGameUserSettings*                     CallFunc_interpret_GraphicQuality_GameUserSettings_7; // 0x198(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_interpret_GraphicQuality_Quality_7;       // 0x1A0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2759[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                K2Node_ComponentBoundEvent_SelectedOption_13;      // 0x1A8(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                K2Node_ComponentBoundEvent_SelectedOption_12;      // 0x1B8(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class UGameUserSettings*                     CallFunc_interpret_GraphicQuality_GameUserSettings_8; // 0x1C8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_interpret_GraphicQuality_Quality_8;       // 0x1D0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_275A[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UGameUserSettings*                     CallFunc_interpret_DynamicResolution_GameUserSettings; // 0x1D8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_interpret_DynamicResolution_DynamicResolution_; // 0x1E0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_275B[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                K2Node_ComponentBoundEvent_SelectedOption_11;      // 0x1E8(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class UGameUserSettings*                     CallFunc_interpret_HDR_GameUserSettings;           // 0x1F8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_interpret_HDR_HDR_;                       // 0x200(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_275C[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                K2Node_ComponentBoundEvent_SelectedOption_10;      // 0x208(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class UGameUserSettings*                     CallFunc_interpret_VSync_GameUserSettings;         // 0x218(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_interpret_VSync_VSync_;                   // 0x220(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_275D[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        K2Node_ComponentBoundEvent_Volume_9;               // 0x224(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_ComponentBoundEvent_Volume_8;               // 0x228(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_ComponentBoundEvent_Volume_7;               // 0x22C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                K2Node_ComponentBoundEvent_SelectedOption_9;       // 0x230(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class UGameUserSettings*                     CallFunc_interpret_AudioQuality_GameUserSettings;  // 0x240(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_interpret_AudioQuality_Quality;           // 0x248(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x24C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x250(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x254(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                     CallFunc_GetPlayerController_ReturnValue;          // 0x258(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                     CallFunc_GetPlayerController_ReturnValue_1;        // 0x260(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UDestroySessionCallbackProxy*          CallFunc_DestroySession_ReturnValue;               // 0x268(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x270(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_275E[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APlayerController*                     CallFunc_GetPlayerController_ReturnValue_2;        // 0x278(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                     CallFunc_GetPlayerController_ReturnValue_3;        // 0x280(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_ComponentBoundEvent_Volume_6;               // 0x288(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_SetGamePaused_ReturnValue;                // 0x28C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsStandalone_ReturnValue;                 // 0x28D(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_SetGamePaused_ReturnValue_1;              // 0x28E(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsStandalone_ReturnValue_1;               // 0x28F(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                        K2Node_ComponentBoundEvent_Volume_5;               // 0x290(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_ComponentBoundEvent_Volume_4;               // 0x294(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_ComponentBoundEvent_Volume_3;               // 0x298(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_275F[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                K2Node_ComponentBoundEvent_SelectedOption_8;       // 0x2A0(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class UGameUserSettings*                     CallFunc_interpret_MotionBlur_GameUserSettings;    // 0x2B0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                CallFunc_interpret_MotionBlur_MotionBlur_;         // 0x2B8(0x10)(ZeroConstructor, HasGetValueTypeHash)
	float                                        K2Node_ComponentBoundEvent_Volume_2;               // 0x2C8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2760[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                K2Node_ComponentBoundEvent_SelectedOption_7;       // 0x2D0(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Conv_FloatToString_ReturnValue;           // 0x2E0(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Concat_StrStr_ReturnValue;                // 0x2F0(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                K2Node_ComponentBoundEvent_SelectedOption_6;       // 0x300(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                K2Node_ComponentBoundEvent_SelectedOption_5;       // 0x310(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_interpret_VHSEffect_Command;              // 0x320(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class AGameModeBase*                         CallFunc_GetGameMode_ReturnValue;                  // 0x330(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AMP_GameMode_C*                        K2Node_DynamicCast_AsMP_Game_Mode;                 // 0x338(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x340(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsServer_ReturnValue;                     // 0x341(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsStandalone_ReturnValue_2;               // 0x342(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanOR_ReturnValue;                    // 0x343(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x344(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanOR_ReturnValue_1;                  // 0x345(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2761[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UGameInstance*                         CallFunc_GetGameInstance_ReturnValue;              // 0x348(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBP_MyGameInstance_C*                  K2Node_DynamicCast_AsBP_My_Game_Instance;          // 0x350(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0x358(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2762[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UGameInstance*                         CallFunc_GetGameInstance_ReturnValue_1;            // 0x360(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBP_MyGameInstance_C*                  K2Node_DynamicCast_AsBP_My_Game_Instance_1;        // 0x368(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_2;                     // 0x370(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2763[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_GetEnumeratorUserFriendlyName_ReturnValue; // 0x378(0x10)(ZeroConstructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x388(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_SwitchEnum_CmpSuccess_1;                    // 0x389(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2764[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                K2Node_ComponentBoundEvent_SelectedOption_4;       // 0x390(0x10)(ZeroConstructor, HasGetValueTypeHash)
	float                                        K2Node_ComponentBoundEvent_Volume_1;               // 0x3A0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FS_AudioSettings                      K2Node_MakeStruct_S_AudioSettings;                 // 0x3A4(0x1C)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_ComponentBoundEvent_Volume;                 // 0x3C0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_FTrunc_ReturnValue;                       // 0x3C4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_InRange_FloatFloat_ReturnValue;           // 0x3C8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2765[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APlayerController*                     CallFunc_GetPlayerController_ReturnValue_4;        // 0x3D0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAchievementQueryCallbackProxy*        CallFunc_CacheAchievements_ReturnValue;            // 0x3D8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UGameInstance*                         CallFunc_GetGameInstance_ReturnValue_2;            // 0x3E0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFancyGameInstance*                    K2Node_DynamicCast_AsFancy_Game_Instance;          // 0x3E8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_3;                     // 0x3F0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x3F1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsHeadMountedDisplayEnabled_ReturnValue;  // 0x3F2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsHeadMountedDisplayEnabled_ReturnValue_1; // 0x3F3(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2766[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ABP_MenuActor_C*                       CallFunc_GetActorOfClass_ReturnValue;              // 0x3F8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_2;                    // 0x400(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2767[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ABP_LobbyActor_C*                      CallFunc_GetActorOfClass_ReturnValue_1;            // 0x408(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                K2Node_ComponentBoundEvent_SelectedOption_3;       // 0x410(0x10)(ZeroConstructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_3;                    // 0x420(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2768[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ACharacter*                            CallFunc_GetPlayerCharacter_ReturnValue;           // 0x428(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AVRCharacter_Demo_Client_C*            K2Node_DynamicCast_AsVRCharacter_Demo_Client;      // 0x430(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_4;                     // 0x438(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2769[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AVRCharacter_Demo_C*                   K2Node_DynamicCast_AsVRCharacter_Demo;             // 0x440(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_5;                     // 0x448(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_276A[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UInputSettings*                        CallFunc_GetInputSettings_ReturnValue;             // 0x450(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                CallFunc_GetCurrentLevelName_ReturnValue;          // 0x458(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class ABP_Ocean_Manager_C*                   CallFunc_GetActorOfClass_ReturnValue_2;            // 0x468(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_StrStr_ReturnValue;            // 0x470(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue_4;                    // 0x471(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_276B[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_2;            // 0x474(0x10)(ZeroConstructor, NoDestructor)
	float                                        K2Node_ComponentBoundEvent_Gamma;                  // 0x484(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                K2Node_ComponentBoundEvent_SelectedOption_2;       // 0x488(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_interpret_Gamma_MotionBlur_;              // 0x498(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                K2Node_ComponentBoundEvent_SelectedOption_1;       // 0x4A8(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                K2Node_ComponentBoundEvent_SelectedOption;         // 0x4B8(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class UGameInstance*                         CallFunc_GetGameInstance_ReturnValue_3;            // 0x4C8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBP_MyGameInstance_C*                  K2Node_DynamicCast_AsBP_My_Game_Instance_2;        // 0x4D0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_6;                     // 0x4D8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_276C[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class AActor*>                        CallFunc_GetAllActorsWithInterface_OutActors;      // 0x4E0(0x10)(ReferenceParm)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_3;            // 0x4F0(0x10)(ZeroConstructor, NoDestructor)
	class AActor*                                CallFunc_Array_Get_Item;                           // 0x500(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IBPI_EventItem_C>     K2Node_DynamicCast_AsBPI_Event_Item;               // 0x508(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_DynamicCast_bSuccess_7;                     // 0x518(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_276D[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x51C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x520(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

}
}



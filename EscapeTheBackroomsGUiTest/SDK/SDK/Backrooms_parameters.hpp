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
// Function Backrooms.AI_ObjectWC.GetWeight
struct UAI_ObjectWC_GetWeight_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function Backrooms.BackroomsBPFunctionLibrary.SetLogValue
struct UBackroomsBPFunctionLibrary_SetLogValue_Params
{
public:
	class FString                                Key;                                               // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Value;                                             // 0x10(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function Backrooms.BackroomsBPFunctionLibrary.SetCurrentLevelLogs
struct UBackroomsBPFunctionLibrary_SetCurrentLevelLogs_Params
{
public:
	class FString                                LevelName;                                         // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function Backrooms.BackroomsBPFunctionLibrary.SaveToClipboard
struct UBackroomsBPFunctionLibrary_SaveToClipboard_Params
{
public:
	class FString                                ToClipboard;                                       // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function Backrooms.BackroomsBPFunctionLibrary.ResetWorldTime
struct UBackroomsBPFunctionLibrary_ResetWorldTime_Params
{
public:
	class AGameMode*                             GameMode;                                          // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function Backrooms.BackroomsBPFunctionLibrary.PlayRate
struct UBackroomsBPFunctionLibrary_PlayRate_Params
{
public:
	class UTimelineComponent*                    Timeline;                                          // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Sec;                                               // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_19AC[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTimelineComponent*                    ReturnValue;                                       // 0x10(0x8)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function Backrooms.BackroomsBPFunctionLibrary.LoadXP
struct UBackroomsBPFunctionLibrary_LoadXP_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function Backrooms.BackroomsBPFunctionLibrary.K2_IsTearingDown
struct UBackroomsBPFunctionLibrary_K2_IsTearingDown_Params
{
public:
	class UObject*                               Caller;                                            // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         IsTearingDown;                                     // 0x8(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_19AD[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x1 (0x1 - 0x0)
// Function Backrooms.BackroomsBPFunctionLibrary.IsNoHMDMode
struct UBackroomsBPFunctionLibrary_IsNoHMDMode_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function Backrooms.BackroomsBPFunctionLibrary.GetSystemTimeSeconds
struct UBackroomsBPFunctionLibrary_GetSystemTimeSeconds_Params
{
public:
	struct FDateTime                             DateTime;                                          // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ReturnValue;                                       // 0x8(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_19AE[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// Function Backrooms.BackroomsBPFunctionLibrary.GetSplinePoints
struct UBackroomsBPFunctionLibrary_GetSplinePoints_Params
{
public:
	class USplineComponent*                      SplineComponent;                                   // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FVector>                       ReturnValue;                                       // 0x8(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function Backrooms.BackroomsBPFunctionLibrary.GetSaveGameSlotsByType
struct UBackroomsBPFunctionLibrary_GetSaveGameSlotsByType_Params
{
public:
	class FString                                Prefix;                                            // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class FString>                        ReturnValue;                                       // 0x10(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function Backrooms.BackroomsBPFunctionLibrary.GetPlayerStateArray
struct UBackroomsBPFunctionLibrary_GetPlayerStateArray_Params
{
public:
	class AGameStateBase*                        GameState;                                         // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class APlayerState*>                  ReturnValue;                                       // 0x8(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function Backrooms.BackroomsBPFunctionLibrary.GetIndexOfClosestSplinePoint
struct UBackroomsBPFunctionLibrary_GetIndexOfClosestSplinePoint_Params
{
public:
	class USplineComponent*                      SplineComponent;                                   // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               WorldLocation;                                     // 0x8(0xC)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ReturnValue;                                       // 0x14(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function Backrooms.BackroomsBPFunctionLibrary.GetDateFromSeconds
struct UBackroomsBPFunctionLibrary_GetDateFromSeconds_Params
{
public:
	int32                                        Seconds;                                           // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_19AF[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FDateTime                             ReturnValue;                                       // 0x8(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function Backrooms.BackroomsBPFunctionLibrary.GetAllSaveGameSlotNames
struct UBackroomsBPFunctionLibrary_GetAllSaveGameSlotNames_Params
{
public:
	TArray<class FString>                        ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function Backrooms.BackroomsBPFunctionLibrary.DetectCurrentGesture
struct UBackroomsBPFunctionLibrary_DetectCurrentGesture_Params
{
public:
	TArray<float>                                PoseFingerCurls;                                   // 0x0(0x10)(Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	class UOpenInputGestureDatabase*             GesturesDB;                                        // 0x10(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  ReturnValue;                                       // 0x18(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function Backrooms.BackroomsBPFunctionLibrary.ClearCharacterFloor
struct UBackroomsBPFunctionLibrary_ClearCharacterFloor_Params
{
public:
	class ACharacter*                            Character;                                         // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function Backrooms.BackroomsBPFunctionLibrary.CanNavigationReachPoint
struct UBackroomsBPFunctionLibrary_CanNavigationReachPoint_Params
{
public:
	class APawn*                                 Pawn;                                              // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               StartLocation;                                     // 0x8(0xC)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               EndLocation;                                       // 0x14(0xC)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x20(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_19B0[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// Function Backrooms.BackroomsBPFunctionLibrary.AddXP
struct UBackroomsBPFunctionLibrary_AddXP_Params
{
public:
	float                                        XpToAdd;                                           // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ReturnValue;                                       // 0x4(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// Function Backrooms.BoatComponent.Server_PassMovementInfo
struct UBoatComponent_Server_PassMovementInfo_Params
{
public:
	struct FRepXShipMovement                     NewRepXShipMovement;                               // 0x0(0x30)(ConstParm, Parm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function Backrooms.BoatComponent.IsEngineInWater
struct UBoatComponent_IsEngineInWater_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function Backrooms.BoatComponent.GetXShipPawn
struct UBoatComponent_GetXShipPawn_Params
{
public:
	class ABoatPawn*                             ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function Backrooms.BoatComponent.GetShipBoundsRadius
struct UBoatComponent_GetShipBoundsRadius_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function Backrooms.InteractablePawn.ToggleMouse
struct AInteractablePawn_ToggleMouse_Params
{
public:
	bool                                         bHide;                                             // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function Backrooms.InteractablePawn.SetUsingVR
struct AInteractablePawn_SetUsingVR_Params
{
public:
	class ACharacter*                            Character;                                         // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bPossess;                                          // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_19B7[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// Function Backrooms.InteractablePawn.SetCameraPostProcessing
struct AInteractablePawn_SetCameraPostProcessing_Params
{
public:
	class ACharacter*                            Character;                                         // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function Backrooms.InteractablePawn.OnVRPossess
struct AInteractablePawn_OnVRPossess_Params
{
public:
	bool                                         bPossess;                                          // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function Backrooms.InteractablePawn.OnUsedServer
struct AInteractablePawn_OnUsedServer_Params
{
public:
	class ACharacter*                            Character;                                         // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function Backrooms.InteractablePawn.OnStartInteracting
struct AInteractablePawn_OnStartInteracting_Params
{
public:
	class ACharacter*                            Character;                                         // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function Backrooms.InteractablePawn.OnHiddenPossess
struct AInteractablePawn_OnHiddenPossess_Params
{
public:
	class ACharacter*                            Character;                                         // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function Backrooms.InteractablePawn.OnAttemptUse
struct AInteractablePawn_OnAttemptUse_Params
{
public:
	bool                                         CanUse;                                            // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function Backrooms.BoatPawn.GetXShipComponent
struct ABoatPawn_GetXShipComponent_Params
{
public:
	class UBoatComponent*                        ReturnValue;                                       // 0x0(0x8)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// Function Backrooms.BoatPawn.GetWaterWorldZ
struct ABoatPawn_GetWaterWorldZ_Params
{
public:
	struct FVector2D                             InLocation;                                        // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ReturnValue;                                       // 0x8(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x14 (0x14 - 0x0)
// Function Backrooms.BoatPawn.GetWaterNormal
struct ABoatPawn_GetWaterNormal_Params
{
public:
	struct FVector2D                             InLocation;                                        // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               ReturnValue;                                       // 0x8(0xC)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// Function Backrooms.BoatPawn.GetWaterDensity
struct ABoatPawn_GetWaterDensity_Params
{
public:
	struct FVector2D                             InLocation;                                        // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ReturnValue;                                       // 0x8(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function Backrooms.BoatPawn.AddRotationInput
struct ABoatPawn_AddRotationInput_Params
{
public:
	float                                        ScaleValue;                                        // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function Backrooms.CustomUserWidget.ToggleInventory
struct UCustomUserWidget_ToggleInventory_Params
{
public:
	bool                                         IsVisible;                                         // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function Backrooms.CustomUserWidget.SetHotbarSlot
struct UCustomUserWidget_SetHotbarSlot_Params
{
public:
	int32                                        ItemSlot;                                          // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function Backrooms.CustomUserWidget.RefreshInventory
struct UCustomUserWidget_RefreshInventory_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function Backrooms.FancyCharacter.TogglePlayerVisibility
struct AFancyCharacter_TogglePlayerVisibility_Params
{
public:
	bool                                         IsHidden;                                          // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function Backrooms.FancyCharacter.TogglePlayerLegs
struct AFancyCharacter_TogglePlayerLegs_Params
{
public:
	bool                                         IsHidden;                                          // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function Backrooms.FancyCharacter.ToggleBlur
struct AFancyCharacter_ToggleBlur_Params
{
public:
	bool                                         ShouldBlur;                                        // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function Backrooms.FancyCharacter.SetIsOverlapOnly
struct AFancyCharacter_SetIsOverlapOnly_Params
{
public:
	bool                                         ShouldOverlapOnly;                                 // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function Backrooms.FancyCharacter.SetCanCollide
struct AFancyCharacter_SetCanCollide_Params
{
public:
	bool                                         ShouldCollide;                                     // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function Backrooms.FancyCharacter.OnSanityUpdate
struct AFancyCharacter_OnSanityUpdate_Params
{
public:
	float                                        Sanity;                                            // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function Backrooms.FancyCharacter.InteractCallBackVR
struct AFancyCharacter_InteractCallBackVR_Params
{
public:
	class AActor*                                Actor;                                             // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function Backrooms.FancyCharacter.Interact
struct AFancyCharacter_Interact_Params
{
public:
	class AActor*                                Actor;                                             // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function Backrooms.FancyCharacter.HideItem
struct AFancyCharacter_HideItem_Params
{
public:
	bool                                         IsVisible;                                         // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function Backrooms.FancyCharacter.ChangeCrosshairVisibility
struct AFancyCharacter_ChangeCrosshairVisibility_Params
{
public:
	bool                                         IsVisible;                                         // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function Backrooms.FancyGameInstance.OnSteamOverlayIsActive
struct UFancyGameInstance_OnSteamOverlayIsActive_Params
{
public:
	bool                                         IsOverlayActive;                                   // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function Backrooms.FancyGameInstance.InitializeCPPElements
struct UFancyGameInstance_InitializeCPPElements_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function Backrooms.FancyGameInstance.GetCurrentGameLanguage
struct UFancyGameInstance_GetCurrentGameLanguage_Params
{
public:
	class FString                                ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function Backrooms.FancyGameInstance.CreateMission
struct UFancyGameInstance_CreateMission_Params
{
public:
	class FString                                TargetEscapeLevel;                                 // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        LevelBaseXP;                                       // 0x10(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        LevelTimeLimit;                                    // 0x14(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                MissionStructRowName;                              // 0x18(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x68 (0x68 - 0x0)
// Function Backrooms.FancyGameInstance.CompleteMission
struct UFancyGameInstance_CompleteMission_Params
{
public:
	float                                        TimeCompleted;                                     // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_19C4[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FMissionStructure                     ReturnValue;                                       // 0x8(0x60)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function Backrooms.FancyMovementComponent.SetSprinting
struct UFancyMovementComponent_SetSprinting_Params
{
public:
	bool                                         Sprint;                                            // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function Backrooms.FancyPlayerController.GetObjectScreenRadius
struct AFancyPlayerController_GetObjectScreenRadius_Params
{
public:
	class UStaticMeshComponent*                  MeshComponent;                                     // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ReturnValue;                                       // 0x8(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_19CA[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x4 (0x4 - 0x0)
// Function Backrooms.FancyPlayerState.RemoveSanity
struct AFancyPlayerState_RemoveSanity_Params
{
public:
	float                                        Amount;                                            // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function Backrooms.FancyPlayerState.AddSanity
struct AFancyPlayerState_AddSanity_Params
{
public:
	float                                        Amount;                                            // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// Function Backrooms.GripMotionControllerComponent.Server_SendControllerTransform
struct UGripMotionControllerComponent_Server_SendControllerTransform_Params
{
public:
	struct FTransform                            NewTransform;                                      // 0x0(0x30)(Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function Backrooms.GripMotionControllerComponent.GetPhysicsVelocity
struct UGripMotionControllerComponent_GetPhysicsVelocity_Params
{
public:
	struct FVector                               AngularVelocity;                                   // 0x0(0xC)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               LinearVelocity;                                    // 0xC(0xC)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function Backrooms.GripMotionControllerComponent.BP_IsLocallyControlled
struct UGripMotionControllerComponent_BP_IsLocallyControlled_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function Backrooms.InspectableActor.SetPlayerRef
struct AInspectableActor_SetPlayerRef_Params
{
public:
	class ACharacter*                            Ref;                                               // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function Backrooms.InspectableActor.SetCameraLocation
struct AInspectableActor_SetCameraLocation_Params
{
public:
	class UCameraComponent*                      CameraComponent;                                   // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function Backrooms.InspectableActor.GetMesh
struct AInspectableActor_GetMesh_Params
{
public:
	class UStaticMeshComponent*                  ReturnValue;                                       // 0x0(0x8)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function Backrooms.InteractableComponent.OnUsedServer
struct UInteractableComponent_OnUsedServer_Params
{
public:
	class ACharacter*                            Character;                                         // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function Backrooms.InteractableInterface.OnActorUsed
struct IInteractableInterface_OnActorUsed_Params
{
public:
	class ACharacter*                            Character;                                         // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function Backrooms.InventoryComponent.SwapInventoryItems
struct UInventoryComponent_SwapInventoryItems_Params
{
public:
	int32                                        FirstIdx;                                          // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        SecondIdx;                                         // 0x4(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function Backrooms.InventoryComponent.RemoveFromInventory
struct UInventoryComponent_RemoveFromInventory_Params
{
public:
	class UInventoryItem*                        Item;                                              // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function Backrooms.InventoryComponent.IsSlotEmpty
struct UInventoryComponent_IsSlotEmpty_Params
{
public:
	int32                                        SlotIndex;                                         // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x4(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_19E1[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function Backrooms.InventoryComponent.GetItemAtSlot
struct UInventoryComponent_GetItemAtSlot_Params
{
public:
	int32                                        SlotIndex;                                         // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_19E2[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UInventoryItem*                        ReturnValue;                                       // 0x8(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function Backrooms.InventoryComponent.DropItem
struct UInventoryComponent_DropItem_Params
{
public:
	uint8                                        Slot;                                              // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function Backrooms.InventoryComponent.AddToInventory
struct UInventoryComponent_AddToInventory_Params
{
public:
	class UInventoryItem*                        Item;                                              // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_19E3[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x94 (0x94 - 0x0)
// Function Backrooms.LIDARBlueprintFunctionLibrary.FindCollisionUVSkeletalMesh
struct ULIDARBlueprintFunctionLibrary_FindCollisionUVSkeletalMesh_Params
{
public:
	struct FHitResult                            Hit;                                               // 0x0(0x88)(ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FVector2D                             UV;                                                // 0x88(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x90(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_19E7[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// Function Backrooms.LIDARBlueprintFunctionLibrary.CreateLiDarDot
struct ULIDARBlueprintFunctionLibrary_CreateLiDarDot_Params
{
public:
	class UObject*                               Caller;                                            // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTextureRenderTarget2D*                RenderTarget;                                      // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLIDARDotStruct                       ReturnValue;                                       // 0x10(0x10)(Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x90 (0x90 - 0x0)
// Function Backrooms.LIDARComponent.ScannerTrace
struct ULIDARComponent_ScannerTrace_Params
{
public:
	class UStaticMeshComponent*                  Mesh;                                              // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FHitResult                            ReturnValue;                                       // 0x8(0x88)(Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function Backrooms.MapEditorCharacterMovement.Turn
struct UMapEditorCharacterMovement_Turn_Params
{
public:
	float                                        Value;                                             // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function Backrooms.MapEditorCharacterMovement.Server_SetSpeedMultiplier
struct UMapEditorCharacterMovement_Server_SetSpeedMultiplier_Params
{
public:
	float                                        SpeedMultiplier;                                   // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function Backrooms.MapEditorCharacterMovement.MoveUp
struct UMapEditorCharacterMovement_MoveUp_Params
{
public:
	float                                        Value;                                             // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function Backrooms.MapEditorCharacterMovement.MoveRight
struct UMapEditorCharacterMovement_MoveRight_Params
{
public:
	float                                        Value;                                             // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function Backrooms.MapEditorCharacterMovement.MoveForward
struct UMapEditorCharacterMovement_MoveForward_Params
{
public:
	float                                        Value;                                             // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function Backrooms.MapEditorCharacterMovement.LookUp
struct UMapEditorCharacterMovement_LookUp_Params
{
public:
	float                                        Value;                                             // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function Backrooms.MapEditorCharacterMovement.InMovementMode
struct UMapEditorCharacterMovement_InMovementMode_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function Backrooms.MapEditorCharacterMovement.IncreaseSpeedMultiplier
struct UMapEditorCharacterMovement_IncreaseSpeedMultiplier_Params
{
public:
	float                                        IncreaseAmount;                                    // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function Backrooms.MapEditorCharacterMovement.EnterMovementMode
struct UMapEditorCharacterMovement_EnterMovementMode_Params
{
public:
	bool                                         Enter;                                             // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function Backrooms.MapEditorCharacterMovement.DecreaseSpeedMultiplier
struct UMapEditorCharacterMovement_DecreaseSpeedMultiplier_Params
{
public:
	float                                        DecreaseAmount;                                    // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function Backrooms.MapEditorHandlerComponent.SpawnActor
struct UMapEditorHandlerComponent_SpawnActor_Params
{
public:
	TSubclassOf<class AActor>                    ActorClass;                                        // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// Function Backrooms.MapEditorHandlerComponent.SetSnapAmount
struct UMapEditorHandlerComponent_SetSnapAmount_Params
{
public:
	struct FMapEditorSnapping                    SnappingAmounts;                                   // 0x0(0xC)(Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function Backrooms.MapEditorHandlerComponent.SetReturnPawn
struct UMapEditorHandlerComponent_SetReturnPawn_Params
{
public:
	class APawn*                                 Pawn;                                              // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// Function Backrooms.MapEditorHandlerComponent.SetActorTransform
struct UMapEditorHandlerComponent_SetActorTransform_Params
{
public:
	struct FTransform                            NewTransform;                                      // 0x0(0x30)(ConstParm, Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function Backrooms.MapEditorHandlerComponent.SetActor
struct UMapEditorHandlerComponent_SetActor_Params
{
public:
	class AActor*                                Actor;                                             // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function Backrooms.MapEditorHandlerComponent.Server_SpawnActor
struct UMapEditorHandlerComponent_Server_SpawnActor_Params
{
public:
	TSubclassOf<class AActor>                    ActorClass;                                        // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x40 (0x40 - 0x0)
// Function Backrooms.MapEditorHandlerComponent.Server_ReplicateTransform
struct UMapEditorHandlerComponent_Server_ReplicateTransform_Params
{
public:
	class AActor*                                Actor;                                             // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_19F0[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            Transform;                                         // 0x10(0x30)(Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function Backrooms.MapEditorHandlerComponent.Server_DeleteActor
struct UMapEditorHandlerComponent_Server_DeleteActor_Params
{
public:
	class AActor*                                Actor;                                             // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x90 (0x90 - 0x0)
// Function Backrooms.MapEditorHandlerComponent.MouseTrace
struct UMapEditorHandlerComponent_MouseTrace_Params
{
public:
	float                                        Distance;                                          // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bHitGizmo;                                         // 0x4(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bDrawDebugLine;                                    // 0x5(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_19F1[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FHitResult                            ReturnValue;                                       // 0x8(0x88)(Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function Backrooms.MapEditorHandlerComponent.HasValidReturnPawn
struct UMapEditorHandlerComponent_HasValidReturnPawn_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// Function Backrooms.MapEditorHandlerComponent.GetSnapAmount
struct UMapEditorHandlerComponent_GetSnapAmount_Params
{
public:
	struct FMapEditorSnapping                    ReturnValue;                                       // 0x0(0xC)(Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function Backrooms.MapEditorHandlerComponent.GetReplicationRate
struct UMapEditorHandlerComponent_GetReplicationRate_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function Backrooms.MapEditorHandlerComponent.GetGizmoType
struct UMapEditorHandlerComponent_GetGizmoType_Params
{
public:
	enum class EGizmoType                        ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// Function Backrooms.MapEditorHandlerComponent.GetActorTransform
struct UMapEditorHandlerComponent_GetActorTransform_Params
{
public:
	struct FTransform                            ReturnValue;                                       // 0x0(0x30)(Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function Backrooms.MapEditorHandlerComponent.GetActorName
struct UMapEditorHandlerComponent_GetActorName_Params
{
public:
	class FString                                ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// Function Backrooms.MapEditorInterface.OnScaleChanged
struct IMapEditorInterface_OnScaleChanged_Params
{
public:
	struct FVector                               NewScale;                                          // 0x0(0xC)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function Backrooms.MapEditorInterface.OnMaterialLoaded
struct IMapEditorInterface_OnMaterialLoaded_Params
{
public:
	struct FMapEditorItemMaterial                MapEditorItemMaterial;                             // 0x0(0x20)(Parm, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function Backrooms.MapEditorStatics.SpawnMapItemsFromJson
struct UMapEditorStatics_SpawnMapItemsFromJson_Params
{
public:
	class AActor*                                WorldActor;                                        // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                JsonString;                                        // 0x8(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function Backrooms.MapEditorStatics.SpawnMapItems
struct UMapEditorStatics_SpawnMapItems_Params
{
public:
	class AActor*                                WorldActor;                                        // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FMapEditorItems                       MapItems;                                          // 0x8(0x10)(Parm, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function Backrooms.MapEditorStatics.SetMaterials
struct UMapEditorStatics_SetMaterials_Params
{
public:
	struct FMapEditorItemMaterial                MapEditorItemMaterial;                             // 0x0(0x20)(ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function Backrooms.MapEditorStatics.SerializeLevel
struct UMapEditorStatics_SerializeLevel_Params
{
public:
	class AActor*                                WorldActor;                                        // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Success;                                           // 0x8(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_19F6[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                ReturnValue;                                       // 0x10(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x50 (0x50 - 0x0)
// Function Backrooms.MapEditorStatics.SaveMapToFile
struct UMapEditorStatics_SaveMapToFile_Params
{
public:
	class AActor*                                WorldActor;                                        // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                MapDirectory;                                      // 0x8(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                MapName;                                           // 0x18(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                StringToSave;                                      // 0x28(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                FullMapName;                                       // 0x38(0x10)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x48(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_19F7[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// Function Backrooms.MapEditorStatics.RemoveExtension
struct UMapEditorStatics_RemoveExtension_Params
{
public:
	class FString                                String;                                            // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ReturnValue;                                       // 0x10(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x60 (0x60 - 0x0)
// Function Backrooms.MapEditorStatics.LoadMapFromFile
struct UMapEditorStatics_LoadMapFromFile_Params
{
public:
	class AActor*                                WorldActor;                                        // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                MapDirectory;                                      // 0x8(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                MapName;                                           // 0x18(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Extension;                                         // 0x28(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                OutString;                                         // 0x38(0x10)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                FullMapName;                                       // 0x48(0x10)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x58(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_19F8[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// Function Backrooms.MapEditorStatics.GetRealMapName
struct UMapEditorStatics_GetRealMapName_Params
{
public:
	class FString                                MapName;                                           // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ReturnValue;                                       // 0x10(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// Function Backrooms.MapEditorStatics.GetMapList
struct UMapEditorStatics_GetMapList_Params
{
public:
	class AActor*                                WorldActor;                                        // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Directory;                                         // 0x8(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bCutLevelname;                                     // 0x18(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bShowAllMaps;                                      // 0x19(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_19F9[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class FString>                        ReturnValue;                                       // 0x20(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// Function Backrooms.MapEditorStatics.DoesMapExist
struct UMapEditorStatics_DoesMapExist_Params
{
public:
	class AActor*                                WorldActor;                                        // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                MapDirectory;                                      // 0x8(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                MapName;                                           // 0x18(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x28(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_19FA[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x28 - 0x0)
// Function Backrooms.MapEditorStatics.DeSerializeLevel
struct UMapEditorStatics_DeSerializeLevel_Params
{
public:
	class FString                                JsonString;                                        // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Success;                                           // 0x10(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_19FB[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FMapEditorItems                       ReturnValue;                                       // 0x18(0x10)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function Backrooms.MapEditorStatics.ClearMap
struct UMapEditorStatics_ClearMap_Params
{
public:
	class AActor*                                WorldActor;                                        // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function Backrooms.MissionData.SetTimeCompleted
struct UMissionData_SetTimeCompleted_Params
{
public:
	float                                        Time;                                              // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function Backrooms.MotionScannerComponent.SetNewScanDistance
struct UMotionScannerComponent_SetNewScanDistance_Params
{
public:
	float                                        SetDistance;                                       // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// DelegateFunction Backrooms.MotionScannerComponent.ScannerWaveUpdateDelegate__DelegateSignature
struct UMotionScannerComponent_ScannerWaveUpdateDelegate__DelegateSignature_Params
{
public:
	TArray<struct FTargetsStruct>                OutTargets;                                        // 0x0(0x10)(Parm, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FTelemetryStruct                      OutTelemetry;                                      // 0x10(0x8)(Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function Backrooms.PushableActor.GetRightBoundingPoints
struct APushableActor_GetRightBoundingPoints_Params
{
public:
	bool                                         InInvert;                                          // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1A03[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FVector>                       ReturnValue;                                       // 0x8(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function Backrooms.PushableActor.GetForwardBoundingPoints
struct APushableActor_GetForwardBoundingPoints_Params
{
public:
	bool                                         InInvert;                                          // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1A04[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FVector>                       ReturnValue;                                       // 0x8(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function Backrooms.PushableActor.GetClosesPoint
struct APushableActor_GetClosesPoint_Params
{
public:
	class AActor*                                InActor;                                           // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               ReturnValue;                                       // 0x8(0xC)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1A05[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x4 (0x4 - 0x0)
// Function Backrooms.RadarPlayerComponent.SetNewScanDistance
struct URadarPlayerComponent_SetNewScanDistance_Params
{
public:
	float                                        SetDistance;                                       // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// DelegateFunction Backrooms.RadarPlayerComponent.ScannerWaveUpdateDelegate__DelegateSignature
struct URadarPlayerComponent_ScannerWaveUpdateDelegate__DelegateSignature_Params
{
public:
	TArray<struct FRadarTargetStruct>            OutTargets;                                        // 0x0(0x10)(Parm, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FTelemetryStruct                      OutTelemetry;                                      // 0x10(0x8)(Parm, NoDestructor, NativeAccessSpecifierPublic)
};

}
}



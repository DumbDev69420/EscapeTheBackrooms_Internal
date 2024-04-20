#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// Class Backrooms.AI_ObjectWC
class UAI_ObjectWC : public UObject
{
public:

	static class UClass* StaticClass();
	static class UAI_ObjectWC* GetDefaultObj();

	void StartExecute();
	void OnUpdate();
	bool GetWeight();
	void FinishExecute();
};

// 0x0 (0x28 - 0x28)
// Class Backrooms.BackroomsBPFunctionLibrary
class UBackroomsBPFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UBackroomsBPFunctionLibrary* GetDefaultObj();

	void SetLogValue(const class FString& Key, const class FString& Value);
	void SetCurrentLevelLogs(const class FString& LevelName);
	void SaveToClipboard(const class FString& ToClipboard);
	void ResetWorldTime(class AGameMode* GameMode);
	void ResetInputSettings();
	void ReloadBindings();
	class UTimelineComponent* PlayRate(class UTimelineComponent* Timeline, float Sec);
	float LoadXP();
	void K2_IsTearingDown(class UObject* Caller, bool* IsTearingDown);
	bool IsNoHMDMode();
	int32 GetSystemTimeSeconds(const struct FDateTime& DateTime);
	TArray<struct FVector> GetSplinePoints(class USplineComponent* SplineComponent);
	TArray<class FString> GetSaveGameSlotsByType(const class FString& Prefix);
	TArray<class APlayerState*> GetPlayerStateArray(class AGameStateBase* GameState);
	int32 GetIndexOfClosestSplinePoint(class USplineComponent* SplineComponent, const struct FVector& WorldLocation);
	struct FDateTime GetDateFromSeconds(int32 Seconds);
	TArray<class FString> GetAllSaveGameSlotNames();
	class FName DetectCurrentGesture(const TArray<float>& PoseFingerCurls, class UOpenInputGestureDatabase* GesturesDB);
	void DeleteInputSettings();
	void ClearVoice();
	void ClearCharacterFloor(class ACharacter* Character);
	bool CanNavigationReachPoint(class APawn* Pawn, const struct FVector& StartLocation, const struct FVector& EndLocation);
	float AddXP(float XpToAdd);
};

// 0xD8 (0x188 - 0xB0)
// Class Backrooms.BoatComponent
class UBoatComponent : public UActorComponent
{
public:
	TArray<struct FXShipFloater>                 XShipFloaters;                                     // 0xB0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
	TArray<struct FXShipEngine>                  XShipEngines;                                      // 0xC0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
	float                                        WaterDensity;                                      // 0xD0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        AirDensity;                                        // 0xD4(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        WaterWorldZ;                                       // 0xD8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bCustomShipBoundsRadius;                           // 0xDC(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_19B1[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        ShipBoundsRadius;                                  // 0xE0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        InWaterLinearDamping;                              // 0xE4(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        OutWaterLinearDamping;                             // 0xE8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        InWaterAngularDamping;                             // 0xEC(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        OutWaterAngularDamping;                            // 0xF0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MovementAccelerationSpeed;                         // 0xF4(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MovementBrakingSpeed;                              // 0xF8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MovementSideDampingSpeed;                          // 0xFC(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bOrientRotationToMovement;                         // 0x100(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bCanMoveBackwardWithOrientRotation;                // 0x101(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_19B2[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        ToleranceForMoveBackwardWithOrientRotation;        // 0x104(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaxRotationSpeed;                                  // 0x108(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        RotationAccelerationSpeed;                         // 0x10C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        RotationBrakingSpeed;                              // 0x110(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bMultiplyRotationBySpeed;                          // 0x114(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_19B3[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        SpeedForMaxRotation;                               // 0x118(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bEnableStabilization;                              // 0x11C(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bEnableStabilizationInAir;                         // 0x11D(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_19B4[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        InAirAngularStabilizationSpeed;                    // 0x120(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        InAirAngularStabilizationDamping;                  // 0x124(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        AngularStabilizationSpeed;                         // 0x128(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        AngularStabilizationDamping;                       // 0x12C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        LinearStabilizationDamping;                        // 0x130(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bSyncMovement;                                     // 0x134(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_19B5[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        SendPacketInterval;                                // 0x138(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ClientSyncSpeed;                                   // 0x13C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bForceReplication;                                 // 0x140(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_19B6[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRepXShipMovement                     RepXShipMovement;                                  // 0x144(0x30)(Net, NoDestructor, Protected, NativeAccessSpecifierProtected)
	float                                        SendPacketIntervalLocal;                           // 0x174(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FVector                               MovementInput;                                     // 0x178(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        RotationInput;                                     // 0x184(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UBoatComponent* GetDefaultObj();

	void Server_PassMovementInfo(struct FRepXShipMovement& NewRepXShipMovement);
	bool IsEngineInWater();
	class ABoatPawn* GetXShipPawn();
	float GetShipBoundsRadius();
	void EnableAllFloaters();
	void EnableAllEngines();
	void DisableAllFloaters();
	void DisableAllEngines();
};

// 0x60 (0x2E0 - 0x280)
// Class Backrooms.InteractablePawn
class AInteractablePawn : public APawn
{
public:
	uint8                                        Pad_19B8[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class USceneComponent*                       SceneComponent;                                    // 0x288(0x8)(Edit, BlueprintVisible, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UStaticMeshComponent*                  StaticMesh;                                        // 0x290(0x8)(Edit, BlueprintVisible, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         IsUsable;                                          // 0x298(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         WasUsed;                                           // 0x299(0x1)(BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_19B9[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        InteractDelay;                                     // 0x29C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               VROffset;                                          // 0x2A0(0xC)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ShouldCheck;                                       // 0x2AC(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         HideCursor;                                        // 0x2AD(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ShouldHidePlayer;                                  // 0x2AE(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ShouldStopMovement;                                // 0x2AF(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class ACharacter*                            InteractingPlayer;                                 // 0x2B0(0x8)(Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class APlayerController*                     InteractingController;                             // 0x2B8(0x8)(Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_19BA[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UInteractableCameraComponent*          InteractableCameraComponent;                       // 0x2C8(0x8)(Edit, BlueprintVisible, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UMotionControllerComponent*            LeftGrip;                                          // 0x2D0(0x8)(Edit, BlueprintVisible, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UMotionControllerComponent*            RightGrip;                                         // 0x2D8(0x8)(Edit, BlueprintVisible, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class AInteractablePawn* GetDefaultObj();

	void ToggleMouse(bool bHide);
	void SetUsingVR(class ACharacter* Character, bool bPossess);
	void SetCameraPostProcessing(class ACharacter* Character);
	void ResetUsage();
	void OnVRPossess(bool bPossess);
	void OnUsedServer(class ACharacter* Character);
	void OnUsedNotify();
	void OnUsedMulticast();
	void OnUsedAll();
	void OnUnPossess();
	void OnStopInteracting();
	void OnStartInteracting(class ACharacter* Character);
	void OnRep_WasUsed();
	void OnPossess();
	void OnHiddenPossess(class ACharacter* Character);
	void OnAttemptUse(bool CanUse);
	void BlockUsage();
};

// 0x20 (0x300 - 0x2E0)
// Class Backrooms.BoatPawn
class ABoatPawn : public AInteractablePawn
{
public:
	class UBoxComponent*                         RootBoxComponent;                                  // 0x2E0(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UArrowComponent*                       ArrowComponent;                                    // 0x2E8(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UBoatComponent*                        BoatComponent;                                     // 0x2F0(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UStaticMeshComponent*                  BoatMaskMesh;                                      // 0x2F8(0x8)(Edit, BlueprintVisible, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class ABoatPawn* GetDefaultObj();

	class UBoatComponent* GetXShipComponent();
	float GetWaterWorldZ(const struct FVector2D& InLocation);
	struct FVector GetWaterNormal(const struct FVector2D& InLocation);
	float GetWaterDensity(const struct FVector2D& InLocation);
	void AddRotationInput(float ScaleValue);
};

// 0x28 (0x248 - 0x220)
// Class Backrooms.InteractableActor
class AInteractableActor : public AActor
{
public:
	uint8                                        Pad_19BB[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class USceneComponent*                       SceneComponent;                                    // 0x228(0x8)(Edit, BlueprintVisible, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UStaticMeshComponent*                  StaticMesh;                                        // 0x230(0x8)(Edit, BlueprintVisible, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class USoundBase*                            UsedSound;                                         // 0x238(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         IsUsable;                                          // 0x240(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         WasUsed;                                           // 0x241(0x1)(BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_19BC[0x6];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class AInteractableActor* GetDefaultObj();

	void ResetUsage();
	void OnUsedServer();
	void OnUsedNotify();
	void OnUsedMulticast();
	void OnUsedAll();
	void OnRep_WasUsed();
	void BlockUsage();
};

// 0x0 (0x248 - 0x248)
// Class Backrooms.ClientInteractableActor
class AClientInteractableActor : public AInteractableActor
{
public:

	static class UClass* StaticClass();
	static class AClientInteractableActor* GetDefaultObj();

	void OnUsed();
};

// 0x0 (0x2E0 - 0x2E0)
// Class Backrooms.ClientInteractablePawn
class AClientInteractablePawn : public AInteractablePawn
{
public:

	static class UClass* StaticClass();
	static class AClientInteractablePawn* GetDefaultObj();

	void OnUsed();
};

// 0x0 (0x260 - 0x260)
// Class Backrooms.CrosshairWidget
class UCrosshairWidget : public UUserWidget
{
public:

	static class UClass* StaticClass();
	static class UCrosshairWidget* GetDefaultObj();

};

// 0x8 (0x268 - 0x260)
// Class Backrooms.CustomUserWidget
class UCustomUserWidget : public UUserWidget
{
public:
	class UCanvasPanel*                          InventoryPanel;                                    // 0x260(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UCustomUserWidget* GetDefaultObj();

	void ToggleInventory(bool IsVisible);
	void SetHotbarSlot(int32 ItemSlot);
	bool RefreshInventory();
};

// 0x38 (0x258 - 0x220)
// Class Backrooms.DroppedItem
class ADroppedItem : public AActor
{
public:
	uint8                                        Pad_19BD[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UStaticMeshComponent*                  ItemMesh;                                          // 0x228(0x8)(Edit, BlueprintVisible, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  ID;                                                // 0x230(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         StartWithPhysicsEnabled;                           // 0x238(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         CanPickup;                                         // 0x239(0x1)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_19BE[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class USceneComponent*                       SceneComponent;                                    // 0x240(0x8)(Edit, BlueprintVisible, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FTimerHandle                          TimerHandle;                                       // 0x248(0x8)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FTimerHandle                          EvaluatePhysicsTimerHandle;                        // 0x250(0x8)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class ADroppedItem* GetDefaultObj();

	void UpdatePhysicsLocation();
	void StopPhysics();
	void OnEndFocus();
	void OnBeginFocus();
	void EvaluatePhysics();
};

// 0x0 (0x258 - 0x258)
// Class Backrooms.DryLandVolume
class ADryLandVolume : public AVolume
{
public:

	static class UClass* StaticClass();
	static class ADryLandVolume* GetDefaultObj();

};

// 0x8 (0x200 - 0x1F8)
// Class Backrooms.EnvQueryTest_CheckVisibility
class UEnvQueryTest_CheckVisibility : public UEnvQueryTest
{
public:
	enum class EEnvTestDot                       TestMode;                                          // 0x1F8(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_19BF[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UEnvQueryTest_CheckVisibility* GetDefaultObj();

};

// 0x10 (0x7E0 - 0x7D0)
// Class Backrooms.FancyCameraComponent
class UFancyCameraComponent : public UCameraComponent
{
public:
	uint8                                        bLockRotToHmd : 1;                                 // Mask: 0x1, PropSize: 0x10x7D0(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bUseLateUpdate : 1;                                // Mask: 0x2, PropSize: 0x10x7D0(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_19C0[0xF];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UFancyCameraComponent* GetDefaultObj();

};

// 0x58 (0x510 - 0x4B8)
// Class Backrooms.FancyCharacter
class AFancyCharacter : public ACharacter
{
public:
	bool                                         CanMove;                                           // 0x4B8(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_19C1[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        TraceLength;                                       // 0x4BC(0x4)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsDead;                                           // 0x4C0(0x1)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         IsUsingItem;                                       // 0x4C1(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         IsLeaning;                                         // 0x4C2(0x1)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         CanCollide;                                        // 0x4C3(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, EditConst, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         IsOverlapOnly;                                     // 0x4C4(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, EditConst, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_19C2[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ADroppedItem*                          CurrentFocusedItem;                                // 0x4C8(0x8)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AInteractablePawn*                     CurrentInteractingPawn;                            // 0x4D0(0x8)(Edit, BlueprintVisible, Net, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class APushableActor*                        CurrentPushableActor;                              // 0x4D8(0x8)(Edit, BlueprintVisible, Net, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UFancyCameraComponent*                 CameraComponent;                                   // 0x4E0(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UFancySpringArmComponent*              SpringArm;                                         // 0x4E8(0x8)(Edit, BlueprintVisible, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class USkeletalMeshComponent*                Arms;                                              // 0x4F0(0x8)(Edit, BlueprintVisible, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_19C3[0x18];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class AFancyCharacter* GetDefaultObj();

	void TryPickup();
	void TogglePlayerVisibility(bool IsHidden);
	void TogglePlayerLegs(bool IsHidden);
	void ToggleBlur(bool ShouldBlur);
	void StopPushing();
	void SetIsOverlapOnly(bool ShouldOverlapOnly);
	void SetCanCollide(bool ShouldCollide);
	void OnSanityUpdate(float Sanity);
	void OnRep_IsOverlapOnly();
	void OnRep_CanCollide();
	void KillPlayer();
	void InteractCallBackVR(class AActor* Actor);
	void Interact(class AActor* Actor);
	void HideItem(bool IsVisible);
	void CheckSpawnedItems();
	void CheckPawn();
	void ChangeCrosshairVisibility(bool IsVisible);
};

// 0x20 (0x248 - 0x228)
// Class Backrooms.FancyGameInstance
class UFancyGameInstance : public UAdvancedFriendsGameInstance
{
public:
	enum class EEventType                        CurrentEvent;                                      // 0x228(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_19C5[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class USteamManager*                         SteamManager;                                      // 0x230(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         IsSteamOverlayActive;                              // 0x238(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_19C6[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UMissionData*                          MissionData;                                       // 0x240(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UFancyGameInstance* GetDefaultObj();

	void UpdateCurrentGameLanguage();
	void ResetAchievements();
	void OnSteamOverlayIsActive(bool IsOverlayActive);
	void InitializeStats();
	bool InitializeCPPElements();
	class FString GetCurrentGameLanguage();
	void CreateMission(const class FString& TargetEscapeLevel, float LevelBaseXP, float LevelTimeLimit, const class FString& MissionStructRowName);
	struct FMissionStructure CompleteMission(float TimeCompleted);
	void CheckCurrentEvent();
};

// 0x10 (0x318 - 0x308)
// Class Backrooms.FancyGameMode
class AFancyGameMode : public AGameMode
{
public:
	float                                        SanityDecrementAmount;                             // 0x308(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bShouldLowerSanity;                                // 0x30C(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_19C7[0xB];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class AFancyGameMode* GetDefaultObj();

	void OnDecreaseSanity();
};

// 0x10 (0xB00 - 0xAF0)
// Class Backrooms.FancyMovementComponent
class UFancyMovementComponent : public UCharacterMovementComponent
{
public:
	uint8                                        Pad_19C8[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        MaxSprintSpeed;                                    // 0xAF4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsSprinting;                                      // 0xAF8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_19C9[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UFancyMovementComponent* GetDefaultObj();

	void SetSprinting(bool Sprint);
};

// 0x0 (0x570 - 0x570)
// Class Backrooms.FancyPlayerController
class AFancyPlayerController : public APlayerController
{
public:

	static class UClass* StaticClass();
	static class AFancyPlayerController* GetDefaultObj();

	void OnPlayerTravel();
	float GetObjectScreenRadius(class UStaticMeshComponent* MeshComponent);
};

// 0x18 (0x338 - 0x320)
// Class Backrooms.FancyPlayerState
class AFancyPlayerState : public APlayerState
{
public:
	class UInventoryComponent*                   InventoryComponent;                                // 0x320(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Sanity;                                            // 0x328(0x4)(Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaxSanity;                                         // 0x32C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ShouldLowerSanity;                                 // 0x330(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_19CB[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class AFancyPlayerState* GetDefaultObj();

	void RemoveSanity(float Amount);
	void OnRep_Sanity();
	void OnKillPlayer();
	void AddSanity(float Amount);
};

// 0x30 (0x2B0 - 0x280)
// Class Backrooms.FancySpringArmComponent
class UFancySpringArmComponent : public USpringArmComponent
{
public:
	float                                        WalkCameraLagSpeed;                                // 0x280(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        WalkCameraLagMaxDistance;                          // 0x284(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SprintCameraLagSpeed;                              // 0x288(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SprintCameraLagMaxDistance;                        // 0x28C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        RecoverCameraLagSpeed;                             // 0x290(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         IsThermometer;                                     // 0x294(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_19CC[0x1B];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UFancySpringArmComponent* GetDefaultObj();

};

// 0x2F8 (0x800 - 0x508)
// Class Backrooms.GripMotionControllerComponent
class UGripMotionControllerComponent : public UMotionControllerComponent
{
public:
	bool                                         bScaleTracking;                                    // 0x508(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_19CD[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               TrackingScaler;                                    // 0x50C(0xC)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bLimitMinHeight;                                   // 0x518(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_19CE[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        MinimumHeight;                                     // 0x51C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bLimitMaxHeight;                                   // 0x520(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_19CF[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        MaximumHeight;                                     // 0x524(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bOffsetByHMD;                                      // 0x528(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bLeashToHMD;                                       // 0x529(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_19D0[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        LeashRange;                                        // 0x52C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_19D1[0x40];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         bSmoothHandTracking;                               // 0x570(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_19D2[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         bSmoothWithEuroLowPassFunction;                    // 0x572(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_19D3[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        SmoothingSpeed;                                    // 0x574(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_19D4[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FBPEuroLowPassFilterTrans             EuroSmoothingParams;                               // 0x580(0x150)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_19D5[0x30];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	enum class EVRVelocityType                   VelocityCalculationType;                           // 0x700(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bSampleVelocityInWorldSpace;                       // 0x701(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_19D6[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        VelocitySamples;                                   // 0x704(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_19D7[0x20];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         bOffsetByControllerProfile;                        // 0x728(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_19D8[0x37];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            ReplicatedControllerTransform;                     // 0x760(0x30)(Edit, BlueprintVisible, BlueprintReadOnly, Net, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, NativeAccessSpecifierPublic)
	struct FTransform                            LastUpdatesTransform;                              // 0x790(0x30)(Edit, BlueprintVisible, BlueprintReadOnly, EditConst, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_19D9[0x1C];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        ControllerNetUpdateRate;                           // 0x7DC(0x4)(Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_19DA[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         bSmoothReplicatedMotion;                           // 0x7E4(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bReplicateWithoutTracking;                         // 0x7E5(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_19DB[0x1A];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UGripMotionControllerComponent* GetDefaultObj();

	void Server_SendControllerTransform(const struct FTransform& NewTransform);
	void OnRep_ReplicatedControllerTransform();
	void GetPhysicsVelocity(struct FVector* AngularVelocity, struct FVector* LinearVelocity);
	bool BP_IsLocallyControlled();
};

// 0x78 (0x298 - 0x220)
// Class Backrooms.InspectableActor
class AInspectableActor : public AActor
{
public:
	class FText                                  Name;                                              // 0x220(0x18)(NativeAccessSpecifierPublic)
	class FName                                  Description;                                       // 0x238(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Quantity;                                          // 0x240(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_19DC[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ACharacter*                            PlayerReference;                                   // 0x248(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        CameraDistance;                                    // 0x250(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_19DD[0xC];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTimerHandle                          BlurTimerHandle;                                   // 0x260(0x8)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_19DE[0x10];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	class USceneComponent*                       SceneComponent;                                    // 0x278(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class USceneComponent*                       FocusTarget;                                       // 0x280(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UStaticMeshComponent*                  Mesh2;                                             // 0x288(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCameraComponent*                      InspectionCamera;                                  // 0x290(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class AInspectableActor* GetDefaultObj();

	void SetViewing();
	void SetPlayerRef(class ACharacter* Ref);
	void SetCameraLocation(class UCameraComponent* CameraComponent);
	class UStaticMeshComponent* GetMesh();
};

// 0x0 (0x7D0 - 0x7D0)
// Class Backrooms.InteractableCameraComponent
class UInteractableCameraComponent : public UCameraComponent
{
public:

	static class UClass* StaticClass();
	static class UInteractableCameraComponent* GetDefaultObj();

};

// 0x10 (0x4F0 - 0x4E0)
// Class Backrooms.InteractableComponent
class UInteractableComponent : public UStaticMeshComponent
{
public:
	uint8                                        Pad_19DF[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         IsUsable;                                          // 0x4E8(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         WasUsed;                                           // 0x4E9(0x1)(BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_19E0[0x6];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UInteractableComponent* GetDefaultObj();

	void ResetUsage();
	void OnUsedServer(class ACharacter* Character);
	void OnUsedNotify();
	void OnUsedMulticast();
	void OnUsedAll();
	void OnRep_WasUsed();
	void BlockUsage();
};

// 0x0 (0x28 - 0x28)
// Class Backrooms.InteractableInterface
class IInteractableInterface : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IInteractableInterface* GetDefaultObj();

	void OnActorUsed(class ACharacter* Character);
};

// 0x20 (0xD0 - 0xB0)
// Class Backrooms.InventoryComponent
class UInventoryComponent : public UActorComponent
{
public:
	int32                                        InventorySize;                                     // 0xB0(0x4)(BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_19E4[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UInventoryItem*>                Inventory2;                                        // 0xB8(0x10)(Edit, BlueprintVisible, Net, ZeroConstructor, EditConst, NativeAccessSpecifierPublic)
	class AItemActor*                            EquippedItem;                                      // 0xC8(0x8)(BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UInventoryComponent* GetDefaultObj();

	void SwapInventoryItems(int32 FirstIdx, int32 SecondIdx);
	void RemoveFromInventory(class UInventoryItem* Item);
	bool IsSlotEmpty(int32 SlotIndex);
	class UInventoryItem* GetItemAtSlot(int32 SlotIndex);
	void DropItem(uint8 Slot);
	bool AddToInventory(class UInventoryItem* Item);
};

// 0x70 (0x98 - 0x28)
// Class Backrooms.InventoryItem
class UInventoryItem : public UObject
{
public:
	struct FItemStructure                        Structure;                                         // 0x28(0x68)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	int32                                        Quantity;                                          // 0x90(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_19E5[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UInventoryItem* GetDefaultObj();

};

// 0xA0 (0x2C0 - 0x220)
// Class Backrooms.ItemActor
class AItemActor : public AActor
{
public:
	struct FItemStructure                        Structure;                                         // 0x220(0x68)(BlueprintVisible, ExposeOnSpawn, NativeAccessSpecifierPublic)
	int32                                        Quantity;                                          // 0x288(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         IsUseable;                                         // 0x28C(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bPlayUseAnimation;                                 // 0x28D(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_19E6[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class USceneComponent*                       SceneComponent;                                    // 0x290(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UStaticMeshComponent*                  Mesh2;                                             // 0x298(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimationAsset*                       IdleAnimation;                                     // 0x2A0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimationAsset*                       UseAnimation;                                      // 0x2A8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimationAsset*                       EquipMontage;                                      // 0x2B0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimationAsset*                       UnEquipMontage;                                    // 0x2B8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class AItemActor* GetDefaultObj();

	void Use();
	void CustomInventoryUse();
};

// 0x18 (0x238 - 0x220)
// Class Backrooms.Level0Generator
class ALevel0Generator : public AActor
{
public:
	class UStaticMesh*                           FloorMesh;                                         // 0x220(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UStaticMesh*                           WallMesh;                                          // 0x228(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UStaticMesh*                           CeilingMesh;                                       // 0x230(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class ALevel0Generator* GetDefaultObj();

	void Generate();
};

// 0x0 (0x28 - 0x28)
// Class Backrooms.LIDARBlueprintFunctionLibrary
class ULIDARBlueprintFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class ULIDARBlueprintFunctionLibrary* GetDefaultObj();

	bool FindCollisionUVSkeletalMesh(struct FHitResult& Hit, struct FVector2D* UV);
	struct FLIDARDotStruct CreateLiDarDot(class UObject* Caller, class UTextureRenderTarget2D* RenderTarget);
};

// 0xE0 (0x190 - 0xB0)
// Class Backrooms.LIDARComponent
class ULIDARComponent : public UActorComponent
{
public:
	FMulticastInlineDelegateProperty_            BP_ScannerTrace;                                   // 0xB0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            BP_UpdateColors;                                   // 0xC0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_19E8[0x14];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         bInScannerMode;                                    // 0xE4(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_19E9[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  MuzzleSocketName;                                  // 0xE8(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TMap<class FString, struct FColor>           AbbrevToColorMap;                                  // 0xF0(0x50)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
	float                                        ScannerSpread;                                     // 0x140(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_19EA[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        ScannerRange;                                      // 0x14C(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        RateOfScannerFire;                                 // 0x150(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_19EB[0xC];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                BeamColorAbbrv;                                    // 0x160(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FColor                                BeamColor;                                         // 0x170(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FColor                                KillModeColor;                                     // 0x174(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        BeamWidth;                                         // 0x178(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_19EC[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        BeamGlowAmount;                                    // 0x184(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DotGlowAmount;                                     // 0x188(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DotScaleFactor;                                    // 0x18C(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class ULIDARComponent* GetDefaultObj();

	void ShootReset();
	void ShootGun();
	void ShootAuto();
	struct FHitResult ScannerTrace(class UStaticMeshComponent* Mesh);
};

// 0x8 (0x4C0 - 0x4B8)
// Class Backrooms.MapEditorCharacter
class AMapEditorCharacter : public ACharacter
{
public:
	class UCameraComponent*                      CameraComponent;                                   // 0x4B8(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class AMapEditorCharacter* GetDefaultObj();

};

// 0x20 (0xB10 - 0xAF0)
// Class Backrooms.MapEditorCharacterMovement
class UMapEditorCharacterMovement : public UCharacterMovementComponent
{
public:
	bool                                         bCenterMouseOnStopMovementMode;                    // 0xAF0(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_19ED[0x13];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        MaxSpeedMultiplier;                                // 0xB04(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        MinSpeedMultiplier;                                // 0xB08(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_19EE[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UMapEditorCharacterMovement* GetDefaultObj();

	void Turn(float Value);
	void Server_SetSpeedMultiplier(float SpeedMultiplier);
	void MoveUp(float Value);
	void MoveRight(float Value);
	void MoveForward(float Value);
	void LookUp(float Value);
	bool InMovementMode();
	void Init();
	void IncreaseSpeedMultiplier(float IncreaseAmount);
	void EnterMovementMode(bool Enter);
	void DecreaseSpeedMultiplier(float DecreaseAmount);
};

// 0xA0 (0x2C0 - 0x220)
// Class Backrooms.MapEditorGizmo
class AMapEditorGizmo : public AActor
{
public:
	class UStaticMeshComponent*                  Origin;                                            // 0x220(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UStaticMeshComponent*                  ZAxis;                                             // 0x228(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UStaticMeshComponent*                  XAxis;                                             // 0x230(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UStaticMeshComponent*                  YAxis;                                             // 0x238(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UStaticMeshComponent*                  Yaw;                                               // 0x240(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UStaticMeshComponent*                  Roll;                                              // 0x248(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UStaticMeshComponent*                  Pitch;                                             // 0x250(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UStaticMeshComponent*                  ScaleZ;                                            // 0x258(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UStaticMeshComponent*                  ScaleX;                                            // 0x260(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UStaticMeshComponent*                  ScaleY;                                            // 0x268(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        MovementSlowdown;                                  // 0x270(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_19EF[0x4C];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class AMapEditorGizmo* GetDefaultObj();

};

// 0x90 (0x140 - 0xB0)
// Class Backrooms.MapEditorHandlerComponent
class UMapEditorHandlerComponent : public UActorComponent
{
public:
	enum class ECollisionChannel                 TraceCollisionChannel;                             // 0xB0(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_19F2[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                MapDirectory;                                      // 0xB8(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TSubclassOf<class AMapEditorGizmo>           GizmoClass;                                        // 0xC8(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        ReplicationRate;                                   // 0xD0(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_19F3[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                CurrentActor;                                      // 0xD8(0x8)(BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_19F4[0x38];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	struct FMapEditorSnapping                    SnapAmount;                                        // 0x118(0xC)(BlueprintVisible, BlueprintReadOnly, NoDestructor, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_19F5[0x1C];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UMapEditorHandlerComponent* GetDefaultObj();

	void UnpossessToReturnPawn();
	void Undo();
	void SpawnActor(TSubclassOf<class AActor> ActorClass);
	void ShowScale();
	void ShowRotation();
	void ShowMovement();
	void SetSnapAmount(const struct FMapEditorSnapping& SnappingAmounts);
	void SetReturnPawn(class APawn* Pawn);
	void SetActorTransform(const struct FTransform& NewTransform);
	void SetActor(class AActor* Actor);
	void Server_UnpossessToReturnPawn();
	void Server_SpawnActor(TSubclassOf<class AActor> ActorClass);
	void Server_ReplicateTransform(class AActor* Actor, const struct FTransform& Transform);
	void Server_DeleteActor(class AActor* Actor);
	void Release();
	void OnRep_CurrentActor();
	struct FHitResult MouseTrace(float Distance, bool* bHitGizmo, bool bDrawDebugLine);
	void Init();
	bool HasValidReturnPawn();
	void Grab();
	struct FMapEditorSnapping GetSnapAmount();
	float GetReplicationRate();
	enum class EGizmoType GetGizmoType();
	struct FTransform GetActorTransform();
	class FString GetActorName();
	void DeselectActor();
	void DeleteActor();
};

// 0x0 (0x28 - 0x28)
// Class Backrooms.MapEditorInterface
class IMapEditorInterface : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IMapEditorInterface* GetDefaultObj();

	void OnUndo();
	void OnScaleChanged(const struct FVector& NewScale);
	void OnRelease();
	void OnMaterialLoaded(const struct FMapEditorItemMaterial& MapEditorItemMaterial);
	void OnGrabbed();
	void OnDeleted();
};

// 0x0 (0x28 - 0x28)
// Class Backrooms.MapEditorStatics
class UMapEditorStatics : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UMapEditorStatics* GetDefaultObj();

	void SpawnMapItemsFromJson(class AActor* WorldActor, const class FString& JsonString);
	void SpawnMapItems(class AActor* WorldActor, const struct FMapEditorItems& MapItems);
	void SetMaterials(struct FMapEditorItemMaterial& MapEditorItemMaterial);
	class FString SerializeLevel(class AActor* WorldActor, bool* Success);
	bool SaveMapToFile(class AActor* WorldActor, const class FString& MapDirectory, const class FString& MapName, const class FString& StringToSave, class FString* FullMapName);
	class FString RemoveExtension(const class FString& String);
	bool LoadMapFromFile(class AActor* WorldActor, const class FString& MapDirectory, const class FString& MapName, const class FString& Extension, class FString* OutString, class FString* FullMapName);
	class FString GetRealMapName(const class FString& MapName);
	TArray<class FString> GetMapList(class AActor* WorldActor, const class FString& Directory, bool bCutLevelname, bool bShowAllMaps);
	bool DoesMapExist(class AActor* WorldActor, const class FString& MapDirectory, const class FString& MapName);
	struct FMapEditorItems DeSerializeLevel(const class FString& JsonString, bool* Success);
	void ClearMap(class AActor* WorldActor);
};

// 0x40 (0x68 - 0x28)
// Class Backrooms.MissionData
class UMissionData : public UObject
{
public:
	class FString                                TargetEscapeLevel;                                 // 0x28(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        LevelBaseXP;                                       // 0x38(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        LevelTimeLimit;                                    // 0x3C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        TimeCompleted;                                     // 0x40(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int32                                        PlayerDeaths;                                      // 0x44(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int32                                        EntitySightings;                                   // 0x48(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int32                                        LowSanityAmount;                                   // 0x4C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        XPPenalty;                                         // 0x50(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_19FC[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                MissionDataRowName;                                // 0x58(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UMissionData* GetDefaultObj();

	void SetTimeCompleted(float Time);
	void AddPlayerDeath();
	void AddLowSanityAmount();
	void AddEntitySighting();
};

// 0xB0 (0x160 - 0xB0)
// Class Backrooms.MotionScannerComponent
class UMotionScannerComponent : public UActorComponent
{
public:
	FMulticastInlineDelegateProperty_            OnScannerWaveUpdate;                               // 0xB0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	enum class EMotionComponentType              ComponentType;                                     // 0xC0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_19FD[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTargetStruct                         TargetParameters;                                  // 0xC8(0x18)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic)
	struct FScannerStruct                        ScannerParameters;                                 // 0xE0(0x20)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic)
	struct FTimerHandle                          RegisterComponent_Handle;                          // 0x100(0x8)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int32                                        TryRegister;                                       // 0x108(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_19FE[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AMotionScannerDirector*                ScannerDirector;                                   // 0x110(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<struct FTargetsStruct>                TargetsArr;                                        // 0x118(0x10)(ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	float                                        CheckTargetsRate;                                  // 0x128(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bIsLocalController;                                // 0x12C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_19FF[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FTargetsStruct>                VisibleTargetsArr;                                 // 0x130(0x10)(ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	TArray<struct FTargetsStruct>                LastTargetsArr;                                    // 0x140(0x10)(ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	struct FTelemetryStruct                      TelemetryScanner;                                  // 0x150(0x8)(NoDestructor, NativeAccessSpecifierPrivate)
	bool                                         bResetValue;                                       // 0x158(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1A00[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UMotionScannerComponent* GetDefaultObj();

	void StartWaveEvent();
	void SetNewScanDistance(float SetDistance);
	void ScannerWaveUpdateDelegate__DelegateSignature(const TArray<struct FTargetsStruct>& OutTargets, const struct FTelemetryStruct& OutTelemetry);
	void EndWaveEvent();
};

// 0x88 (0x2A8 - 0x220)
// Class Backrooms.MotionScannerDirector
class AMotionScannerDirector : public AActor
{
public:
	float                                        CheckMotionRate;                                   // 0x220(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1A01[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class AActor*>                        IgnoredActorsArr;                                  // 0x228(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TMap<class FString, struct FLIDARDotStruct>  NameToRTMap;                                       // 0x238(0x50)(BlueprintVisible, NativeAccessSpecifierPublic)
	TArray<class UMotionScannerComponent*>       AllMotionComponentsArr;                            // 0x288(0x10)(ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	struct FTimerHandle                          CheckMotion_Handle;                                // 0x298(0x8)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bIsLocalController;                                // 0x2A0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1A02[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class AMotionScannerDirector* GetDefaultObj();

	void CheckLIDARDots();
};

// 0x0 (0x258 - 0x258)
// Class Backrooms.NoClipVolume
class ANoClipVolume : public AVolume
{
public:

	static class UClass* StaticClass();
	static class ANoClipVolume* GetDefaultObj();

};

// 0x10 (0xC0 - 0xB0)
// Class Backrooms.PlayerStatsComponent
class UPlayerStatsComponent : public UActorComponent
{
public:
	TArray<struct FCollectible>                  Collectibles;                                      // 0xB0(0x10)(Edit, BlueprintVisible, Net, ZeroConstructor, EditConst, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UPlayerStatsComponent* GetDefaultObj();

};

// 0x8 (0x250 - 0x248)
// Class Backrooms.PushableActor
class APushableActor : public AInteractableActor
{
public:
	float                                        Density;                                           // 0x248(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1A06[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class APushableActor* GetDefaultObj();

	TArray<struct FVector> GetRightBoundingPoints(bool InInvert);
	TArray<struct FVector> GetForwardBoundingPoints(bool InInvert);
	struct FVector GetClosesPoint(class AActor* InActor);
};

// 0x98 (0x378 - 0x2E0)
// Class Backrooms.RadarMap
class ARadarMap : public AInteractablePawn
{
public:
	float                                        CheckMotionRate;                                   // 0x2E0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1A07[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class AActor*>                        IgnoredActorsArr;                                  // 0x2E8(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class URadarPlayerComponent*>         AllRadarComponentsArr;                             // 0x2F8(0x10)(ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	struct FTimerHandle                          CheckMotion_Handle;                                // 0x308(0x8)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bIsLocalController;                                // 0x310(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1A08[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTimerHandle                          RegisterComponent_Handle;                          // 0x318(0x8)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int32                                        TryRegister;                                       // 0x320(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1A09[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AMotionScannerDirector*                ScannerDirector;                                   // 0x328(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<struct FRadarTargetStruct>            TargetsArr;                                        // 0x330(0x10)(ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	float                                        CheckTargetsRate;                                  // 0x340(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1A0A[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FRadarTargetStruct>            VisibleTargetsArr;                                 // 0x348(0x10)(ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	TArray<struct FRadarTargetStruct>            LastTargetsArr;                                    // 0x358(0x10)(ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	struct FTelemetryStruct                      TelemetryScanner;                                  // 0x368(0x8)(NoDestructor, NativeAccessSpecifierPrivate)
	bool                                         bResetValue;                                       // 0x370(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1A0B[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        WaveMultiply;                                      // 0x374(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class ARadarMap* GetDefaultObj();

};

// 0xB0 (0x160 - 0xB0)
// Class Backrooms.RadarPlayerComponent
class URadarPlayerComponent : public UActorComponent
{
public:
	FMulticastInlineDelegateProperty_            OnScannerWaveUpdate;                               // 0xB0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	enum class EMotionComponentType              ComponentType;                                     // 0xC0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1A0C[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTargetStruct                         TargetParameters;                                  // 0xC8(0x18)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic)
	struct FScannerStruct                        ScannerParameters;                                 // 0xE0(0x20)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic)
	struct FTimerHandle                          RegisterComponent_Handle;                          // 0x100(0x8)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int32                                        TryRegister;                                       // 0x108(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1A0D[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ARadarMap*                             RadarMap;                                          // 0x110(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<struct FRadarTargetStruct>            TargetsArr;                                        // 0x118(0x10)(ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	float                                        CheckTargetsRate;                                  // 0x128(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bIsLocalController;                                // 0x12C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1A0E[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FRadarTargetStruct>            VisibleTargetsArr;                                 // 0x130(0x10)(ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	TArray<struct FRadarTargetStruct>            LastTargetsArr;                                    // 0x140(0x10)(ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	struct FTelemetryStruct                      TelemetryScanner;                                  // 0x150(0x8)(NoDestructor, NativeAccessSpecifierPrivate)
	bool                                         bResetValue;                                       // 0x158(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1A0F[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class URadarPlayerComponent* GetDefaultObj();

	void StartWaveEvent();
	void SetNewScanDistance(float SetDistance);
	void ScannerWaveUpdateDelegate__DelegateSignature(const TArray<struct FRadarTargetStruct>& OutTargets, const struct FTelemetryStruct& OutTelemetry);
	void EndWaveEvent();
};

// 0x28 (0x50 - 0x28)
// Class Backrooms.SteamManager
class USteamManager : public UObject
{
public:
	uint8                                        Pad_1A10[0x20];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	class UFancyGameInstance*                    FancyGameInstance;                                 // 0x48(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class USteamManager* GetDefaultObj();

};

// 0x0 (0x258 - 0x258)
// Class Backrooms.WalkingVolume
class AWalkingVolume : public AVolume
{
public:

	static class UClass* StaticClass();
	static class AWalkingVolume* GetDefaultObj();

};

}



#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x101 (0x401 - 0x300)
// BlueprintGeneratedClass BP_Raft.BP_Raft_C
class ABP_Raft_C : public ABoatPawn
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x300(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UBoxComponent*                         Box;                                               // 0x308(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  Paddle_low5;                                       // 0x310(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  Paddle_low4;                                       // 0x318(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  Paddle_low3;                                       // 0x320(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  Paddle_low2;                                       // 0x328(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  Paddle_low1;                                       // 0x330(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  Paddle_low;                                        // 0x338(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                SkeletalMesh1;                                     // 0x340(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                SkeletalMesh;                                      // 0x348(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        Bob_Buoyancy_09A010AE4051737158E0D2B6420B04E6;     // 0x350(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                Bob__Direction_09A010AE4051737158E0D2B6420B04E6;   // 0x354(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_282D[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTimelineComponent*                    Bob;                                               // 0x358(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Timeline_2_Alpha_872149EB4503E758C56B3A978B2D4407; // 0x360(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                Timeline_2__Direction_872149EB4503E758C56B3A978B2D4407; // 0x364(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_282E[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTimelineComponent*                    Timeline_2;                                        // 0x368(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                Timeline_1__Direction_996CFB8B42DC8384AED57E806C418599; // 0x370(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_282F[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTimelineComponent*                    Timeline_1;                                        // 0x378(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Timeline_0_X_16B2B6E74646A73BFE1BB4AEE61EAFF3;     // 0x380(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                Timeline_0__Direction_16B2B6E74646A73BFE1BB4AEE61EAFF3; // 0x384(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2830[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTimelineComponent*                    Timeline_0;                                        // 0x388(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsVisible;                                         // 0x390(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor)
	uint8                                        Pad_2831[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ABPCharacter_Demo_C*                   Player;                                            // 0x398(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        LookAtActorSequenceCounter;                        // 0x3A0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              PlayerCurrentRotation;                             // 0x3A4(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         Looking;                                           // 0x3B0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         CanMove;                                           // 0x3B1(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2832[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Offset;                                            // 0x3B4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        BoatSwayMultiplier;                                // 0x3B8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CameraSwayMultiplier;                              // 0x3BC(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               LastWaterZ;                                        // 0x3C0(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         DidPossess;                                        // 0x3CC(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor)
	uint8                                        Pad_2833[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               TeleportLoc;                                       // 0x3D0(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2834[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ABP_PoolWaterManager_C*                PoolWaterManager;                                  // 0x3E0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CanSway;                                           // 0x3E8(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2835[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ABP_Raft_Passengers_C*                 PassengerManager;                                  // 0x3F0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                TeleportLocation;                                  // 0x3F8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         StartTick;                                         // 0x400(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor)

	static class UClass* StaticClass();
	static class ABP_Raft_C* GetDefaultObj();

	void RemovePlague(class ABPCharacter_Demo_C* Player);
	void UpdateSpectators(class ABPCharacter_Demo_C* Player, TArray<class AActor*>& CallFunc_GetAttachedActors_OutActors, int32 Temp_int_Array_Index_Variable, int32 CallFunc_Array_Length_ReturnValue, class AActor* CallFunc_Array_Get_Item, class ABP_Spectator_C* K2Node_DynamicCast_AsBP_Spectator, bool K2Node_DynamicCast_bSuccess, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue);
	void OnRep_StartTick();
	void UpdateWaterLevel(bool CallFunc_IsLocallyControlled_ReturnValue);
	void OnRep_DidPossess(class UAC_Swimming_C* CallFunc_GetComponentByClass_ReturnValue, class UAC_Swimming_C* CallFunc_GetComponentByClass_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsLocallyControlled_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue);
	float GetWaterWorldZ(const struct FVector2D& InLocation);
	void SetInput(bool Enabled);
	void OnRep_IsVisible(bool CallFunc_Not_PreBool_ReturnValue);
	void Timeline_0__FinishedFunc();
	void Timeline_0__UpdateFunc();
	void Timeline_1__FinishedFunc();
	void Timeline_1__UpdateFunc();
	void Timeline_2__FinishedFunc();
	void Timeline_2__UpdateFunc();
	void Bob__FinishedFunc();
	void Bob__UpdateFunc();
	void InpActEvt_Interact_K2Node_InputActionEvent_0(const struct FKey& Key);
	void InpAxisEvt_LookUp_K2Node_InputAxisEvent_40(float AxisValue);
	void InpAxisEvt_Turn_K2Node_InputAxisEvent_47(float AxisValue);
	void InpAxisEvt_MoveForward_K2Node_InputAxisEvent_79(float AxisValue);
	void InpAxisEvt_MoveRight_K2Node_InputAxisEvent_90(float AxisValue);
	void ReceiveBeginPlay();
	void PlayScare();
	void StartSway();
	void Lookat2(class USkeletalMeshComponent* Mesh);
	void StartLookAt(const struct FRotator& StartRot, const struct FRotator& EndRot);
	void OnPossess();
	void ReceivePossessed(class AController* NewController);
	void UnPossess();
	void ReceiveUnpossessed(class AController* OldController);
	void FindLand();
	void OnQueryFinished(class UEnvQueryInstanceBlueprintWrapper* QueryInstance, enum class EEnvQueryStatus QueryStatus);
	void ResetDelay();
	void StartDelay();
	void StartBuoyancy();
	void StopBuoyancy();
	void InpAxisEvt_VRTurn_X_K2Node_InputAxisEvent_5(float AxisValue);
	void InpAxisEvt_VRTurn_Y_K2Node_InputAxisEvent_6(float AxisValue);
	void InpAxisEvt_VRMove_Y_K2Node_InputAxisEvent_7(float AxisValue);
	void InpAxisEvt_VRMove_X_K2Node_InputAxisEvent_8(float AxisValue);
	void TryUnpossess();
	void ActivateBoat();
	void BndEvt__BP_Raft_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult);
	void BndEvt__BP_Raft_Box_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
	void StopSwaying();
	void RestartSway();
	void OnActorUsed(class ACharacter* Character);
	void ExecuteUbergraph_BP_Raft(int32 EntryPoint, class ABPCharacter_Demo_C* K2Node_DynamicCast_AsBPCharacter_Demo, bool K2Node_DynamicCast_bSuccess, bool Temp_bool_IsClosed_Variable, float CallFunc_FInterpEaseInOut_ReturnValue, float CallFunc_Lerp_ReturnValue, bool CallFunc_HasAuthority_ReturnValue, float K2Node_InputAxisEvent_AxisValue_7, float K2Node_InputAxisEvent_AxisValue_6, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_FClamp_ReturnValue, const struct FRotator& CallFunc_MakeRotator_ReturnValue, const struct FRotator& CallFunc_MakeRotator_ReturnValue_1, float K2Node_InputAxisEvent_AxisValue_5, float K2Node_InputAxisEvent_AxisValue_4, const struct FVector& CallFunc_GetActorForwardVector_ReturnValue, const struct FRotator& CallFunc_GetControlRotation_ReturnValue, float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FRotator& CallFunc_MakeRotator_ReturnValue_2, const struct FKey& K2Node_InputActionEvent_Key, const struct FVector& CallFunc_GetForwardVector_ReturnValue, const struct FTransform& CallFunc_GetTransform_ReturnValue, const struct FVector& CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale, const struct FTransform& CallFunc_MakeTransform_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue_1, float CallFunc_Multiply_FloatFloat_ReturnValue_2, class ALevelSequenceActor* CallFunc_CreateLevelSequencePlayer_OutActor, class ULevelSequencePlayer* CallFunc_CreateLevelSequencePlayer_ReturnValue, class ABP_Fish_C* CallFunc_GetActorOfClass_ReturnValue, class UDefaultLevelSequenceInstanceData* K2Node_DynamicCast_AsDefault_Level_Sequence_Instance_Data, bool K2Node_DynamicCast_bSuccess_1, class USkeletalMeshComponent* K2Node_CustomEvent_Mesh, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, const struct FMovieSceneSequencePlaybackParams& K2Node_MakeStruct_MovieSceneSequencePlaybackParams, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, const struct FRotator& K2Node_CustomEvent_StartRot, const struct FRotator& K2Node_CustomEvent_EndRot, const struct FRotator& CallFunc_RLerp_ReturnValue, float CallFunc_GetWorldDeltaSeconds_ReturnValue, const struct FRotator& CallFunc_K2_GetComponentRotation_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue_3, float CallFunc_BreakRotator_Roll_1, float CallFunc_BreakRotator_Pitch_1, float CallFunc_BreakRotator_Yaw_1, float CallFunc_Multiply_FloatFloat_ReturnValue_4, const struct FRotator& CallFunc_K2_GetComponentRotation_ReturnValue_1, const struct FRotator& CallFunc_MakeRotator_ReturnValue_3, float CallFunc_BreakRotator_Roll_2, float CallFunc_BreakRotator_Pitch_2, float CallFunc_BreakRotator_Yaw_2, const struct FHitResult& CallFunc_K2_SetWorldRotation_SweepHitResult, const struct FRotator& CallFunc_MakeRotator_ReturnValue_4, const struct FHitResult& CallFunc_K2_SetWorldRotation_SweepHitResult_1, const struct FRotator& CallFunc_K2_GetComponentRotation_ReturnValue_2, float CallFunc_BreakRotator_Roll_3, float CallFunc_BreakRotator_Pitch_3, float CallFunc_BreakRotator_Yaw_3, const struct FRotator& CallFunc_K2_GetComponentRotation_ReturnValue_3, const struct FRotator& CallFunc_MakeRotator_ReturnValue_5, const struct FHitResult& CallFunc_K2_SetWorldRotation_SweepHitResult_2, const struct FHitResult& CallFunc_K2_SetWorldRotation_SweepHitResult_3, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue_1, const struct FHitResult& CallFunc_K2_AddRelativeRotation_SweepHitResult, const struct FRotator& CallFunc_FindLookAtRotation_ReturnValue, const struct FHitResult& CallFunc_K2_AddRelativeRotation_SweepHitResult_1, const struct FRotator& CallFunc_RInterpTo_ReturnValue, const struct FHitResult& CallFunc_K2_SetWorldRotation_SweepHitResult_4, float CallFunc_BreakRotator_Roll_4, float CallFunc_BreakRotator_Pitch_4, float CallFunc_BreakRotator_Yaw_4, float CallFunc_BreakRotator_Roll_5, float CallFunc_BreakRotator_Pitch_5, float CallFunc_BreakRotator_Yaw_5, float CallFunc_FClamp_ReturnValue_1, float CallFunc_FClamp_ReturnValue_2, const struct FRotator& CallFunc_MakeRotator_ReturnValue_6, const struct FRotator& CallFunc_MakeRotator_ReturnValue_7, const struct FHitResult& CallFunc_K2_SetRelativeRotation_SweepHitResult, const struct FHitResult& CallFunc_K2_SetRelativeRotation_SweepHitResult_1, class AController* K2Node_Event_NewController, bool CallFunc_IsLocallyControlled_ReturnValue, class AController* K2Node_Event_OldController, class UEnvQueryInstanceBlueprintWrapper* K2Node_CustomEvent_QueryInstance, enum class EEnvQueryStatus K2Node_CustomEvent_QueryStatus, bool CallFunc_EqualEqual_ByteByte_ReturnValue, class UEnvQueryInstanceBlueprintWrapper* CallFunc_RunEQSQuery_ReturnValue, TArray<struct FVector>& CallFunc_GetQueryResultsAsLocations_ResultLocations, bool CallFunc_GetQueryResultsAsLocations_ReturnValue, class ABPCharacter_Demo_C* K2Node_DynamicCast_AsBPCharacter_Demo_1, bool K2Node_DynamicCast_bSuccess_2, class UAC_Swimming_Zones_C* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FVector& CallFunc_Array_Random_OutItem, int32 CallFunc_Array_Random_OutIndex, int32 CallFunc_Array_Length_ReturnValue, const class FString& CallFunc_Conv_IntToString_ReturnValue, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue_2, const struct FRotator& CallFunc_FindLookAtRotation_ReturnValue_1, bool CallFunc_K2_TeleportTo_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, bool CallFunc_NotEqualExactly_VectorVector_ReturnValue, bool Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable, float CallFunc_BreakRotator_Roll_6, float CallFunc_BreakRotator_Pitch_6, float CallFunc_BreakRotator_Yaw_6, const struct FRotator& CallFunc_MakeRotator_ReturnValue_8, const struct FRotator& CallFunc_MakeRotator_ReturnValue_9, const struct FHitResult& CallFunc_K2_SetRelativeRotation_SweepHitResult_2, const class FString& CallFunc_Conv_RotatorToString_ReturnValue, class AFancyCharacter* K2Node_DynamicCast_AsFancy_Character, bool K2Node_DynamicCast_bSuccess_3, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue_3, const struct FVector& CallFunc_Add_VectorVector_ReturnValue_1, const struct FRotator& CallFunc_K2_GetActorRotation_ReturnValue, class UAC_Swimming_C* CallFunc_GetComponentByClass_ReturnValue_1, bool CallFunc_K2_TeleportTo_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_1, class ABPCharacter_Demo_C* K2Node_DynamicCast_AsBPCharacter_Demo_2, bool K2Node_DynamicCast_bSuccess_4, bool Temp_bool_Has_Been_Initd_Variable, bool Temp_bool_Has_Been_Initd_Variable_1, const struct FVector& CallFunc_GetActorForwardVector_ReturnValue_1, const struct FRotator& CallFunc_GetControlRotation_ReturnValue_1, float CallFunc_BreakRotator_Roll_7, float CallFunc_BreakRotator_Pitch_7, float CallFunc_BreakRotator_Yaw_7, const struct FRotator& CallFunc_MakeRotator_ReturnValue_10, const struct FVector& CallFunc_GetForwardVector_ReturnValue_1, float CallFunc_BreakRotator_Roll_8, float CallFunc_BreakRotator_Pitch_8, float CallFunc_BreakRotator_Yaw_8, float CallFunc_BreakRotator_Roll_9, float CallFunc_BreakRotator_Pitch_9, float CallFunc_BreakRotator_Yaw_9, float CallFunc_FClamp_ReturnValue_3, float CallFunc_FClamp_ReturnValue_4, const struct FRotator& CallFunc_MakeRotator_ReturnValue_11, const struct FRotator& CallFunc_MakeRotator_ReturnValue_12, const struct FHitResult& CallFunc_K2_SetRelativeRotation_SweepHitResult_3, const struct FHitResult& CallFunc_K2_SetRelativeRotation_SweepHitResult_4, float K2Node_InputAxisEvent_AxisValue_3, float K2Node_InputAxisEvent_AxisValue_2, float CallFunc_FClamp_ReturnValue_5, float CallFunc_Multiply_FloatFloat_ReturnValue_5, const struct FRotator& CallFunc_MakeRotator_ReturnValue_13, const struct FRotator& CallFunc_MakeRotator_ReturnValue_14, const struct FHitResult& CallFunc_K2_AddRelativeRotation_SweepHitResult_2, const struct FHitResult& CallFunc_K2_AddRelativeRotation_SweepHitResult_3, float K2Node_InputAxisEvent_AxisValue_1, float K2Node_InputAxisEvent_AxisValue, bool Temp_bool_IsClosed_Variable_1, bool CallFunc_HasAuthority_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_IsComponentTickEnabled_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OverlappedComponent_1, class AActor* K2Node_ComponentBoundEvent_OtherActor_1, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp_1, int32 K2Node_ComponentBoundEvent_OtherBodyIndex_1, bool K2Node_ComponentBoundEvent_bFromSweep, const struct FHitResult& K2Node_ComponentBoundEvent_SweepResult, class ABPCharacter_Demo_C* K2Node_DynamicCast_AsBPCharacter_Demo_3, bool K2Node_DynamicCast_bSuccess_5, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OverlappedComponent, class AActor* K2Node_ComponentBoundEvent_OtherActor, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp, int32 K2Node_ComponentBoundEvent_OtherBodyIndex, class ABPCharacter_Demo_C* K2Node_DynamicCast_AsBPCharacter_Demo_4, bool K2Node_DynamicCast_bSuccess_6, class ACharacter* K2Node_Event_Character, class ABPCharacter_Demo_C* K2Node_DynamicCast_AsBPCharacter_Demo_5, bool K2Node_DynamicCast_bSuccess_7);
};

}



#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xF4 (0x3F4 - 0x300)
// BlueprintGeneratedClass BP_RowBoat.BP_RowBoat_C
class ABP_RowBoat_C : public ABoatPawn
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x300(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UBoxComponent*                         Collision3;                                        // 0x308(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                         Collision2;                                        // 0x310(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                         Collision1;                                        // 0x318(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                         Collision;                                         // 0x320(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                         Collision4;                                        // 0x328(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  StaticMesh5;                                       // 0x330(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  StaticMesh4;                                       // 0x338(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                SkeletalMesh1;                                     // 0x340(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  StaticMesh3;                                       // 0x348(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  StaticMesh2;                                       // 0x350(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                SkeletalMesh;                                      // 0x358(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        Bob_Buoyancy_BBCAF16E44F03C8EA7F96D944744C90E;     // 0x360(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                Bob__Direction_BBCAF16E44F03C8EA7F96D944744C90E;   // 0x364(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2224[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTimelineComponent*                    Bob;                                               // 0x368(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Timeline_2_Alpha_F29818AD45D576B700E4C888ABCA1273; // 0x370(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                Timeline_2__Direction_F29818AD45D576B700E4C888ABCA1273; // 0x374(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2225[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTimelineComponent*                    Timeline_2;                                        // 0x378(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                Timeline_1__Direction_A8B0AB574F32E48C188E48BD0302DAFF; // 0x380(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2226[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTimelineComponent*                    Timeline_1;                                        // 0x388(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Timeline_0_X_72EF829B4333A04EF68203BDFCAE61CC;     // 0x390(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                Timeline_0__Direction_72EF829B4333A04EF68203BDFCAE61CC; // 0x394(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2227[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTimelineComponent*                    Timeline_0;                                        // 0x398(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsVisible;                                         // 0x3A0(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor)
	uint8                                        Pad_2228[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ABPCharacter_Demo_C*                   Player;                                            // 0x3A8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        LookAtActorSequenceCounter;                        // 0x3B0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              PlayerCurrentRotation;                             // 0x3B4(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         Looking;                                           // 0x3C0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         CanMove;                                           // 0x3C1(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2229[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Offset;                                            // 0x3C4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        BoatSwayMultiplier;                                // 0x3C8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CameraSwayMultiplier;                              // 0x3CC(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AEight_FFT_H_Ocean_Sim_C*              Ocean;                                             // 0x3D0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               LastWaterZ;                                        // 0x3D8(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         DidPossess;                                        // 0x3E4(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor)
	uint8                                        Pad_222A[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               TeleportLoc;                                       // 0x3E8(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_RowBoat_C* GetDefaultObj();

	void UpdateWaterLevel(bool CallFunc_IsLocallyControlled_ReturnValue, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, const struct FHitResult& CallFunc_K2_SetWorldLocation_SweepHitResult, const struct FHitResult& CallFunc_K2_SetWorldLocation_SweepHitResult_1);
	void OnRep_DidPossess(class UAC_Swimming_C* CallFunc_GetComponentByClass_ReturnValue, class UAC_Swimming_C* CallFunc_GetComponentByClass_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsLocallyControlled_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue);
	float GetWaterWorldZ_0(const struct FVector2D& InLocation, float CallFunc_GetWorldDeltaSeconds_ReturnValue, const struct FVector& CallFunc_GetComponentBounds_Origin, const struct FVector& CallFunc_GetComponentBounds_BoxExtent, float CallFunc_GetComponentBounds_SphereRadius, bool Temp_bool_Variable, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, float CallFunc_BreakVector_X_1, float CallFunc_BreakVector_Y_1, float CallFunc_BreakVector_Z_1, float CallFunc_Subtract_FloatFloat_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_BreakVector_X_2, float CallFunc_BreakVector_Y_2, float CallFunc_BreakVector_Z_2, bool CallFunc_IsValid_ReturnValue, const struct FVector& CallFunc_GetHeightAtComponent_Height, float CallFunc_BreakVector_X_3, float CallFunc_BreakVector_Y_3, float CallFunc_BreakVector_Z_3, float CallFunc_Add_FloatFloat_ReturnValue_1, bool CallFunc_Greater_FloatFloat_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue, const struct FVector& K2Node_Select_Default, const struct FVector& CallFunc_VInterpTo_ReturnValue);
	float GetWaterWorldZ(const struct FVector2D& InLocation, float CallFunc_GetWaterWorldZ_ReturnValue);
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
	void PlayWarning();
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
	void ExecuteUbergraph_BP_RowBoat(int32 EntryPoint, float K2Node_InputAxisEvent_AxisValue, const struct FKey& K2Node_InputActionEvent_Key, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, float CallFunc_FInterpEaseInOut_ReturnValue, float CallFunc_Lerp_ReturnValue, bool Temp_bool_IsClosed_Variable, bool CallFunc_HasAuthority_ReturnValue, float K2Node_InputAxisEvent_AxisValue_7, float K2Node_InputAxisEvent_AxisValue_6, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_FClamp_ReturnValue, const struct FRotator& CallFunc_MakeRotator_ReturnValue, const struct FRotator& CallFunc_MakeRotator_ReturnValue_1, bool Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable, float K2Node_InputAxisEvent_AxisValue_5, float K2Node_InputAxisEvent_AxisValue_4, const struct FVector& CallFunc_GetActorForwardVector_ReturnValue, const struct FRotator& CallFunc_GetControlRotation_ReturnValue, float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw, const struct FRotator& CallFunc_MakeRotator_ReturnValue_2, const struct FVector& CallFunc_GetForwardVector_ReturnValue, const struct FMovieSceneSequencePlaybackParams& K2Node_MakeStruct_MovieSceneSequencePlaybackParams, const struct FTransform& CallFunc_GetTransform_ReturnValue, const struct FVector& CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale, float CallFunc_Multiply_FloatFloat_ReturnValue_1, const struct FTransform& CallFunc_MakeTransform_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue_2, const struct FMovieSceneSequencePlaybackParams& K2Node_MakeStruct_MovieSceneSequencePlaybackParams_1, class ALevelSequenceActor* CallFunc_CreateLevelSequencePlayer_OutActor, class ULevelSequencePlayer* CallFunc_CreateLevelSequencePlayer_ReturnValue, class ABP_Fish_C* CallFunc_GetActorOfClass_ReturnValue, class UDefaultLevelSequenceInstanceData* K2Node_DynamicCast_AsDefault_Level_Sequence_Instance_Data, bool K2Node_DynamicCast_bSuccess, const struct FTransform& CallFunc_GetTransform_ReturnValue_1, class ALevelSequenceActor* CallFunc_CreateLevelSequencePlayer_OutActor_1, class ULevelSequencePlayer* CallFunc_CreateLevelSequencePlayer_ReturnValue_1, const struct FVector& CallFunc_BreakTransform_Location_1, const struct FRotator& CallFunc_BreakTransform_Rotation_1, const struct FVector& CallFunc_BreakTransform_Scale_1, const struct FTransform& CallFunc_MakeTransform_ReturnValue_1, class UDefaultLevelSequenceInstanceData* K2Node_DynamicCast_AsDefault_Level_Sequence_Instance_Data_1, bool K2Node_DynamicCast_bSuccess_1, class ABP_Fish_C* CallFunc_GetActorOfClass_ReturnValue_1, class USkeletalMeshComponent* K2Node_CustomEvent_Mesh, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, const struct FRotator& K2Node_CustomEvent_StartRot, const struct FRotator& K2Node_CustomEvent_EndRot, const struct FRotator& CallFunc_RLerp_ReturnValue, float CallFunc_GetWorldDeltaSeconds_ReturnValue, const struct FRotator& CallFunc_K2_GetComponentRotation_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue_3, float CallFunc_BreakRotator_Roll_1, float CallFunc_BreakRotator_Pitch_1, float CallFunc_BreakRotator_Yaw_1, float CallFunc_Multiply_FloatFloat_ReturnValue_4, const struct FRotator& CallFunc_K2_GetComponentRotation_ReturnValue_1, const struct FRotator& CallFunc_MakeRotator_ReturnValue_3, float CallFunc_BreakRotator_Roll_2, float CallFunc_BreakRotator_Pitch_2, float CallFunc_BreakRotator_Yaw_2, const struct FHitResult& CallFunc_K2_SetWorldRotation_SweepHitResult, const struct FRotator& CallFunc_MakeRotator_ReturnValue_4, const struct FHitResult& CallFunc_K2_SetWorldRotation_SweepHitResult_1, const struct FRotator& CallFunc_K2_GetComponentRotation_ReturnValue_2, float CallFunc_BreakRotator_Roll_3, float CallFunc_BreakRotator_Pitch_3, float CallFunc_BreakRotator_Yaw_3, const struct FRotator& CallFunc_K2_GetComponentRotation_ReturnValue_3, const struct FRotator& CallFunc_MakeRotator_ReturnValue_5, const struct FHitResult& CallFunc_K2_SetWorldRotation_SweepHitResult_2, const struct FHitResult& CallFunc_K2_SetWorldRotation_SweepHitResult_3, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue_1, const struct FHitResult& CallFunc_K2_AddRelativeRotation_SweepHitResult, const struct FRotator& CallFunc_FindLookAtRotation_ReturnValue, const struct FHitResult& CallFunc_K2_AddRelativeRotation_SweepHitResult_1, const struct FRotator& CallFunc_RInterpTo_ReturnValue, const struct FHitResult& CallFunc_K2_SetWorldRotation_SweepHitResult_4, float CallFunc_BreakRotator_Roll_4, float CallFunc_BreakRotator_Pitch_4, float CallFunc_BreakRotator_Yaw_4, float CallFunc_BreakRotator_Roll_5, float CallFunc_BreakRotator_Pitch_5, float CallFunc_BreakRotator_Yaw_5, float CallFunc_FClamp_ReturnValue_1, float CallFunc_FClamp_ReturnValue_2, const struct FRotator& CallFunc_MakeRotator_ReturnValue_6, const struct FRotator& CallFunc_MakeRotator_ReturnValue_7, const struct FHitResult& CallFunc_K2_SetRelativeRotation_SweepHitResult, const struct FHitResult& CallFunc_K2_SetRelativeRotation_SweepHitResult_1, class AController* K2Node_Event_NewController, bool CallFunc_IsLocallyControlled_ReturnValue, class AController* K2Node_Event_OldController, class UEnvQueryInstanceBlueprintWrapper* K2Node_CustomEvent_QueryInstance, enum class EEnvQueryStatus K2Node_CustomEvent_QueryStatus, bool CallFunc_EqualEqual_ByteByte_ReturnValue, class UEnvQueryInstanceBlueprintWrapper* CallFunc_RunEQSQuery_ReturnValue, TArray<struct FVector>& CallFunc_GetQueryResultsAsLocations_ResultLocations, bool CallFunc_GetQueryResultsAsLocations_ReturnValue, const struct FVector& CallFunc_Array_Random_OutItem, int32 CallFunc_Array_Random_OutIndex, int32 CallFunc_Array_Length_ReturnValue, const class FString& CallFunc_Conv_IntToString_ReturnValue, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue_2, bool Temp_bool_Has_Been_Initd_Variable, const struct FRotator& CallFunc_FindLookAtRotation_ReturnValue_1, bool CallFunc_K2_TeleportTo_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, bool CallFunc_NotEqualExactly_VectorVector_ReturnValue, float CallFunc_BreakRotator_Roll_6, float CallFunc_BreakRotator_Pitch_6, float CallFunc_BreakRotator_Yaw_6, const struct FRotator& CallFunc_MakeRotator_ReturnValue_8, const struct FRotator& CallFunc_MakeRotator_ReturnValue_9, const struct FHitResult& CallFunc_K2_SetRelativeRotation_SweepHitResult_2, const class FString& CallFunc_Conv_RotatorToString_ReturnValue, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue_3, const struct FRotator& CallFunc_K2_GetActorRotation_ReturnValue, class UAC_Swimming_C* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_K2_TeleportTo_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, class ABPCharacter_Demo_C* K2Node_DynamicCast_AsBPCharacter_Demo, bool K2Node_DynamicCast_bSuccess_2, bool Temp_bool_IsClosed_Variable_1, bool Temp_bool_Has_Been_Initd_Variable_1, const struct FVector& CallFunc_GetActorForwardVector_ReturnValue_1, const struct FRotator& CallFunc_GetControlRotation_ReturnValue_1, float CallFunc_BreakRotator_Roll_7, float CallFunc_BreakRotator_Pitch_7, float CallFunc_BreakRotator_Yaw_7, const struct FRotator& CallFunc_MakeRotator_ReturnValue_10, const struct FVector& CallFunc_GetForwardVector_ReturnValue_1, float K2Node_InputAxisEvent_AxisValue_3, float CallFunc_FClamp_ReturnValue_3, float CallFunc_BreakRotator_Roll_8, float CallFunc_BreakRotator_Pitch_8, float CallFunc_BreakRotator_Yaw_8, const struct FRotator& CallFunc_MakeRotator_ReturnValue_11, float CallFunc_FClamp_ReturnValue_4, const struct FHitResult& CallFunc_K2_AddRelativeRotation_SweepHitResult_2, const struct FRotator& CallFunc_MakeRotator_ReturnValue_12, const struct FHitResult& CallFunc_K2_SetRelativeRotation_SweepHitResult_3, float CallFunc_BreakRotator_Roll_9, float CallFunc_BreakRotator_Pitch_9, float CallFunc_BreakRotator_Yaw_9, float K2Node_InputAxisEvent_AxisValue_2, float CallFunc_FClamp_ReturnValue_5, float CallFunc_Multiply_FloatFloat_ReturnValue_5, const struct FRotator& CallFunc_MakeRotator_ReturnValue_13, const struct FRotator& CallFunc_MakeRotator_ReturnValue_14, const struct FHitResult& CallFunc_K2_SetRelativeRotation_SweepHitResult_4, const struct FHitResult& CallFunc_K2_AddRelativeRotation_SweepHitResult_3, float K2Node_InputAxisEvent_AxisValue_1);
};

}



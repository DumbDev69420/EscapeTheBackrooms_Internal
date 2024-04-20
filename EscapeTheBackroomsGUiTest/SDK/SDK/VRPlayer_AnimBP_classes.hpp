#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x2E6A (0x3122 - 0x2B8)
// AnimBlueprintGeneratedClass VRPlayer_AnimBP.VRPlayer_AnimBP_C
class UVRPlayer_AnimBP_C : public UAnimInstance
{
public:
	uint8                                        Pad_1199[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2C0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                        AnimGraphNode_Root;                                // 0x2C8(0x30)(None)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_1;             // 0x2F8(0x20)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_4;                     // 0x318(0x28)(None)
	struct FAnimNode_Slot                        AnimGraphNode_Slot;                                // 0x340(0x48)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_3;                     // 0x388(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_22;                 // 0x3B0(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_21;                 // 0x3D8(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_20;                 // 0x400(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_19;                 // 0x428(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_18;                 // 0x450(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_17;                 // 0x478(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_16;                 // 0x4A0(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_15;                 // 0x4C8(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_14;                 // 0x4F0(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_13;                 // 0x518(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_12;                 // 0x540(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_11;                 // 0x568(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_10;                 // 0x590(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_9;                  // 0x5B8(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_8;                  // 0x5E0(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_7;                  // 0x608(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_6;                  // 0x630(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_5;                  // 0x658(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_4;                  // 0x680(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_3;                  // 0x6A8(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_2;                  // 0x6D0(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_1;                  // 0x6F8(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult;                    // 0x720(0x28)(None)
	struct FAnimNode_BlendSpacePlayer            AnimGraphNode_BlendSpacePlayer_4;                  // 0x748(0xE8)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_10;                      // 0x830(0x30)(None)
	struct FAnimNode_BlendSpacePlayer            AnimGraphNode_BlendSpacePlayer_3;                  // 0x860(0xE8)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_9;                       // 0x948(0x30)(None)
	struct FAnimNode_BlendSpacePlayer            AnimGraphNode_BlendSpacePlayer_2;                  // 0x978(0xE8)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_8;                       // 0xA60(0x30)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_5;                    // 0xA90(0x80)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_7;                       // 0xB10(0x30)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_4;                    // 0xB40(0x80)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_6;                       // 0xBC0(0x30)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_3;                    // 0xBF0(0x80)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_5;                       // 0xC70(0x30)(None)
	struct FAnimNode_BlendSpacePlayer            AnimGraphNode_BlendSpacePlayer_1;                  // 0xCA0(0xE8)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_4;                       // 0xD88(0x30)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_2;                    // 0xDB8(0x80)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_3;                       // 0xE38(0x30)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_1;                    // 0xE68(0x80)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_2;                       // 0xEE8(0x30)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer;                      // 0xF18(0x80)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_1;                       // 0xF98(0x30)(None)
	struct FAnimNode_BlendSpacePlayer            AnimGraphNode_BlendSpacePlayer;                    // 0xFC8(0xE8)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult;                         // 0x10B0(0x30)(None)
	struct FAnimNode_StateMachine                AnimGraphNode_StateMachine;                        // 0x10E0(0xB0)(None)
	struct FAnimNode_SaveCachedPose              AnimGraphNode_SaveCachedPose_3;                    // 0x1190(0x158)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_2;                     // 0x12E8(0x28)(None)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;               // 0x1310(0x20)(None)
	struct FAnimNode_SaveCachedPose              AnimGraphNode_SaveCachedPose_2;                    // 0x1330(0x158)(None)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_1;             // 0x1488(0x20)(None)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;               // 0x14A8(0x20)(None)
	uint8                                        Pad_119A[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FAnimNode_DragonAimSolver             AnimGraphNode_DragonAimSolver_1;                   // 0x14D0(0x9D0)(None)
	struct FAnimNode_DragonAimSolver             AnimGraphNode_DragonAimSolver;                     // 0x1EA0(0x9D0)(None)
	struct FAnimNode_ApplyLimits                 AnimGraphNode_ApplyLimits_1;                       // 0x2870(0xE8)(None)
	struct FAnimNode_ApplyLimits                 AnimGraphNode_ApplyLimits;                         // 0x2958(0xE8)(None)
	struct FAnimNode_SaveCachedPose              AnimGraphNode_SaveCachedPose_1;                    // 0x2A40(0x158)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_1;                     // 0x2B98(0x28)(None)
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool;                     // 0x2BC0(0xA0)(None)
	struct FAnimNode_SaveCachedPose              AnimGraphNode_SaveCachedPose;                      // 0x2C60(0x158)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose;                       // 0x2DB8(0x28)(None)
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone;                          // 0x2DE0(0x108)(None)
	class UGripMotionControllerComponent*        LeftController;                                    // 0x2EE8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UGripMotionControllerComponent*        RightController;                                   // 0x2EF0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FRotator>                      Index_r;                                           // 0x2EF8(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<struct FRotator>                      Middle_r;                                          // 0x2F08(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<struct FRotator>                      Pinky_r;                                           // 0x2F18(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<struct FRotator>                      Ring_r;                                            // 0x2F28(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<struct FRotator>                      Thumb_r;                                           // 0x2F38(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<struct FRotator>                      Index_l;                                           // 0x2F48(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<struct FRotator>                      Middle_l;                                          // 0x2F58(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<struct FRotator>                      Pinky_l;                                           // 0x2F68(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<struct FRotator>                      Ring_l;                                            // 0x2F78(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<struct FRotator>                      Thumb_l;                                           // 0x2F88(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FDragonData_Overrided_Location_Data   LeftArmData;                                       // 0x2F98(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FDragonData_Overrided_Location_Data   RightArmData;                                      // 0x2FA8(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	uint8                                        Pad_119C[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            Look_Target_Transform;                             // 0x2FC0(0x30)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	class AVRCharacter_Demo_C*                   VRCharacter;                                       // 0x2FF0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsHoldingItem;                                     // 0x2FF8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         HoldingFlashlight;                                 // 0x2FF9(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         IsUsingItem;                                       // 0x2FFA(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         IsClimbing;                                        // 0x2FFB(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_119D[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UAnimSequence*                         Idle;                                              // 0x3000(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_119E[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            LeftHandTransform;                                 // 0x3010(0x30)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FTransform                            RightHandTransform;                                // 0x3040(0x30)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                        Pitch;                                             // 0x3070(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Speed;                                             // 0x3074(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Direction;                                         // 0x3078(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Crouching;                                         // 0x307C(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         EnableJump;                                        // 0x307D(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         Jumping;                                           // 0x307E(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_119F[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FHorrorEngineSettings                 GameSettings;                                      // 0x3080(0xA0)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Flashlight;                                        // 0x3120(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         IsLocal;                                           // 0x3121(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class UVRPlayer_AnimBP_C* GetDefaultObj();

	void AnimGraph(struct FPoseLink* AnimGraph);
	void Footstep(enum class EFootstepActionsEnum FootstepType, class APawn* CallFunc_TryGetPawnOwner_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, class APawn* CallFunc_TryGetPawnOwner_ReturnValue_1, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, TArray<class AActor*>& CallFunc_GetAllActorsWithTag_OutActors, TArray<class AActor*>& CallFunc_GetAllActorsWithTag_OutActors_1, class APawn* CallFunc_TryGetPawnOwner_ReturnValue_2, const struct FHitResult& CallFunc_SphereTraceSingle_OutHit, bool CallFunc_SphereTraceSingle_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue_1, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, const struct FVector& CallFunc_BreakHitResult_Location, const struct FVector& CallFunc_BreakHitResult_ImpactPoint, const struct FVector& CallFunc_BreakHitResult_Normal, const struct FVector& CallFunc_BreakHitResult_ImpactNormal, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, class AActor* CallFunc_BreakHitResult_HitActor, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, class FName CallFunc_BreakHitResult_HitBoneName, int32 CallFunc_BreakHitResult_HitItem, int32 CallFunc_BreakHitResult_ElementIndex, int32 CallFunc_BreakHitResult_FaceIndex, const struct FVector& CallFunc_BreakHitResult_TraceStart, const struct FVector& CallFunc_BreakHitResult_TraceEnd, const struct FHitResult& CallFunc_SphereTraceSingle_OutHit_1, bool CallFunc_SphereTraceSingle_ReturnValue_1, bool CallFunc_BreakHitResult_bBlockingHit_1, bool CallFunc_BreakHitResult_bInitialOverlap_1, float CallFunc_BreakHitResult_Time_1, float CallFunc_BreakHitResult_Distance_1, const struct FVector& CallFunc_BreakHitResult_Location_1, const struct FVector& CallFunc_BreakHitResult_ImpactPoint_1, const struct FVector& CallFunc_BreakHitResult_Normal_1, const struct FVector& CallFunc_BreakHitResult_ImpactNormal_1, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat_1, class AActor* CallFunc_BreakHitResult_HitActor_1, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent_1, class FName CallFunc_BreakHitResult_HitBoneName_1, int32 CallFunc_BreakHitResult_HitItem_1, int32 CallFunc_BreakHitResult_ElementIndex_1, int32 CallFunc_BreakHitResult_FaceIndex_1, const struct FVector& CallFunc_BreakHitResult_TraceStart_1, const struct FVector& CallFunc_BreakHitResult_TraceEnd_1, class APawn* CallFunc_TryGetPawnOwner_ReturnValue_3, bool CallFunc_IsValid_ReturnValue, enum class EPhysicalSurface Temp_byte_Variable, class USoundBase* K2Node_Select_Default, enum class EPhysicalSurface Temp_byte_Variable_1, class UAudioComponent* CallFunc_SpawnSoundAtLocation_ReturnValue, class USoundBase* K2Node_Select_Default_1, class UAudioComponent* CallFunc_SpawnSoundAtLocation_ReturnValue_1);
	void EvaluateGraphExposedInputs_ExecuteUbergraph_VRPlayer_AnimBP_AnimGraphNode_ModifyBone_76B69A484AC40A9FC96ECDADC5DAC7BC();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_VRPlayer_AnimBP_AnimGraphNode_BlendListByBool_5B317DAD492ACB7B9F98799294FE0CE5();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_VRPlayer_AnimBP_AnimGraphNode_TransitionResult_6FCB0D8548D3AB75582BF0975FA25318();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_VRPlayer_AnimBP_AnimGraphNode_TransitionResult_4A658B94413800B70F9BBC90571890F9();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_VRPlayer_AnimBP_AnimGraphNode_TransitionResult_41B54CFE47D2296FB238B9A29E986ED9();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_VRPlayer_AnimBP_AnimGraphNode_TransitionResult_C8D6D5A44587F56E9CD526A6E33878ED();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_VRPlayer_AnimBP_AnimGraphNode_TransitionResult_DA0D655B46ADA53F5C82A68049D56149();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_VRPlayer_AnimBP_AnimGraphNode_TransitionResult_32B757A3437EF1143D5D26AEDE8F1038();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_VRPlayer_AnimBP_AnimGraphNode_TransitionResult_CA0203C841D2E39A9711BFB8A1E12C19();
	void BlueprintUpdateAnimation(float DeltaTimeX);
	void Update_Hand_Transforms();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_VRPlayer_AnimBP_AnimGraphNode_TransitionResult_3E1691674F65720C892701A188A702A7();
	void Set_Head_Look_Data();
	void AnimNotify_Footstep();
	void ExecuteUbergraph_VRPlayer_AnimBP(int32 EntryPoint, bool CallFunc_LessEqual_FloatFloat_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, const struct FRotator& CallFunc_MakeRotator_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue_2, float K2Node_Event_DeltaTimeX, class APawn* CallFunc_TryGetPawnOwner_ReturnValue, const struct FVector& CallFunc_GetVelocity_ReturnValue, const struct FRotator& CallFunc_K2_GetActorRotation_ReturnValue, float CallFunc_VSize_ReturnValue, float CallFunc_CalculateDirection_ReturnValue, class AVRCharacter_Demo_C* K2Node_DynamicCast_AsVRCharacter_Demo, bool K2Node_DynamicCast_bSuccess, const struct FRotator& CallFunc_GetBaseAimRotation_ReturnValue, float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw, float CallFunc_Multiply_FloatFloat_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_3, bool CallFunc_IsLocallyControlled_ReturnValue, bool CallFunc_IsLocallyControlled_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, const struct FTransform& CallFunc_K2_GetComponentToWorld_ReturnValue, const struct FTransform& CallFunc_SelectTransform_ReturnValue, const struct FTransform& CallFunc_K2_GetComponentToWorld_ReturnValue_1, const struct FTransform& CallFunc_SelectTransform_ReturnValue_1, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, const struct FVector& CallFunc_GetActorForwardVector_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, const struct FTransform& CallFunc_MakeTransform_ReturnValue, class APawn* CallFunc_TryGetPawnOwner_ReturnValue_1, bool CallFunc_IsLocallyControlled_ReturnValue_2, const struct FDragonData_SingleArmElement& K2Node_MakeStruct_DragonData_SingleArmElement, TArray<struct FDragonData_SingleArmElement>& K2Node_MakeArray_Array, const struct FDragonData_SingleArmElement& K2Node_MakeStruct_DragonData_SingleArmElement_1, const struct FDragonData_Overrided_Location_Data& K2Node_MakeStruct_DragonData_Overrided_Location_Data, TArray<struct FDragonData_SingleArmElement>& K2Node_MakeArray_Array_1, const struct FDragonData_Overrided_Location_Data& K2Node_MakeStruct_DragonData_Overrided_Location_Data_1, class APawn* CallFunc_TryGetPawnOwner_ReturnValue_2, bool CallFunc_LessEqual_FloatFloat_ReturnValue_1, class AVRCharacter_Demo_Client_C* K2Node_DynamicCast_AsVRCharacter_Demo_Client, bool K2Node_DynamicCast_bSuccess_1, const struct FRotator& CallFunc_GetBaseAimRotation_ReturnValue_1, float CallFunc_BreakRotator_Roll_1, float CallFunc_BreakRotator_Pitch_1, float CallFunc_BreakRotator_Yaw_1, float CallFunc_Multiply_FloatFloat_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue_4, bool CallFunc_IsLocallyControlled_ReturnValue_3, bool CallFunc_IsLocallyControlled_ReturnValue_4, const struct FVector& CallFunc_GetVelocity_ReturnValue_1, const struct FRotator& CallFunc_K2_GetActorRotation_ReturnValue_1, float CallFunc_VSize_ReturnValue_1, float CallFunc_CalculateDirection_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_3, bool CallFunc_IsValid_ReturnValue_4, bool CallFunc_BooleanAND_ReturnValue_1, const struct FTransform& CallFunc_K2_GetComponentToWorld_ReturnValue_2, const struct FTransform& CallFunc_SelectTransform_ReturnValue_2, const struct FTransform& CallFunc_K2_GetComponentToWorld_ReturnValue_3, const struct FTransform& CallFunc_SelectTransform_ReturnValue_3, bool CallFunc_Greater_FloatFloat_ReturnValue_1, float CallFunc_GetInstanceAssetPlayerTimeFromEnd_ReturnValue, bool CallFunc_LessEqual_FloatFloat_ReturnValue_2, bool CallFunc_LessEqual_FloatFloat_ReturnValue_3, bool CallFunc_Greater_FloatFloat_ReturnValue_2, bool CallFunc_Greater_FloatFloat_ReturnValue_3, float CallFunc_GetInstanceAssetPlayerTimeFromEnd_ReturnValue_1, bool CallFunc_LessEqual_FloatFloat_ReturnValue_4);
};

}



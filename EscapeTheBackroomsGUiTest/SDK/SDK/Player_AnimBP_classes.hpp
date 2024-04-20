#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x18D6 (0x1B8E - 0x2B8)
// AnimBlueprintGeneratedClass Player_AnimBP.Player_AnimBP_C
class UPlayer_AnimBP_C : public UAnimInstance
{
public:
	uint8                                        Pad_1842[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2C0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                        AnimGraphNode_Root;                                // 0x2C8(0x30)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_30;                 // 0x2F8(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_29;                 // 0x320(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_28;                 // 0x348(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_27;                 // 0x370(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_26;                 // 0x398(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_25;                 // 0x3C0(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_24;                 // 0x3E8(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_23;                 // 0x410(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_22;                 // 0x438(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_21;                 // 0x460(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_20;                 // 0x488(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_19;                 // 0x4B0(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_18;                 // 0x4D8(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_17;                 // 0x500(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_16;                 // 0x528(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_15;                 // 0x550(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_14;                 // 0x578(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_13;                 // 0x5A0(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_12;                 // 0x5C8(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_11;                 // 0x5F0(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_10;                 // 0x618(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_9;                  // 0x640(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_8;                  // 0x668(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_7;                  // 0x690(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_6;                  // 0x6B8(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_5;                  // 0x6E0(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_4;                  // 0x708(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_3;                  // 0x730(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_2;                  // 0x758(0x28)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_9;                    // 0x780(0x80)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_14;                      // 0x800(0x30)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_8;                    // 0x830(0x80)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_13;                      // 0x8B0(0x30)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_7;                    // 0x8E0(0x80)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_12;                      // 0x960(0x30)(None)
	struct FAnimNode_BlendSpacePlayer            AnimGraphNode_BlendSpacePlayer_4;                  // 0x990(0xE8)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_11;                      // 0xA78(0x30)(None)
	struct FAnimNode_BlendSpacePlayer            AnimGraphNode_BlendSpacePlayer_3;                  // 0xAA8(0xE8)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_10;                      // 0xB90(0x30)(None)
	struct FAnimNode_BlendSpacePlayer            AnimGraphNode_BlendSpacePlayer_2;                  // 0xBC0(0xE8)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_9;                       // 0xCA8(0x30)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_6;                    // 0xCD8(0x80)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_8;                       // 0xD58(0x30)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_5;                    // 0xD88(0x80)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_7;                       // 0xE08(0x30)(None)
	struct FAnimNode_BlendSpacePlayer            AnimGraphNode_BlendSpacePlayer_1;                  // 0xE38(0xE8)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_6;                       // 0xF20(0x30)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_4;                    // 0xF50(0x80)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_5;                       // 0xFD0(0x30)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_3;                    // 0x1000(0x80)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_4;                       // 0x1080(0x30)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_2;                    // 0x10B0(0x80)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_3;                       // 0x1130(0x30)(None)
	struct FAnimNode_BlendSpacePlayer            AnimGraphNode_BlendSpacePlayer;                    // 0x1160(0xE8)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_2;                       // 0x1248(0x30)(None)
	struct FAnimNode_StateMachine                AnimGraphNode_StateMachine_1;                      // 0x1278(0xB0)(None)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;               // 0x1328(0x20)(None)
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone;                          // 0x1348(0x108)(None)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;               // 0x1450(0x20)(None)
	struct FAnimNode_SaveCachedPose              AnimGraphNode_SaveCachedPose;                      // 0x1470(0x158)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_2;                     // 0x15C8(0x28)(None)
	struct FAnimNode_LayeredBoneBlend            AnimGraphNode_LayeredBoneBlend;                    // 0x15F0(0xC0)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_1;                     // 0x16B0(0x28)(None)
	struct FAnimNode_Slot                        AnimGraphNode_Slot_2;                              // 0x16D8(0x48)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose;                       // 0x1720(0x28)(None)
	struct FAnimNode_Slot                        AnimGraphNode_Slot_1;                              // 0x1748(0x48)(None)
	struct FAnimNode_Slot                        AnimGraphNode_Slot;                                // 0x1790(0x48)(None)
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool;                     // 0x17D8(0xA0)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_1;                  // 0x1878(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult;                    // 0x18A0(0x28)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_1;                    // 0x18C8(0x80)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_1;                       // 0x1948(0x30)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer;                      // 0x1978(0x80)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult;                         // 0x19F8(0x30)(None)
	struct FAnimNode_StateMachine                AnimGraphNode_StateMachine;                        // 0x1A28(0xB0)(None)
	float                                        Speed;                                             // 0x1AD8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Direction;                                         // 0x1ADC(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Pitch;                                             // 0x1AE0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         EnableJump;                                        // 0x1AE4(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         Jumping;                                           // 0x1AE5(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         Crouching;                                         // 0x1AE6(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1843[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FHorrorEngineSettings                 GameSettings;                                      // 0x1AE8(0xA0)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Flashlight;                                        // 0x1B88(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         IsClimbing;                                        // 0x1B89(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         HoldingRope;                                       // 0x1B8A(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         IsSwimming;                                        // 0x1B8B(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         IsClimbingLadder;                                  // 0x1B8C(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         IsPushing;                                         // 0x1B8D(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class UPlayer_AnimBP_C* GetDefaultObj();

	void AnimGraph(struct FPoseLink* AnimGraph);
	void Footstep(enum class EFootstepActionsEnum FootstepType, class APawn* CallFunc_TryGetPawnOwner_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, class APawn* CallFunc_TryGetPawnOwner_ReturnValue_1, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, class APawn* CallFunc_TryGetPawnOwner_ReturnValue_2, TArray<class AActor*>& CallFunc_GetAllActorsWithTag_OutActors, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, TArray<class AActor*>& CallFunc_GetAllActorsWithTag_OutActors_1, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue_1, const struct FHitResult& CallFunc_SphereTraceSingle_OutHit, bool CallFunc_SphereTraceSingle_ReturnValue, const struct FHitResult& CallFunc_SphereTraceSingle_OutHit_1, bool CallFunc_SphereTraceSingle_ReturnValue_1, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, const struct FVector& CallFunc_BreakHitResult_Location, const struct FVector& CallFunc_BreakHitResult_ImpactPoint, const struct FVector& CallFunc_BreakHitResult_Normal, const struct FVector& CallFunc_BreakHitResult_ImpactNormal, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, class AActor* CallFunc_BreakHitResult_HitActor, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, class FName CallFunc_BreakHitResult_HitBoneName, int32 CallFunc_BreakHitResult_HitItem, int32 CallFunc_BreakHitResult_ElementIndex, int32 CallFunc_BreakHitResult_FaceIndex, const struct FVector& CallFunc_BreakHitResult_TraceStart, const struct FVector& CallFunc_BreakHitResult_TraceEnd, bool CallFunc_BreakHitResult_bBlockingHit_1, bool CallFunc_BreakHitResult_bInitialOverlap_1, float CallFunc_BreakHitResult_Time_1, float CallFunc_BreakHitResult_Distance_1, const struct FVector& CallFunc_BreakHitResult_Location_1, const struct FVector& CallFunc_BreakHitResult_ImpactPoint_1, const struct FVector& CallFunc_BreakHitResult_Normal_1, const struct FVector& CallFunc_BreakHitResult_ImpactNormal_1, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat_1, class AActor* CallFunc_BreakHitResult_HitActor_1, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent_1, class FName CallFunc_BreakHitResult_HitBoneName_1, int32 CallFunc_BreakHitResult_HitItem_1, int32 CallFunc_BreakHitResult_ElementIndex_1, int32 CallFunc_BreakHitResult_FaceIndex_1, const struct FVector& CallFunc_BreakHitResult_TraceStart_1, const struct FVector& CallFunc_BreakHitResult_TraceEnd_1, class APawn* CallFunc_TryGetPawnOwner_ReturnValue_3, bool CallFunc_IsValid_ReturnValue, enum class EPhysicalSurface Temp_byte_Variable, class USoundBase* K2Node_Select_Default, enum class EPhysicalSurface Temp_byte_Variable_1, class UAudioComponent* CallFunc_SpawnSoundAtLocation_ReturnValue, class USoundBase* K2Node_Select_Default_1, class UAudioComponent* CallFunc_SpawnSoundAtLocation_ReturnValue_1);
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Player_AnimBP_AnimGraphNode_ModifyBone_851E529B4BE2F5BD610AF8A256000C92();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Player_AnimBP_AnimGraphNode_TransitionResult_102E54AC4DB20322FC32B68F97E4D11C();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Player_AnimBP_AnimGraphNode_TransitionResult_FE0BD3544EFC9F6E8F351BB09206DB4B();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Player_AnimBP_AnimGraphNode_TransitionResult_08797B7044118E77ECE0F4A1FBF52EB3();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Player_AnimBP_AnimGraphNode_TransitionResult_45D00BC84483FE6E28C0698DDB63CE73();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Player_AnimBP_AnimGraphNode_TransitionResult_33A3D98C462B5FDCEE9906AC4E7F6523();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Player_AnimBP_AnimGraphNode_TransitionResult_00A020874CAD9BCB7814E49F276A75B6();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Player_AnimBP_AnimGraphNode_TransitionResult_4DD6B8964B5A15FEF747B29AC704397C();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Player_AnimBP_AnimGraphNode_TransitionResult_FC657DF04DEC2D34EB1F5E9D8DA3585F();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Player_AnimBP_AnimGraphNode_TransitionResult_8DDCF4304C2E9BF9AD2B4DBD15E09ADA();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Player_AnimBP_AnimGraphNode_TransitionResult_70407C274BEF3F98B2074081AD73562C();
	void BlueprintUpdateAnimation(float DeltaTimeX);
	void AnimNotify_IdleStart();
	void AnimNotify_JogStart();
	void AnimNotify_Footstep();
	void ExecuteUbergraph_Player_AnimBP(int32 EntryPoint, bool CallFunc_LessEqual_FloatFloat_ReturnValue, bool CallFunc_LessEqual_FloatFloat_ReturnValue_1, float CallFunc_GetInstanceAssetPlayerTimeFromEnd_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, bool CallFunc_LessEqual_FloatFloat_ReturnValue_2, bool CallFunc_LessEqual_FloatFloat_ReturnValue_3, bool CallFunc_LessEqual_FloatFloat_ReturnValue_4, bool CallFunc_Greater_FloatFloat_ReturnValue_1, const struct FRotator& CallFunc_MakeRotator_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue_2, float K2Node_Event_DeltaTimeX, class APawn* CallFunc_TryGetPawnOwner_ReturnValue, class ABPCharacter_Demo_C* K2Node_DynamicCast_AsBPCharacter_Demo, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Greater_FloatFloat_ReturnValue_3, const struct FRotator& CallFunc_GetBaseAimRotation_ReturnValue, float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw, float CallFunc_Multiply_FloatFloat_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, const struct FRotator& CallFunc_K2_GetActorRotation_ReturnValue, const struct FVector& CallFunc_GetVelocity_ReturnValue, float CallFunc_CalculateDirection_ReturnValue, float CallFunc_VSize_ReturnValue, class APawn* CallFunc_TryGetPawnOwner_ReturnValue_1, bool CallFunc_IsLocallyControlled_ReturnValue, float CallFunc_GetInstanceAssetPlayerTimeFromEnd_ReturnValue_1, bool CallFunc_LessEqual_FloatFloat_ReturnValue_5);
};

}



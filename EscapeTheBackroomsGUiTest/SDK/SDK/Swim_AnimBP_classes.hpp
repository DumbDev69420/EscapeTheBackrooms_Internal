#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x6B0 (0x968 - 0x2B8)
// AnimBlueprintGeneratedClass Swim_AnimBP.Swim_AnimBP_C
class USwim_AnimBP_C : public UAnimInstance
{
public:
	uint8                                        Pad_FAD[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2C0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                        AnimGraphNode_Root;                                // 0x2C8(0x30)(None)
	struct FAnimNode_BlendSpacePlayer            AnimGraphNode_BlendSpacePlayer;                    // 0x2F8(0xE8)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_2;                       // 0x3E0(0x30)(None)
	struct FAnimNode_StateMachine                AnimGraphNode_StateMachine_1;                      // 0x410(0xB0)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult;                    // 0x4C0(0x28)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_1;                    // 0x4E8(0x80)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_1;                       // 0x568(0x30)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer;                      // 0x598(0x80)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult;                         // 0x618(0x30)(None)
	struct FAnimNode_StateMachine                AnimGraphNode_StateMachine;                        // 0x648(0xB0)(None)
	struct FAnimNode_SaveCachedPose              AnimGraphNode_SaveCachedPose;                      // 0x6F8(0x158)(None)
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool;                     // 0x850(0xA0)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose;                       // 0x8F0(0x28)(None)
	bool                                         IsInAir;                                           // 0x918(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_FAE[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Speed;                                             // 0x91C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        MovementDirectionInDegrees;                        // 0x920(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsSwimming;                                        // 0x924(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_FAF[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Delta_Time;                                        // 0x928(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Use2DBlendSpace;                                   // 0x92C(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_FB0[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRotator                              Current_Control_Rotation;                          // 0x930(0xC)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FRotator                              Target_Control_Rotation;                           // 0x93C(0xC)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FRotator                              Actual_Control_Rotation;                           // 0x948(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         Is_not_Drowned;                                    // 0x954(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_FB1[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class ACharacter*                            Character_Reference;                               // 0x958(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAC_Swimming_C*                        Swimming_Component_Reference;                      // 0x960(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class USwim_AnimBP_C* GetDefaultObj();

	void AnimGraph(struct FPoseLink* AnimGraph);
	void SetSwimmingAnimationDriverVariables(class UPawnMovementComponent* CallFunc_GetMovementComponent_ReturnValue, bool CallFunc_IsSwimming_ReturnValue, bool CallFunc_LessEqual_FloatFloat_ReturnValue, const struct FVector& CallFunc_GetVelocity_ReturnValue, float CallFunc_VSize_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, class UPawnMovementComponent* CallFunc_GetMovementComponent_ReturnValue_1, const struct FRotator& CallFunc_K2_GetActorRotation_ReturnValue, bool CallFunc_IsFalling_ReturnValue, const struct FRotator& CallFunc_K2_GetActorRotation_ReturnValue_1, float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw, const struct FRotator& CallFunc_MakeRotator_ReturnValue, const struct FRotator& CallFunc_RInterpTo_ReturnValue, bool CallFunc_K2_SetActorRotation_ReturnValue);
	void GetMovementDirection(const struct FVector& CallFunc_GetVelocity_ReturnValue, const struct FRotator& CallFunc_GetBaseAimRotation_ReturnValue, const struct FRotator& CallFunc_MakeRotFromX_ReturnValue, const struct FRotator& CallFunc_NormalizedDeltaRotator_ReturnValue, float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw);
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Swim_AnimBP_AnimGraphNode_TransitionResult_A40F95DE411C414BC5A056BBA2D30F27();
	void BlueprintUpdateAnimation(float DeltaTimeX);
	void BlueprintBeginPlay();
	void UpdateVariables();
	void ExecuteUbergraph_Swim_AnimBP(int32 EntryPoint, class UAC_Swimming_C* CallFunc_GetComponentByClass_ReturnValue, float K2Node_Event_DeltaTimeX, float CallFunc_GetInstanceAssetPlayerTimeFromEndFraction_ReturnValue, bool CallFunc_Less_FloatFloat_ReturnValue, class APawn* CallFunc_TryGetPawnOwner_ReturnValue, class ACharacter* K2Node_DynamicCast_AsCharacter, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue);
};

}



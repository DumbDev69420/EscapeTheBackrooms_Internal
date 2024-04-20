#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x30C (0x5C4 - 0x2B8)
// AnimBlueprintGeneratedClass Bacteria_AnimBP.Bacteria_AnimBP_C
class UBacteria_AnimBP_C : public UAnimInstance
{
public:
	uint8                                        Pad_1FD9[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2C0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                        AnimGraphNode_Root;                                // 0x2C8(0x30)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_1;                  // 0x2F8(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult;                    // 0x320(0x28)(None)
	struct FAnimNode_BlendSpacePlayer            AnimGraphNode_BlendSpacePlayer;                    // 0x348(0xE8)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_1;                       // 0x430(0x30)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer;                      // 0x460(0x80)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult;                         // 0x4E0(0x30)(None)
	struct FAnimNode_StateMachine                AnimGraphNode_StateMachine;                        // 0x510(0xB0)(None)
	float                                        Speed;                                             // 0x5C0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBacteria_AnimBP_C* GetDefaultObj();

	void AnimGraph(struct FPoseLink* AnimGraph);
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Bacteria_AnimBP_AnimGraphNode_TransitionResult_0AED4C9F4260D894E35E47A57C340F87();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Bacteria_AnimBP_AnimGraphNode_TransitionResult_9EEDD44D4AEC7449DD3BE88E9B734C59();
	void BlueprintUpdateAnimation(float DeltaTimeX);
	void ExecuteUbergraph_Bacteria_AnimBP(int32 EntryPoint, class APawn* CallFunc_TryGetPawnOwner_ReturnValue, const struct FVector& CallFunc_GetVelocity_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, float CallFunc_VSize_ReturnValue, bool CallFunc_LessEqual_FloatFloat_ReturnValue, float K2Node_Event_DeltaTimeX);
};

}



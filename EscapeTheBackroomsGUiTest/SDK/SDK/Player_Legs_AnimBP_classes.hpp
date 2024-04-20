#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x6A1 (0x959 - 0x2B8)
// AnimBlueprintGeneratedClass Player_Legs_AnimBP.Player_Legs_AnimBP_C
class UPlayer_Legs_AnimBP_C : public UAnimInstance
{
public:
	uint8                                        Pad_2145[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2C0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                        AnimGraphNode_Root;                                // 0x2C8(0x30)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_8;                  // 0x2F8(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_7;                  // 0x320(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_6;                  // 0x348(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_5;                  // 0x370(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_4;                  // 0x398(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_3;                  // 0x3C0(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_2;                  // 0x3E8(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_1;                  // 0x410(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult;                    // 0x438(0x28)(None)
	struct FAnimNode_BlendSpacePlayer            AnimGraphNode_BlendSpacePlayer_1;                  // 0x460(0xE8)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_4;                       // 0x548(0x30)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_2;                    // 0x578(0x80)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_3;                       // 0x5F8(0x30)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_1;                    // 0x628(0x80)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_2;                       // 0x6A8(0x30)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer;                      // 0x6D8(0x80)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_1;                       // 0x758(0x30)(None)
	struct FAnimNode_BlendSpacePlayer            AnimGraphNode_BlendSpacePlayer;                    // 0x788(0xE8)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult;                         // 0x870(0x30)(None)
	struct FAnimNode_StateMachine                AnimGraphNode_StateMachine;                        // 0x8A0(0xB0)(None)
	float                                        Speed;                                             // 0x950(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Direction;                                         // 0x954(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Crouching;                                         // 0x958(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class UPlayer_Legs_AnimBP_C* GetDefaultObj();

	void AnimGraph(struct FPoseLink* AnimGraph);
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Player_Legs_AnimBP_AnimGraphNode_TransitionResult_BB939D674E19F7B7B6E0DB8CA633050B();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Player_Legs_AnimBP_AnimGraphNode_TransitionResult_B148701C4EA9CDAA9CAD6595429CA86E();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Player_Legs_AnimBP_AnimGraphNode_TransitionResult_4EBF1F0143B57EF694EACFBFF7CC9774();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Player_Legs_AnimBP_AnimGraphNode_TransitionResult_6FD42B9F476E764603B3B59A931F690B();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Player_Legs_AnimBP_AnimGraphNode_TransitionResult_914DE35F476091BA53B292AC4EE26AF1();
	void BlueprintUpdateAnimation(float DeltaTimeX);
	void ExecuteUbergraph_Player_Legs_AnimBP(int32 EntryPoint, bool CallFunc_Greater_FloatFloat_ReturnValue, bool CallFunc_LessEqual_FloatFloat_ReturnValue, float CallFunc_GetInstanceAssetPlayerTimeFromEnd_ReturnValue, bool CallFunc_LessEqual_FloatFloat_ReturnValue_1, bool CallFunc_LessEqual_FloatFloat_ReturnValue_2, bool CallFunc_Greater_FloatFloat_ReturnValue_1, float K2Node_Event_DeltaTimeX, class APawn* CallFunc_TryGetPawnOwner_ReturnValue, const struct FVector& CallFunc_GetVelocity_ReturnValue, class ABPCharacter_Demo_C* K2Node_DynamicCast_AsBPCharacter_Demo, bool K2Node_DynamicCast_bSuccess, float CallFunc_VSize_ReturnValue, const struct FRotator& CallFunc_K2_GetActorRotation_ReturnValue, float CallFunc_CalculateDirection_ReturnValue);
};

}



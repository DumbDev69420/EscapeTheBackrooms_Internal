#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x5C4 (0x87C - 0x2B8)
// AnimBlueprintGeneratedClass AnimBP_Elevator_Lever.AnimBP_Elevator_Lever_C
class UAnimBP_Elevator_Lever_C : public UAnimInstance
{
public:
	uint8                                        Pad_2203[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2C0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                        AnimGraphNode_Root;                                // 0x2C8(0x30)(None)
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone_3;                        // 0x2F8(0x108)(None)
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone_2;                        // 0x400(0x108)(None)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_3;             // 0x508(0x20)(None)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_2;             // 0x528(0x20)(None)
	struct FAnimNode_MeshSpaceRefPose            AnimGraphNode_MeshRefPose_3;                       // 0x548(0x10)(None)
	struct FAnimNode_MeshSpaceRefPose            AnimGraphNode_MeshRefPose_2;                       // 0x558(0x10)(None)
	struct FAnimNode_BlendListByInt              AnimGraphNode_BlendListByInt;                      // 0x568(0xA0)(None)
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone_1;                        // 0x608(0x108)(None)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_1;             // 0x710(0x20)(None)
	struct FAnimNode_MeshSpaceRefPose            AnimGraphNode_MeshRefPose_1;                       // 0x730(0x10)(None)
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone;                          // 0x740(0x108)(None)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;               // 0x848(0x20)(None)
	struct FAnimNode_MeshSpaceRefPose            AnimGraphNode_MeshRefPose;                         // 0x868(0x10)(None)
	int32                                        LeverState;                                        // 0x878(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UAnimBP_Elevator_Lever_C* GetDefaultObj();

	void AnimGraph(struct FPoseLink* AnimGraph);
	void BlueprintUpdateAnimation(float DeltaTimeX);
	void ExecuteUbergraph_AnimBP_Elevator_Lever(int32 EntryPoint, class AActor* CallFunc_GetOwningActor_ReturnValue, class ABP_Lever_C* K2Node_DynamicCast_AsBP_Lever, bool K2Node_DynamicCast_bSuccess, float K2Node_Event_DeltaTimeX);
};

}



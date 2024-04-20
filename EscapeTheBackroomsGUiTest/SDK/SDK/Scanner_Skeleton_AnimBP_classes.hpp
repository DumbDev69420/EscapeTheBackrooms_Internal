#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xBB3 (0xE6B - 0x2B8)
// AnimBlueprintGeneratedClass Scanner_Skeleton_AnimBP.Scanner_Skeleton_AnimBP_C
class UScanner_Skeleton_AnimBP_C : public UAnimInstance
{
public:
	uint8                                        Pad_1FB3[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2C0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_SaveCachedPose              AnimGraphNode_SaveCachedPose_1;                    // 0x2C8(0x158)(None)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_3;             // 0x420(0x20)(None)
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone_5;                        // 0x440(0x108)(None)
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool_1;                   // 0x548(0xA0)(None)
	struct FAnimNode_MeshSpaceRefPose            AnimGraphNode_MeshRefPose;                         // 0x5E8(0x10)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_2;                     // 0x5F8(0x28)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root;                                // 0x620(0x30)(None)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_2;             // 0x650(0x20)(None)
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone_4;                        // 0x670(0x108)(None)
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone_3;                        // 0x778(0x108)(None)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_1;             // 0x880(0x20)(None)
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone_2;                        // 0x8A0(0x108)(None)
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone_1;                        // 0x9A8(0x108)(None)
	struct FAnimNode_SaveCachedPose              AnimGraphNode_SaveCachedPose;                      // 0xAB0(0x158)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_1;                     // 0xC08(0x28)(None)
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool;                     // 0xC30(0xA0)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose;                       // 0xCD0(0x28)(None)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;               // 0xCF8(0x20)(None)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_1;             // 0xD18(0x20)(None)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;               // 0xD38(0x20)(None)
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone;                          // 0xD58(0x108)(None)
	float                                        Rotation_Ray;                                      // 0xE60(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Change_Distance_Rot;                               // 0xE64(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Is_Motion_Scanner_Enable;                          // 0xE68(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         Is_Li_DAREnable;                                   // 0xE69(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         Is_Wave_Scanner_Enbale;                            // 0xE6A(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class UScanner_Skeleton_AnimBP_C* GetDefaultObj();

	void AnimGraph(struct FPoseLink* AnimGraph);
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Scanner_Skeleton_AnimBP_AnimGraphNode_ModifyBone_208F31EF417F42E8F364C3A2DC16204A();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Scanner_Skeleton_AnimBP_AnimGraphNode_ModifyBone_7572C51A40F4F4AE279FE093F7537489();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Scanner_Skeleton_AnimBP_AnimGraphNode_ModifyBone_675481CC4C9907B4B90B0E98A9FE023B();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Scanner_Skeleton_AnimBP_AnimGraphNode_ModifyBone_B522B71740E6B1FE380B69B2C20BEBD7();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Scanner_Skeleton_AnimBP_AnimGraphNode_BlendListByBool_D7E8D10741A32ECF3F2F799070AA3A26();
	void ExecuteUbergraph_Scanner_Skeleton_AnimBP(int32 EntryPoint, float CallFunc_Add_FloatFloat_ReturnValue, const struct FRotator& CallFunc_MakeRotator_ReturnValue, const struct FRotator& CallFunc_MakeRotator_ReturnValue_1, float CallFunc_SelectFloat_ReturnValue, const struct FRotator& CallFunc_MakeRotator_ReturnValue_2, bool CallFunc_BooleanAND_ReturnValue, const struct FRotator& CallFunc_MakeRotator_ReturnValue_3);
};

}



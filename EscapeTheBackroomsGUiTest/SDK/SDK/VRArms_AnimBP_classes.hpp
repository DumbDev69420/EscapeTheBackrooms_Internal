#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x3E38 (0x40F0 - 0x2B8)
// AnimBlueprintGeneratedClass VRArms_AnimBP.VRArms_AnimBP_C
class UVRArms_AnimBP_C : public UAnimInstance
{
public:
	uint8                                        Pad_20D7[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2C0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone_1;                        // 0x2C8(0x108)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_22;                    // 0x3D0(0x28)(None)
	struct FAnimNode_SaveCachedPose              AnimGraphNode_SaveCachedPose_8;                    // 0x3F8(0x158)(None)
	struct FAnimNode_LayeredBoneBlend            AnimGraphNode_LayeredBoneBlend_3;                  // 0x550(0xC0)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_21;                    // 0x610(0x28)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_20;                    // 0x638(0x28)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_19;                    // 0x660(0x28)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_18;                    // 0x688(0x28)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_17;                    // 0x6B0(0x28)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_16;                    // 0x6D8(0x28)(None)
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool_1;                   // 0x700(0xA0)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_15;                   // 0x7A0(0x80)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_10;                      // 0x820(0x30)(None)
	struct FAnimNode_StateMachine                AnimGraphNode_StateMachine_2;                      // 0x850(0xB0)(None)
	struct FAnimNode_LayeredBoneBlend            AnimGraphNode_LayeredBoneBlend_2;                  // 0x900(0xC0)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_14;                   // 0x9C0(0x80)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_13;                   // 0xA40(0x80)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_12;                   // 0xAC0(0x80)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_11;                   // 0xB40(0x80)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_10;                   // 0xBC0(0x80)(None)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_1;             // 0xC40(0x20)(None)
	struct FAnimNode_DragonAimSolver             AnimGraphNode_DragonAimSolver_1;                   // 0xC60(0x9D0)(None)
	struct FAnimNode_DragonAimSolver             AnimGraphNode_DragonAimSolver;                     // 0x1630(0x9D0)(None)
	struct FAnimNode_ApplyLimits                 AnimGraphNode_ApplyLimits_1;                       // 0x2000(0xE8)(None)
	struct FAnimNode_ApplyLimits                 AnimGraphNode_ApplyLimits;                         // 0x20E8(0xE8)(None)
	struct FAnimNode_MeshSpaceRefPose            AnimGraphNode_MeshRefPose;                         // 0x21D0(0x10)(None)
	struct FAnimNode_SaveCachedPose              AnimGraphNode_SaveCachedPose_7;                    // 0x21E0(0x158)(None)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;               // 0x2338(0x20)(None)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;               // 0x2358(0x20)(None)
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone;                          // 0x2378(0x108)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_15;                 // 0x2480(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_14;                 // 0x24A8(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_13;                 // 0x24D0(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_12;                 // 0x24F8(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_11;                 // 0x2520(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_10;                 // 0x2548(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_9;                  // 0x2570(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_8;                  // 0x2598(0x28)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_9;                    // 0x25C0(0x80)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_9;                       // 0x2640(0x30)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_8;                    // 0x2670(0x80)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_8;                       // 0x26F0(0x30)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_7;                    // 0x2720(0x80)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_7;                       // 0x27A0(0x30)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_6;                    // 0x27D0(0x80)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_6;                       // 0x2850(0x30)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_5;                    // 0x2880(0x80)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_5;                       // 0x2900(0x30)(None)
	struct FAnimNode_StateMachine                AnimGraphNode_StateMachine_1;                      // 0x2930(0xB0)(None)
	struct FAnimNode_Slot                        AnimGraphNode_Slot_2;                              // 0x29E0(0x48)(None)
	struct FAnimNode_SaveCachedPose              AnimGraphNode_SaveCachedPose_6;                    // 0x2A28(0x158)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_7;                  // 0x2B80(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_6;                  // 0x2BA8(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_5;                  // 0x2BD0(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_4;                  // 0x2BF8(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_3;                  // 0x2C20(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_2;                  // 0x2C48(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_1;                  // 0x2C70(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult;                    // 0x2C98(0x28)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_4;                    // 0x2CC0(0x80)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_4;                       // 0x2D40(0x30)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_3;                    // 0x2D70(0x80)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_3;                       // 0x2DF0(0x30)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_2;                    // 0x2E20(0x80)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_2;                       // 0x2EA0(0x30)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_1;                    // 0x2ED0(0x80)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_1;                       // 0x2F50(0x30)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer;                      // 0x2F80(0x80)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult;                         // 0x3000(0x30)(None)
	struct FAnimNode_StateMachine                AnimGraphNode_StateMachine;                        // 0x3030(0xB0)(None)
	struct FAnimNode_Slot                        AnimGraphNode_Slot_1;                              // 0x30E0(0x48)(None)
	struct FAnimNode_SaveCachedPose              AnimGraphNode_SaveCachedPose_5;                    // 0x3128(0x158)(None)
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool;                     // 0x3280(0xA0)(None)
	struct FAnimNode_LayeredBoneBlend            AnimGraphNode_LayeredBoneBlend_1;                  // 0x3320(0xC0)(None)
	struct FAnimNode_LayeredBoneBlend            AnimGraphNode_LayeredBoneBlend;                    // 0x33E0(0xC0)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_15;                    // 0x34A0(0x28)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_14;                    // 0x34C8(0x28)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_13;                    // 0x34F0(0x28)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_12;                    // 0x3518(0x28)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_11;                    // 0x3540(0x28)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_10;                    // 0x3568(0x28)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_9;                     // 0x3590(0x28)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_8;                     // 0x35B8(0x28)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_7;                     // 0x35E0(0x28)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_6;                     // 0x3608(0x28)(None)
	struct FAnimNode_SaveCachedPose              AnimGraphNode_SaveCachedPose_4;                    // 0x3630(0x158)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_5;                     // 0x3788(0x28)(None)
	struct FAnimNode_SaveCachedPose              AnimGraphNode_SaveCachedPose_3;                    // 0x37B0(0x158)(None)
	struct FAnimNode_Slot                        AnimGraphNode_Slot;                                // 0x3908(0x48)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_4;                     // 0x3950(0x28)(None)
	struct FAnimNode_SaveCachedPose              AnimGraphNode_SaveCachedPose_2;                    // 0x3978(0x158)(None)
	struct FAnimNode_SaveCachedPose              AnimGraphNode_SaveCachedPose_1;                    // 0x3AD0(0x158)(None)
	struct FAnimNode_SaveCachedPose              AnimGraphNode_SaveCachedPose;                      // 0x3C28(0x158)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_3;                     // 0x3D80(0x28)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_2;                     // 0x3DA8(0x28)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_1;                     // 0x3DD0(0x28)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose;                       // 0x3DF8(0x28)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root;                                // 0x3E20(0x30)(None)
	class UAnimSequence*                         Idle;                                              // 0x3E50(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsClimbing;                                        // 0x3E58(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_20D8[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UMotionControllerComponent*            LeftController;                                    // 0x3E60(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMotionControllerComponent*            RightController;                                   // 0x3E68(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTransform                            LeftHandTransform;                                 // 0x3E70(0x30)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FTransform                            RightHandTransform;                                // 0x3EA0(0x30)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         IsUsingItem;                                       // 0x3ED0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         IsHoldingItem;                                     // 0x3ED1(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         HoldingFlashlight;                                 // 0x3ED2(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         HoldingSpray;                                      // 0x3ED3(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_20D9[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FDragonData_Overrided_Location_Data   LeftArmData;                                       // 0x3ED8(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FDragonData_Overrided_Location_Data   RightArmData;                                      // 0x3EE8(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FName                                  LeftGesture;                                       // 0x3EF8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  RightGesture;                                      // 0x3F00(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_20DA[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FBPOpenVRActionInfo                   LeftActionInput;                                   // 0x3F10(0xF0)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FBPOpenVRActionInfo                   RightActionInput;                                  // 0x4000(0xF0)(Edit, BlueprintVisible, DisableEditOnInstance)

	static class UClass* StaticClass();
	static class UVRArms_AnimBP_C* GetDefaultObj();

	void AnimGraph(struct FPoseLink* AnimGraph);
	void EvaluateGraphExposedInputs_ExecuteUbergraph_VRArms_AnimBP_AnimGraphNode_TransitionResult_DCA013224A580AEB21CFE6AF96513707();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_VRArms_AnimBP_AnimGraphNode_TransitionResult_6CAF8E8A42F9B645CF4253A93D3C9EC8();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_VRArms_AnimBP_AnimGraphNode_TransitionResult_02C4E37F4A266304F5E87EBB24E1C127();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_VRArms_AnimBP_AnimGraphNode_TransitionResult_89C973DF4F97A42366E49E8CFA3BFFBD();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_VRArms_AnimBP_AnimGraphNode_TransitionResult_EC12F87C4B23E9F5FF2C6892A59EB0E0();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_VRArms_AnimBP_AnimGraphNode_TransitionResult_00B21D7E4B6967729A6821BC92C8CA96();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_VRArms_AnimBP_AnimGraphNode_BlendListByBool_70C60F484EC1090B73B00F8568C3A25C();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_VRArms_AnimBP_AnimGraphNode_ModifyBone_53B81D8A43C436A17BED4DA6AA038FA1();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_VRArms_AnimBP_AnimGraphNode_BlendListByBool_3808BE77431293C83C6E97B54177DA68();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_VRArms_AnimBP_AnimGraphNode_ModifyBone_7D40F9FA41C1C6E9C29247B3EB39742D();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_VRArms_AnimBP_AnimGraphNode_TransitionResult_EB2EA30A404DBBF4D439D3AE593D7A6A();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_VRArms_AnimBP_AnimGraphNode_TransitionResult_6AE123D24A4C0691E1BEBD95A1307D65();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_VRArms_AnimBP_AnimGraphNode_TransitionResult_6B3DF33B4A635465756F12AA10C8431A();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_VRArms_AnimBP_AnimGraphNode_TransitionResult_A0A7FBC94D92372D5386AD9A7C1DAB4C();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_VRArms_AnimBP_AnimGraphNode_TransitionResult_853D1999452A549D96EF609CD28427E8();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_VRArms_AnimBP_AnimGraphNode_TransitionResult_CFF585024BC2C11116CC8AA9A4521B6C();
	void BlueprintUpdateAnimation(float DeltaTimeX);
	void EvaluateGraphExposedInputs_ExecuteUbergraph_VRArms_AnimBP_AnimGraphNode_TransitionResult_7BF8A07C4905D64A40E9B0B7612C764C();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_VRArms_AnimBP_AnimGraphNode_TransitionResult_E5DED5204E32B49FBDC40F8CB351C0BB();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_VRArms_AnimBP_AnimGraphNode_TransitionResult_17227A1A47A9A222D66DFF961CF918E3();
	void Update_Hand_Transforms();
	void UpdateGesture();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_VRArms_AnimBP_AnimGraphNode_TransitionResult_F4B3FB6642741E6D0D65ECB400A8A218();
	void Offset_Hands();
	void ExecuteUbergraph_VRArms_AnimBP(int32 EntryPoint, class APawn* CallFunc_TryGetPawnOwner_ReturnValue, class AVRCharacter_Demo_Client_C* K2Node_DynamicCast_AsVRCharacter_Demo_Client, bool K2Node_DynamicCast_bSuccess, bool CallFunc_NotEqual_NameName_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FST_Item& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, bool CallFunc_EqualEqual_NameName_ReturnValue, bool CallFunc_EqualEqual_NameName_ReturnValue_1, const struct FRotator& CallFunc_SelectRotator_ReturnValue, const struct FRotator& CallFunc_SelectRotator_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_NotEqual_ObjectObject_ReturnValue, float K2Node_Event_DeltaTimeX, class APawn* CallFunc_TryGetPawnOwner_ReturnValue_1, class AVRCharacter_Demo_C* K2Node_DynamicCast_AsVRCharacter_Demo, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, const struct FST_Item& CallFunc_GetDataTableRowFromName_OutRow_1, bool CallFunc_GetDataTableRowFromName_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_3, bool CallFunc_BooleanAND_ReturnValue, const struct FTransform& CallFunc_K2_GetComponentToWorld_ReturnValue, bool CallFunc_EqualEqual_NameName_ReturnValue_2, bool CallFunc_EqualEqual_NameName_ReturnValue_3, bool CallFunc_NotEqual_NameName_ReturnValue_1, const struct FTransform& CallFunc_K2_GetComponentToWorld_ReturnValue_1, bool CallFunc_NotEqual_NameName_ReturnValue_2, bool CallFunc_NotEqual_NameName_ReturnValue_3, class FText CallFunc_MakeLiteralText_ReturnValue, bool CallFunc_EqualEqual_TextText_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, bool CallFunc_NotEqual_NameName_ReturnValue_4, const struct FDragonData_SingleArmElement& K2Node_MakeStruct_DragonData_SingleArmElement, bool CallFunc_IsValid_ReturnValue_4, TArray<struct FDragonData_SingleArmElement>& K2Node_MakeArray_Array, const struct FDragonData_Overrided_Location_Data& K2Node_MakeStruct_DragonData_Overrided_Location_Data, bool CallFunc_IsValid_ReturnValue_5, bool CallFunc_BooleanAND_ReturnValue_2, class FText CallFunc_MakeLiteralText_ReturnValue_1, const struct FDragonData_SingleArmElement& K2Node_MakeStruct_DragonData_SingleArmElement_1, bool CallFunc_EqualEqual_TextText_ReturnValue_1, TArray<struct FDragonData_SingleArmElement>& K2Node_MakeArray_Array_1, const struct FDragonData_Overrided_Location_Data& K2Node_MakeStruct_DragonData_Overrided_Location_Data_1, bool CallFunc_NotEqual_NameName_ReturnValue_5, class FName CallFunc_DetectCurrentGesture_ReturnValue, class FName CallFunc_DetectCurrentGesture_ReturnValue_1, bool CallFunc_GetActionPose_ReturnValue, bool CallFunc_GetActionPose_ReturnValue_1, class FText CallFunc_MakeLiteralText_ReturnValue_2, bool CallFunc_NotEqual_NameName_ReturnValue_6, bool CallFunc_EqualEqual_TextText_ReturnValue_2, bool CallFunc_Montage_IsActive_ReturnValue, bool CallFunc_NotEqual_NameName_ReturnValue_7, bool CallFunc_EqualEqual_NameName_ReturnValue_4, class FText CallFunc_MakeLiteralText_ReturnValue_3, bool CallFunc_Montage_IsActive_ReturnValue_1, bool CallFunc_EqualEqual_TextText_ReturnValue_3, const struct FVector& CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale, class USkeletalMeshComponent* CallFunc_GetOwningComponent_ReturnValue, class USkeletalMeshComponent* CallFunc_GetOwningComponent_ReturnValue_1, const struct FVector& CallFunc_GetSocketLocation_ReturnValue, const struct FVector& CallFunc_GetSocketLocation_ReturnValue_1, const struct FVector& CallFunc_GetSocketLocation_ReturnValue_2, const struct FVector& CallFunc_GetSocketLocation_ReturnValue_3, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue_1, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue_2, const struct FVector& CallFunc_BreakTransform_Location_1, const struct FRotator& CallFunc_BreakTransform_Rotation_1, const struct FVector& CallFunc_BreakTransform_Scale_1, const struct FTransform& CallFunc_MakeTransform_ReturnValue, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue_3, const struct FTransform& CallFunc_MakeTransform_ReturnValue_1, class FText CallFunc_MakeLiteralText_ReturnValue_4, bool CallFunc_EqualEqual_NameName_ReturnValue_5, bool CallFunc_EqualEqual_TextText_ReturnValue_4, bool CallFunc_EqualEqual_NameName_ReturnValue_6, class FText CallFunc_MakeLiteralText_ReturnValue_5, bool CallFunc_EqualEqual_TextText_ReturnValue_5, bool CallFunc_EqualEqual_NameName_ReturnValue_7, class FText CallFunc_MakeLiteralText_ReturnValue_6, bool CallFunc_Montage_IsActive_ReturnValue_2, bool CallFunc_EqualEqual_TextText_ReturnValue_6, class FText CallFunc_MakeLiteralText_ReturnValue_7, bool CallFunc_Montage_IsActive_ReturnValue_3, bool CallFunc_EqualEqual_TextText_ReturnValue_7);
};

}



#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x30 (0x250 - 0x220)
// BlueprintGeneratedClass BP_Fence_A1.BP_Fence_A1_C
class ABP_Fence_A1_C : public AActor
{
public:
	class USplineComponent*                      Spline1;                                           // 0x220(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBillboardComponent*                   Billboard1;                                        // 0x228(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USplineMeshComponent*                  SplineMesh;                                        // 0x230(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	int32                                        Number_of_End_Pillars;                             // 0x238(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Orient_to_spline;                                  // 0x23C(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	enum class ESplineMeshAxis                   Axis;                                              // 0x23D(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_18F1[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Number_of_Pillars;                                 // 0x240(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_18F2[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UMaterialInterface*                    Element_0;                                         // 0x248(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_Fence_A1_C* GetDefaultObj();

	void UserConstructionScript(float Local_Float, class UInstancedStaticMeshComponent* Temp_ISM, int32 Temp_int_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, const struct FTransform& Temp_struct_Variable, int32 Temp_int_Variable_1, class UInstancedStaticMeshComponent* CallFunc_AddComponent_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_2, float CallFunc_Multiply_IntFloat_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_NotEqual_IntInt_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue, const struct FTransform& CallFunc_GetTransform_ReturnValue, float CallFunc_GetSplineLength_ReturnValue, const struct FVector& CallFunc_GetTangentAtSplinePoint_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, const struct FVector& CallFunc_GetLocationAtSplinePoint_ReturnValue, const struct FVector& CallFunc_GetTangentAtSplinePoint_ReturnValue_1, int32 Temp_int_Variable_2, const struct FVector& CallFunc_GetLocationAtSplinePoint_ReturnValue_1, float CallFunc_Multiply_IntFloat_ReturnValue_1, const struct FRotator& CallFunc_GetRotationAtDistanceAlongSpline_ReturnValue, const struct FVector& CallFunc_GetLocationAtDistanceAlongSpline_ReturnValue, const struct FHitResult& CallFunc_K2_SetWorldRotation_SweepHitResult, const struct FVector& CallFunc_InverseTransformLocation_ReturnValue, const struct FTransform& CallFunc_MakeTransform_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 CallFunc_AddInstance_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_3, int32 CallFunc_GetNumberOfSplinePoints_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue_1, const struct FRotator& CallFunc_GetRotationAtDistanceAlongSpline_ReturnValue_1, bool CallFunc_LessEqual_IntInt_ReturnValue_1, const struct FTransform& CallFunc_GetTransform_ReturnValue_1, const struct FVector& CallFunc_GetLocationAtDistanceAlongSpline_ReturnValue_1, int32 CallFunc_Subtract_IntInt_ReturnValue_2, const struct FVector& CallFunc_InverseTransformLocation_ReturnValue_1, bool CallFunc_LessEqual_IntInt_ReturnValue_2, const struct FTransform& CallFunc_MakeTransform_ReturnValue_1, class UStaticMeshComponent* CallFunc_AddComponent_ReturnValue_1, bool CallFunc_NotEqual_IntInt_ReturnValue_1, const struct FHitResult& CallFunc_K2_SetWorldRotation_SweepHitResult_1, float CallFunc_Conv_IntToFloat_ReturnValue_1, bool CallFunc_Greater_IntInt_ReturnValue_1, float CallFunc_GetSplineLength_ReturnValue_1, float CallFunc_Divide_FloatFloat_ReturnValue_1);
};

}



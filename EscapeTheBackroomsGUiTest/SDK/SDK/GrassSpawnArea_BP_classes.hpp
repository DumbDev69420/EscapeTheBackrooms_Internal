#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x60 (0x280 - 0x220)
// BlueprintGeneratedClass GrassSpawnArea_BP.GrassSpawnArea_BP_C
class AGrassSpawnArea_BP_C : public AActor
{
public:
	class UInstancedStaticMeshComponent*         HeightVisPillars;                                  // 0x220(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UProceduralMeshComponent*              ProceduralMesh;                                    // 0x228(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                       DefaultSceneRoot;                                  // 0x230(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<struct FFoliageToSpawnInArea>         FoliageToSpawn;                                    // 0x238(0x10)(Edit, BlueprintVisible)
	float                                        AreaHeight;                                        // 0x248(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2043[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FVector>                       V;                                                 // 0x250(0x10)(Edit, BlueprintVisible)
	TArray<int32>                                Triangles;                                         // 0x260(0x10)(Edit, BlueprintVisible)
	TArray<struct FVector>                       V_Ceiling;                                         // 0x270(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)

	static class UClass* StaticClass();
	static class AGrassSpawnArea_BP_C* GetDefaultObj();

	void UserConstructionScript(TArray<struct FProcMeshTangent>& Temp_struct_Variable, TArray<struct FLinearColor>& Temp_struct_Variable_1, TArray<struct FVector2D>& Temp_struct_Variable_2, TArray<struct FVector2D>& Temp_struct_Variable_3, TArray<struct FVector2D>& Temp_struct_Variable_4, TArray<struct FVector2D>& Temp_struct_Variable_5, TArray<struct FVector>& Temp_struct_Variable_6, TArray<struct FProcMeshTangent>& Temp_struct_Variable_7, TArray<struct FLinearColor>& Temp_struct_Variable_8, TArray<struct FVector2D>& Temp_struct_Variable_9, TArray<struct FVector2D>& Temp_struct_Variable_10, TArray<struct FVector2D>& Temp_struct_Variable_11, TArray<struct FVector2D>& Temp_struct_Variable_12, TArray<struct FVector>& Temp_struct_Variable_13, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue_1, const struct FVector& CallFunc_Array_Get_Item, const struct FTransform& CallFunc_MakeTransform_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, int32 CallFunc_AddInstance_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue);
};

}



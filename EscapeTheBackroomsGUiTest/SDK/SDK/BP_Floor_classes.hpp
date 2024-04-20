#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x40 (0x260 - 0x220)
// BlueprintGeneratedClass BP_Floor.BP_Floor_C
class ABP_Floor_C : public AActor
{
public:
	class UStaticMeshComponent*                  Ceiling_mesh;                                      // 0x220(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  Floor_mesh;                                        // 0x228(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                       DefaultSceneRoot;                                  // 0x230(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	bool                                         Floor;                                             // 0x238(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class E_Floors                          Floors;                                            // 0x239(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Add_Ceiling;                                       // 0x23A(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Ceiling_Broken_;                                   // 0x23B(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class E_Ceiling_3x3_broken              Ceiling_3x3_Broken;                                // 0x23C(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class E_Ceiling_6x6_broken              Ceiling_6x6_Broken;                                // 0x23D(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Revert_Default_Materials;                          // 0x23E(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_446[0x1];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UStaticMesh*>                   Floor_Meshes;                                      // 0x240(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class UStaticMesh*>                   Ceiling_Meshes;                                    // 0x250(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)

	static class UClass* StaticClass();
	static class ABP_Floor_C* GetDefaultObj();

	void UserConstructionScript(int32 Number_Of_Materials, bool K2Node_SwitchEnum_CmpSuccess, bool K2Node_SwitchEnum_CmpSuccess_1, bool K2Node_SwitchEnum_CmpSuccess_2, bool CallFunc_SetStaticMesh_ReturnValue, bool CallFunc_SetStaticMesh_ReturnValue_1, bool CallFunc_SetStaticMesh_ReturnValue_2, bool CallFunc_SetStaticMesh_ReturnValue_3, bool CallFunc_SetStaticMesh_ReturnValue_4, bool CallFunc_SetStaticMesh_ReturnValue_5, bool CallFunc_SetStaticMesh_ReturnValue_6, const struct FHitResult& CallFunc_K2_SetRelativeLocation_SweepHitResult, int32 CallFunc_Conv_ByteToInt_ReturnValue, class UStaticMesh* CallFunc_Array_Get_Item, bool CallFunc_SetStaticMesh_ReturnValue_7, int32 CallFunc_Conv_ByteToInt_ReturnValue_1, int32 CallFunc_GetNumMaterials_ReturnValue, class UStaticMesh* CallFunc_Array_Get_Item_1, int32 Temp_int_Variable, class UMaterialInterface* CallFunc_GetMaterial_ReturnValue, bool CallFunc_SetStaticMesh_ReturnValue_8, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue);
};

}



#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x80 (0x2A0 - 0x220)
// BlueprintGeneratedClass BP_WallIn.BP_WallIn_C
class ABP_WallIn_C : public AActor
{
public:
	class UStaticMeshComponent*                  Decal_corner_mesh;                                 // 0x220(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  WallIn_mesh;                                       // 0x228(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                       DefaultSceneRoot;                                  // 0x230(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	enum class E_WallIn                          WallIn;                                            // 0x238(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         WallIn_B;                                          // 0x239(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Doorframe;                                         // 0x23A(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Bent_Interior_Wall;                                // 0x23B(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Decal_corner;                                      // 0x23C(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Revert_Default_Materials;                          // 0x23D(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2845[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UStaticMesh*>                   Wall_in_A_Meshes;                                  // 0x240(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class UStaticMesh*>                   Wall_in_A_Bent_Meshes;                             // 0x250(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class UStaticMesh*>                   Wall_in_B_Meshes;                                  // 0x260(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class UStaticMesh*>                   Wall_in_B_Bent_Meshes;                             // 0x270(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class UStaticMesh*>                   Decal_Corner_A_Meshes;                             // 0x280(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class UStaticMesh*>                   Decal_Corner_B_Meshes;                             // 0x290(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)

	static class UClass* StaticClass();
	static class ABP_WallIn_C* GetDefaultObj();

	void UserConstructionScript(int32 Number_Of_Materials, int32 CallFunc_Conv_ByteToInt_ReturnValue, class UStaticMesh* CallFunc_Array_Get_Item, bool CallFunc_SetStaticMesh_ReturnValue, int32 CallFunc_Conv_ByteToInt_ReturnValue_1, class UStaticMesh* CallFunc_Array_Get_Item_1, bool CallFunc_SetStaticMesh_ReturnValue_1, bool K2Node_SwitchEnum_CmpSuccess, bool K2Node_SwitchEnum_CmpSuccess_1, int32 CallFunc_GetNumMaterials_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess_2, int32 CallFunc_Conv_ByteToInt_ReturnValue_2, class UStaticMesh* CallFunc_Array_Get_Item_2, int32 CallFunc_Conv_ByteToInt_ReturnValue_3, class UStaticMesh* CallFunc_Array_Get_Item_3, int32 CallFunc_Conv_ByteToInt_ReturnValue_4, class UStaticMesh* CallFunc_Array_Get_Item_4, int32 CallFunc_Conv_ByteToInt_ReturnValue_5, int32 Temp_int_Variable, class UStaticMesh* CallFunc_Array_Get_Item_5, class UMaterialInterface* CallFunc_GetMaterial_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_SetStaticMesh_ReturnValue_2, bool CallFunc_SetStaticMesh_ReturnValue_3, bool CallFunc_SetStaticMesh_ReturnValue_4, const struct FTransform& CallFunc_MakeTransform_ReturnValue, class UChildActorComponent* CallFunc_AddComponent_ReturnValue, bool CallFunc_SetStaticMesh_ReturnValue_5, class UChildActorComponent* CallFunc_AddComponent_ReturnValue_1);
};

}



#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x260 - 0x258)
// BlueprintGeneratedClass BP_Item_AlmondBottle.BP_Item_AlmondBottle_C
class ABP_Item_AlmondBottle_C : public ABP_Item_C
{
public:
	class UStaticMeshComponent*                  StaticMesh;                                        // 0x258(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_Item_AlmondBottle_C* GetDefaultObj();

	void SetMaterial(bool EnabledFOV);
};

}



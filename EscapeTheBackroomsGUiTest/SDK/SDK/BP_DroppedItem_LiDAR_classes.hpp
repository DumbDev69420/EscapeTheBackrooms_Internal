#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x17 (0x280 - 0x269)
// BlueprintGeneratedClass BP_DroppedItem_LiDAR.BP_DroppedItem_LiDAR_C
class ABP_DroppedItem_LiDAR_C : public ABP_DroppedItem_C
{
public:
	uint8                                        Pad_FD5[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UStaticMeshComponent*                  Display;                                           // 0x270(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                SkeletalMesh;                                      // 0x278(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_DroppedItem_LiDAR_C* GetDefaultObj();

};

}



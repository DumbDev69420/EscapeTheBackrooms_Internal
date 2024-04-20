#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x78 (0x2C0 - 0x248)
// BlueprintGeneratedClass BP_DivingGear.BP_DivingGear_C
class ABP_DivingGear_C : public AInteractableActor
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x248(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                  StaticMesh3;                                       // 0x250(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  StaticMesh1;                                       // 0x258(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FTransform                            StartTransform;                                    // 0x260(0x30)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FTransform                            OffsetTransform;                                   // 0x290(0x30)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class ABP_DivingGear_C* GetDefaultObj();

	void OnActorUsed(class ACharacter* Character);
	void ExecuteUbergraph_BP_DivingGear(int32 EntryPoint, class ACharacter* K2Node_Event_Character, bool Temp_bool_Has_Been_Initd_Variable, bool Temp_bool_IsClosed_Variable);
};

}



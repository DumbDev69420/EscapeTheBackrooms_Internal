#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xC (0x234 - 0x228)
// BlueprintGeneratedClass BP_OceanCheckpoint_Trigger.BP_OceanCheckpoint_Trigger_C
class ABP_OceanCheckpoint_Trigger_C : public ATriggerBox
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x228(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	int32                                        Checkpoint;                                        // 0x230(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_OceanCheckpoint_Trigger_C* GetDefaultObj();

	void ReceiveActorBeginOverlap(class AActor* OtherActor);
	void ExecuteUbergraph_BP_OceanCheckpoint_Trigger(int32 EntryPoint, bool CallFunc_HasAuthority_ReturnValue, class AActor* K2Node_Event_OtherActor, bool Temp_bool_IsClosed_Variable, class ABP_RowBoat_C* K2Node_DynamicCast_AsBP_Row_Boat, bool K2Node_DynamicCast_bSuccess, class ABPCharacter_Demo_C* K2Node_DynamicCast_AsBPCharacter_Demo, bool K2Node_DynamicCast_bSuccess_1, bool Temp_bool_Has_Been_Initd_Variable);
};

}



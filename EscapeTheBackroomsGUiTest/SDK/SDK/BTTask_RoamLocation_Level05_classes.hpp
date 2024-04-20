#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x30 (0xD8 - 0xA8)
// BlueprintGeneratedClass BTTask_RoamLocation_Level05.BTTask_RoamLocation_Level05_C
class UBTTask_RoamLocation_Level05_C : public UBTTask_BlueprintBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xA8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FBlackboardKeySelector                RoamLocation;                                      // 0xB0(0x28)(Edit, BlueprintVisible)

	static class UClass* StaticClass();
	static class UBTTask_RoamLocation_Level05_C* GetDefaultObj();

	void ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn);
	void ExecuteUbergraph_BTTask_RoamLocation_Level05(int32 EntryPoint, class AAIController* K2Node_Event_OwnerController, class APawn* K2Node_Event_ControlledPawn, class ABacteria_Roaming_BP_C* K2Node_DynamicCast_AsBacteria_Roaming_BP, bool K2Node_DynamicCast_bSuccess, class ABP_Bacteria_RoomPoint_C* CallFunc_GetRoamLocation_RoamPoint, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue);
};

}



#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0xB0 - 0xA8)
// BlueprintGeneratedClass BTTask_PlaySound.BTTask_PlaySound_C
class UBTTask_PlaySound_C : public UBTTask_BlueprintBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xA8(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class UBTTask_PlaySound_C* GetDefaultObj();

	void ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn);
	void MC_PlaySound(const struct FVector& Location);
	void ExecuteUbergraph_BTTask_PlaySound(int32 EntryPoint, const struct FVector& K2Node_CustomEvent_Location, class UAudioComponent* CallFunc_SpawnSoundAtLocation_ReturnValue, class AAIController* K2Node_Event_OwnerController, class APawn* K2Node_Event_ControlledPawn, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue);
};

}



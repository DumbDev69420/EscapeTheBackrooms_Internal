#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0x260 - 0x248)
// BlueprintGeneratedClass BP_MEGDoor.BP_MEGDoor_C
class ABP_MEGDoor_C : public AInteractableActor
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x248(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	float                                        DoorOpen_Open_DA99D068436AABDF3B0C208CBB174515;    // 0x250(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                DoorOpen__Direction_DA99D068436AABDF3B0C208CBB174515; // 0x254(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2821[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTimelineComponent*                    DoorOpen;                                          // 0x258(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_MEGDoor_C* GetDefaultObj();

	void DoorOpen__FinishedFunc();
	void DoorOpen__UpdateFunc();
	void OnActorUsed(class ACharacter* Character);
	void OnUsedNotify();
	void ExecuteUbergraph_BP_MEGDoor(int32 EntryPoint, const struct FRotator& CallFunc_MakeRotator_ReturnValue, bool Temp_bool_Variable, bool CallFunc_Not_PreBool_ReturnValue, class ACharacter* K2Node_Event_Character, const struct FHitResult& CallFunc_K2_SetRelativeRotation_SweepHitResult);
};

}



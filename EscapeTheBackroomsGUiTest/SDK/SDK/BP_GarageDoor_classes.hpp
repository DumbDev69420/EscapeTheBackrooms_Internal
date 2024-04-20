#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0x260 - 0x248)
// BlueprintGeneratedClass BP_GarageDoor.BP_GarageDoor_C
class ABP_GarageDoor_C : public AInteractableActor
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x248(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	float                                        OpenDoor_Z_D48E7478466D1C3E2A5AC980B047B010;       // 0x250(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                OpenDoor__Direction_D48E7478466D1C3E2A5AC980B047B010; // 0x254(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_236C[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTimelineComponent*                    OpenDoor;                                          // 0x258(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_GarageDoor_C* GetDefaultObj();

	void OpenDoor__FinishedFunc();
	void OpenDoor__UpdateFunc();
	void OnUsedNotify();
	void Open();
	void CloseDoor();
	void OnActorUsed(class ACharacter* Character);
	void ExecuteUbergraph_BP_GarageDoor(int32 EntryPoint, const struct FRotator& CallFunc_MakeRotator_ReturnValue, bool Temp_bool_Variable, bool CallFunc_Not_PreBool_ReturnValue, const struct FHitResult& CallFunc_K2_SetRelativeRotation_SweepHitResult, class ACharacter* K2Node_Event_Character);
};

}



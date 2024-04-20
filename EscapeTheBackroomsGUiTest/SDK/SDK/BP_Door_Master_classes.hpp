#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x29 (0x271 - 0x248)
// BlueprintGeneratedClass BP_Door_Master.BP_Door_Master_C
class ABP_Door_Master_C : public AInteractableActor
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x248(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                  Windowglass_door_C1;                               // 0x250(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  Windowglass_door_C;                                // 0x258(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        OpenDoor_Z_F67F2FDB483C863943784886A90DCE59;       // 0x260(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                OpenDoor__Direction_F67F2FDB483C863943784886A90DCE59; // 0x264(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2824[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTimelineComponent*                    OpenDoor;                                          // 0x268(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsLocked;                                          // 0x270(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class ABP_Door_Master_C* GetDefaultObj();

	void OpenDoor__FinishedFunc();
	void OpenDoor__UpdateFunc();
	void OnUsedNotify();
	void ExecuteUbergraph_BP_Door_Master(int32 EntryPoint, bool CallFunc_Not_PreBool_ReturnValue, bool Temp_bool_Variable, const struct FRotator& CallFunc_MakeRotator_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, const struct FHitResult& CallFunc_K2_SetRelativeRotation_SweepHitResult);
};

}



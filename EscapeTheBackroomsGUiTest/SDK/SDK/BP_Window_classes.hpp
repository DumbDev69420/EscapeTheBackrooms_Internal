#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x258 - 0x248)
// BlueprintGeneratedClass BP_Window.BP_Window_C
class ABP_Window_C : public AInteractableActor
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x248(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                  Windowglass_door_sliding;                          // 0x250(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_Window_C* GetDefaultObj();

	void OnUsedNotify();
	void ExecuteUbergraph_BP_Window(int32 EntryPoint);
};

}



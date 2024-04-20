#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0x240 - 0x228)
// BlueprintGeneratedClass BP_Deep_Volume.BP_Deep_Volume_C
class ABP_Deep_Volume_C : public ATriggerBox
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x228(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class AAmbientSound*                         AmbientSound1;                                     // 0x230(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AAmbientSound*                         AmbientSound2;                                     // 0x238(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_Deep_Volume_C* GetDefaultObj();

	void ReceiveActorBeginOverlap(class AActor* OtherActor);
	void ReceiveActorEndOverlap(class AActor* OtherActor);
	void ExecuteUbergraph_BP_Deep_Volume(int32 EntryPoint, class AActor* K2Node_Event_OtherActor, class AActor* K2Node_Event_OtherActor_1);
};

}



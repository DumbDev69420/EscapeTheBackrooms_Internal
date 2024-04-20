#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x30 (0x258 - 0x228)
// BlueprintGeneratedClass BP_Ocean_Exit.BP_Ocean_Exit_C
class ABP_Ocean_Exit_C : public ATriggerBox
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x228(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class ABP_Exit_Manager_C*                    ExitManager;                                       // 0x230(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               TeleportLocation;                                  // 0x238(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_23B5[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class FString>                        Players;                                           // 0x248(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)

	static class UClass* StaticClass();
	static class ABP_Ocean_Exit_C* GetDefaultObj();

	void ReceiveActorBeginOverlap(class AActor* OtherActor);
	void ExecuteUbergraph_BP_Ocean_Exit(int32 EntryPoint, bool CallFunc_HasAuthority_ReturnValue, class AActor* K2Node_Event_OtherActor, class ABPCharacter_Demo_C* K2Node_DynamicCast_AsBPCharacter_Demo, bool K2Node_DynamicCast_bSuccess, bool CallFunc_K2_TeleportTo_ReturnValue, const class FString& CallFunc_GetDisplayName_ReturnValue, class AFancyPlayerState* K2Node_DynamicCast_AsFancy_Player_State, bool K2Node_DynamicCast_bSuccess_1, int32 CallFunc_Array_Add_ReturnValue, bool CallFunc_Array_Contains_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue);
};

}



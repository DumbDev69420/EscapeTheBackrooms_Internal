#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x230 - 0x228)
// BlueprintGeneratedClass BP_LightFade_Box.BP_LightFade_Box_C
class ABP_LightFade_Box_C : public ATriggerBox
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x228(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class ABP_LightFade_Box_C* GetDefaultObj();

	void ReceiveActorBeginOverlap(class AActor* OtherActor);
	void ReceiveActorEndOverlap(class AActor* OtherActor);
	void ExecuteUbergraph_BP_LightFade_Box(int32 EntryPoint, class AActor* K2Node_Event_OtherActor, class ABPCharacter_Demo_C* K2Node_DynamicCast_AsBPCharacter_Demo, bool K2Node_DynamicCast_bSuccess, class AActor* K2Node_Event_OtherActor_1, class ABPCharacter_Demo_C* K2Node_DynamicCast_AsBPCharacter_Demo_1, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class ABP_Item_Flashlight_C* K2Node_DynamicCast_AsBP_Item_Flashlight, bool K2Node_DynamicCast_bSuccess_2, bool CallFunc_IsLocallyControlled_ReturnValue, class ABP_Item_Flashlight_C* K2Node_DynamicCast_AsBP_Item_Flashlight_1, bool K2Node_DynamicCast_bSuccess_3, bool CallFunc_IsLocallyControlled_ReturnValue_1);
};

}



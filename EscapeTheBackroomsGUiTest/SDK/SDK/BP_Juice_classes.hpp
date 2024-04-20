#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x28 (0x280 - 0x258)
// BlueprintGeneratedClass BP_Juice.BP_Juice_C
class ABP_Juice_C : public ABP_Item_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x258(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                  StaticMesh1;                                       // 0x260(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  StaticMesh;                                        // 0x268(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        Timeline_0_Drink_4F50821D455C8CB87F6269AF25F4310D; // 0x270(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                Timeline_0__Direction_4F50821D455C8CB87F6269AF25F4310D; // 0x274(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_20AC[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTimelineComponent*                    Timeline_0;                                        // 0x278(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_Juice_C* GetDefaultObj();

	void SetMaterial(bool EnabledFOV);
	void Timeline_0__FinishedFunc();
	void Timeline_0__UpdateFunc();
	void OnNotifyEnd_8D6BB16145C244F54B6DA5B60D5650E0(class FName NotifyName);
	void OnNotifyBegin_8D6BB16145C244F54B6DA5B60D5650E0(class FName NotifyName);
	void OnInterrupted_8D6BB16145C244F54B6DA5B60D5650E0(class FName NotifyName);
	void OnBlendOut_8D6BB16145C244F54B6DA5B60D5650E0(class FName NotifyName);
	void OnCompleted_8D6BB16145C244F54B6DA5B60D5650E0(class FName NotifyName);
	void UseItem();
	void PlayAnimation();
	void SRV_FinishDrink();
	void ExecuteUbergraph_BP_Juice(int32 EntryPoint, class UAudioComponent* CallFunc_SpawnSound2D_ReturnValue, class FName K2Node_CustomEvent_NotifyName_4, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class FName K2Node_CustomEvent_NotifyName_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class FName K2Node_CustomEvent_NotifyName_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, class FName K2Node_CustomEvent_NotifyName_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, class FName K2Node_CustomEvent_NotifyName, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, class FName Temp_name_Variable, class AActor* CallFunc_GetAttachParentActor_ReturnValue, class AFancyCharacter* K2Node_DynamicCast_AsFancy_Character, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsLocallyControlled_ReturnValue, class UPlayMontageCallbackProxy* CallFunc_CreateProxyObjectForPlayMontage_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue, const struct FHitResult& CallFunc_K2_SetRelativeLocation_SweepHitResult, class AActor* CallFunc_GetOwner_ReturnValue, class ABPCharacter_Demo_C* K2Node_DynamicCast_AsBPCharacter_Demo, bool K2Node_DynamicCast_bSuccess_1, class AMP_PS_C* K2Node_DynamicCast_AsMP_PS, bool K2Node_DynamicCast_bSuccess_2);
};

}



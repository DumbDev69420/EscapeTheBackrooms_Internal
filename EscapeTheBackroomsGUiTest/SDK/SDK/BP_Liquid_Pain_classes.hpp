#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x28 (0x280 - 0x258)
// BlueprintGeneratedClass BP_Liquid_Pain.BP_Liquid_Pain_C
class ABP_Liquid_Pain_C : public ABP_Item_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x258(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                  StaticMesh1;                                       // 0x260(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  StaticMesh;                                        // 0x268(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        Timeline_0_Drink_00A56D914DB109813D34C892B224E8A0; // 0x270(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                Timeline_0__Direction_00A56D914DB109813D34C892B224E8A0; // 0x274(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2265[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTimelineComponent*                    Timeline_0;                                        // 0x278(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_Liquid_Pain_C* GetDefaultObj();

	void SetMaterial(bool EnabledFOV);
	void Timeline_0__FinishedFunc();
	void Timeline_0__UpdateFunc();
	void OnNotifyEnd_0F271FAE4B4291EFCF443CB4D7BCBFE5(class FName NotifyName);
	void OnNotifyBegin_0F271FAE4B4291EFCF443CB4D7BCBFE5(class FName NotifyName);
	void OnInterrupted_0F271FAE4B4291EFCF443CB4D7BCBFE5(class FName NotifyName);
	void OnBlendOut_0F271FAE4B4291EFCF443CB4D7BCBFE5(class FName NotifyName);
	void OnCompleted_0F271FAE4B4291EFCF443CB4D7BCBFE5(class FName NotifyName);
	void UseItem();
	void PlayAnimation();
	void SRV_FinishDrink();
	void ExecuteUbergraph_BP_Liquid_Pain(int32 EntryPoint, class FName K2Node_CustomEvent_NotifyName_4, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class FName K2Node_CustomEvent_NotifyName_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class FName K2Node_CustomEvent_NotifyName_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, class FName K2Node_CustomEvent_NotifyName_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, class FName K2Node_CustomEvent_NotifyName, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, class FName Temp_name_Variable, bool Temp_bool_Has_Been_Initd_Variable, bool Temp_bool_IsClosed_Variable, class AActor* CallFunc_GetAttachParentActor_ReturnValue, class AFancyCharacter* K2Node_DynamicCast_AsFancy_Character, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsLocallyControlled_ReturnValue, class UPlayMontageCallbackProxy* CallFunc_CreateProxyObjectForPlayMontage_ReturnValue, bool CallFunc_IsValid_ReturnValue, class AActor* CallFunc_GetAttachParentActor_ReturnValue_1, class ABPCharacter_Demo_C* K2Node_DynamicCast_AsBPCharacter_Demo, bool K2Node_DynamicCast_bSuccess_1, const struct FVector& CallFunc_MakeVector_ReturnValue, const struct FHitResult& CallFunc_K2_SetRelativeLocation_SweepHitResult, class UAudioComponent* CallFunc_SpawnSound2D_ReturnValue);
};

}



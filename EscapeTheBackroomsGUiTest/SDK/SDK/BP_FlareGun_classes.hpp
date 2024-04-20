#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x11 (0x269 - 0x258)
// BlueprintGeneratedClass BP_FlareGun.BP_FlareGun_C
class ABP_FlareGun_C : public ABP_Item_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x258(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                       Muzzle;                                            // 0x260(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	bool                                         CanUse;                                            // 0x268(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class ABP_FlareGun_C* GetDefaultObj();

	void OnNotifyEnd_2B9968E342C281F2784D3CA1FF59D3F5(class FName NotifyName);
	void OnNotifyBegin_2B9968E342C281F2784D3CA1FF59D3F5(class FName NotifyName);
	void OnInterrupted_2B9968E342C281F2784D3CA1FF59D3F5(class FName NotifyName);
	void OnBlendOut_2B9968E342C281F2784D3CA1FF59D3F5(class FName NotifyName);
	void OnCompleted_2B9968E342C281F2784D3CA1FF59D3F5(class FName NotifyName);
	void UseItem();
	void MC_Fire();
	void ExecuteUbergraph_BP_FlareGun(int32 EntryPoint, class AActor* CallFunc_GetOwner_ReturnValue, class ABPCharacter_Demo_C* K2Node_DynamicCast_AsBPCharacter_Demo, bool K2Node_DynamicCast_bSuccess, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UPlayMontageCallbackProxy* CallFunc_CreateProxyObjectForPlayMontage_ReturnValue, bool CallFunc_IsLocallyControlled_ReturnValue, bool CallFunc_IsValid_ReturnValue, class FName K2Node_CustomEvent_NotifyName_4, class FName K2Node_CustomEvent_NotifyName_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, class FName K2Node_CustomEvent_NotifyName_2, class FName K2Node_CustomEvent_NotifyName_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, class FName K2Node_CustomEvent_NotifyName, class FName Temp_name_Variable, const struct FTransform& CallFunc_K2_GetComponentToWorld_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class UAudioComponent* CallFunc_SpawnSoundAttached_ReturnValue, class ABP_FlareProjectile_C* CallFunc_FinishSpawningActor_ReturnValue);
};

}



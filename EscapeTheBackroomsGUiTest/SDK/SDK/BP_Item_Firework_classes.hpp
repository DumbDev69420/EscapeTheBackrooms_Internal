#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x38 (0x290 - 0x258)
// BlueprintGeneratedClass BP_Item_Firework.BP_Item_Firework_C
class ABP_Item_Firework_C : public ABP_Item_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x258(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UNiagaraComponent*                     Niagara;                                           // 0x260(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                       Sparks;                                            // 0x268(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        ExplodeTimer_Explode_CECADC134CDE7D0DEEC0259583FAD28E; // 0x270(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                ExplodeTimer__Direction_CECADC134CDE7D0DEEC0259583FAD28E; // 0x274(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_22FC[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTimelineComponent*                    ExplodeTimer;                                      // 0x278(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CanUse;                                            // 0x280(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_22FD[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        ThrowTime;                                         // 0x284(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                       SparkSound;                                        // 0x288(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_Item_Firework_C* GetDefaultObj();

	void ExplodeTimer__FinishedFunc();
	void ExplodeTimer__UpdateFunc();
	void OnNotifyEnd_2A0F3273455CB03AB9B90EA95723A9CF(class FName NotifyName);
	void OnNotifyBegin_2A0F3273455CB03AB9B90EA95723A9CF(class FName NotifyName);
	void OnInterrupted_2A0F3273455CB03AB9B90EA95723A9CF(class FName NotifyName);
	void OnBlendOut_2A0F3273455CB03AB9B90EA95723A9CF(class FName NotifyName);
	void OnCompleted_2A0F3273455CB03AB9B90EA95723A9CF(class FName NotifyName);
	void OnNotifyEnd_3A4A9B52408959A077D530BA011BC1FC(class FName NotifyName);
	void OnNotifyBegin_3A4A9B52408959A077D530BA011BC1FC(class FName NotifyName);
	void OnInterrupted_3A4A9B52408959A077D530BA011BC1FC(class FName NotifyName);
	void OnBlendOut_3A4A9B52408959A077D530BA011BC1FC(class FName NotifyName);
	void OnCompleted_3A4A9B52408959A077D530BA011BC1FC(class FName NotifyName);
	void OnNotifyEnd_75A74F3E49D0A9605DCB0DAA1C18ED64(class FName NotifyName);
	void OnNotifyBegin_75A74F3E49D0A9605DCB0DAA1C18ED64(class FName NotifyName);
	void OnInterrupted_75A74F3E49D0A9605DCB0DAA1C18ED64(class FName NotifyName);
	void OnBlendOut_75A74F3E49D0A9605DCB0DAA1C18ED64(class FName NotifyName);
	void OnCompleted_75A74F3E49D0A9605DCB0DAA1C18ED64(class FName NotifyName);
	void MC_Prime();
	void MC_Throw();
	void UseItem();
	void StartTimer();
	void ExecuteUbergraph_BP_Item_Firework(int32 EntryPoint, class FName K2Node_CustomEvent_NotifyName_12, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class FName K2Node_CustomEvent_NotifyName_11, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class FName K2Node_CustomEvent_NotifyName_10, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, class FName Temp_name_Variable, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, class FName K2Node_CustomEvent_NotifyName_9, class FName K2Node_CustomEvent_NotifyName_8, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, class FName K2Node_CustomEvent_NotifyName_7, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, class FName K2Node_CustomEvent_NotifyName_6, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_6, class FName K2Node_CustomEvent_NotifyName_5, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_7, class FName Temp_name_Variable_1, class FName K2Node_CustomEvent_NotifyName_4, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_8, class FName K2Node_CustomEvent_NotifyName_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_9, class FName K2Node_CustomEvent_NotifyName_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_10, class FName K2Node_CustomEvent_NotifyName_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_11, class FName K2Node_CustomEvent_NotifyName, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_12, class FName Temp_name_Variable_2, class AActor* CallFunc_GetOwner_ReturnValue, class UAudioComponent* CallFunc_SpawnSoundAttached_ReturnValue, class ABPCharacter_Demo_C* K2Node_DynamicCast_AsBPCharacter_Demo, bool K2Node_DynamicCast_bSuccess, class FName K2Node_CustomEvent_NotifyName_13, class UPlayMontageCallbackProxy* CallFunc_CreateProxyObjectForPlayMontage_ReturnValue, bool CallFunc_IsLocallyControlled_ReturnValue, bool CallFunc_IsValid_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue_1, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, class ABPCharacter_Demo_C* K2Node_DynamicCast_AsBPCharacter_Demo_1, bool K2Node_DynamicCast_bSuccess_1, const struct FRotator& CallFunc_GetBaseAimRotation_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue_2, const struct FTransform& CallFunc_MakeTransform_ReturnValue, class ABPCharacter_Demo_C* K2Node_DynamicCast_AsBPCharacter_Demo_2, bool K2Node_DynamicCast_bSuccess_2, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class ABP_FireworkProjectile_C* CallFunc_FinishSpawningActor_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_13, bool CallFunc_HasAuthority_ReturnValue, class FName K2Node_CustomEvent_NotifyName_14, class UAudioComponent* CallFunc_SpawnSoundAttached_ReturnValue_1, class AActor* CallFunc_GetOwner_ReturnValue_3, class ABPCharacter_Demo_C* K2Node_DynamicCast_AsBPCharacter_Demo_3, bool K2Node_DynamicCast_bSuccess_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_14, class UPlayMontageCallbackProxy* CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_1, class UPlayMontageCallbackProxy* CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_2, bool CallFunc_IsLocallyControlled_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2);
};

}



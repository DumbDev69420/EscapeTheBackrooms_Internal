#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x48 (0x2A0 - 0x258)
// BlueprintGeneratedClass BP_WalkieTalkie.BP_WalkieTalkie_C
class ABP_WalkieTalkie_C : public ABP_Item_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x258(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                       Scene1;                                            // 0x260(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                       Audio;                                             // 0x268(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  Walkie_Talkie_low_RightButton_low;                 // 0x270(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  Walkie_Talkie_low_MidButton_low;                   // 0x278(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  Walkie_Talkie_low_LeftButton_low;                  // 0x280(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  Walkie_Talkie_low_Antenna_low;                     // 0x288(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class ABP_WalkieTalkie_Display_C*            Display;                                           // 0x290(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsUsingFOV;                                        // 0x298(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_11E8[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        NumConnected;                                      // 0x29C(0x4)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_WalkieTalkie_C* GetDefaultObj();

	void ActivateRadio(int32 CallFunc_Add_IntInt_ReturnValue);
	void OnRep_NumConnected(const class FString& CallFunc_Conv_IntToString_ReturnValue, bool CallFunc_IsValid_ReturnValue);
	void ResetAlarm(class AActor* CallFunc_GetOwner_ReturnValue, class AFancyCharacter* K2Node_DynamicCast_AsFancy_Character, bool K2Node_DynamicCast_bSuccess);
	void SetMaterial(bool EnabledFOV, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, TArray<class AActor*>& CallFunc_GetAttachedActors_OutActors, class AActor* CallFunc_Array_Get_Item, class ABP_WalkieTalkie_Display_C* K2Node_DynamicCast_AsBP_Walkie_Talkie_Display, bool K2Node_DynamicCast_bSuccess, class UStaticMeshComponent* CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue);
	void OnNotifyEnd_0A19368B42B332B8561A4A9702E5897B(class FName NotifyName);
	void OnNotifyBegin_0A19368B42B332B8561A4A9702E5897B(class FName NotifyName);
	void OnInterrupted_0A19368B42B332B8561A4A9702E5897B(class FName NotifyName);
	void OnBlendOut_0A19368B42B332B8561A4A9702E5897B(class FName NotifyName);
	void OnCompleted_0A19368B42B332B8561A4A9702E5897B(class FName NotifyName);
	void OnNotifyEnd_F5534A844701AD21AB1B749705B92259(class FName NotifyName);
	void OnNotifyBegin_F5534A844701AD21AB1B749705B92259(class FName NotifyName);
	void OnInterrupted_F5534A844701AD21AB1B749705B92259(class FName NotifyName);
	void OnBlendOut_F5534A844701AD21AB1B749705B92259(class FName NotifyName);
	void OnCompleted_F5534A844701AD21AB1B749705B92259(class FName NotifyName);
	void ReceiveBeginPlay();
	void ReceiveDestroyed();
	void UseItem();
	void MC_Connect();
	void MC_Alarm();
	void ExecuteUbergraph_BP_WalkieTalkie(int32 EntryPoint, const struct FTimerHandle& CallFunc_K2_SetTimer_ReturnValue, class FName K2Node_CustomEvent_NotifyName_9, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class FName K2Node_CustomEvent_NotifyName_8, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class FName K2Node_CustomEvent_NotifyName_7, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, class FName K2Node_CustomEvent_NotifyName_6, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, class FName K2Node_CustomEvent_NotifyName_5, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, class FName Temp_name_Variable, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, class FName K2Node_CustomEvent_NotifyName_4, class FName K2Node_CustomEvent_NotifyName_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_6, class FName K2Node_CustomEvent_NotifyName_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_7, class FName K2Node_CustomEvent_NotifyName_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_8, class FName K2Node_CustomEvent_NotifyName, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_9, class FName Temp_name_Variable_1, const struct FTimerHandle& CallFunc_K2_SetTimer_ReturnValue_1, class AActor* CallFunc_GetOwner_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue_1, class ABPCharacter_Demo_C* K2Node_DynamicCast_AsBPCharacter_Demo, bool K2Node_DynamicCast_bSuccess, class ABPCharacter_Demo_C* K2Node_DynamicCast_AsBPCharacter_Demo_1, bool K2Node_DynamicCast_bSuccess_1, const struct FTransform& CallFunc_MakeTransform_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue_2, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class ABP_WalkieTalkie_Display_C* CallFunc_FinishSpawningActor_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue_3, class AFancyCharacter* K2Node_DynamicCast_AsFancy_Character, bool K2Node_DynamicCast_bSuccess_2, class UAudioComponent* CallFunc_SpawnSoundAttached_ReturnValue, class UPlayMontageCallbackProxy* CallFunc_CreateProxyObjectForPlayMontage_ReturnValue, bool CallFunc_IsLocallyControlled_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UAudioComponent* CallFunc_SpawnSoundAttached_ReturnValue_1, class AActor* CallFunc_GetOwner_ReturnValue_4, class AFancyCharacter* K2Node_DynamicCast_AsFancy_Character_1, bool K2Node_DynamicCast_bSuccess_3, bool CallFunc_IsLocallyControlled_ReturnValue_1, class UPlayMontageCallbackProxy* CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_1, class UAudioComponent* CallFunc_SpawnSoundAttached_ReturnValue_2);
};

}



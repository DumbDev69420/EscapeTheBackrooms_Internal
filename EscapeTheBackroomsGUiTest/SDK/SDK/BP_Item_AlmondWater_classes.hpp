#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xA (0x262 - 0x258)
// BlueprintGeneratedClass BP_Item_AlmondWater.BP_Item_AlmondWater_C
class ABP_Item_AlmondWater_C : public ABP_Item_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x258(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	bool                                         HalloweenMat;                                      // 0x260(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         EnabledFOV;                                        // 0x261(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class ABP_Item_AlmondWater_C* GetDefaultObj();

	void SetMaterial(bool EnabledFOV, bool CallFunc_Not_PreBool_ReturnValue, bool Temp_bool_Variable, class UMaterialInterface* Temp_object_Variable, bool Temp_bool_Variable_1, class UMaterialInterface* Temp_object_Variable_1, class UMaterialInterface* K2Node_Select_Default, class UMaterialInterface* K2Node_Select_Default_1);
	void OnNotifyEnd_3881A8424F905F4C29433AB5756CB3DA(class FName NotifyName);
	void OnNotifyBegin_3881A8424F905F4C29433AB5756CB3DA(class FName NotifyName);
	void OnInterrupted_3881A8424F905F4C29433AB5756CB3DA(class FName NotifyName);
	void OnBlendOut_3881A8424F905F4C29433AB5756CB3DA(class FName NotifyName);
	void OnCompleted_3881A8424F905F4C29433AB5756CB3DA(class FName NotifyName);
	void PlayAnimation();
	void UseItem();
	void Damage_SERVER(class UObject* Target, class AFancyCharacter* Character);
	void ToggleEvent(bool Enable);
	void OnEventLoaded(enum class EEventType EventType);
	void ExecuteUbergraph_BP_Item_AlmondWater(int32 EntryPoint, class FName K2Node_CustomEvent_NotifyName_4, class FName K2Node_CustomEvent_NotifyName_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class FName K2Node_CustomEvent_NotifyName_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class FName K2Node_CustomEvent_NotifyName_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, class FName K2Node_CustomEvent_NotifyName, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, class FName Temp_name_Variable, class AActor* CallFunc_GetAttachParentActor_ReturnValue, class AFancyCharacter* K2Node_DynamicCast_AsFancy_Character, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsLocallyControlled_ReturnValue, class UPlayMontageCallbackProxy* CallFunc_CreateProxyObjectForPlayMontage_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UObject* K2Node_CustomEvent_Target, class AFancyCharacter* K2Node_CustomEvent_Character, TScriptInterface<class IBP_Breakable_C> K2Node_DynamicCast_AsBP_Breakable, bool K2Node_DynamicCast_bSuccess_1, class AActor* CallFunc_GetOwner_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, class ABPCharacter_Demo_C* K2Node_DynamicCast_AsBPCharacter_Demo, bool K2Node_DynamicCast_bSuccess_2, class AMP_PS_C* K2Node_DynamicCast_AsMP_PS, bool K2Node_DynamicCast_bSuccess_3, class UAudioComponent* CallFunc_SpawnSoundAttached_ReturnValue, bool K2Node_Event_Enable, enum class EEventType K2Node_Event_EventType);
};

}



#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0x270 - 0x258)
// BlueprintGeneratedClass BP_Item_Crowbar.BP_Item_Crowbar_C
class ABP_Item_Crowbar_C : public ABP_Item_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x258(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	bool                                         CanUse;                                            // 0x260(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_234C[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ACrowbar_BP_C*                         Crowbar;                                           // 0x268(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_Item_Crowbar_C* GetDefaultObj();

	void OnNotifyEnd_751D76F146E38F09943798A236AB1CAA(class FName NotifyName);
	void OnNotifyBegin_751D76F146E38F09943798A236AB1CAA(class FName NotifyName);
	void OnInterrupted_751D76F146E38F09943798A236AB1CAA(class FName NotifyName);
	void OnBlendOut_751D76F146E38F09943798A236AB1CAA(class FName NotifyName);
	void OnCompleted_751D76F146E38F09943798A236AB1CAA(class FName NotifyName);
	void OnNotifyEnd_BE8B199649F76BBA28D0A884255F0BFA(class FName NotifyName);
	void OnNotifyBegin_BE8B199649F76BBA28D0A884255F0BFA(class FName NotifyName);
	void OnInterrupted_BE8B199649F76BBA28D0A884255F0BFA(class FName NotifyName);
	void OnBlendOut_BE8B199649F76BBA28D0A884255F0BFA(class FName NotifyName);
	void OnCompleted_BE8B199649F76BBA28D0A884255F0BFA(class FName NotifyName);
	void UseItem();
	void Damage_SERVER(class UObject* Target, class AFancyCharacter* Character);
	void PlayAnimation();
	void OC_Trace();
	void ExecuteUbergraph_BP_Item_Crowbar(int32 EntryPoint, class FName K2Node_CustomEvent_NotifyName_7, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class FName K2Node_CustomEvent_NotifyName_6, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class FName K2Node_CustomEvent_NotifyName_5, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, class FName Temp_name_Variable, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, class FName K2Node_CustomEvent_NotifyName_4, class FName K2Node_CustomEvent_NotifyName_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, class FName K2Node_CustomEvent_NotifyName_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, class FName K2Node_CustomEvent_NotifyName_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_6, class FName K2Node_CustomEvent_NotifyName, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_7, class FName Temp_name_Variable_1, const struct FTransform& CallFunc_MakeTransform_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class ACrowbar_BP_C* CallFunc_FinishSpawningActor_ReturnValue, TArray<class AActor*>& Temp_object_Variable, bool CallFunc_HasAuthority_ReturnValue, class FName K2Node_CustomEvent_NotifyName_9, bool CallFunc_HasAuthority_ReturnValue_1, class UObject* K2Node_CustomEvent_Target, class AFancyCharacter* K2Node_CustomEvent_Character, TScriptInterface<class IBP_Breakable_C> K2Node_DynamicCast_AsBP_Breakable, bool K2Node_DynamicCast_bSuccess, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_8, class UAudioComponent* CallFunc_SpawnSoundAttached_ReturnValue, bool CallFunc_HasAuthority_ReturnValue_2, class AActor* CallFunc_GetOwner_ReturnValue, class AFancyCharacter* K2Node_DynamicCast_AsFancy_Character, bool K2Node_DynamicCast_bSuccess_1, class FName K2Node_CustomEvent_NotifyName_8, bool CallFunc_IsLocallyControlled_ReturnValue, bool CallFunc_IsLocallyControlled_ReturnValue_1, class UPlayMontageCallbackProxy* CallFunc_CreateProxyObjectForPlayMontage_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UPlayMontageCallbackProxy* CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_1, class AActor* CallFunc_GetOwner_ReturnValue_1, class AFancyCharacter* K2Node_DynamicCast_AsFancy_Character_1, bool K2Node_DynamicCast_bSuccess_2, const struct FVector& CallFunc_GetForwardVector_ReturnValue, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, const struct FVector& CallFunc_RandomUnitVectorInConeInRadians_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, const struct FHitResult& CallFunc_LineTraceSingle_OutHit, bool CallFunc_LineTraceSingle_ReturnValue, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, const struct FVector& CallFunc_BreakHitResult_Location, const struct FVector& CallFunc_BreakHitResult_ImpactPoint, const struct FVector& CallFunc_BreakHitResult_Normal, const struct FVector& CallFunc_BreakHitResult_ImpactNormal, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, class AActor* CallFunc_BreakHitResult_HitActor, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, class FName CallFunc_BreakHitResult_HitBoneName, int32 CallFunc_BreakHitResult_HitItem, int32 CallFunc_BreakHitResult_ElementIndex, int32 CallFunc_BreakHitResult_FaceIndex, const struct FVector& CallFunc_BreakHitResult_TraceStart, const struct FVector& CallFunc_BreakHitResult_TraceEnd, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_9, bool CallFunc_DoesImplementInterface_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
};

}



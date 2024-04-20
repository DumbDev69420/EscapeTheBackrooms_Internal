#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x29 (0x281 - 0x258)
// BlueprintGeneratedClass BP_Rope.BP_Rope_C
class ABP_Rope_C : public ABP_Item_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x258(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UCableComponent*                       Cable;                                             // 0x260(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UArrowComponent*                       Arrow;                                             // 0x268(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UDecalComponent*                       LastDecal;                                         // 0x270(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_RopeZone_C*                        RopeZone;                                          // 0x278(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsUsing;                                           // 0x280(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class ABP_Rope_C* GetDefaultObj();

	void OnNotifyEnd_6D75097146D9F446056AF481A6C55D82(class FName NotifyName);
	void OnNotifyBegin_6D75097146D9F446056AF481A6C55D82(class FName NotifyName);
	void OnInterrupted_6D75097146D9F446056AF481A6C55D82(class FName NotifyName);
	void OnBlendOut_6D75097146D9F446056AF481A6C55D82(class FName NotifyName);
	void OnCompleted_6D75097146D9F446056AF481A6C55D82(class FName NotifyName);
	void UseItem();
	void MC_Throw();
	void OC_HideRope();
	void OC_Trace();
	void SRV_TossRope(class ABP_Rope_Floor_C* Floor, const struct FVector& Impact);
	void OC_ShowRope(class AActor* Actor, const struct FVector& Location);
	void ReceiveDestroyed();
	void SRV_HideRope();
	void SRV_ShowRope(class AActor* Actor, const struct FVector& Location);
	void RemoveRope();
	void ExecuteUbergraph_BP_Rope(int32 EntryPoint, class AActor* CallFunc_GetOwner_ReturnValue, class ABPCharacter_Demo_C* K2Node_DynamicCast_AsBPCharacter_Demo, bool K2Node_DynamicCast_bSuccess, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class FName K2Node_CustomEvent_NotifyName, class FName Temp_name_Variable, bool CallFunc_IsValid_ReturnValue, bool CallFunc_HasAuthority_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue_1, class AFancyCharacter* K2Node_DynamicCast_AsFancy_Character, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_IsLocallyControlled_ReturnValue, class UPlayMontageCallbackProxy* CallFunc_CreateProxyObjectForPlayMontage_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue_2, class ABPCharacter_Demo_C* K2Node_DynamicCast_AsBPCharacter_Demo_1, bool K2Node_DynamicCast_bSuccess_2, bool CallFunc_IsValid_ReturnValue_1, TArray<class AActor*>& K2Node_MakeArray_Array, const struct FVector& CallFunc_GetForwardVector_ReturnValue, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, const struct FVector& CallFunc_RandomUnitVectorInConeInRadians_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue_3, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, class ABPCharacter_Demo_C* K2Node_DynamicCast_AsBPCharacter_Demo_2, bool K2Node_DynamicCast_bSuccess_3, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, const struct FHitResult& CallFunc_LineTraceSingle_OutHit, bool CallFunc_LineTraceSingle_ReturnValue, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, const struct FVector& CallFunc_BreakHitResult_Location, const struct FVector& CallFunc_BreakHitResult_ImpactPoint, const struct FVector& CallFunc_BreakHitResult_Normal, const struct FVector& CallFunc_BreakHitResult_ImpactNormal, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, class AActor* CallFunc_BreakHitResult_HitActor, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, class FName CallFunc_BreakHitResult_HitBoneName, int32 CallFunc_BreakHitResult_HitItem, int32 CallFunc_BreakHitResult_ElementIndex, int32 CallFunc_BreakHitResult_FaceIndex, const struct FVector& CallFunc_BreakHitResult_TraceStart, const struct FVector& CallFunc_BreakHitResult_TraceEnd, const class FString& CallFunc_GetDisplayName_ReturnValue, class ABP_Rope_Floor_C* K2Node_DynamicCast_AsBP_Rope_Floor, bool K2Node_DynamicCast_bSuccess_4, const struct FVector& CallFunc_GetActorForwardVector_ReturnValue, const struct FTransform& CallFunc_GetTransform_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue_1, const struct FVector& CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale, const struct FVector& CallFunc_Add_VectorVector_ReturnValue_1, const struct FTransform& CallFunc_MakeTransform_ReturnValue, class ABP_Rope_Floor_C* K2Node_CustomEvent_Floor, const struct FVector& K2Node_CustomEvent_Impact, class FName K2Node_CustomEvent_NotifyName_1, const struct FTransform& CallFunc_MakeTransform_ReturnValue_1, class AActor* K2Node_CustomEvent_Actor_1, const struct FVector& K2Node_CustomEvent_Location_1, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, const struct FTransform& CallFunc_GetTransform_ReturnValue_1, const struct FVector& CallFunc_InverseTransformLocation_ReturnValue, class ABP_RopeZone_C* CallFunc_FinishSpawningActor_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class FName K2Node_CustomEvent_NotifyName_2, bool CallFunc_IsValid_ReturnValue_2, class FName K2Node_CustomEvent_NotifyName_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, class AActor* K2Node_CustomEvent_Actor, const struct FVector& K2Node_CustomEvent_Location, class AActor* CallFunc_GetOwner_ReturnValue_4, class ABPCharacter_Demo_C* K2Node_DynamicCast_AsBPCharacter_Demo_3, bool K2Node_DynamicCast_bSuccess_5, class FName K2Node_CustomEvent_NotifyName_4, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, bool CallFunc_Not_PreBool_ReturnValue);
};

}



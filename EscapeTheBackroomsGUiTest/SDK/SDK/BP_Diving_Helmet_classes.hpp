#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x78 (0x2D0 - 0x258)
// BlueprintGeneratedClass BP_Diving_Helmet.BP_Diving_Helmet_C
class ABP_Diving_Helmet_C : public ABP_Item_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x258(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	float                                        Shift_Alpha_02C40AF140D00309DDBC96B377376A90;      // 0x260(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                Shift__Direction_02C40AF140D00309DDBC96B377376A90; // 0x264(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_231A[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTimelineComponent*                    Shift;                                             // 0x268(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTransform                            StartTransform;                                    // 0x270(0x30)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FTransform                            OffsetTransform;                                   // 0x2A0(0x30)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class ABP_Diving_Helmet_C* GetDefaultObj();

	void Shift__FinishedFunc();
	void Shift__UpdateFunc();
	void OnNotifyEnd_3FE3233945D5FF790518F1ADBD2F23FC(class FName NotifyName);
	void OnNotifyBegin_3FE3233945D5FF790518F1ADBD2F23FC(class FName NotifyName);
	void OnInterrupted_3FE3233945D5FF790518F1ADBD2F23FC(class FName NotifyName);
	void OnBlendOut_3FE3233945D5FF790518F1ADBD2F23FC(class FName NotifyName);
	void OnCompleted_3FE3233945D5FF790518F1ADBD2F23FC(class FName NotifyName);
	void UseItem();
	void PlayAnimation();
	void SRV_EquipHelmet();
	void ExecuteUbergraph_BP_Diving_Helmet(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class FName K2Node_CustomEvent_NotifyName_3, class FName K2Node_CustomEvent_NotifyName_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class FName K2Node_CustomEvent_NotifyName_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, class FName K2Node_CustomEvent_NotifyName, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, class FName Temp_name_Variable, bool Temp_bool_Has_Been_Initd_Variable, class AActor* CallFunc_GetAttachParentActor_ReturnValue, class AFancyCharacter* K2Node_DynamicCast_AsFancy_Character, bool K2Node_DynamicCast_bSuccess, class FName K2Node_CustomEvent_NotifyName_4, class UPlayMontageCallbackProxy* CallFunc_CreateProxyObjectForPlayMontage_ReturnValue, class ABPCharacter_Demo_C* K2Node_DynamicCast_AsBPCharacter_Demo, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsLocallyControlled_ReturnValue, class AActor* CallFunc_GetAttachParentActor_ReturnValue_1, class ABPCharacter_Demo_C* K2Node_DynamicCast_AsBPCharacter_Demo_1, bool K2Node_DynamicCast_bSuccess_2, class AMP_PS_C* K2Node_DynamicCast_AsMP_PS, bool K2Node_DynamicCast_bSuccess_3, bool Temp_bool_IsClosed_Variable, const struct FTransform& CallFunc_GetRelativeTransform_ReturnValue, const struct FTransform& CallFunc_TLerp_ReturnValue, const struct FHitResult& CallFunc_K2_SetRelativeTransform_SweepHitResult, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4);
};

}



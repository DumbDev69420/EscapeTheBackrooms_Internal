#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x38 (0x290 - 0x258)
// BlueprintGeneratedClass BP_Item_Glowstick.BP_Item_Glowstick_C
class ABP_Item_Glowstick_C : public ABP_Item_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x258(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class USpotLightComponent*                   SpotLight;                                         // 0x260(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBP_Glowstick_Component_C*             BP_Glowstick_Component;                            // 0x268(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UPointLightComponent*                  PointLight;                                        // 0x270(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              DropRotation;                                      // 0x278(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_709[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UClass*                                DropClass;                                         // 0x288(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_Item_Glowstick_C* GetDefaultObj();

	void GetAdjustedRadius(float Radius, float* Adjusted, bool CallFunc_IsHeadMountedDisplayEnabled_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue);
	void GetAdjustedIntensity(float Intensity, float* Adjusted, bool CallFunc_IsHeadMountedDisplayEnabled_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue);
	void OnNotifyEnd_AE195271461F08CE34117A8A70C47D64(class FName NotifyName);
	void OnNotifyBegin_AE195271461F08CE34117A8A70C47D64(class FName NotifyName);
	void OnInterrupted_AE195271461F08CE34117A8A70C47D64(class FName NotifyName);
	void OnBlendOut_AE195271461F08CE34117A8A70C47D64(class FName NotifyName);
	void OnCompleted_AE195271461F08CE34117A8A70C47D64(class FName NotifyName);
	void UseItem();
	void MC_Fire();
	void ReceiveBeginPlay();
	void MC_PlaySubtitle();
	void ReceiveTick(float DeltaSeconds);
	void ExecuteUbergraph_BP_Item_Glowstick(int32 EntryPoint, class AActor* CallFunc_GetOwner_ReturnValue, class ACharacter* K2Node_DynamicCast_AsCharacter, bool K2Node_DynamicCast_bSuccess, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_IsLocallyControlled_ReturnValue, class FName K2Node_CustomEvent_NotifyName_1, class FName K2Node_CustomEvent_NotifyName, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class FName Temp_name_Variable, bool Temp_bool_Has_Been_Initd_Variable, bool Temp_bool_IsClosed_Variable, class AActor* CallFunc_GetOwner_ReturnValue_1, class ABPCharacter_Demo_C* K2Node_DynamicCast_AsBPCharacter_Demo, bool K2Node_DynamicCast_bSuccess_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, bool CallFunc_IsLocallyControlled_ReturnValue_1, class UPlayMontageCallbackProxy* CallFunc_CreateProxyObjectForPlayMontage_ReturnValue, const struct FVector& CallFunc_GetSocketLocation_ReturnValue, const struct FTransform& CallFunc_MakeTransform_ReturnValue, bool CallFunc_IsValid_ReturnValue, class FName K2Node_CustomEvent_NotifyName_2, bool CallFunc_HasAuthority_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, class FName K2Node_CustomEvent_NotifyName_3, class AActor* CallFunc_GetOwner_ReturnValue_2, class ABPCharacter_Demo_C* K2Node_DynamicCast_AsBPCharacter_Demo_1, bool K2Node_DynamicCast_bSuccess_2, class AController* CallFunc_GetController_ReturnValue, const struct FHE_Subtitle& K2Node_MakeStruct_HE_Subtitle, class AMP_PlayerController_C* K2Node_DynamicCast_AsMP_Player_Controller, bool K2Node_DynamicCast_bSuccess_3, TArray<struct FHE_Subtitle>& K2Node_MakeArray_Array, class UGameInstance* CallFunc_GetGameInstance_ReturnValue, const struct FHE_SubtitleSeq& K2Node_MakeStruct_HE_SubtitleSeq, class UBP_MyGameInstance_C* K2Node_DynamicCast_AsBP_My_Game_Instance, bool K2Node_DynamicCast_bSuccess_4, bool CallFunc_Not_PreBool_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, float K2Node_Event_DeltaSeconds, class FName K2Node_CustomEvent_NotifyName_4, const struct FRotator& CallFunc_K2_GetComponentRotation_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class ABP_DroppedItem_Glowstick_C* CallFunc_FinishSpawningActor_ReturnValue);
};

}



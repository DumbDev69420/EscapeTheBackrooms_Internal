#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x81 (0x2D9 - 0x258)
// BlueprintGeneratedClass BP_Item_Flashlight.BP_Item_Flashlight_C
class ABP_Item_Flashlight_C : public ABP_Item_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x258(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class USpotLightComponent*                   FlashlightFakeGI;                                  // 0x260(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USpotLightComponent*                   Flashlight;                                        // 0x268(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USpringArmComponent*                   FlashlightArm;                                     // 0x270(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UPointLightComponent*                  PointLight;                                        // 0x278(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        Timeline_2_Intensity_008846C045F53BBD4D1894AF62ABCDA4; // 0x280(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                Timeline_2__Direction_008846C045F53BBD4D1894AF62ABCDA4; // 0x284(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_232D[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTimelineComponent*                    Timeline_2;                                        // 0x288(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        TogglePower_ConeAngle_13371DEB4B39ADCC2F805FA1A0243354; // 0x290(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        TogglePower_Radius_13371DEB4B39ADCC2F805FA1A0243354; // 0x294(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        TogglePower_Intensity_13371DEB4B39ADCC2F805FA1A0243354; // 0x298(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                TogglePower__Direction_13371DEB4B39ADCC2F805FA1A0243354; // 0x29C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_232E[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTimelineComponent*                    TogglePower;                                       // 0x2A0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Timeline_1_Attenuation_E0EC2A9E45AAEE86A82C75B21D1308FD; // 0x2A8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Timeline_1_Intensity_E0EC2A9E45AAEE86A82C75B21D1308FD; // 0x2AC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                Timeline_1__Direction_E0EC2A9E45AAEE86A82C75B21D1308FD; // 0x2B0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_232F[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTimelineComponent*                    Timeline_1;                                        // 0x2B8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Timeline_0_Intensity_EDA80A064DE4869B230E87B5CA1781E4; // 0x2C0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                Timeline_0__Direction_EDA80A064DE4869B230E87B5CA1781E4; // 0x2C4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2330[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTimelineComponent*                    Timeline_0;                                        // 0x2C8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsFlashlightOn;                                    // 0x2D0(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor)
	uint8                                        Pad_2331[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Intensity;                                         // 0x2D4(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         HasGI;                                             // 0x2D8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class ABP_Item_Flashlight_C* GetDefaultObj();

	void GetAdjustedRadius(float Radius, float* Adjusted, bool CallFunc_IsHeadMountedDisplayEnabled_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue);
	void GetAdjustedIntensity(float Intensity, float* Adjusted, bool CallFunc_IsHeadMountedDisplayEnabled_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue);
	void OnRep_IsFlashlightOn(float CallFunc_Multiply_FloatFloat_ReturnValue, class UAudioComponent* CallFunc_SpawnSoundAttached_ReturnValue);
	void Timeline_0__FinishedFunc();
	void Timeline_0__UpdateFunc();
	void Timeline_1__FinishedFunc();
	void Timeline_1__UpdateFunc();
	void TogglePower__FinishedFunc();
	void TogglePower__UpdateFunc();
	void Timeline_2__FinishedFunc();
	void Timeline_2__UpdateFunc();
	void OnNotifyEnd_858C6BED431A8EBEEAB2D09BA256DAA6(class FName NotifyName);
	void OnNotifyBegin_858C6BED431A8EBEEAB2D09BA256DAA6(class FName NotifyName);
	void OnInterrupted_858C6BED431A8EBEEAB2D09BA256DAA6(class FName NotifyName);
	void OnBlendOut_858C6BED431A8EBEEAB2D09BA256DAA6(class FName NotifyName);
	void OnCompleted_858C6BED431A8EBEEAB2D09BA256DAA6(class FName NotifyName);
	void UseItem();
	void ReceiveBeginPlay();
	void ToggleFadePower(bool FadeOut);
	void PlayAnimation();
	void StartFlicker();
	void ToggleFlashlightPower(bool Power);
	void FadeLight(bool FadeOut);
	void ExecuteUbergraph_BP_Item_Flashlight(int32 EntryPoint, class FName K2Node_CustomEvent_NotifyName_4, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class FName K2Node_CustomEvent_NotifyName_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class FName K2Node_CustomEvent_NotifyName_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, class FName K2Node_CustomEvent_NotifyName_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, class FName K2Node_CustomEvent_NotifyName, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, class FName Temp_name_Variable, class USceneComponent* CallFunc_K2_GetRootComponent_ReturnValue, float CallFunc_GetAdjustedRadius_Adjusted, float CallFunc_GetAdjustedIntensity_Adjusted, bool CallFunc_EqualEqual_ByteByte_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool K2Node_CustomEvent_FadeOut_1, class ABP_LightFade_Box_C* CallFunc_GetActorOfClass_ReturnValue, bool CallFunc_IsOverlappingActor_ReturnValue, const class FString& CallFunc_GetCurrentLevelName_ReturnValue, class AActor* CallFunc_GetAttachParentActor_ReturnValue, bool CallFunc_EqualEqual_StrStr_ReturnValue, class AFancyCharacter* K2Node_DynamicCast_AsFancy_Character, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsLocallyControlled_ReturnValue, class UPlayMontageCallbackProxy* CallFunc_CreateProxyObjectForPlayMontage_ReturnValue, bool CallFunc_EqualEqual_StrStr_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, bool CallFunc_EqualEqual_StrStr_ReturnValue_2, bool CallFunc_EqualEqual_StrStr_ReturnValue_3, bool CallFunc_EqualEqual_StrStr_ReturnValue_4, bool CallFunc_EqualEqual_StrStr_ReturnValue_5, bool CallFunc_EqualEqual_StrStr_ReturnValue_6, bool CallFunc_EqualEqual_StrStr_ReturnValue_7, bool CallFunc_EqualEqual_StrStr_ReturnValue_8, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue_2, class AActor* CallFunc_GetOwner_ReturnValue, class ABPCharacter_Demo_C* K2Node_DynamicCast_AsBPCharacter_Demo, bool K2Node_DynamicCast_bSuccess_1, class AActor* CallFunc_GetOwner_ReturnValue_1, TArray<class USceneComponent*>& CallFunc_GetComponentsByTag_ReturnValue, class ABPCharacter_Demo_C* K2Node_DynamicCast_AsBPCharacter_Demo_1, bool K2Node_DynamicCast_bSuccess_2, class USceneComponent* CallFunc_Array_Get_Item, bool CallFunc_IsLocallyControlled_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, float CallFunc_GetAdjustedIntensity_Adjusted_1, float CallFunc_GetAdjustedIntensity_Adjusted_2, float CallFunc_GetAdjustedIntensity_Adjusted_3, float CallFunc_GetAdjustedIntensity_Adjusted_4, float CallFunc_GetAdjustedRadius_Adjusted_1, float CallFunc_GetAdjustedRadius_Adjusted_2, float CallFunc_GetAdjustedRadius_Adjusted_3, bool K2Node_CustomEvent_Power, bool CallFunc_Not_PreBool_ReturnValue_1, class AActor* CallFunc_GetOwner_ReturnValue_2, TArray<class AActor*>& CallFunc_GetOverlappingActors_OverlappingActors, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_GreaterEqual_IntInt_ReturnValue, float CallFunc_GetAdjustedIntensity_Adjusted_5, float CallFunc_GetAdjustedIntensity_Adjusted_6, float CallFunc_GetAdjustedRadius_Adjusted_4, float CallFunc_GetAdjustedRadius_Adjusted_5, float CallFunc_GetAdjustedIntensity_Adjusted_7, float CallFunc_GetAdjustedIntensity_Adjusted_8, float CallFunc_GetAdjustedIntensity_Adjusted_9, float CallFunc_GetAdjustedRadius_Adjusted_6, bool K2Node_CustomEvent_FadeOut);
};

}



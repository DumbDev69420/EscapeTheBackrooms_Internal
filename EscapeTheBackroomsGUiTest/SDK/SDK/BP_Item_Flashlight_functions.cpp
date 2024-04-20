#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Item_Flashlight.BP_Item_Flashlight_C
// (Actor)

class UClass* ABP_Item_Flashlight_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Item_Flashlight_C");

	return Clss;
}


// BP_Item_Flashlight_C BP_Item_Flashlight.Default__BP_Item_Flashlight_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_Item_Flashlight_C* ABP_Item_Flashlight_C::GetDefaultObj()
{
	static class ABP_Item_Flashlight_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_Item_Flashlight_C*>(ABP_Item_Flashlight_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_Item_Flashlight.BP_Item_Flashlight_C.GetAdjustedRadius
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                              Radius                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Adjusted                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsHeadMountedDisplayEnabled_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Item_Flashlight_C::GetAdjustedRadius(float Radius, float* Adjusted, bool CallFunc_IsHeadMountedDisplayEnabled_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Item_Flashlight_C", "GetAdjustedRadius");

	Params::ABP_Item_Flashlight_C_GetAdjustedRadius_Params Parms{};

	Parms.Radius = Radius;
	Parms.CallFunc_IsHeadMountedDisplayEnabled_ReturnValue = CallFunc_IsHeadMountedDisplayEnabled_ReturnValue;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Adjusted != nullptr)
		*Adjusted = Parms.Adjusted;

}


// Function BP_Item_Flashlight.BP_Item_Flashlight_C.GetAdjustedIntensity
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                              Intensity                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Adjusted                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsHeadMountedDisplayEnabled_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Item_Flashlight_C::GetAdjustedIntensity(float Intensity, float* Adjusted, bool CallFunc_IsHeadMountedDisplayEnabled_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Item_Flashlight_C", "GetAdjustedIntensity");

	Params::ABP_Item_Flashlight_C_GetAdjustedIntensity_Params Parms{};

	Parms.Intensity = Intensity;
	Parms.CallFunc_IsHeadMountedDisplayEnabled_ReturnValue = CallFunc_IsHeadMountedDisplayEnabled_ReturnValue;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Adjusted != nullptr)
		*Adjusted = Parms.Adjusted;

}


// Function BP_Item_Flashlight.BP_Item_Flashlight_C.OnRep_IsFlashlightOn
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAudioComponent*             CallFunc_SpawnSoundAttached_ReturnValue                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Item_Flashlight_C::OnRep_IsFlashlightOn(float CallFunc_Multiply_FloatFloat_ReturnValue, class UAudioComponent* CallFunc_SpawnSoundAttached_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Item_Flashlight_C", "OnRep_IsFlashlightOn");

	Params::ABP_Item_Flashlight_C_OnRep_IsFlashlightOn_Params Parms{};

	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;
	Parms.CallFunc_SpawnSoundAttached_ReturnValue = CallFunc_SpawnSoundAttached_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Item_Flashlight.BP_Item_Flashlight_C.Timeline_0__FinishedFunc
// (BlueprintEvent)
// Parameters:

void ABP_Item_Flashlight_C::Timeline_0__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Item_Flashlight_C", "Timeline_0__FinishedFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Item_Flashlight.BP_Item_Flashlight_C.Timeline_0__UpdateFunc
// (BlueprintEvent)
// Parameters:

void ABP_Item_Flashlight_C::Timeline_0__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Item_Flashlight_C", "Timeline_0__UpdateFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Item_Flashlight.BP_Item_Flashlight_C.Timeline_1__FinishedFunc
// (BlueprintEvent)
// Parameters:

void ABP_Item_Flashlight_C::Timeline_1__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Item_Flashlight_C", "Timeline_1__FinishedFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Item_Flashlight.BP_Item_Flashlight_C.Timeline_1__UpdateFunc
// (BlueprintEvent)
// Parameters:

void ABP_Item_Flashlight_C::Timeline_1__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Item_Flashlight_C", "Timeline_1__UpdateFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Item_Flashlight.BP_Item_Flashlight_C.TogglePower__FinishedFunc
// (BlueprintEvent)
// Parameters:

void ABP_Item_Flashlight_C::TogglePower__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Item_Flashlight_C", "TogglePower__FinishedFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Item_Flashlight.BP_Item_Flashlight_C.TogglePower__UpdateFunc
// (BlueprintEvent)
// Parameters:

void ABP_Item_Flashlight_C::TogglePower__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Item_Flashlight_C", "TogglePower__UpdateFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Item_Flashlight.BP_Item_Flashlight_C.Timeline_2__FinishedFunc
// (BlueprintEvent)
// Parameters:

void ABP_Item_Flashlight_C::Timeline_2__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Item_Flashlight_C", "Timeline_2__FinishedFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Item_Flashlight.BP_Item_Flashlight_C.Timeline_2__UpdateFunc
// (BlueprintEvent)
// Parameters:

void ABP_Item_Flashlight_C::Timeline_2__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Item_Flashlight_C", "Timeline_2__UpdateFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Item_Flashlight.BP_Item_Flashlight_C.OnNotifyEnd_858C6BED431A8EBEEAB2D09BA256DAA6
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Item_Flashlight_C::OnNotifyEnd_858C6BED431A8EBEEAB2D09BA256DAA6(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Item_Flashlight_C", "OnNotifyEnd_858C6BED431A8EBEEAB2D09BA256DAA6");

	Params::ABP_Item_Flashlight_C_OnNotifyEnd_858C6BED431A8EBEEAB2D09BA256DAA6_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Item_Flashlight.BP_Item_Flashlight_C.OnNotifyBegin_858C6BED431A8EBEEAB2D09BA256DAA6
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Item_Flashlight_C::OnNotifyBegin_858C6BED431A8EBEEAB2D09BA256DAA6(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Item_Flashlight_C", "OnNotifyBegin_858C6BED431A8EBEEAB2D09BA256DAA6");

	Params::ABP_Item_Flashlight_C_OnNotifyBegin_858C6BED431A8EBEEAB2D09BA256DAA6_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Item_Flashlight.BP_Item_Flashlight_C.OnInterrupted_858C6BED431A8EBEEAB2D09BA256DAA6
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Item_Flashlight_C::OnInterrupted_858C6BED431A8EBEEAB2D09BA256DAA6(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Item_Flashlight_C", "OnInterrupted_858C6BED431A8EBEEAB2D09BA256DAA6");

	Params::ABP_Item_Flashlight_C_OnInterrupted_858C6BED431A8EBEEAB2D09BA256DAA6_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Item_Flashlight.BP_Item_Flashlight_C.OnBlendOut_858C6BED431A8EBEEAB2D09BA256DAA6
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Item_Flashlight_C::OnBlendOut_858C6BED431A8EBEEAB2D09BA256DAA6(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Item_Flashlight_C", "OnBlendOut_858C6BED431A8EBEEAB2D09BA256DAA6");

	Params::ABP_Item_Flashlight_C_OnBlendOut_858C6BED431A8EBEEAB2D09BA256DAA6_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Item_Flashlight.BP_Item_Flashlight_C.OnCompleted_858C6BED431A8EBEEAB2D09BA256DAA6
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Item_Flashlight_C::OnCompleted_858C6BED431A8EBEEAB2D09BA256DAA6(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Item_Flashlight_C", "OnCompleted_858C6BED431A8EBEEAB2D09BA256DAA6");

	Params::ABP_Item_Flashlight_C_OnCompleted_858C6BED431A8EBEEAB2D09BA256DAA6_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Item_Flashlight.BP_Item_Flashlight_C.UseItem
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Item_Flashlight_C::UseItem()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Item_Flashlight_C", "UseItem");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Item_Flashlight.BP_Item_Flashlight_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_Item_Flashlight_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Item_Flashlight_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Item_Flashlight.BP_Item_Flashlight_C.ToggleFadePower
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               FadeOut                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_Item_Flashlight_C::ToggleFadePower(bool FadeOut)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Item_Flashlight_C", "ToggleFadePower");

	Params::ABP_Item_Flashlight_C_ToggleFadePower_Params Parms{};

	Parms.FadeOut = FadeOut;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Item_Flashlight.BP_Item_Flashlight_C.PlayAnimation
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Item_Flashlight_C::PlayAnimation()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Item_Flashlight_C", "PlayAnimation");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Item_Flashlight.BP_Item_Flashlight_C.StartFlicker
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Item_Flashlight_C::StartFlicker()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Item_Flashlight_C", "StartFlicker");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Item_Flashlight.BP_Item_Flashlight_C.ToggleFlashlightPower
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Power                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_Item_Flashlight_C::ToggleFlashlightPower(bool Power)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Item_Flashlight_C", "ToggleFlashlightPower");

	Params::ABP_Item_Flashlight_C_ToggleFlashlightPower_Params Parms{};

	Parms.Power = Power;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Item_Flashlight.BP_Item_Flashlight_C.FadeLight
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               FadeOut                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_Item_Flashlight_C::FadeLight(bool FadeOut)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Item_Flashlight_C", "FadeLight");

	Params::ABP_Item_Flashlight_C_FadeLight_Params Parms{};

	Parms.FadeOut = FadeOut;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Item_Flashlight.BP_Item_Flashlight_C.ExecuteUbergraph_BP_Item_Flashlight
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_CustomEvent_NotifyName_4                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class FName                        K2Node_CustomEvent_NotifyName_3                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// class FName                        K2Node_CustomEvent_NotifyName_2                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor)
// class FName                        K2Node_CustomEvent_NotifyName_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (ZeroConstructor, NoDestructor)
// class FName                        K2Node_CustomEvent_NotifyName                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_4                           (ZeroConstructor, NoDestructor)
// class FName                        Temp_name_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USceneComponent*             CallFunc_K2_GetRootComponent_ReturnValue                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetAdjustedRadius_Adjusted                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetAdjustedIntensity_Adjusted                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_CustomEvent_FadeOut_1                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ABP_LightFade_Box_C*         CallFunc_GetActorOfClass_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsOverlappingActor_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_GetCurrentLevelName_ReturnValue                         (ZeroConstructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetAttachParentActor_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_StrStr_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AFancyCharacter*             K2Node_DynamicCast_AsFancy_Character                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsLocallyControlled_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UPlayMontageCallbackProxy*   CallFunc_CreateProxyObjectForPlayMontage_ReturnValue             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_StrStr_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_StrStr_ReturnValue_2                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_StrStr_ReturnValue_3                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_StrStr_ReturnValue_4                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_StrStr_ReturnValue_5                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_StrStr_ReturnValue_6                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_StrStr_ReturnValue_7                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_StrStr_ReturnValue_8                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABPCharacter_Demo_C*         K2Node_DynamicCast_AsBPCharacter_Demo                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_GetOwner_ReturnValue_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class USceneComponent*>     CallFunc_GetComponentsByTag_ReturnValue                          (ReferenceParm, ContainsInstancedReference)
// class ABPCharacter_Demo_C*         K2Node_DynamicCast_AsBPCharacter_Demo_1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class USceneComponent*             CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsLocallyControlled_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetAdjustedIntensity_Adjusted_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetAdjustedIntensity_Adjusted_2                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetAdjustedIntensity_Adjusted_3                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetAdjustedIntensity_Adjusted_4                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetAdjustedRadius_Adjusted_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetAdjustedRadius_Adjusted_2                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetAdjustedRadius_Adjusted_3                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_Power                                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_GetOwner_ReturnValue_2                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class AActor*>              CallFunc_GetOverlappingActors_OverlappingActors                  (ReferenceParm)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetAdjustedIntensity_Adjusted_5                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetAdjustedIntensity_Adjusted_6                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetAdjustedRadius_Adjusted_4                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetAdjustedRadius_Adjusted_5                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetAdjustedIntensity_Adjusted_7                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetAdjustedIntensity_Adjusted_8                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetAdjustedIntensity_Adjusted_9                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetAdjustedRadius_Adjusted_6                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_FadeOut                                       (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_Item_Flashlight_C::ExecuteUbergraph_BP_Item_Flashlight(int32 EntryPoint, class FName K2Node_CustomEvent_NotifyName_4, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class FName K2Node_CustomEvent_NotifyName_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class FName K2Node_CustomEvent_NotifyName_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, class FName K2Node_CustomEvent_NotifyName_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, class FName K2Node_CustomEvent_NotifyName, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, class FName Temp_name_Variable, class USceneComponent* CallFunc_K2_GetRootComponent_ReturnValue, float CallFunc_GetAdjustedRadius_Adjusted, float CallFunc_GetAdjustedIntensity_Adjusted, bool CallFunc_EqualEqual_ByteByte_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool K2Node_CustomEvent_FadeOut_1, class ABP_LightFade_Box_C* CallFunc_GetActorOfClass_ReturnValue, bool CallFunc_IsOverlappingActor_ReturnValue, const class FString& CallFunc_GetCurrentLevelName_ReturnValue, class AActor* CallFunc_GetAttachParentActor_ReturnValue, bool CallFunc_EqualEqual_StrStr_ReturnValue, class AFancyCharacter* K2Node_DynamicCast_AsFancy_Character, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsLocallyControlled_ReturnValue, class UPlayMontageCallbackProxy* CallFunc_CreateProxyObjectForPlayMontage_ReturnValue, bool CallFunc_EqualEqual_StrStr_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, bool CallFunc_EqualEqual_StrStr_ReturnValue_2, bool CallFunc_EqualEqual_StrStr_ReturnValue_3, bool CallFunc_EqualEqual_StrStr_ReturnValue_4, bool CallFunc_EqualEqual_StrStr_ReturnValue_5, bool CallFunc_EqualEqual_StrStr_ReturnValue_6, bool CallFunc_EqualEqual_StrStr_ReturnValue_7, bool CallFunc_EqualEqual_StrStr_ReturnValue_8, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue_2, class AActor* CallFunc_GetOwner_ReturnValue, class ABPCharacter_Demo_C* K2Node_DynamicCast_AsBPCharacter_Demo, bool K2Node_DynamicCast_bSuccess_1, class AActor* CallFunc_GetOwner_ReturnValue_1, TArray<class USceneComponent*>& CallFunc_GetComponentsByTag_ReturnValue, class ABPCharacter_Demo_C* K2Node_DynamicCast_AsBPCharacter_Demo_1, bool K2Node_DynamicCast_bSuccess_2, class USceneComponent* CallFunc_Array_Get_Item, bool CallFunc_IsLocallyControlled_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, float CallFunc_GetAdjustedIntensity_Adjusted_1, float CallFunc_GetAdjustedIntensity_Adjusted_2, float CallFunc_GetAdjustedIntensity_Adjusted_3, float CallFunc_GetAdjustedIntensity_Adjusted_4, float CallFunc_GetAdjustedRadius_Adjusted_1, float CallFunc_GetAdjustedRadius_Adjusted_2, float CallFunc_GetAdjustedRadius_Adjusted_3, bool K2Node_CustomEvent_Power, bool CallFunc_Not_PreBool_ReturnValue_1, class AActor* CallFunc_GetOwner_ReturnValue_2, TArray<class AActor*>& CallFunc_GetOverlappingActors_OverlappingActors, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_GreaterEqual_IntInt_ReturnValue, float CallFunc_GetAdjustedIntensity_Adjusted_5, float CallFunc_GetAdjustedIntensity_Adjusted_6, float CallFunc_GetAdjustedRadius_Adjusted_4, float CallFunc_GetAdjustedRadius_Adjusted_5, float CallFunc_GetAdjustedIntensity_Adjusted_7, float CallFunc_GetAdjustedIntensity_Adjusted_8, float CallFunc_GetAdjustedIntensity_Adjusted_9, float CallFunc_GetAdjustedRadius_Adjusted_6, bool K2Node_CustomEvent_FadeOut)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Item_Flashlight_C", "ExecuteUbergraph_BP_Item_Flashlight");

	Params::ABP_Item_Flashlight_C_ExecuteUbergraph_BP_Item_Flashlight_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CustomEvent_NotifyName_4 = K2Node_CustomEvent_NotifyName_4;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CustomEvent_NotifyName_3 = K2Node_CustomEvent_NotifyName_3;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.K2Node_CustomEvent_NotifyName_2 = K2Node_CustomEvent_NotifyName_2;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.K2Node_CustomEvent_NotifyName_1 = K2Node_CustomEvent_NotifyName_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;
	Parms.K2Node_CustomEvent_NotifyName = K2Node_CustomEvent_NotifyName;
	Parms.K2Node_CreateDelegate_OutputDelegate_4 = K2Node_CreateDelegate_OutputDelegate_4;
	Parms.Temp_name_Variable = Temp_name_Variable;
	Parms.CallFunc_K2_GetRootComponent_ReturnValue = CallFunc_K2_GetRootComponent_ReturnValue;
	Parms.CallFunc_GetAdjustedRadius_Adjusted = CallFunc_GetAdjustedRadius_Adjusted;
	Parms.CallFunc_GetAdjustedIntensity_Adjusted = CallFunc_GetAdjustedIntensity_Adjusted;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.K2Node_CustomEvent_FadeOut_1 = K2Node_CustomEvent_FadeOut_1;
	Parms.CallFunc_GetActorOfClass_ReturnValue = CallFunc_GetActorOfClass_ReturnValue;
	Parms.CallFunc_IsOverlappingActor_ReturnValue = CallFunc_IsOverlappingActor_ReturnValue;
	Parms.CallFunc_GetCurrentLevelName_ReturnValue = CallFunc_GetCurrentLevelName_ReturnValue;
	Parms.CallFunc_GetAttachParentActor_ReturnValue = CallFunc_GetAttachParentActor_ReturnValue;
	Parms.CallFunc_EqualEqual_StrStr_ReturnValue = CallFunc_EqualEqual_StrStr_ReturnValue;
	Parms.K2Node_DynamicCast_AsFancy_Character = K2Node_DynamicCast_AsFancy_Character;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsLocallyControlled_ReturnValue = CallFunc_IsLocallyControlled_ReturnValue;
	Parms.CallFunc_CreateProxyObjectForPlayMontage_ReturnValue = CallFunc_CreateProxyObjectForPlayMontage_ReturnValue;
	Parms.CallFunc_EqualEqual_StrStr_ReturnValue_1 = CallFunc_EqualEqual_StrStr_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_EqualEqual_StrStr_ReturnValue_2 = CallFunc_EqualEqual_StrStr_ReturnValue_2;
	Parms.CallFunc_EqualEqual_StrStr_ReturnValue_3 = CallFunc_EqualEqual_StrStr_ReturnValue_3;
	Parms.CallFunc_EqualEqual_StrStr_ReturnValue_4 = CallFunc_EqualEqual_StrStr_ReturnValue_4;
	Parms.CallFunc_EqualEqual_StrStr_ReturnValue_5 = CallFunc_EqualEqual_StrStr_ReturnValue_5;
	Parms.CallFunc_EqualEqual_StrStr_ReturnValue_6 = CallFunc_EqualEqual_StrStr_ReturnValue_6;
	Parms.CallFunc_EqualEqual_StrStr_ReturnValue_7 = CallFunc_EqualEqual_StrStr_ReturnValue_7;
	Parms.CallFunc_EqualEqual_StrStr_ReturnValue_8 = CallFunc_EqualEqual_StrStr_ReturnValue_8;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue_1 = CallFunc_BooleanOR_ReturnValue_1;
	Parms.CallFunc_BooleanOR_ReturnValue_2 = CallFunc_BooleanOR_ReturnValue_2;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.K2Node_DynamicCast_AsBPCharacter_Demo = K2Node_DynamicCast_AsBPCharacter_Demo;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_GetOwner_ReturnValue_1 = CallFunc_GetOwner_ReturnValue_1;
	Parms.CallFunc_GetComponentsByTag_ReturnValue = CallFunc_GetComponentsByTag_ReturnValue;
	Parms.K2Node_DynamicCast_AsBPCharacter_Demo_1 = K2Node_DynamicCast_AsBPCharacter_Demo_1;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_IsLocallyControlled_ReturnValue_1 = CallFunc_IsLocallyControlled_ReturnValue_1;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_GetAdjustedIntensity_Adjusted_1 = CallFunc_GetAdjustedIntensity_Adjusted_1;
	Parms.CallFunc_GetAdjustedIntensity_Adjusted_2 = CallFunc_GetAdjustedIntensity_Adjusted_2;
	Parms.CallFunc_GetAdjustedIntensity_Adjusted_3 = CallFunc_GetAdjustedIntensity_Adjusted_3;
	Parms.CallFunc_GetAdjustedIntensity_Adjusted_4 = CallFunc_GetAdjustedIntensity_Adjusted_4;
	Parms.CallFunc_GetAdjustedRadius_Adjusted_1 = CallFunc_GetAdjustedRadius_Adjusted_1;
	Parms.CallFunc_GetAdjustedRadius_Adjusted_2 = CallFunc_GetAdjustedRadius_Adjusted_2;
	Parms.CallFunc_GetAdjustedRadius_Adjusted_3 = CallFunc_GetAdjustedRadius_Adjusted_3;
	Parms.K2Node_CustomEvent_Power = K2Node_CustomEvent_Power;
	Parms.CallFunc_Not_PreBool_ReturnValue_1 = CallFunc_Not_PreBool_ReturnValue_1;
	Parms.CallFunc_GetOwner_ReturnValue_2 = CallFunc_GetOwner_ReturnValue_2;
	Parms.CallFunc_GetOverlappingActors_OverlappingActors = CallFunc_GetOverlappingActors_OverlappingActors;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue = CallFunc_GreaterEqual_IntInt_ReturnValue;
	Parms.CallFunc_GetAdjustedIntensity_Adjusted_5 = CallFunc_GetAdjustedIntensity_Adjusted_5;
	Parms.CallFunc_GetAdjustedIntensity_Adjusted_6 = CallFunc_GetAdjustedIntensity_Adjusted_6;
	Parms.CallFunc_GetAdjustedRadius_Adjusted_4 = CallFunc_GetAdjustedRadius_Adjusted_4;
	Parms.CallFunc_GetAdjustedRadius_Adjusted_5 = CallFunc_GetAdjustedRadius_Adjusted_5;
	Parms.CallFunc_GetAdjustedIntensity_Adjusted_7 = CallFunc_GetAdjustedIntensity_Adjusted_7;
	Parms.CallFunc_GetAdjustedIntensity_Adjusted_8 = CallFunc_GetAdjustedIntensity_Adjusted_8;
	Parms.CallFunc_GetAdjustedIntensity_Adjusted_9 = CallFunc_GetAdjustedIntensity_Adjusted_9;
	Parms.CallFunc_GetAdjustedRadius_Adjusted_6 = CallFunc_GetAdjustedRadius_Adjusted_6;
	Parms.K2Node_CustomEvent_FadeOut = K2Node_CustomEvent_FadeOut;

	UObject::ProcessEvent(Func, &Parms);

}

}



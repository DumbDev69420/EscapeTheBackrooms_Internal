#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_SkinStealer_Level07.BP_SkinStealer_Level07_C
// (Actor, Pawn)

class UClass* ABP_SkinStealer_Level07_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_SkinStealer_Level07_C");

	return Clss;
}


// BP_SkinStealer_Level07_C BP_SkinStealer_Level07.Default__BP_SkinStealer_Level07_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_SkinStealer_Level07_C* ABP_SkinStealer_Level07_C::GetDefaultObj()
{
	static class ABP_SkinStealer_Level07_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_SkinStealer_Level07_C*>(ABP_SkinStealer_Level07_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_SkinStealer_Level07.BP_SkinStealer_Level07_C.Timeline_0__FinishedFunc
// (BlueprintEvent)
// Parameters:

void ABP_SkinStealer_Level07_C::Timeline_0__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SkinStealer_Level07_C", "Timeline_0__FinishedFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_SkinStealer_Level07.BP_SkinStealer_Level07_C.Timeline_0__UpdateFunc
// (BlueprintEvent)
// Parameters:

void ABP_SkinStealer_Level07_C::Timeline_0__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SkinStealer_Level07_C", "Timeline_0__UpdateFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_SkinStealer_Level07.BP_SkinStealer_Level07_C.UpdateEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_SkinStealer_Level07_C::UpdateEvent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SkinStealer_Level07_C", "UpdateEvent");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_SkinStealer_Level07.BP_SkinStealer_Level07_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_SkinStealer_Level07_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SkinStealer_Level07_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_SkinStealer_Level07.BP_SkinStealer_Level07_C.JumpTimer
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_SkinStealer_Level07_C::JumpTimer()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SkinStealer_Level07_C", "JumpTimer");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_SkinStealer_Level07.BP_SkinStealer_Level07_C.ToggleSprint
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsSprinting                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_SkinStealer_Level07_C::ToggleSprint(bool IsSprinting)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SkinStealer_Level07_C", "ToggleSprint");

	Params::ABP_SkinStealer_Level07_C_ToggleSprint_Params Parms{};

	Parms.IsSprinting = IsSprinting;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_SkinStealer_Level07.BP_SkinStealer_Level07_C.ExecuteUbergraph_BP_SkinStealer_Level07
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAuthority_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AAIController*               CallFunc_GetAIController_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AAIC_SkinStealer_C*          K2Node_DynamicCast_AsAIC_Skin_Stealer                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_RandomBool_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_RandomBool_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_IsSprinting                                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Lerp_ReturnValue                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_FloatFloat_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_SkinStealer_Level07_C::ExecuteUbergraph_BP_SkinStealer_Level07(int32 EntryPoint, bool CallFunc_HasAuthority_ReturnValue, class AAIController* CallFunc_GetAIController_ReturnValue, class AAIC_SkinStealer_C* K2Node_DynamicCast_AsAIC_Skin_Stealer, bool K2Node_DynamicCast_bSuccess, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, bool CallFunc_RandomBool_ReturnValue, bool CallFunc_RandomBool_ReturnValue_1, bool K2Node_Event_IsSprinting, float CallFunc_Lerp_ReturnValue, bool CallFunc_EqualEqual_FloatFloat_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SkinStealer_Level07_C", "ExecuteUbergraph_BP_SkinStealer_Level07");

	Params::ABP_SkinStealer_Level07_C_ExecuteUbergraph_BP_SkinStealer_Level07_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_HasAuthority_ReturnValue = CallFunc_HasAuthority_ReturnValue;
	Parms.CallFunc_GetAIController_ReturnValue = CallFunc_GetAIController_ReturnValue;
	Parms.K2Node_DynamicCast_AsAIC_Skin_Stealer = K2Node_DynamicCast_AsAIC_Skin_Stealer;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue = CallFunc_CreateDynamicMaterialInstance_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;
	Parms.CallFunc_RandomBool_ReturnValue = CallFunc_RandomBool_ReturnValue;
	Parms.CallFunc_RandomBool_ReturnValue_1 = CallFunc_RandomBool_ReturnValue_1;
	Parms.K2Node_Event_IsSprinting = K2Node_Event_IsSprinting;
	Parms.CallFunc_Lerp_ReturnValue = CallFunc_Lerp_ReturnValue;
	Parms.CallFunc_EqualEqual_FloatFloat_ReturnValue = CallFunc_EqualEqual_FloatFloat_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}



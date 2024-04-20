#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WB_Gamma_Theme2.WB_Gamma_Theme2_C
// (None)

class UClass* UWB_Gamma_Theme2_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WB_Gamma_Theme2_C");

	return Clss;
}


// WB_Gamma_Theme2_C WB_Gamma_Theme2.Default__WB_Gamma_Theme2_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWB_Gamma_Theme2_C* UWB_Gamma_Theme2_C::GetDefaultObj()
{
	static class UWB_Gamma_Theme2_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWB_Gamma_Theme2_C*>(UWB_Gamma_Theme2_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WB_Gamma_Theme2.WB_Gamma_Theme2_C.Set_SliderValue
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              InValue                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_Gamma_Theme2_C::Set_SliderValue(float InValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Gamma_Theme2_C", "Set_SliderValue");

	Params::UWB_Gamma_Theme2_C_Set_SliderValue_Params Parms{};

	Parms.InValue = InValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_Gamma_Theme2.WB_Gamma_Theme2_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWB_Gamma_Theme2_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Gamma_Theme2_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WB_Gamma_Theme2.WB_Gamma_Theme2_C.BndEvt__WB_Slider_Slider_K2Node_ComponentBoundEvent_0_OnFloatValueChangedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float                              Value                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_Gamma_Theme2_C::BndEvt__WB_Slider_Slider_K2Node_ComponentBoundEvent_0_OnFloatValueChangedEvent__DelegateSignature(float Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Gamma_Theme2_C", "BndEvt__WB_Slider_Slider_K2Node_ComponentBoundEvent_0_OnFloatValueChangedEvent__DelegateSignature");

	Params::UWB_Gamma_Theme2_C_BndEvt__WB_Slider_Slider_K2Node_ComponentBoundEvent_0_OnFloatValueChangedEvent__DelegateSignature_Params Parms{};

	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_Gamma_Theme2.WB_Gamma_Theme2_C.BndEvt__WB_Slider_Slider_K2Node_ComponentBoundEvent_1_OnMouseCaptureEndEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWB_Gamma_Theme2_C::BndEvt__WB_Slider_Slider_K2Node_ComponentBoundEvent_1_OnMouseCaptureEndEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Gamma_Theme2_C", "BndEvt__WB_Slider_Slider_K2Node_ComponentBoundEvent_1_OnMouseCaptureEndEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WB_Gamma_Theme2.WB_Gamma_Theme2_C.ExecuteUbergraph_WB_Gamma_Theme2
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_ComponentBoundEvent_Value                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_Gamma_Theme2_C::ExecuteUbergraph_WB_Gamma_Theme2(int32 EntryPoint, float K2Node_ComponentBoundEvent_Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Gamma_Theme2_C", "ExecuteUbergraph_WB_Gamma_Theme2");

	Params::UWB_Gamma_Theme2_C_ExecuteUbergraph_WB_Gamma_Theme2_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_ComponentBoundEvent_Value = K2Node_ComponentBoundEvent_Value;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_Gamma_Theme2.WB_Gamma_Theme2_C.OnMouseCaptureEnd__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWB_Gamma_Theme2_C::OnMouseCaptureEnd__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Gamma_Theme2_C", "OnMouseCaptureEnd__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WB_Gamma_Theme2.WB_Gamma_Theme2_C.OnValueChanged__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Gamma                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_Gamma_Theme2_C::OnValueChanged__DelegateSignature(float Gamma)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Gamma_Theme2_C", "OnValueChanged__DelegateSignature");

	Params::UWB_Gamma_Theme2_C_OnValueChanged__DelegateSignature_Params Parms{};

	Parms.Gamma = Gamma;

	UObject::ProcessEvent(Func, &Parms);

}

}



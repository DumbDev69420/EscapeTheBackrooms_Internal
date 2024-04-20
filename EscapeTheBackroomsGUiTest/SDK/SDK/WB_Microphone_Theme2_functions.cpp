#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WB_Microphone_Theme2.WB_Microphone_Theme2_C
// (None)

class UClass* UWB_Microphone_Theme2_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WB_Microphone_Theme2_C");

	return Clss;
}


// WB_Microphone_Theme2_C WB_Microphone_Theme2.Default__WB_Microphone_Theme2_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWB_Microphone_Theme2_C* UWB_Microphone_Theme2_C::GetDefaultObj()
{
	static class UWB_Microphone_Theme2_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWB_Microphone_Theme2_C*>(UWB_Microphone_Theme2_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WB_Microphone_Theme2.WB_Microphone_Theme2_C.Set_SliderValue
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              InValue                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_FloatToText_ReturnValue                            (None)

void UWB_Microphone_Theme2_C::Set_SliderValue(float InValue, class FText CallFunc_Conv_FloatToText_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Microphone_Theme2_C", "Set_SliderValue");

	Params::UWB_Microphone_Theme2_C_Set_SliderValue_Params Parms{};

	Parms.InValue = InValue;
	Parms.CallFunc_Conv_FloatToText_ReturnValue = CallFunc_Conv_FloatToText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_Microphone_Theme2.WB_Microphone_Theme2_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWB_Microphone_Theme2_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Microphone_Theme2_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WB_Microphone_Theme2.WB_Microphone_Theme2_C.BndEvt__WB_Slider_Slider_K2Node_ComponentBoundEvent_0_OnFloatValueChangedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float                              Value                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_Microphone_Theme2_C::BndEvt__WB_Slider_Slider_K2Node_ComponentBoundEvent_0_OnFloatValueChangedEvent__DelegateSignature(float Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Microphone_Theme2_C", "BndEvt__WB_Slider_Slider_K2Node_ComponentBoundEvent_0_OnFloatValueChangedEvent__DelegateSignature");

	Params::UWB_Microphone_Theme2_C_BndEvt__WB_Slider_Slider_K2Node_ComponentBoundEvent_0_OnFloatValueChangedEvent__DelegateSignature_Params Parms{};

	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_Microphone_Theme2.WB_Microphone_Theme2_C.BndEvt__WB_Slider_Slider_K2Node_ComponentBoundEvent_1_OnMouseCaptureEndEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWB_Microphone_Theme2_C::BndEvt__WB_Slider_Slider_K2Node_ComponentBoundEvent_1_OnMouseCaptureEndEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Microphone_Theme2_C", "BndEvt__WB_Slider_Slider_K2Node_ComponentBoundEvent_1_OnMouseCaptureEndEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WB_Microphone_Theme2.WB_Microphone_Theme2_C.ExecuteUbergraph_WB_Microphone_Theme2
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_ComponentBoundEvent_Value                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_Microphone_Theme2_C::ExecuteUbergraph_WB_Microphone_Theme2(int32 EntryPoint, float K2Node_ComponentBoundEvent_Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Microphone_Theme2_C", "ExecuteUbergraph_WB_Microphone_Theme2");

	Params::UWB_Microphone_Theme2_C_ExecuteUbergraph_WB_Microphone_Theme2_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_ComponentBoundEvent_Value = K2Node_ComponentBoundEvent_Value;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_Microphone_Theme2.WB_Microphone_Theme2_C.OnMouseCaptureEnd__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWB_Microphone_Theme2_C::OnMouseCaptureEnd__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Microphone_Theme2_C", "OnMouseCaptureEnd__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WB_Microphone_Theme2.WB_Microphone_Theme2_C.OnValueChanged__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Volume                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_Microphone_Theme2_C::OnValueChanged__DelegateSignature(float Volume)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Microphone_Theme2_C", "OnValueChanged__DelegateSignature");

	Params::UWB_Microphone_Theme2_C_OnValueChanged__DelegateSignature_Params Parms{};

	Parms.Volume = Volume;

	UObject::ProcessEvent(Func, &Parms);

}

}



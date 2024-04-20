#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass W_VOIPHUD.W_VOIPHUD_C
// (None)

class UClass* UW_VOIPHUD_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("W_VOIPHUD_C");

	return Clss;
}


// W_VOIPHUD_C W_VOIPHUD.Default__W_VOIPHUD_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UW_VOIPHUD_C* UW_VOIPHUD_C::GetDefaultObj()
{
	static class UW_VOIPHUD_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UW_VOIPHUD_C*>(UW_VOIPHUD_C::StaticClass()->DefaultObject);

	return Default;
}


// Function W_VOIPHUD.W_VOIPHUD_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UW_VOIPHUD_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_VOIPHUD_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_VOIPHUD.W_VOIPHUD_C.SetVOIPIconVisibility
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Activated_                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_VOIPHUD_C::SetVOIPIconVisibility(bool Activated_)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_VOIPHUD_C", "SetVOIPIconVisibility");

	Params::UW_VOIPHUD_C_SetVOIPIconVisibility_Params Parms{};

	Parms.Activated_ = Activated_;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_VOIPHUD.W_VOIPHUD_C.ExecuteUbergraph_W_VOIPHUD
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_Activated_                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_VOIPHUD_C::ExecuteUbergraph_W_VOIPHUD(int32 EntryPoint, bool K2Node_CustomEvent_Activated_, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, enum class ESlateVisibility K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_VOIPHUD_C", "ExecuteUbergraph_W_VOIPHUD");

	Params::UW_VOIPHUD_C_ExecuteUbergraph_W_VOIPHUD_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CustomEvent_Activated_ = K2Node_CustomEvent_Activated_;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}

}



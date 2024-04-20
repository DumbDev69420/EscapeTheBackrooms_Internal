#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass W_TemplateTitle.W_TemplateTitle_C
// (None)

class UClass* UW_TemplateTitle_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("W_TemplateTitle_C");

	return Clss;
}


// W_TemplateTitle_C W_TemplateTitle.Default__W_TemplateTitle_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UW_TemplateTitle_C* UW_TemplateTitle_C::GetDefaultObj()
{
	static class UW_TemplateTitle_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UW_TemplateTitle_C*>(UW_TemplateTitle_C::StaticClass()->DefaultObject);

	return Default;
}


// Function W_TemplateTitle.W_TemplateTitle_C.ChangeTitleColor
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSlateColor                 NewColorAndOpacity                                               (BlueprintVisible, BlueprintReadOnly, Parm)

void UW_TemplateTitle_C::ChangeTitleColor(const struct FSlateColor& NewColorAndOpacity)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_TemplateTitle_C", "ChangeTitleColor");

	Params::UW_TemplateTitle_C_ChangeTitleColor_Params Parms{};

	Parms.NewColorAndOpacity = NewColorAndOpacity;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_TemplateTitle.W_TemplateTitle_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_TemplateTitle_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_TemplateTitle_C", "PreConstruct");

	Params::UW_TemplateTitle_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_TemplateTitle.W_TemplateTitle_C.ExecuteUbergraph_W_TemplateTitle
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              Temp_float_Variable                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_FClamp_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_TemplateTitle_C::ExecuteUbergraph_W_TemplateTitle(int32 EntryPoint, bool Temp_bool_Variable, float Temp_float_Variable, bool K2Node_Event_IsDesignTime, float CallFunc_FClamp_ReturnValue, float K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_TemplateTitle_C", "ExecuteUbergraph_W_TemplateTitle");

	Params::UW_TemplateTitle_C_ExecuteUbergraph_W_TemplateTitle_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_float_Variable = Temp_float_Variable;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.CallFunc_FClamp_ReturnValue = CallFunc_FClamp_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}

}



#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass W_CreditsTitleName.W_CreditsTitleName_C
// (None)

class UClass* UW_CreditsTitleName_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("W_CreditsTitleName_C");

	return Clss;
}


// W_CreditsTitleName_C W_CreditsTitleName.Default__W_CreditsTitleName_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UW_CreditsTitleName_C* UW_CreditsTitleName_C::GetDefaultObj()
{
	static class UW_CreditsTitleName_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UW_CreditsTitleName_C*>(UW_CreditsTitleName_C::StaticClass()->DefaultObject);

	return Default;
}


// Function W_CreditsTitleName.W_CreditsTitleName_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_CreditsTitleName_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_CreditsTitleName_C", "PreConstruct");

	Params::UW_CreditsTitleName_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_CreditsTitleName.W_CreditsTitleName_C.ExecuteUbergraph_W_CreditsTitleName
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FMargin                     K2Node_MakeStruct_Margin                                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UOverlaySlot*                CallFunc_SlotAsOverlaySlot_ReturnValue                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_CreditsTitleName_C::ExecuteUbergraph_W_CreditsTitleName(int32 EntryPoint, const struct FMargin& K2Node_MakeStruct_Margin, bool K2Node_Event_IsDesignTime, class UOverlaySlot* CallFunc_SlotAsOverlaySlot_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_CreditsTitleName_C", "ExecuteUbergraph_W_CreditsTitleName");

	Params::UW_CreditsTitleName_C_ExecuteUbergraph_W_CreditsTitleName_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_MakeStruct_Margin = K2Node_MakeStruct_Margin;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.CallFunc_SlotAsOverlaySlot_ReturnValue = CallFunc_SlotAsOverlaySlot_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}



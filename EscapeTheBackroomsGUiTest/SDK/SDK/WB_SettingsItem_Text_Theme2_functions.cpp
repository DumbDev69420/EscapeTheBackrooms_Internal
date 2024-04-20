#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WB_SettingsItem_Text_Theme2.WB_SettingsItem_Text_Theme2_C
// (None)

class UClass* UWB_SettingsItem_Text_Theme2_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WB_SettingsItem_Text_Theme2_C");

	return Clss;
}


// WB_SettingsItem_Text_Theme2_C WB_SettingsItem_Text_Theme2.Default__WB_SettingsItem_Text_Theme2_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWB_SettingsItem_Text_Theme2_C* UWB_SettingsItem_Text_Theme2_C::GetDefaultObj()
{
	static class UWB_SettingsItem_Text_Theme2_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWB_SettingsItem_Text_Theme2_C*>(UWB_SettingsItem_Text_Theme2_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WB_SettingsItem_Text_Theme2.WB_SettingsItem_Text_Theme2_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWB_SettingsItem_Text_Theme2_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_SettingsItem_Text_Theme2_C", "PreConstruct");

	Params::UWB_SettingsItem_Text_Theme2_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_SettingsItem_Text_Theme2.WB_SettingsItem_Text_Theme2_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWB_SettingsItem_Text_Theme2_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_SettingsItem_Text_Theme2_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WB_SettingsItem_Text_Theme2.WB_SettingsItem_Text_Theme2_C.ExecuteUbergraph_WB_SettingsItem_Text_Theme2
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)

void UWB_SettingsItem_Text_Theme2_C::ExecuteUbergraph_WB_SettingsItem_Text_Theme2(int32 EntryPoint, bool K2Node_Event_IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_SettingsItem_Text_Theme2_C", "ExecuteUbergraph_WB_SettingsItem_Text_Theme2");

	Params::UWB_SettingsItem_Text_Theme2_C_ExecuteUbergraph_WB_SettingsItem_Text_Theme2_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}

}



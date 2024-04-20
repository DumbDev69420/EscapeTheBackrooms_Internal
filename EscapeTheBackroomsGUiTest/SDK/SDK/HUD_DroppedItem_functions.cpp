#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass HUD_DroppedItem.HUD_DroppedItem_C
// (None)

class UClass* UHUD_DroppedItem_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("HUD_DroppedItem_C");

	return Clss;
}


// HUD_DroppedItem_C HUD_DroppedItem.Default__HUD_DroppedItem_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UHUD_DroppedItem_C* UHUD_DroppedItem_C::GetDefaultObj()
{
	static class UHUD_DroppedItem_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UHUD_DroppedItem_C*>(UHUD_DroppedItem_C::StaticClass()->DefaultObject);

	return Default;
}


// Function HUD_DroppedItem.HUD_DroppedItem_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UHUD_DroppedItem_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HUD_DroppedItem_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function HUD_DroppedItem.HUD_DroppedItem_C.ExecuteUbergraph_HUD_DroppedItem
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UHUD_DroppedItem_C::ExecuteUbergraph_HUD_DroppedItem(int32 EntryPoint, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HUD_DroppedItem_C", "ExecuteUbergraph_HUD_DroppedItem");

	Params::UHUD_DroppedItem_C_ExecuteUbergraph_HUD_DroppedItem_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}



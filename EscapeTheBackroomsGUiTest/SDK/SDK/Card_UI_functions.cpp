#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass Card_UI.Card_UI_C
// (None)

class UClass* UCard_UI_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Card_UI_C");

	return Clss;
}


// Card_UI_C Card_UI.Default__Card_UI_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCard_UI_C* UCard_UI_C::GetDefaultObj()
{
	static class UCard_UI_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCard_UI_C*>(UCard_UI_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Card_UI.Card_UI_C.SetName
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        Name                                                             (BlueprintVisible, BlueprintReadOnly, Parm)

void UCard_UI_C::SetName(class FText Name)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Card_UI_C", "SetName");

	Params::UCard_UI_C_SetName_Params Parms{};

	Parms.Name = Name;

	UObject::ProcessEvent(Func, &Parms);

}

}



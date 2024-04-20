#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BPI_EventItem.BPI_EventItem_C
// (None)

class UClass* IBPI_EventItem_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BPI_EventItem_C");

	return Clss;
}


// BPI_EventItem_C BPI_EventItem.Default__BPI_EventItem_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class IBPI_EventItem_C* IBPI_EventItem_C::GetDefaultObj()
{
	static class IBPI_EventItem_C* Default = nullptr;

	if (!Default)
		Default = static_cast<IBPI_EventItem_C*>(IBPI_EventItem_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BPI_EventItem.BPI_EventItem_C.ToggleEvent
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Enable                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void IBPI_EventItem_C::ToggleEvent(bool Enable)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_EventItem_C", "ToggleEvent");

	Params::IBPI_EventItem_C_ToggleEvent_Params Parms{};

	Parms.Enable = Enable;

	UObject::ProcessEvent(Func, &Parms);

}

}



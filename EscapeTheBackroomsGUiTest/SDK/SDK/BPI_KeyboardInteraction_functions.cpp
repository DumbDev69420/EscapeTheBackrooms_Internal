#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BPI_KeyboardInteraction.BPI_KeyboardInteraction_C
// (None)

class UClass* IBPI_KeyboardInteraction_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BPI_KeyboardInteraction_C");

	return Clss;
}


// BPI_KeyboardInteraction_C BPI_KeyboardInteraction.Default__BPI_KeyboardInteraction_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class IBPI_KeyboardInteraction_C* IBPI_KeyboardInteraction_C::GetDefaultObj()
{
	static class IBPI_KeyboardInteraction_C* Default = nullptr;

	if (!Default)
		Default = static_cast<IBPI_KeyboardInteraction_C*>(IBPI_KeyboardInteraction_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BPI_KeyboardInteraction.BPI_KeyboardInteraction_C.SetComponentReference
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidgetInteractionComponent* WidgetInteractionComponent                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPI_KeyboardInteraction_C::SetComponentReference(class UWidgetInteractionComponent* WidgetInteractionComponent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_KeyboardInteraction_C", "SetComponentReference");

	Params::IBPI_KeyboardInteraction_C_SetComponentReference_Params Parms{};

	Parms.WidgetInteractionComponent = WidgetInteractionComponent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPI_KeyboardInteraction.BPI_KeyboardInteraction_C.SymbolLock
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void IBPI_KeyboardInteraction_C::SymbolLock()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_KeyboardInteraction_C", "SymbolLock");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPI_KeyboardInteraction.BPI_KeyboardInteraction_C.Space
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void IBPI_KeyboardInteraction_C::Space()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_KeyboardInteraction_C", "Space");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPI_KeyboardInteraction.BPI_KeyboardInteraction_C.Shift
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void IBPI_KeyboardInteraction_C::Shift()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_KeyboardInteraction_C", "Shift");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPI_KeyboardInteraction.BPI_KeyboardInteraction_C.SendKeyboardText
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void IBPI_KeyboardInteraction_C::SendKeyboardText()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_KeyboardInteraction_C", "SendKeyboardText");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPI_KeyboardInteraction.BPI_KeyboardInteraction_C.CapsLock
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void IBPI_KeyboardInteraction_C::CapsLock()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_KeyboardInteraction_C", "CapsLock");



	UObject::ProcessEvent(Func, nullptr);

}

}



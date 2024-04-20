#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Ceiling_Gate.BP_Ceiling_Gate_C
// (Actor)

class UClass* ABP_Ceiling_Gate_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Ceiling_Gate_C");

	return Clss;
}


// BP_Ceiling_Gate_C BP_Ceiling_Gate.Default__BP_Ceiling_Gate_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_Ceiling_Gate_C* ABP_Ceiling_Gate_C::GetDefaultObj()
{
	static class ABP_Ceiling_Gate_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_Ceiling_Gate_C*>(ABP_Ceiling_Gate_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_Ceiling_Gate.BP_Ceiling_Gate_C.OnRep_IsOpen
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Ceiling_Gate_C::OnRep_IsOpen()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Ceiling_Gate_C", "OnRep_IsOpen");



	UObject::ProcessEvent(Func, nullptr);

}

}



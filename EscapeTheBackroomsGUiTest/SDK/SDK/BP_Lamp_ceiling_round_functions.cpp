#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Lamp_ceiling_round.BP_Lamp_ceiling_round_C
// (Actor)

class UClass* ABP_Lamp_ceiling_round_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Lamp_ceiling_round_C");

	return Clss;
}


// BP_Lamp_ceiling_round_C BP_Lamp_ceiling_round.Default__BP_Lamp_ceiling_round_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_Lamp_ceiling_round_C* ABP_Lamp_ceiling_round_C::GetDefaultObj()
{
	static class ABP_Lamp_ceiling_round_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_Lamp_ceiling_round_C*>(ABP_Lamp_ceiling_round_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_Lamp_ceiling_round.BP_Lamp_ceiling_round_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Lamp_ceiling_round_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Lamp_ceiling_round_C", "UserConstructionScript");



	UObject::ProcessEvent(Func, nullptr);

}

}



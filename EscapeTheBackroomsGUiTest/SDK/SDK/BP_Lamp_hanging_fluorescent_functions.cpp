#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Lamp_hanging_fluorescent.BP_Lamp_hanging_fluorescent_C
// (Actor)

class UClass* ABP_Lamp_hanging_fluorescent_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Lamp_hanging_fluorescent_C");

	return Clss;
}


// BP_Lamp_hanging_fluorescent_C BP_Lamp_hanging_fluorescent.Default__BP_Lamp_hanging_fluorescent_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_Lamp_hanging_fluorescent_C* ABP_Lamp_hanging_fluorescent_C::GetDefaultObj()
{
	static class ABP_Lamp_hanging_fluorescent_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_Lamp_hanging_fluorescent_C*>(ABP_Lamp_hanging_fluorescent_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_Lamp_hanging_fluorescent.BP_Lamp_hanging_fluorescent_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Lamp_hanging_fluorescent_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Lamp_hanging_fluorescent_C", "UserConstructionScript");



	UObject::ProcessEvent(Func, nullptr);

}

}



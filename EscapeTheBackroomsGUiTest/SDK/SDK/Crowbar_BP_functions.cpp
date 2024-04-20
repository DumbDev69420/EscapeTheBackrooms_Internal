#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Crowbar_BP.Crowbar_BP_C
// (Actor)

class UClass* ACrowbar_BP_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Crowbar_BP_C");

	return Clss;
}


// Crowbar_BP_C Crowbar_BP.Default__Crowbar_BP_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ACrowbar_BP_C* ACrowbar_BP_C::GetDefaultObj()
{
	static class ACrowbar_BP_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ACrowbar_BP_C*>(ACrowbar_BP_C::StaticClass()->DefaultObject);

	return Default;
}

}



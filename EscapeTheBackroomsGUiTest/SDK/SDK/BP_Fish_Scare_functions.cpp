#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Fish_Scare.BP_Fish_Scare_C
// (Actor, Pawn)

class UClass* ABP_Fish_Scare_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Fish_Scare_C");

	return Clss;
}


// BP_Fish_Scare_C BP_Fish_Scare.Default__BP_Fish_Scare_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_Fish_Scare_C* ABP_Fish_Scare_C::GetDefaultObj()
{
	static class ABP_Fish_Scare_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_Fish_Scare_C*>(ABP_Fish_Scare_C::StaticClass()->DefaultObject);

	return Default;
}

}



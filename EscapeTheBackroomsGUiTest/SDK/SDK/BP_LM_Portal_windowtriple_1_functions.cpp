#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_LM_Portal_windowtriple.BP_LM_Portal_windowtriple_C
// (Actor)

class UClass* ABP_LM_Portal_windowtriple_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_LM_Portal_windowtriple_C");

	return Clss;
}


// BP_LM_Portal_windowtriple_C BP_LM_Portal_windowtriple.Default__BP_LM_Portal_windowtriple_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_LM_Portal_windowtriple_C* ABP_LM_Portal_windowtriple_C::GetDefaultObj()
{
	static class ABP_LM_Portal_windowtriple_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_LM_Portal_windowtriple_C*>(ABP_LM_Portal_windowtriple_C::StaticClass()->DefaultObject);

	return Default;
}

}



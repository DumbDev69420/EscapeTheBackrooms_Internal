#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Rope_Floor.BP_Rope_Floor_C
// (Actor)

class UClass* ABP_Rope_Floor_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Rope_Floor_C");

	return Clss;
}


// BP_Rope_Floor_C BP_Rope_Floor.Default__BP_Rope_Floor_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_Rope_Floor_C* ABP_Rope_Floor_C::GetDefaultObj()
{
	static class ABP_Rope_Floor_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_Rope_Floor_C*>(ABP_Rope_Floor_C::StaticClass()->DefaultObject);

	return Default;
}

}



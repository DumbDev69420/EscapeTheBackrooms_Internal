#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Window_singlesmall_vinyl.BP_Window_singlesmall_vinyl_C
// (Actor)

class UClass* ABP_Window_singlesmall_vinyl_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Window_singlesmall_vinyl_C");

	return Clss;
}


// BP_Window_singlesmall_vinyl_C BP_Window_singlesmall_vinyl.Default__BP_Window_singlesmall_vinyl_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_Window_singlesmall_vinyl_C* ABP_Window_singlesmall_vinyl_C::GetDefaultObj()
{
	static class ABP_Window_singlesmall_vinyl_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_Window_singlesmall_vinyl_C*>(ABP_Window_singlesmall_vinyl_C::StaticClass()->DefaultObject);

	return Default;
}

}



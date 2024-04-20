#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Window_openable_singlesmall.BP_Window_openable_singlesmall_C
// (Actor)

class UClass* ABP_Window_openable_singlesmall_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Window_openable_singlesmall_C");

	return Clss;
}


// BP_Window_openable_singlesmall_C BP_Window_openable_singlesmall.Default__BP_Window_openable_singlesmall_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_Window_openable_singlesmall_C* ABP_Window_openable_singlesmall_C::GetDefaultObj()
{
	static class ABP_Window_openable_singlesmall_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_Window_openable_singlesmall_C*>(ABP_Window_openable_singlesmall_C::StaticClass()->DefaultObject);

	return Default;
}

}



#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Doorframe_in_double.BP_Doorframe_in_double_C
// (Actor)

class UClass* ABP_Doorframe_in_double_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Doorframe_in_double_C");

	return Clss;
}


// BP_Doorframe_in_double_C BP_Doorframe_in_double.Default__BP_Doorframe_in_double_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_Doorframe_in_double_C* ABP_Doorframe_in_double_C::GetDefaultObj()
{
	static class ABP_Doorframe_in_double_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_Doorframe_in_double_C*>(ABP_Doorframe_in_double_C::StaticClass()->DefaultObject);

	return Default;
}

}



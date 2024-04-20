#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Doorframe_out_single.BP_Doorframe_out_single_C
// (Actor)

class UClass* ABP_Doorframe_out_single_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Doorframe_out_single_C");

	return Clss;
}


// BP_Doorframe_out_single_C BP_Doorframe_out_single.Default__BP_Doorframe_out_single_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_Doorframe_out_single_C* ABP_Doorframe_out_single_C::GetDefaultObj()
{
	static class ABP_Doorframe_out_single_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_Doorframe_out_single_C*>(ABP_Doorframe_out_single_C::StaticClass()->DefaultObject);

	return Default;
}

}



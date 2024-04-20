#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Workdesk_extension.BP_Workdesk_extension_C
// (Actor)

class UClass* ABP_Workdesk_extension_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Workdesk_extension_C");

	return Clss;
}


// BP_Workdesk_extension_C BP_Workdesk_extension.Default__BP_Workdesk_extension_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_Workdesk_extension_C* ABP_Workdesk_extension_C::GetDefaultObj()
{
	static class ABP_Workdesk_extension_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_Workdesk_extension_C*>(ABP_Workdesk_extension_C::StaticClass()->DefaultObject);

	return Default;
}

}



#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_DroppedItem_BugSpray.BP_DroppedItem_BugSpray_C
// (Actor)

class UClass* ABP_DroppedItem_BugSpray_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_DroppedItem_BugSpray_C");

	return Clss;
}


// BP_DroppedItem_BugSpray_C BP_DroppedItem_BugSpray.Default__BP_DroppedItem_BugSpray_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_DroppedItem_BugSpray_C* ABP_DroppedItem_BugSpray_C::GetDefaultObj()
{
	static class ABP_DroppedItem_BugSpray_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_DroppedItem_BugSpray_C*>(ABP_DroppedItem_BugSpray_C::StaticClass()->DefaultObject);

	return Default;
}

}



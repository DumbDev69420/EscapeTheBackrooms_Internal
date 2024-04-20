#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_DroppedItem_Glowstick_Blue.BP_DroppedItem_Glowstick_Blue_C
// (Actor)

class UClass* ABP_DroppedItem_Glowstick_Blue_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_DroppedItem_Glowstick_Blue_C");

	return Clss;
}


// BP_DroppedItem_Glowstick_Blue_C BP_DroppedItem_Glowstick_Blue.Default__BP_DroppedItem_Glowstick_Blue_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_DroppedItem_Glowstick_Blue_C* ABP_DroppedItem_Glowstick_Blue_C::GetDefaultObj()
{
	static class ABP_DroppedItem_Glowstick_Blue_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_DroppedItem_Glowstick_Blue_C*>(ABP_DroppedItem_Glowstick_Blue_C::StaticClass()->DefaultObject);

	return Default;
}

}



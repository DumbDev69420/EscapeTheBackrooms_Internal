#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_DroppedItem_Thermometer.BP_DroppedItem_Thermometer_C
// (Actor)

class UClass* ABP_DroppedItem_Thermometer_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_DroppedItem_Thermometer_C");

	return Clss;
}


// BP_DroppedItem_Thermometer_C BP_DroppedItem_Thermometer.Default__BP_DroppedItem_Thermometer_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_DroppedItem_Thermometer_C* ABP_DroppedItem_Thermometer_C::GetDefaultObj()
{
	static class ABP_DroppedItem_Thermometer_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_DroppedItem_Thermometer_C*>(ABP_DroppedItem_Thermometer_C::StaticClass()->DefaultObject);

	return Default;
}

}



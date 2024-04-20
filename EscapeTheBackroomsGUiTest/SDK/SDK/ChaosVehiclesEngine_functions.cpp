#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class ChaosVehiclesEngine.ChaosVehicles
// (None)

class UClass* UChaosVehicles::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ChaosVehicles");

	return Clss;
}


// ChaosVehicles ChaosVehiclesEngine.Default__ChaosVehicles
// (Public, ClassDefaultObject, ArchetypeObject)

class UChaosVehicles* UChaosVehicles::GetDefaultObj()
{
	static class UChaosVehicles* Default = nullptr;

	if (!Default)
		Default = static_cast<UChaosVehicles*>(UChaosVehicles::StaticClass()->DefaultObject);

	return Default;
}

}



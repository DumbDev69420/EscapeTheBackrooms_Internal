#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass OceanHouse.OceanHouse_C
// (Actor)

class UClass* AOceanHouse_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("OceanHouse_C");

	return Clss;
}


// OceanHouse_C OceanHouse.Default__OceanHouse_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AOceanHouse_C* AOceanHouse_C::GetDefaultObj()
{
	static class AOceanHouse_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AOceanHouse_C*>(AOceanHouse_C::StaticClass()->DefaultObject);

	return Default;
}

}



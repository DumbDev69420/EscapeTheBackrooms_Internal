#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Medium_House_Prefab_01.Medium_House_Prefab_01_C
// (Actor)

class UClass* AMedium_House_Prefab_01_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Medium_House_Prefab_01_C");

	return Clss;
}


// Medium_House_Prefab_01_C Medium_House_Prefab_01.Default__Medium_House_Prefab_01_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AMedium_House_Prefab_01_C* AMedium_House_Prefab_01_C::GetDefaultObj()
{
	static class AMedium_House_Prefab_01_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AMedium_House_Prefab_01_C*>(AMedium_House_Prefab_01_C::StaticClass()->DefaultObject);

	return Default;
}

}



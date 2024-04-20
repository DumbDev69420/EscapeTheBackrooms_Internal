#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Small_House_Prefab_01.Small_House_Prefab_01_C
// (Actor)

class UClass* ASmall_House_Prefab_01_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Small_House_Prefab_01_C");

	return Clss;
}


// Small_House_Prefab_01_C Small_House_Prefab_01.Default__Small_House_Prefab_01_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ASmall_House_Prefab_01_C* ASmall_House_Prefab_01_C::GetDefaultObj()
{
	static class ASmall_House_Prefab_01_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ASmall_House_Prefab_01_C*>(ASmall_House_Prefab_01_C::StaticClass()->DefaultObject);

	return Default;
}

}



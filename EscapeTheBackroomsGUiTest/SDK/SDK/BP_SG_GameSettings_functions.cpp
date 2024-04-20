#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_SG_GameSettings.BP_SG_GameSettings_C
// (None)

class UClass* UBP_SG_GameSettings_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_SG_GameSettings_C");

	return Clss;
}


// BP_SG_GameSettings_C BP_SG_GameSettings.Default__BP_SG_GameSettings_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_SG_GameSettings_C* UBP_SG_GameSettings_C::GetDefaultObj()
{
	static class UBP_SG_GameSettings_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_SG_GameSettings_C*>(UBP_SG_GameSettings_C::StaticClass()->DefaultObject);

	return Default;
}

}



#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_New_SaveGame.BP_New_SaveGame_C
// (None)

class UClass* UBP_New_SaveGame_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_New_SaveGame_C");

	return Clss;
}


// BP_New_SaveGame_C BP_New_SaveGame.Default__BP_New_SaveGame_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_New_SaveGame_C* UBP_New_SaveGame_C::GetDefaultObj()
{
	static class UBP_New_SaveGame_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_New_SaveGame_C*>(UBP_New_SaveGame_C::StaticClass()->DefaultObject);

	return Default;
}

}



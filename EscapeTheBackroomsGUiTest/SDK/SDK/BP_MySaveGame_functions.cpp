#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_MySaveGame.BP_MySaveGame_C
// (None)

class UClass* UBP_MySaveGame_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_MySaveGame_C");

	return Clss;
}


// BP_MySaveGame_C BP_MySaveGame.Default__BP_MySaveGame_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_MySaveGame_C* UBP_MySaveGame_C::GetDefaultObj()
{
	static class UBP_MySaveGame_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_MySaveGame_C*>(UBP_MySaveGame_C::StaticClass()->DefaultObject);

	return Default;
}

}



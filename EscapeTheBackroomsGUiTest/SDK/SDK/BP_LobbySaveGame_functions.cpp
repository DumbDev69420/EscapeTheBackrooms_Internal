#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_LobbySaveGame.BP_LobbySaveGame_C
// (None)

class UClass* UBP_LobbySaveGame_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_LobbySaveGame_C");

	return Clss;
}


// BP_LobbySaveGame_C BP_LobbySaveGame.Default__BP_LobbySaveGame_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_LobbySaveGame_C* UBP_LobbySaveGame_C::GetDefaultObj()
{
	static class UBP_LobbySaveGame_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_LobbySaveGame_C*>(UBP_LobbySaveGame_C::StaticClass()->DefaultObject);

	return Default;
}

}



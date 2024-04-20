#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Dummy_Pawn.BP_Dummy_Pawn_C
// (Actor, Pawn)

class UClass* ABP_Dummy_Pawn_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Dummy_Pawn_C");

	return Clss;
}


// BP_Dummy_Pawn_C BP_Dummy_Pawn.Default__BP_Dummy_Pawn_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_Dummy_Pawn_C* ABP_Dummy_Pawn_C::GetDefaultObj()
{
	static class ABP_Dummy_Pawn_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_Dummy_Pawn_C*>(ABP_Dummy_Pawn_C::StaticClass()->DefaultObject);

	return Default;
}

}



#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Climb_Ladder.BP_Climb_Ladder_C
// (None)

class UClass* UBP_Climb_Ladder_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Climb_Ladder_C");

	return Clss;
}


// BP_Climb_Ladder_C BP_Climb_Ladder.Default__BP_Climb_Ladder_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_Climb_Ladder_C* UBP_Climb_Ladder_C::GetDefaultObj()
{
	static class UBP_Climb_Ladder_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_Climb_Ladder_C*>(UBP_Climb_Ladder_C::StaticClass()->DefaultObject);

	return Default;
}

}



#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Climb_Shake3_2.BP_Climb_Shake3_2_C
// (None)

class UClass* UBP_Climb_Shake3_2_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Climb_Shake3_2_C");

	return Clss;
}


// BP_Climb_Shake3_2_C BP_Climb_Shake3_2.Default__BP_Climb_Shake3_2_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_Climb_Shake3_2_C* UBP_Climb_Shake3_2_C::GetDefaultObj()
{
	static class UBP_Climb_Shake3_2_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_Climb_Shake3_2_C*>(UBP_Climb_Shake3_2_C::StaticClass()->DefaultObject);

	return Default;
}

}



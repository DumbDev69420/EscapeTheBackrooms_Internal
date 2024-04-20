#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Idle_Shake_Long.BP_Idle_Shake_Long_C
// (None)

class UClass* UBP_Idle_Shake_Long_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Idle_Shake_Long_C");

	return Clss;
}


// BP_Idle_Shake_Long_C BP_Idle_Shake_Long.Default__BP_Idle_Shake_Long_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_Idle_Shake_Long_C* UBP_Idle_Shake_Long_C::GetDefaultObj()
{
	static class UBP_Idle_Shake_Long_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_Idle_Shake_Long_C*>(UBP_Idle_Shake_Long_C::StaticClass()->DefaultObject);

	return Default;
}

}



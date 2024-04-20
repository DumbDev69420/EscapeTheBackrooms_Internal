#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Heavy_Shake.BP_Heavy_Shake_C
// (None)

class UClass* UBP_Heavy_Shake_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Heavy_Shake_C");

	return Clss;
}


// BP_Heavy_Shake_C BP_Heavy_Shake.Default__BP_Heavy_Shake_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_Heavy_Shake_C* UBP_Heavy_Shake_C::GetDefaultObj()
{
	static class UBP_Heavy_Shake_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_Heavy_Shake_C*>(UBP_Heavy_Shake_C::StaticClass()->DefaultObject);

	return Default;
}

}



#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Chainsaw_Shake.BP_Chainsaw_Shake_C
// (None)

class UClass* UBP_Chainsaw_Shake_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Chainsaw_Shake_C");

	return Clss;
}


// BP_Chainsaw_Shake_C BP_Chainsaw_Shake.Default__BP_Chainsaw_Shake_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_Chainsaw_Shake_C* UBP_Chainsaw_Shake_C::GetDefaultObj()
{
	static class UBP_Chainsaw_Shake_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_Chainsaw_Shake_C*>(UBP_Chainsaw_Shake_C::StaticClass()->DefaultObject);

	return Default;
}

}



#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Cabinet_B.BP_Cabinet_B_C
// (Actor)

class UClass* ABP_Cabinet_B_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Cabinet_B_C");

	return Clss;
}


// BP_Cabinet_B_C BP_Cabinet_B.Default__BP_Cabinet_B_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_Cabinet_B_C* ABP_Cabinet_B_C::GetDefaultObj()
{
	static class ABP_Cabinet_B_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_Cabinet_B_C*>(ABP_Cabinet_B_C::StaticClass()->DefaultObject);

	return Default;
}

}



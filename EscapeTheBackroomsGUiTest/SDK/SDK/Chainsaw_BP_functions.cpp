#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Chainsaw_BP.Chainsaw_BP_C
// (Actor)

class UClass* AChainsaw_BP_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Chainsaw_BP_C");

	return Clss;
}


// Chainsaw_BP_C Chainsaw_BP.Default__Chainsaw_BP_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AChainsaw_BP_C* AChainsaw_BP_C::GetDefaultObj()
{
	static class AChainsaw_BP_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AChainsaw_BP_C*>(AChainsaw_BP_C::StaticClass()->DefaultObject);

	return Default;
}

}



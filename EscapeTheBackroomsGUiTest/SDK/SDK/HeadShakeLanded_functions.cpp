#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass HeadShakeLanded.HeadShakeLanded_C
// (None)

class UClass* UHeadShakeLanded_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("HeadShakeLanded_C");

	return Clss;
}


// HeadShakeLanded_C HeadShakeLanded.Default__HeadShakeLanded_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UHeadShakeLanded_C* UHeadShakeLanded_C::GetDefaultObj()
{
	static class UHeadShakeLanded_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UHeadShakeLanded_C*>(UHeadShakeLanded_C::StaticClass()->DefaultObject);

	return Default;
}

}



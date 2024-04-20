#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Grass_Interaction_Other.Grass_Interaction_Other_C
// (SceneComponent)

class UClass* UGrass_Interaction_Other_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Grass_Interaction_Other_C");

	return Clss;
}


// Grass_Interaction_Other_C Grass_Interaction_Other.Default__Grass_Interaction_Other_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGrass_Interaction_Other_C* UGrass_Interaction_Other_C::GetDefaultObj()
{
	static class UGrass_Interaction_Other_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGrass_Interaction_Other_C*>(UGrass_Interaction_Other_C::StaticClass()->DefaultObject);

	return Default;
}

}



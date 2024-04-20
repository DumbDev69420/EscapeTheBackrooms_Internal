#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Grass_Interaction.Grass_Interaction_C
// (SceneComponent)

class UClass* UGrass_Interaction_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Grass_Interaction_C");

	return Clss;
}


// Grass_Interaction_C Grass_Interaction.Default__Grass_Interaction_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGrass_Interaction_C* UGrass_Interaction_C::GetDefaultObj()
{
	static class UGrass_Interaction_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGrass_Interaction_C*>(UGrass_Interaction_C::StaticClass()->DefaultObject);

	return Default;
}

}



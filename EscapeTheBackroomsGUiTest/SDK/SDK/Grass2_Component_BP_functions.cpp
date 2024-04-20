#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Grass2_Component_BP.Grass2_Component_BP_C
// (SceneComponent, PrimitiveComponent, StaticMeshComponent)

class UClass* UGrass2_Component_BP_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Grass2_Component_BP_C");

	return Clss;
}


// Grass2_Component_BP_C Grass2_Component_BP.Default__Grass2_Component_BP_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGrass2_Component_BP_C* UGrass2_Component_BP_C::GetDefaultObj()
{
	static class UGrass2_Component_BP_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGrass2_Component_BP_C*>(UGrass2_Component_BP_C::StaticClass()->DefaultObject);

	return Default;
}

}



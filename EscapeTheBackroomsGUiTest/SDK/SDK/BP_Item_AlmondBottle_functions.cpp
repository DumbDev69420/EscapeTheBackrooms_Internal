#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Item_AlmondBottle.BP_Item_AlmondBottle_C
// (Actor)

class UClass* ABP_Item_AlmondBottle_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Item_AlmondBottle_C");

	return Clss;
}


// BP_Item_AlmondBottle_C BP_Item_AlmondBottle.Default__BP_Item_AlmondBottle_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_Item_AlmondBottle_C* ABP_Item_AlmondBottle_C::GetDefaultObj()
{
	static class ABP_Item_AlmondBottle_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_Item_AlmondBottle_C*>(ABP_Item_AlmondBottle_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_Item_AlmondBottle.BP_Item_AlmondBottle_C.SetMaterial
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               EnabledFOV                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_Item_AlmondBottle_C::SetMaterial(bool EnabledFOV)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Item_AlmondBottle_C", "SetMaterial");

	Params::ABP_Item_AlmondBottle_C_SetMaterial_Params Parms{};

	Parms.EnabledFOV = EnabledFOV;

	UObject::ProcessEvent(Func, &Parms);

}

}



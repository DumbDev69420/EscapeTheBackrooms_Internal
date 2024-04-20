#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Stairs_main_R.BP_Stairs_main_R_C
// (Actor)

class UClass* ABP_Stairs_main_R_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Stairs_main_R_C");

	return Clss;
}


// BP_Stairs_main_R_C BP_Stairs_main_R.Default__BP_Stairs_main_R_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_Stairs_main_R_C* ABP_Stairs_main_R_C::GetDefaultObj()
{
	static class ABP_Stairs_main_R_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_Stairs_main_R_C*>(ABP_Stairs_main_R_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_Stairs_main_R.BP_Stairs_main_R_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Stairs_main_R_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Stairs_main_R_C", "UserConstructionScript");



	UObject::ProcessEvent(Func, nullptr);

}

}



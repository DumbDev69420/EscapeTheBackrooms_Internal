#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Ambience_Manager.BP_Ambience_Manager_C
// (Actor)

class UClass* ABP_Ambience_Manager_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Ambience_Manager_C");

	return Clss;
}


// BP_Ambience_Manager_C BP_Ambience_Manager.Default__BP_Ambience_Manager_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_Ambience_Manager_C* ABP_Ambience_Manager_C::GetDefaultObj()
{
	static class ABP_Ambience_Manager_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_Ambience_Manager_C*>(ABP_Ambience_Manager_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_Ambience_Manager.BP_Ambience_Manager_C.ResetAmbience
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Ambience_Manager_C::ResetAmbience()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Ambience_Manager_C", "ResetAmbience");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Ambience_Manager.BP_Ambience_Manager_C.EnterHouse
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Ambience_Manager_C::EnterHouse()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Ambience_Manager_C", "EnterHouse");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Ambience_Manager.BP_Ambience_Manager_C.ExitHouse
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Ambience_Manager_C::ExitHouse()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Ambience_Manager_C", "ExitHouse");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Ambience_Manager.BP_Ambience_Manager_C.ExecuteUbergraph_BP_Ambience_Manager
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Has_Been_Initd_Variable                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_IsClosed_Variable                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_Ambience_Manager_C::ExecuteUbergraph_BP_Ambience_Manager(int32 EntryPoint, bool Temp_bool_Has_Been_Initd_Variable, bool Temp_bool_IsClosed_Variable)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Ambience_Manager_C", "ExecuteUbergraph_BP_Ambience_Manager");

	Params::ABP_Ambience_Manager_C_ExecuteUbergraph_BP_Ambience_Manager_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_bool_Has_Been_Initd_Variable = Temp_bool_Has_Been_Initd_Variable;
	Parms.Temp_bool_IsClosed_Variable = Temp_bool_IsClosed_Variable;

	UObject::ProcessEvent(Func, &Parms);

}

}



#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Rope_BP.Rope_BP_C
// (Actor)

class UClass* ARope_BP_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Rope_BP_C");

	return Clss;
}


// Rope_BP_C Rope_BP.Default__Rope_BP_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ARope_BP_C* ARope_BP_C::GetDefaultObj()
{
	static class ARope_BP_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ARope_BP_C*>(ARope_BP_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Rope_BP.Rope_BP_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ARope_BP_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Rope_BP_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Rope_BP.Rope_BP_C.ExecuteUbergraph_Rope_BP
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ARope_BP_C::ExecuteUbergraph_Rope_BP(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Rope_BP_C", "ExecuteUbergraph_Rope_BP");

	Params::ARope_BP_C_ExecuteUbergraph_Rope_BP_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}



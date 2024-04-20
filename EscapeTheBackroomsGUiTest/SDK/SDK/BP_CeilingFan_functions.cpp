#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_CeilingFan.BP_CeilingFan_C
// (Actor)

class UClass* ABP_CeilingFan_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_CeilingFan_C");

	return Clss;
}


// BP_CeilingFan_C BP_CeilingFan.Default__BP_CeilingFan_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_CeilingFan_C* ABP_CeilingFan_C::GetDefaultObj()
{
	static class ABP_CeilingFan_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_CeilingFan_C*>(ABP_CeilingFan_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_CeilingFan.BP_CeilingFan_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_CeilingFan_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CeilingFan_C", "UserConstructionScript");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_CeilingFan.BP_CeilingFan_C.Timeline_0__FinishedFunc
// (BlueprintEvent)
// Parameters:

void ABP_CeilingFan_C::Timeline_0__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CeilingFan_C", "Timeline_0__FinishedFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_CeilingFan.BP_CeilingFan_C.Timeline_0__UpdateFunc
// (BlueprintEvent)
// Parameters:

void ABP_CeilingFan_C::Timeline_0__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CeilingFan_C", "Timeline_0__UpdateFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_CeilingFan.BP_CeilingFan_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_CeilingFan_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CeilingFan_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_CeilingFan.BP_CeilingFan_C.ExecuteUbergraph_BP_CeilingFan
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_MakeRotator_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FHitResult                  CallFunc_K2_AddRelativeRotation_SweepHitResult                   (IsPlainOldData, NoDestructor, ContainsInstancedReference)

void ABP_CeilingFan_C::ExecuteUbergraph_BP_CeilingFan(int32 EntryPoint, const struct FRotator& CallFunc_MakeRotator_ReturnValue, const struct FHitResult& CallFunc_K2_AddRelativeRotation_SweepHitResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CeilingFan_C", "ExecuteUbergraph_BP_CeilingFan");

	Params::ABP_CeilingFan_C_ExecuteUbergraph_BP_CeilingFan_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_MakeRotator_ReturnValue = CallFunc_MakeRotator_ReturnValue;
	Parms.CallFunc_K2_AddRelativeRotation_SweepHitResult = CallFunc_K2_AddRelativeRotation_SweepHitResult;

	UObject::ProcessEvent(Func, &Parms);

}

}



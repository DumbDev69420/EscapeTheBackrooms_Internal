#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Door_Master.BP_Door_Master_C
// (Actor)

class UClass* ABP_Door_Master_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Door_Master_C");

	return Clss;
}


// BP_Door_Master_C BP_Door_Master.Default__BP_Door_Master_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_Door_Master_C* ABP_Door_Master_C::GetDefaultObj()
{
	static class ABP_Door_Master_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_Door_Master_C*>(ABP_Door_Master_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_Door_Master.BP_Door_Master_C.OpenDoor__FinishedFunc
// (BlueprintEvent)
// Parameters:

void ABP_Door_Master_C::OpenDoor__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Door_Master_C", "OpenDoor__FinishedFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Door_Master.BP_Door_Master_C.OpenDoor__UpdateFunc
// (BlueprintEvent)
// Parameters:

void ABP_Door_Master_C::OpenDoor__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Door_Master_C", "OpenDoor__UpdateFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Door_Master.BP_Door_Master_C.OnUsedNotify
// (Event, Public, BlueprintEvent)
// Parameters:

void ABP_Door_Master_C::OnUsedNotify()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Door_Master_C", "OnUsedNotify");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Door_Master.BP_Door_Master_C.ExecuteUbergraph_BP_Door_Master
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FRotator                    CallFunc_MakeRotator_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FHitResult                  CallFunc_K2_SetRelativeRotation_SweepHitResult                   (IsPlainOldData, NoDestructor, ContainsInstancedReference)

void ABP_Door_Master_C::ExecuteUbergraph_BP_Door_Master(int32 EntryPoint, bool CallFunc_Not_PreBool_ReturnValue, bool Temp_bool_Variable, const struct FRotator& CallFunc_MakeRotator_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, const struct FHitResult& CallFunc_K2_SetRelativeRotation_SweepHitResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Door_Master_C", "ExecuteUbergraph_BP_Door_Master");

	Params::ABP_Door_Master_C_ExecuteUbergraph_BP_Door_Master_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_MakeRotator_ReturnValue = CallFunc_MakeRotator_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue_1 = CallFunc_Not_PreBool_ReturnValue_1;
	Parms.CallFunc_K2_SetRelativeRotation_SweepHitResult = CallFunc_K2_SetRelativeRotation_SweepHitResult;

	UObject::ProcessEvent(Func, &Parms);

}

}



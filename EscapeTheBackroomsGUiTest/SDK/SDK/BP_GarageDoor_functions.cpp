#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_GarageDoor.BP_GarageDoor_C
// (Actor)

class UClass* ABP_GarageDoor_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_GarageDoor_C");

	return Clss;
}


// BP_GarageDoor_C BP_GarageDoor.Default__BP_GarageDoor_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_GarageDoor_C* ABP_GarageDoor_C::GetDefaultObj()
{
	static class ABP_GarageDoor_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_GarageDoor_C*>(ABP_GarageDoor_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_GarageDoor.BP_GarageDoor_C.OpenDoor__FinishedFunc
// (BlueprintEvent)
// Parameters:

void ABP_GarageDoor_C::OpenDoor__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_GarageDoor_C", "OpenDoor__FinishedFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_GarageDoor.BP_GarageDoor_C.OpenDoor__UpdateFunc
// (BlueprintEvent)
// Parameters:

void ABP_GarageDoor_C::OpenDoor__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_GarageDoor_C", "OpenDoor__UpdateFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_GarageDoor.BP_GarageDoor_C.OnUsedNotify
// (Event, Public, BlueprintEvent)
// Parameters:

void ABP_GarageDoor_C::OnUsedNotify()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_GarageDoor_C", "OnUsedNotify");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_GarageDoor.BP_GarageDoor_C.Open
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_GarageDoor_C::Open()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_GarageDoor_C", "Open");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_GarageDoor.BP_GarageDoor_C.CloseDoor
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_GarageDoor_C::CloseDoor()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_GarageDoor_C", "CloseDoor");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_GarageDoor.BP_GarageDoor_C.OnActorUsed
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ACharacter*                  Character                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_GarageDoor_C::OnActorUsed(class ACharacter* Character)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_GarageDoor_C", "OnActorUsed");

	Params::ABP_GarageDoor_C_OnActorUsed_Params Parms{};

	Parms.Character = Character;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_GarageDoor.BP_GarageDoor_C.ExecuteUbergraph_BP_GarageDoor
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_MakeRotator_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FHitResult                  CallFunc_K2_SetRelativeRotation_SweepHitResult                   (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// class ACharacter*                  K2Node_Event_Character                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_GarageDoor_C::ExecuteUbergraph_BP_GarageDoor(int32 EntryPoint, const struct FRotator& CallFunc_MakeRotator_ReturnValue, bool Temp_bool_Variable, bool CallFunc_Not_PreBool_ReturnValue, const struct FHitResult& CallFunc_K2_SetRelativeRotation_SweepHitResult, class ACharacter* K2Node_Event_Character)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_GarageDoor_C", "ExecuteUbergraph_BP_GarageDoor");

	Params::ABP_GarageDoor_C_ExecuteUbergraph_BP_GarageDoor_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_MakeRotator_ReturnValue = CallFunc_MakeRotator_ReturnValue;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_K2_SetRelativeRotation_SweepHitResult = CallFunc_K2_SetRelativeRotation_SweepHitResult;
	Parms.K2Node_Event_Character = K2Node_Event_Character;

	UObject::ProcessEvent(Func, &Parms);

}

}



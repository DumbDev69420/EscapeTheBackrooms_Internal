#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_MEGDoor.BP_MEGDoor_C
// (Actor)

class UClass* ABP_MEGDoor_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_MEGDoor_C");

	return Clss;
}


// BP_MEGDoor_C BP_MEGDoor.Default__BP_MEGDoor_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_MEGDoor_C* ABP_MEGDoor_C::GetDefaultObj()
{
	static class ABP_MEGDoor_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_MEGDoor_C*>(ABP_MEGDoor_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_MEGDoor.BP_MEGDoor_C.DoorOpen__FinishedFunc
// (BlueprintEvent)
// Parameters:

void ABP_MEGDoor_C::DoorOpen__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MEGDoor_C", "DoorOpen__FinishedFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_MEGDoor.BP_MEGDoor_C.DoorOpen__UpdateFunc
// (BlueprintEvent)
// Parameters:

void ABP_MEGDoor_C::DoorOpen__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MEGDoor_C", "DoorOpen__UpdateFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_MEGDoor.BP_MEGDoor_C.OnActorUsed
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ACharacter*                  Character                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_MEGDoor_C::OnActorUsed(class ACharacter* Character)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MEGDoor_C", "OnActorUsed");

	Params::ABP_MEGDoor_C_OnActorUsed_Params Parms{};

	Parms.Character = Character;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_MEGDoor.BP_MEGDoor_C.OnUsedNotify
// (Event, Public, BlueprintEvent)
// Parameters:

void ABP_MEGDoor_C::OnUsedNotify()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MEGDoor_C", "OnUsedNotify");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_MEGDoor.BP_MEGDoor_C.ExecuteUbergraph_BP_MEGDoor
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_MakeRotator_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ACharacter*                  K2Node_Event_Character                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  CallFunc_K2_SetRelativeRotation_SweepHitResult                   (IsPlainOldData, NoDestructor, ContainsInstancedReference)

void ABP_MEGDoor_C::ExecuteUbergraph_BP_MEGDoor(int32 EntryPoint, const struct FRotator& CallFunc_MakeRotator_ReturnValue, bool Temp_bool_Variable, bool CallFunc_Not_PreBool_ReturnValue, class ACharacter* K2Node_Event_Character, const struct FHitResult& CallFunc_K2_SetRelativeRotation_SweepHitResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MEGDoor_C", "ExecuteUbergraph_BP_MEGDoor");

	Params::ABP_MEGDoor_C_ExecuteUbergraph_BP_MEGDoor_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_MakeRotator_ReturnValue = CallFunc_MakeRotator_ReturnValue;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.K2Node_Event_Character = K2Node_Event_Character;
	Parms.CallFunc_K2_SetRelativeRotation_SweepHitResult = CallFunc_K2_SetRelativeRotation_SweepHitResult;

	UObject::ProcessEvent(Func, &Parms);

}

}



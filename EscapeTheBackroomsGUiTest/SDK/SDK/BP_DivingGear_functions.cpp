#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_DivingGear.BP_DivingGear_C
// (Actor)

class UClass* ABP_DivingGear_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_DivingGear_C");

	return Clss;
}


// BP_DivingGear_C BP_DivingGear.Default__BP_DivingGear_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_DivingGear_C* ABP_DivingGear_C::GetDefaultObj()
{
	static class ABP_DivingGear_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_DivingGear_C*>(ABP_DivingGear_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_DivingGear.BP_DivingGear_C.OnActorUsed
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ACharacter*                  Character                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_DivingGear_C::OnActorUsed(class ACharacter* Character)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_DivingGear_C", "OnActorUsed");

	Params::ABP_DivingGear_C_OnActorUsed_Params Parms{};

	Parms.Character = Character;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_DivingGear.BP_DivingGear_C.ExecuteUbergraph_BP_DivingGear
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACharacter*                  K2Node_Event_Character                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Has_Been_Initd_Variable                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_IsClosed_Variable                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_DivingGear_C::ExecuteUbergraph_BP_DivingGear(int32 EntryPoint, class ACharacter* K2Node_Event_Character, bool Temp_bool_Has_Been_Initd_Variable, bool Temp_bool_IsClosed_Variable)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_DivingGear_C", "ExecuteUbergraph_BP_DivingGear");

	Params::ABP_DivingGear_C_ExecuteUbergraph_BP_DivingGear_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_Character = K2Node_Event_Character;
	Parms.Temp_bool_Has_Been_Initd_Variable = Temp_bool_Has_Been_Initd_Variable;
	Parms.Temp_bool_IsClosed_Variable = Temp_bool_IsClosed_Variable;

	UObject::ProcessEvent(Func, &Parms);

}

}



#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_DivingHelmet.BP_DivingHelmet_C
// (Actor)

class UClass* ABP_DivingHelmet_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_DivingHelmet_C");

	return Clss;
}


// BP_DivingHelmet_C BP_DivingHelmet.Default__BP_DivingHelmet_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_DivingHelmet_C* ABP_DivingHelmet_C::GetDefaultObj()
{
	static class ABP_DivingHelmet_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_DivingHelmet_C*>(ABP_DivingHelmet_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_DivingHelmet.BP_DivingHelmet_C.UpdateLight
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      Player                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_DivingHelmet_C::UpdateLight(class AActor* Player)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_DivingHelmet_C", "UpdateLight");

	Params::ABP_DivingHelmet_C_UpdateLight_Params Parms{};

	Parms.Player = Player;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_DivingHelmet.BP_DivingHelmet_C.ExecuteUbergraph_BP_DivingHelmet
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_CustomEvent_Player                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACharacter*                  CallFunc_GetPlayerCharacter_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_DivingHelmet_C::ExecuteUbergraph_BP_DivingHelmet(int32 EntryPoint, class AActor* K2Node_CustomEvent_Player, class ACharacter* CallFunc_GetPlayerCharacter_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_DivingHelmet_C", "ExecuteUbergraph_BP_DivingHelmet");

	Params::ABP_DivingHelmet_C_ExecuteUbergraph_BP_DivingHelmet_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CustomEvent_Player = K2Node_CustomEvent_Player;
	Parms.CallFunc_GetPlayerCharacter_ReturnValue = CallFunc_GetPlayerCharacter_ReturnValue;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue = CallFunc_EqualEqual_ObjectObject_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}



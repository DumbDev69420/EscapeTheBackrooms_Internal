#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_RefreshWaterBodies.BP_RefreshWaterBodies_C
// (Actor)

class UClass* ABP_RefreshWaterBodies_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_RefreshWaterBodies_C");

	return Clss;
}


// BP_RefreshWaterBodies_C BP_RefreshWaterBodies.Default__BP_RefreshWaterBodies_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_RefreshWaterBodies_C* ABP_RefreshWaterBodies_C::GetDefaultObj()
{
	static class ABP_RefreshWaterBodies_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_RefreshWaterBodies_C*>(ABP_RefreshWaterBodies_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_RefreshWaterBodies.BP_RefreshWaterBodies_C.ReceiveActorBeginOverlap
// (Event, Public, BlueprintEvent)
// Parameters:
// class AActor*                      OtherActor                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_RefreshWaterBodies_C::ReceiveActorBeginOverlap(class AActor* OtherActor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_RefreshWaterBodies_C", "ReceiveActorBeginOverlap");

	Params::ABP_RefreshWaterBodies_C_ReceiveActorBeginOverlap_Params Parms{};

	Parms.OtherActor = OtherActor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_RefreshWaterBodies.BP_RefreshWaterBodies_C.ExecuteUbergraph_BP_RefreshWaterBodies
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_Event_OtherActor                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_FluidSim_01_C*           CallFunc_GetActorOfClass_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABPCharacter_Demo_C*         K2Node_DynamicCast_AsBPCharacter_Demo                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_RefreshWaterBodies_C::ExecuteUbergraph_BP_RefreshWaterBodies(int32 EntryPoint, class AActor* K2Node_Event_OtherActor, class ABP_FluidSim_01_C* CallFunc_GetActorOfClass_ReturnValue, class ABPCharacter_Demo_C* K2Node_DynamicCast_AsBPCharacter_Demo, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_RefreshWaterBodies_C", "ExecuteUbergraph_BP_RefreshWaterBodies");

	Params::ABP_RefreshWaterBodies_C_ExecuteUbergraph_BP_RefreshWaterBodies_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_OtherActor = K2Node_Event_OtherActor;
	Parms.CallFunc_GetActorOfClass_ReturnValue = CallFunc_GetActorOfClass_ReturnValue;
	Parms.K2Node_DynamicCast_AsBPCharacter_Demo = K2Node_DynamicCast_AsBPCharacter_Demo;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}

}



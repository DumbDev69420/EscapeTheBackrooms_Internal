#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_OceanCheckpoint_Trigger.BP_OceanCheckpoint_Trigger_C
// (Actor)

class UClass* ABP_OceanCheckpoint_Trigger_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_OceanCheckpoint_Trigger_C");

	return Clss;
}


// BP_OceanCheckpoint_Trigger_C BP_OceanCheckpoint_Trigger.Default__BP_OceanCheckpoint_Trigger_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_OceanCheckpoint_Trigger_C* ABP_OceanCheckpoint_Trigger_C::GetDefaultObj()
{
	static class ABP_OceanCheckpoint_Trigger_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_OceanCheckpoint_Trigger_C*>(ABP_OceanCheckpoint_Trigger_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_OceanCheckpoint_Trigger.BP_OceanCheckpoint_Trigger_C.ReceiveActorBeginOverlap
// (Event, Public, BlueprintEvent)
// Parameters:
// class AActor*                      OtherActor                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_OceanCheckpoint_Trigger_C::ReceiveActorBeginOverlap(class AActor* OtherActor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_OceanCheckpoint_Trigger_C", "ReceiveActorBeginOverlap");

	Params::ABP_OceanCheckpoint_Trigger_C_ReceiveActorBeginOverlap_Params Parms{};

	Parms.OtherActor = OtherActor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_OceanCheckpoint_Trigger.BP_OceanCheckpoint_Trigger_C.ExecuteUbergraph_BP_OceanCheckpoint_Trigger
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAuthority_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      K2Node_Event_OtherActor                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_IsClosed_Variable                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ABP_RowBoat_C*               K2Node_DynamicCast_AsBP_Row_Boat                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ABPCharacter_Demo_C*         K2Node_DynamicCast_AsBPCharacter_Demo                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Has_Been_Initd_Variable                                (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_OceanCheckpoint_Trigger_C::ExecuteUbergraph_BP_OceanCheckpoint_Trigger(int32 EntryPoint, bool CallFunc_HasAuthority_ReturnValue, class AActor* K2Node_Event_OtherActor, bool Temp_bool_IsClosed_Variable, class ABP_RowBoat_C* K2Node_DynamicCast_AsBP_Row_Boat, bool K2Node_DynamicCast_bSuccess, class ABPCharacter_Demo_C* K2Node_DynamicCast_AsBPCharacter_Demo, bool K2Node_DynamicCast_bSuccess_1, bool Temp_bool_Has_Been_Initd_Variable)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_OceanCheckpoint_Trigger_C", "ExecuteUbergraph_BP_OceanCheckpoint_Trigger");

	Params::ABP_OceanCheckpoint_Trigger_C_ExecuteUbergraph_BP_OceanCheckpoint_Trigger_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_HasAuthority_ReturnValue = CallFunc_HasAuthority_ReturnValue;
	Parms.K2Node_Event_OtherActor = K2Node_Event_OtherActor;
	Parms.Temp_bool_IsClosed_Variable = Temp_bool_IsClosed_Variable;
	Parms.K2Node_DynamicCast_AsBP_Row_Boat = K2Node_DynamicCast_AsBP_Row_Boat;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_DynamicCast_AsBPCharacter_Demo = K2Node_DynamicCast_AsBPCharacter_Demo;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.Temp_bool_Has_Been_Initd_Variable = Temp_bool_Has_Been_Initd_Variable;

	UObject::ProcessEvent(Func, &Parms);

}

}



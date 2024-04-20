#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BTTask_RoamLocation_Level05.BTTask_RoamLocation_Level05_C
// (None)

class UClass* UBTTask_RoamLocation_Level05_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BTTask_RoamLocation_Level05_C");

	return Clss;
}


// BTTask_RoamLocation_Level05_C BTTask_RoamLocation_Level05.Default__BTTask_RoamLocation_Level05_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBTTask_RoamLocation_Level05_C* UBTTask_RoamLocation_Level05_C::GetDefaultObj()
{
	static class UBTTask_RoamLocation_Level05_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBTTask_RoamLocation_Level05_C*>(UBTTask_RoamLocation_Level05_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BTTask_RoamLocation_Level05.BTTask_RoamLocation_Level05_C.ReceiveExecuteAI
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AAIController*               OwnerController                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       ControlledPawn                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBTTask_RoamLocation_Level05_C::ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BTTask_RoamLocation_Level05_C", "ReceiveExecuteAI");

	Params::UBTTask_RoamLocation_Level05_C_ReceiveExecuteAI_Params Parms{};

	Parms.OwnerController = OwnerController;
	Parms.ControlledPawn = ControlledPawn;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BTTask_RoamLocation_Level05.BTTask_RoamLocation_Level05_C.ExecuteUbergraph_BTTask_RoamLocation_Level05
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AAIController*               K2Node_Event_OwnerController                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       K2Node_Event_ControlledPawn                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABacteria_Roaming_BP_C*      K2Node_DynamicCast_AsBacteria_Roaming_BP                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ABP_Bacteria_RoomPoint_C*    CallFunc_GetRoamLocation_RoamPoint                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBTTask_RoamLocation_Level05_C::ExecuteUbergraph_BTTask_RoamLocation_Level05(int32 EntryPoint, class AAIController* K2Node_Event_OwnerController, class APawn* K2Node_Event_ControlledPawn, class ABacteria_Roaming_BP_C* K2Node_DynamicCast_AsBacteria_Roaming_BP, bool K2Node_DynamicCast_bSuccess, class ABP_Bacteria_RoomPoint_C* CallFunc_GetRoamLocation_RoamPoint, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BTTask_RoamLocation_Level05_C", "ExecuteUbergraph_BTTask_RoamLocation_Level05");

	Params::UBTTask_RoamLocation_Level05_C_ExecuteUbergraph_BTTask_RoamLocation_Level05_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_OwnerController = K2Node_Event_OwnerController;
	Parms.K2Node_Event_ControlledPawn = K2Node_Event_ControlledPawn;
	Parms.K2Node_DynamicCast_AsBacteria_Roaming_BP = K2Node_DynamicCast_AsBacteria_Roaming_BP;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetRoamLocation_RoamPoint = CallFunc_GetRoamLocation_RoamPoint;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}



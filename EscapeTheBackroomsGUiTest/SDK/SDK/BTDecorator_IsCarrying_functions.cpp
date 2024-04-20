#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BTDecorator_IsCarrying.BTDecorator_IsCarrying_C
// (None)

class UClass* UBTDecorator_IsCarrying_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BTDecorator_IsCarrying_C");

	return Clss;
}


// BTDecorator_IsCarrying_C BTDecorator_IsCarrying.Default__BTDecorator_IsCarrying_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBTDecorator_IsCarrying_C* UBTDecorator_IsCarrying_C::GetDefaultObj()
{
	static class UBTDecorator_IsCarrying_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBTDecorator_IsCarrying_C*>(UBTDecorator_IsCarrying_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BTDecorator_IsCarrying.BTDecorator_IsCarrying_C.PerformConditionCheckAI
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AAIController*               OwnerController                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       ControlledPawn                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// class ABP_Moth_C*                  K2Node_DynamicCast_AsBP_Moth                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

bool UBTDecorator_IsCarrying_C::PerformConditionCheckAI(class AAIController* OwnerController, class APawn* ControlledPawn, class ABP_Moth_C* K2Node_DynamicCast_AsBP_Moth, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BTDecorator_IsCarrying_C", "PerformConditionCheckAI");

	Params::UBTDecorator_IsCarrying_C_PerformConditionCheckAI_Params Parms{};

	Parms.OwnerController = OwnerController;
	Parms.ControlledPawn = ControlledPawn;
	Parms.K2Node_DynamicCast_AsBP_Moth = K2Node_DynamicCast_AsBP_Moth;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}

}



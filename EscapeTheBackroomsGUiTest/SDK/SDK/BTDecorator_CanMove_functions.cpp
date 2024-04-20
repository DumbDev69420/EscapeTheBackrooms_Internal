#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BTDecorator_CanMove.BTDecorator_CanMove_C
// (None)

class UClass* UBTDecorator_CanMove_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BTDecorator_CanMove_C");

	return Clss;
}


// BTDecorator_CanMove_C BTDecorator_CanMove.Default__BTDecorator_CanMove_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBTDecorator_CanMove_C* UBTDecorator_CanMove_C::GetDefaultObj()
{
	static class UBTDecorator_CanMove_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBTDecorator_CanMove_C*>(UBTDecorator_CanMove_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BTDecorator_CanMove.BTDecorator_CanMove_C.PerformConditionCheckAI
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AAIController*               OwnerController                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       ControlledPawn                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// class ABP_Hound_C*                 K2Node_DynamicCast_AsBP_Hound                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ABP_Moth_C*                  K2Node_DynamicCast_AsBP_Moth                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

bool UBTDecorator_CanMove_C::PerformConditionCheckAI(class AAIController* OwnerController, class APawn* ControlledPawn, class ABP_Hound_C* K2Node_DynamicCast_AsBP_Hound, bool K2Node_DynamicCast_bSuccess, class ABP_Moth_C* K2Node_DynamicCast_AsBP_Moth, bool K2Node_DynamicCast_bSuccess_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BTDecorator_CanMove_C", "PerformConditionCheckAI");

	Params::UBTDecorator_CanMove_C_PerformConditionCheckAI_Params Parms{};

	Parms.OwnerController = OwnerController;
	Parms.ControlledPawn = ControlledPawn;
	Parms.K2Node_DynamicCast_AsBP_Hound = K2Node_DynamicCast_AsBP_Hound;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_DynamicCast_AsBP_Moth = K2Node_DynamicCast_AsBP_Moth;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}

}



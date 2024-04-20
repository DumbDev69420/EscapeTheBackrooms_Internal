#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BTDecorator_ShouldMove_Smiler.BTDecorator_ShouldMove_Smiler_C
// (None)

class UClass* UBTDecorator_ShouldMove_Smiler_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BTDecorator_ShouldMove_Smiler_C");

	return Clss;
}


// BTDecorator_ShouldMove_Smiler_C BTDecorator_ShouldMove_Smiler.Default__BTDecorator_ShouldMove_Smiler_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBTDecorator_ShouldMove_Smiler_C* UBTDecorator_ShouldMove_Smiler_C::GetDefaultObj()
{
	static class UBTDecorator_ShouldMove_Smiler_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBTDecorator_ShouldMove_Smiler_C*>(UBTDecorator_ShouldMove_Smiler_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BTDecorator_ShouldMove_Smiler.BTDecorator_ShouldMove_Smiler_C.PerformConditionCheckAI
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AAIController*               OwnerController                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       ControlledPawn                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// class ABP_Roaming_Smiler_C*        K2Node_DynamicCast_AsBP_Roaming_Smiler                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

bool UBTDecorator_ShouldMove_Smiler_C::PerformConditionCheckAI(class AAIController* OwnerController, class APawn* ControlledPawn, class ABP_Roaming_Smiler_C* K2Node_DynamicCast_AsBP_Roaming_Smiler, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BTDecorator_ShouldMove_Smiler_C", "PerformConditionCheckAI");

	Params::UBTDecorator_ShouldMove_Smiler_C_PerformConditionCheckAI_Params Parms{};

	Parms.OwnerController = OwnerController;
	Parms.ControlledPawn = ControlledPawn;
	Parms.K2Node_DynamicCast_AsBP_Roaming_Smiler = K2Node_DynamicCast_AsBP_Roaming_Smiler;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}

}



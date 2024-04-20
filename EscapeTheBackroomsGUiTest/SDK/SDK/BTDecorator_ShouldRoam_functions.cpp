#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BTDecorator_ShouldRoam.BTDecorator_ShouldRoam_C
// (None)

class UClass* UBTDecorator_ShouldRoam_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BTDecorator_ShouldRoam_C");

	return Clss;
}


// BTDecorator_ShouldRoam_C BTDecorator_ShouldRoam.Default__BTDecorator_ShouldRoam_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBTDecorator_ShouldRoam_C* UBTDecorator_ShouldRoam_C::GetDefaultObj()
{
	static class UBTDecorator_ShouldRoam_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBTDecorator_ShouldRoam_C*>(UBTDecorator_ShouldRoam_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BTDecorator_ShouldRoam.BTDecorator_ShouldRoam_C.PerformConditionCheckAI
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AAIController*               OwnerController                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       ControlledPawn                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// class ABP_Hound_C*                 K2Node_DynamicCast_AsBP_Hound                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

bool UBTDecorator_ShouldRoam_C::PerformConditionCheckAI(class AAIController* OwnerController, class APawn* ControlledPawn, class ABP_Hound_C* K2Node_DynamicCast_AsBP_Hound, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BTDecorator_ShouldRoam_C", "PerformConditionCheckAI");

	Params::UBTDecorator_ShouldRoam_C_PerformConditionCheckAI_Params Parms{};

	Parms.OwnerController = OwnerController;
	Parms.ControlledPawn = ControlledPawn;
	Parms.K2Node_DynamicCast_AsBP_Hound = K2Node_DynamicCast_AsBP_Hound;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}

}



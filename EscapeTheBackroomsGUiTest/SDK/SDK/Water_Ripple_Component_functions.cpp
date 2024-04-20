#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Water_Ripple_Component.Water_Ripple_Component_C
// (None)

class UClass* UWater_Ripple_Component_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Water_Ripple_Component_C");

	return Clss;
}


// Water_Ripple_Component_C Water_Ripple_Component.Default__Water_Ripple_Component_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWater_Ripple_Component_C* UWater_Ripple_Component_C::GetDefaultObj()
{
	static class UWater_Ripple_Component_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWater_Ripple_Component_C*>(UWater_Ripple_Component_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Water_Ripple_Component.Water_Ripple_Component_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)
// Parameters:

void UWater_Ripple_Component_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Water_Ripple_Component_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Water_Ripple_Component.Water_Ripple_Component_C.Cast
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWater_Ripple_Component_C::Cast()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Water_Ripple_Component_C", "Cast");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Water_Ripple_Component.Water_Ripple_Component_C.ExecuteUbergraph_Water_Ripple_Component
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ASkeletalMeshActor*          K2Node_DynamicCast_AsSkeletal_Mesh_Actor                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ABPCharacter_Demo_C*         K2Node_DynamicCast_AsBPCharacter_Demo                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_FluidSim_01_C*           CallFunc_GetActorOfClass_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWater_Ripple_Component_C::ExecuteUbergraph_Water_Ripple_Component(int32 EntryPoint, class AActor* CallFunc_GetOwner_ReturnValue, class ASkeletalMeshActor* K2Node_DynamicCast_AsSkeletal_Mesh_Actor, bool K2Node_DynamicCast_bSuccess, class ABPCharacter_Demo_C* K2Node_DynamicCast_AsBPCharacter_Demo, bool K2Node_DynamicCast_bSuccess_1, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, class ABP_FluidSim_01_C* CallFunc_GetActorOfClass_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Water_Ripple_Component_C", "ExecuteUbergraph_Water_Ripple_Component");

	Params::UWater_Ripple_Component_C_ExecuteUbergraph_Water_Ripple_Component_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.K2Node_DynamicCast_AsSkeletal_Mesh_Actor = K2Node_DynamicCast_AsSkeletal_Mesh_Actor;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_DynamicCast_AsBPCharacter_Demo = K2Node_DynamicCast_AsBPCharacter_Demo;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.CallFunc_GetActorOfClass_ReturnValue = CallFunc_GetActorOfClass_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}



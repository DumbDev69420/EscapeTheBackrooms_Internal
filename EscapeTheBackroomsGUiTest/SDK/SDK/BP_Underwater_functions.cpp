#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Underwater.BP_Underwater_C
// (Actor)

class UClass* ABP_Underwater_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Underwater_C");

	return Clss;
}


// BP_Underwater_C BP_Underwater.Default__BP_Underwater_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_Underwater_C* ABP_Underwater_C::GetDefaultObj()
{
	static class ABP_Underwater_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_Underwater_C*>(ABP_Underwater_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_Underwater.BP_Underwater_C.UserConstructionScript
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FHitResult                  CallFunc_K2_SetWorldTransform_SweepHitResult                     (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// struct FHitResult                  CallFunc_K2_SetWorldTransform_SweepHitResult_1                   (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// struct FHitResult                  CallFunc_K2_SetWorldTransform_SweepHitResult_2                   (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Underwater_C::UserConstructionScript(const struct FHitResult& CallFunc_K2_SetWorldTransform_SweepHitResult, const struct FHitResult& CallFunc_K2_SetWorldTransform_SweepHitResult_1, const struct FHitResult& CallFunc_K2_SetWorldTransform_SweepHitResult_2, float CallFunc_Multiply_FloatFloat_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Underwater_C", "UserConstructionScript");

	Params::ABP_Underwater_C_UserConstructionScript_Params Parms{};

	Parms.CallFunc_K2_SetWorldTransform_SweepHitResult = CallFunc_K2_SetWorldTransform_SweepHitResult;
	Parms.CallFunc_K2_SetWorldTransform_SweepHitResult_1 = CallFunc_K2_SetWorldTransform_SweepHitResult_1;
	Parms.CallFunc_K2_SetWorldTransform_SweepHitResult_2 = CallFunc_K2_SetWorldTransform_SweepHitResult_2;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}



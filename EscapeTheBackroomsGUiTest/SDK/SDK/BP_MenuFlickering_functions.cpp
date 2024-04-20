#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_MenuFlickering.BP_MenuFlickering_C
// (Actor)

class UClass* ABP_MenuFlickering_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_MenuFlickering_C");

	return Clss;
}


// BP_MenuFlickering_C BP_MenuFlickering.Default__BP_MenuFlickering_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_MenuFlickering_C* ABP_MenuFlickering_C::GetDefaultObj()
{
	static class ABP_MenuFlickering_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_MenuFlickering_C*>(ABP_MenuFlickering_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_MenuFlickering.BP_MenuFlickering_C.Flicker__FinishedFunc
// (BlueprintEvent)
// Parameters:

void ABP_MenuFlickering_C::Flicker__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MenuFlickering_C", "Flicker__FinishedFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_MenuFlickering.BP_MenuFlickering_C.Flicker__UpdateFunc
// (BlueprintEvent)
// Parameters:

void ABP_MenuFlickering_C::Flicker__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MenuFlickering_C", "Flicker__UpdateFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_MenuFlickering.BP_MenuFlickering_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_MenuFlickering_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MenuFlickering_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_MenuFlickering.BP_MenuFlickering_C.ExecuteUbergraph_BP_MenuFlickering
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_MenuFlickering_C::ExecuteUbergraph_BP_MenuFlickering(int32 EntryPoint, float CallFunc_Multiply_FloatFloat_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MenuFlickering_C", "ExecuteUbergraph_BP_MenuFlickering");

	Params::ABP_MenuFlickering_C_ExecuteUbergraph_BP_MenuFlickering_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}



#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass NoClip.SequenceDirector_C
// (None)

class UClass* USequenceDirector_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SequenceDirector_C");

	return Clss;
}


// SequenceDirector_C NoClip.Default__SequenceDirector_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class USequenceDirector_C* USequenceDirector_C::GetDefaultObj()
{
	static class USequenceDirector_C* Default = nullptr;

	if (!Default)
		Default = static_cast<USequenceDirector_C*>(USequenceDirector_C::StaticClass()->DefaultObject);

	return Default;
}


// Function NoClip.SequenceDirector_C.SequenceEvent__ENTRYPOINTSequenceDirector_0
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void USequenceDirector_C::SequenceEvent__ENTRYPOINTSequenceDirector_0()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SequenceDirector_C", "SequenceEvent__ENTRYPOINTSequenceDirector_0");



	UObject::ProcessEvent(Func, nullptr);

}


// Function NoClip.SequenceDirector_C.SequenceEvent_0
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void USequenceDirector_C::SequenceEvent_0()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SequenceDirector_C", "SequenceEvent_0");



	UObject::ProcessEvent(Func, nullptr);

}


// Function NoClip.SequenceDirector_C.ExecuteUbergraph_SequenceDirector
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFadeOut_UI_C*               CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USequenceDirector_C::ExecuteUbergraph_SequenceDirector(int32 EntryPoint, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class UFadeOut_UI_C* CallFunc_Create_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SequenceDirector_C", "ExecuteUbergraph_SequenceDirector");

	Params::USequenceDirector_C_ExecuteUbergraph_SequenceDirector_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}



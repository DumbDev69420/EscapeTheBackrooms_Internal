#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Scanner_BP.Scanner_BP_C
// (Actor)

class UClass* AScanner_BP_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Scanner_BP_C");

	return Clss;
}


// Scanner_BP_C Scanner_BP.Default__Scanner_BP_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AScanner_BP_C* AScanner_BP_C::GetDefaultObj()
{
	static class AScanner_BP_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AScanner_BP_C*>(AScanner_BP_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Scanner_BP.Scanner_BP_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void AScanner_BP_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Scanner_BP_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Scanner_BP.Scanner_BP_C.ExecuteUbergraph_Scanner_BP
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AScanner_BP_C::ExecuteUbergraph_Scanner_BP(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Scanner_BP_C", "ExecuteUbergraph_Scanner_BP");

	Params::AScanner_BP_C_ExecuteUbergraph_Scanner_BP_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}



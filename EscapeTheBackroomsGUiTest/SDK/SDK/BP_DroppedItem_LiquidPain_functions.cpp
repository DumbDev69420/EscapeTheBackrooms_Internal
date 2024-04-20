#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_DroppedItem_LiquidPain.BP_DroppedItem_LiquidPain_C
// (Actor)

class UClass* ABP_DroppedItem_LiquidPain_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_DroppedItem_LiquidPain_C");

	return Clss;
}


// BP_DroppedItem_LiquidPain_C BP_DroppedItem_LiquidPain.Default__BP_DroppedItem_LiquidPain_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_DroppedItem_LiquidPain_C* ABP_DroppedItem_LiquidPain_C::GetDefaultObj()
{
	static class ABP_DroppedItem_LiquidPain_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_DroppedItem_LiquidPain_C*>(ABP_DroppedItem_LiquidPain_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_DroppedItem_LiquidPain.BP_DroppedItem_LiquidPain_C.Flicker__FinishedFunc
// (BlueprintEvent)
// Parameters:

void ABP_DroppedItem_LiquidPain_C::Flicker__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_DroppedItem_LiquidPain_C", "Flicker__FinishedFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_DroppedItem_LiquidPain.BP_DroppedItem_LiquidPain_C.Flicker__UpdateFunc
// (BlueprintEvent)
// Parameters:

void ABP_DroppedItem_LiquidPain_C::Flicker__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_DroppedItem_LiquidPain_C", "Flicker__UpdateFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_DroppedItem_LiquidPain.BP_DroppedItem_LiquidPain_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_DroppedItem_LiquidPain_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_DroppedItem_LiquidPain_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_DroppedItem_LiquidPain.BP_DroppedItem_LiquidPain_C.ExecuteUbergraph_BP_DroppedItem_LiquidPain
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_DroppedItem_LiquidPain_C::ExecuteUbergraph_BP_DroppedItem_LiquidPain(int32 EntryPoint, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_DroppedItem_LiquidPain_C", "ExecuteUbergraph_BP_DroppedItem_LiquidPain");

	Params::ABP_DroppedItem_LiquidPain_C_ExecuteUbergraph_BP_DroppedItem_LiquidPain_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}



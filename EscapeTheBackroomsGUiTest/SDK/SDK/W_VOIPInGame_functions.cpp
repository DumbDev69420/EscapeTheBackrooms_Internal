#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass W_VOIPInGame.W_VOIPInGame_C
// (None)

class UClass* UW_VOIPInGame_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("W_VOIPInGame_C");

	return Clss;
}


// W_VOIPInGame_C W_VOIPInGame.Default__W_VOIPInGame_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UW_VOIPInGame_C* UW_VOIPInGame_C::GetDefaultObj()
{
	static class UW_VOIPInGame_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UW_VOIPInGame_C*>(UW_VOIPInGame_C::StaticClass()->DefaultObject);

	return Default;
}


// Function W_VOIPInGame.W_VOIPInGame_C.SetVOIPIconVisibility
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Activated_                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_VOIPInGame_C::SetVOIPIconVisibility(bool Activated_)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_VOIPInGame_C", "SetVOIPIconVisibility");

	Params::UW_VOIPInGame_C_SetVOIPIconVisibility_Params Parms{};

	Parms.Activated_ = Activated_;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_VOIPInGame.W_VOIPInGame_C.ExecuteUbergraph_W_VOIPInGame
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_Activated_                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_VOIPInGame_C::ExecuteUbergraph_W_VOIPInGame(int32 EntryPoint, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, bool K2Node_CustomEvent_Activated_, enum class ESlateVisibility K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_VOIPInGame_C", "ExecuteUbergraph_W_VOIPInGame");

	Params::UW_VOIPInGame_C_ExecuteUbergraph_W_VOIPInGame_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.K2Node_CustomEvent_Activated_ = K2Node_CustomEvent_Activated_;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}

}



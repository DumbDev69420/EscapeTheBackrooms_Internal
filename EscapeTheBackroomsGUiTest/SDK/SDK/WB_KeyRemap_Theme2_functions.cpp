#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WB_KeyRemap_Theme2.WB_KeyRemap_Theme2_C
// (None)

class UClass* UWB_KeyRemap_Theme2_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WB_KeyRemap_Theme2_C");

	return Clss;
}


// WB_KeyRemap_Theme2_C WB_KeyRemap_Theme2.Default__WB_KeyRemap_Theme2_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWB_KeyRemap_Theme2_C* UWB_KeyRemap_Theme2_C::GetDefaultObj()
{
	static class UWB_KeyRemap_Theme2_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWB_KeyRemap_Theme2_C*>(UWB_KeyRemap_Theme2_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WB_KeyRemap_Theme2.WB_KeyRemap_Theme2_C.BndEvt__WB_KeyRemap_InputKeySelector_K2Node_ComponentBoundEvent_0_OnKeySelected__DelegateSignature
// (BlueprintEvent)
// Parameters:
// struct FInputChord                 SelectedKey                                                      (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void UWB_KeyRemap_Theme2_C::BndEvt__WB_KeyRemap_InputKeySelector_K2Node_ComponentBoundEvent_0_OnKeySelected__DelegateSignature(const struct FInputChord& SelectedKey)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_KeyRemap_Theme2_C", "BndEvt__WB_KeyRemap_InputKeySelector_K2Node_ComponentBoundEvent_0_OnKeySelected__DelegateSignature");

	Params::UWB_KeyRemap_Theme2_C_BndEvt__WB_KeyRemap_InputKeySelector_K2Node_ComponentBoundEvent_0_OnKeySelected__DelegateSignature_Params Parms{};

	Parms.SelectedKey = SelectedKey;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_KeyRemap_Theme2.WB_KeyRemap_Theme2_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWB_KeyRemap_Theme2_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_KeyRemap_Theme2_C", "PreConstruct");

	Params::UWB_KeyRemap_Theme2_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_KeyRemap_Theme2.WB_KeyRemap_Theme2_C.ExecuteUbergraph_WB_KeyRemap_Theme2
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UInputSettings*              CallFunc_GetInputSettings_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FInputChord                 K2Node_ComponentBoundEvent_SelectedKey                           (HasGetValueTypeHash)
// class UInputSettings*              CallFunc_GetInputSettings_ReturnValue_1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FInputActionKeyMapping>CallFunc_GetActionMappingByName_OutMappings                      (ReferenceParm)
// struct FInputActionKeyMapping      K2Node_MakeStruct_InputActionKeyMapping                          (None)
// bool                               CallFunc_Array_IsValidIndex_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<struct FInputActionKeyMapping>CallFunc_GetActionMappingByName_OutMappings_1                    (ReferenceParm)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Array_IsValidIndex_ReturnValue_1                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FInputChord                 K2Node_MakeStruct_InputChord                                     (HasGetValueTypeHash)

void UWB_KeyRemap_Theme2_C::ExecuteUbergraph_WB_KeyRemap_Theme2(int32 EntryPoint, class UInputSettings* CallFunc_GetInputSettings_ReturnValue, const struct FInputChord& K2Node_ComponentBoundEvent_SelectedKey, class UInputSettings* CallFunc_GetInputSettings_ReturnValue_1, TArray<struct FInputActionKeyMapping>& CallFunc_GetActionMappingByName_OutMappings, const struct FInputActionKeyMapping& K2Node_MakeStruct_InputActionKeyMapping, bool CallFunc_Array_IsValidIndex_ReturnValue, TArray<struct FInputActionKeyMapping>& CallFunc_GetActionMappingByName_OutMappings_1, bool K2Node_Event_IsDesignTime, bool CallFunc_Array_IsValidIndex_ReturnValue_1, const struct FInputChord& K2Node_MakeStruct_InputChord)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_KeyRemap_Theme2_C", "ExecuteUbergraph_WB_KeyRemap_Theme2");

	Params::UWB_KeyRemap_Theme2_C_ExecuteUbergraph_WB_KeyRemap_Theme2_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetInputSettings_ReturnValue = CallFunc_GetInputSettings_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_SelectedKey = K2Node_ComponentBoundEvent_SelectedKey;
	Parms.CallFunc_GetInputSettings_ReturnValue_1 = CallFunc_GetInputSettings_ReturnValue_1;
	Parms.CallFunc_GetActionMappingByName_OutMappings = CallFunc_GetActionMappingByName_OutMappings;
	Parms.K2Node_MakeStruct_InputActionKeyMapping = K2Node_MakeStruct_InputActionKeyMapping;
	Parms.CallFunc_Array_IsValidIndex_ReturnValue = CallFunc_Array_IsValidIndex_ReturnValue;
	Parms.CallFunc_GetActionMappingByName_OutMappings_1 = CallFunc_GetActionMappingByName_OutMappings_1;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.CallFunc_Array_IsValidIndex_ReturnValue_1 = CallFunc_Array_IsValidIndex_ReturnValue_1;
	Parms.K2Node_MakeStruct_InputChord = K2Node_MakeStruct_InputChord;

	UObject::ProcessEvent(Func, &Parms);

}

}



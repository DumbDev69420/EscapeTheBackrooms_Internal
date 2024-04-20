#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x2C (0x28C - 0x260)
// WidgetBlueprintGeneratedClass SubtitleWB.SubtitleWB_C
class USubtitleWB_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      SubtitleAnimation;                                 // 0x268(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class USubtitleTextWB_C*                     Subtitle;                                          // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                         Stop;                                              // 0x278(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Active;                                            // 0x279(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1CA1[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UAudioComponent*                       SubtitleSoundRef;                                  // 0x280(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        SubtitleDurationRef;                               // 0x288(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class USubtitleWB_C* GetDefaultObj();

	void SubtitleText(TArray<struct FHE_Subtitle>& Subtitle, int32 StartIndex);
	void RemoveSubtitle();
	void RemoveOthers();
	void PreConstruct(bool IsDesignTime);
	void Construct();
	void ExecuteUbergraph_SubtitleWB(int32 EntryPoint, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, TArray<struct FHE_Subtitle>& K2Node_CustomEvent_Subtitle, int32 K2Node_CustomEvent_StartIndex, const struct FHE_Subtitle& CallFunc_Array_Get_Item, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UAudioComponent* CallFunc_SpawnSound2D_ReturnValue, bool CallFunc_Array_IsValidIndex_ReturnValue, int32 CallFunc_Array_LastIndex_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue, bool Temp_bool_IsClosed_Variable, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1, int32 Temp_int_Array_Index_Variable, TArray<class USubtitleWB_C*>& CallFunc_GetAllWidgetsOfClass_FoundWidgets, class USubtitleWB_C* CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Loop_Counter_Variable, bool Temp_bool_Has_Been_Initd_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, const struct FLinearColor& K2Node_MakeStruct_LinearColor, float CallFunc_Add_FloatFloat_ReturnValue, class UAudioComponent* Temp_object_Variable, bool Temp_bool_Variable, class UAudioComponent* K2Node_Select_Default, bool K2Node_Event_IsDesignTime, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsHeadMountedDisplayEnabled_ReturnValue);
};

}



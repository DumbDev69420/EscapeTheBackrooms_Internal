#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x60 (0x110 - 0xB0)
// BlueprintGeneratedClass JumpFlood_Component2D.JumpFlood_Component2D_C
class UJumpFlood_Component2D_C : public UActorComponent
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xB0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UMaterialInstanceDynamic*              JumpStepMID;                                       // 0xB8(0x8)(Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              FindEdgesMID;                                      // 0xC0(0x8)(Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              BlurEdgesMID;                                      // 0xC8(0x8)(Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              FixBandMID;                                        // 0xD0(0x8)(Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Resolution;                                        // 0xD8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        RequiredPasses;                                    // 0xDC(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CompletedPasses;                                   // 0xE0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                             TextureSize;                                       // 0xE4(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9BF[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UTextureRenderTarget2D*                RTA;                                               // 0xF0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTextureRenderTarget2D*                RTB;                                               // 0xF8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         UseBlur;                                           // 0x100(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_9C1[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        BlurPasses;                                        // 0x104(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CompletedBlurPasses;                               // 0x108(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        PingPongOffset;                                    // 0x10C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UJumpFlood_Component2D_C* GetDefaultObj();

	void SingleBlurStep(class UTextureRenderTarget2D** Result_RT, int32 Temp_int_Variable, int32 Temp_int_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Variable_2, int32 CallFunc_Percent_IntInt_ReturnValue, class UTextureRenderTarget2D* K2Node_Select_Default, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_2, int32 CallFunc_Add_IntInt_ReturnValue_3, int32 CallFunc_Percent_IntInt_ReturnValue_1, int32 CallFunc_Percent_IntInt_ReturnValue_2, class UTextureRenderTarget2D* K2Node_Select_Default_1, class UTextureRenderTarget2D* K2Node_Select_Default_2, int32 Temp_int_Variable_3, bool CallFunc_IsValid_ReturnValue, float CallFunc_BreakVector2D_X, float CallFunc_BreakVector2D_Y, int32 CallFunc_Add_IntInt_ReturnValue_4, const struct FLinearColor& K2Node_MakeStruct_LinearColor, int32 Temp_int_Variable_4, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue);
	void FindEdges_Debug(class UTextureRenderTarget2D* SeedRT, float CaptureZ, const struct FLinearColor& Curl, class UTextureRenderTarget2D* DestRT, float ZOffset, float Temp_float_Variable, bool CallFunc_EqualEqual_FloatFloat_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue_1, const struct FLinearColor& K2Node_MakeStruct_LinearColor, float Temp_float_Variable_1, bool Temp_bool_Variable, float K2Node_Select_Default, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, bool CallFunc_IsValid_ReturnValue);
	void FindEdges(class UTextureRenderTarget2D* SeedRT, float CaptureZ, const struct FLinearColor& Curl, bool UseDepth, float Z_Location, class UTextureRenderTarget2D** Result_RT, float CallFunc_Conv_BoolToFloat_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue_1, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue, const struct FLinearColor& K2Node_MakeStruct_LinearColor, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Percent_IntInt_ReturnValue, int32 Temp_int_Variable, class UTextureRenderTarget2D* K2Node_Select_Default, bool CallFunc_IsValid_ReturnValue, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue);
	void SingleJumpStep(class UTextureRenderTarget2D** Result_RT, int32 Temp_int_Variable, int32 Temp_int_Variable_1, int32 Temp_int_Variable_2, int32 Temp_int_Variable_3, int32 CallFunc_Percent_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Percent_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_1, class UTextureRenderTarget2D* K2Node_Select_Default, int32 CallFunc_Add_IntInt_ReturnValue_2, int32 CallFunc_Add_IntInt_ReturnValue_3, int32 CallFunc_Add_IntInt_ReturnValue_4, int32 CallFunc_Percent_IntInt_ReturnValue_2, int32 CallFunc_Percent_IntInt_ReturnValue_3, class UTextureRenderTarget2D* K2Node_Select_Default_1, class UTextureRenderTarget2D* K2Node_Select_Default_2, int32 CallFunc_Add_IntInt_ReturnValue_5, float CallFunc_Conv_IntToFloat_ReturnValue);
	void JumpFlood(class UTextureRenderTarget2D* SeedRT, float SceneCaptureZ, const struct FLinearColor& Curl, bool UseDepth, float Z_Location);
	void Assign_RenderTargets(class UTextureRenderTarget2D* RTA, class UTextureRenderTarget2D* RTB);
	void ExecuteUbergraph_JumpFlood_Component2D(int32 EntryPoint, float CallFunc_BreakVector2D_X, float CallFunc_BreakVector2D_Y, const struct FLinearColor& K2Node_MakeStruct_LinearColor, class UTextureRenderTarget2D* K2Node_CustomEvent_SeedRT, float K2Node_CustomEvent_SceneCaptureZ, const struct FLinearColor& K2Node_CustomEvent_Curl, bool K2Node_CustomEvent_UseDepth, float K2Node_CustomEvent_Z_Location, class UTextureRenderTarget2D* CallFunc_FindEdges_Result_RT, bool CallFunc_IsValid_ReturnValue, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, class UTextureRenderTarget2D* K2Node_CustomEvent_RTA, class UTextureRenderTarget2D* K2Node_CustomEvent_RTB, float CallFunc_Conv_IntToFloat_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue_1, int32 CallFunc_Max_ReturnValue, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue_2, float CallFunc_Loge_ReturnValue, float CallFunc_Loge_ReturnValue_1, class UTextureRenderTarget2D* CallFunc_SingleJumpStep_Result_RT, float CallFunc_Divide_FloatFloat_ReturnValue, int32 CallFunc_FCeil_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 Temp_int_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class UTextureRenderTarget2D* CallFunc_SingleBlurStep_Result_RT, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 CallFunc_Min_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue);
};

}



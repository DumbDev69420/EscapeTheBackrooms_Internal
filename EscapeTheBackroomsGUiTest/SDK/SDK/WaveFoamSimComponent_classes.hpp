#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x68 (0x118 - 0xB0)
// BlueprintGeneratedClass WaveFoamSimComponent.WaveFoamSimComponent_C
class UWaveFoamSimComponent_C : public UActorComponent
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xB0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UTextureRenderTarget2D*                Foam_RT_A;                                         // 0xB8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTextureRenderTarget2D*                Foam_RT_B;                                         // 0xC0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTextureRenderTarget2D*                Wave_RT;                                           // 0xC8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              DrawWave_MID;                                      // 0xD0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              FoamDiffuse_MID;                                   // 0xD8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              FoamToneMapMID;                                    // 0xE0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Res;                                               // 0xE8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Fade;                                              // 0xEC(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Time_Bias;                                         // 0xF0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Freeze;                                            // 0xF4(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2613[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Simulation_World_Size;                             // 0xF8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Idx;                                               // 0xFC(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FGerstnerWave>                 WaveCopy;                                          // 0x100(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	class UShallowWaterSimComponent_C*           ShallowWater;                                      // 0x110(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UWaveFoamSimComponent_C* GetDefaultObj();

	void Render_Waves_to_RT(TArray<struct FGerstnerWave>& NewParam, const struct FLinearColor& K2Node_MakeStruct_LinearColor, int32 CallFunc_Array_LastIndex_ReturnValue, int32 Temp_int_Variable, const struct FGerstnerWave& CallFunc_Array_Get_Item, float CallFunc_Conv_IntToFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, const struct FLinearColor& CallFunc_Conv_VectorToLinearColor_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, const struct FLinearColor& K2Node_MakeStruct_LinearColor_1, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue, const struct FVector2D& CallFunc_Add_Vector2DVector2D_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 CallFunc_Min_ReturnValue, class UCanvas* CallFunc_BeginDrawCanvasToRenderTarget_Canvas, const struct FVector2D& CallFunc_BeginDrawCanvasToRenderTarget_Size, const struct FDrawToRenderTargetContext& CallFunc_BeginDrawCanvasToRenderTarget_Context, bool CallFunc_LessEqual_IntInt_ReturnValue);
	void InitializeWaveFoamSim(int32 Res, float WorldSize, float Fading, float TimeBias, class AWaterBody* WaterBody, class UShallowWaterSimComponent_C* ShallowWater);
	void Create_MIDs();
	void Allocate_RTs();
	void Wave_Simulation_Step();
	void Release_Foam_Sim_RTs();
	void ExecuteUbergraph_WaveFoamSimComponent(int32 EntryPoint, bool CallFunc_IsValid_ReturnValue, class UTextureRenderTarget2D* CallFunc_PingPong_Height_Read_RT, class UTextureRenderTarget2D* CallFunc_PingPong_Height_Write_RT, bool Temp_bool_Variable, bool Temp_bool_Variable_1, bool Temp_bool_Variable_2, bool Temp_bool_Variable_3, uint8 CallFunc_MakeLiteralByte_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, uint8 CallFunc_MakeLiteralByte_ReturnValue_1, int32 CallFunc_Percent_IntInt_ReturnValue, int32 Temp_int_Variable, bool CallFunc_EqualEqual_IntInt_ReturnValue, class UTextureRenderTarget2D* K2Node_Select_Default, int32 CallFunc_Percent_IntInt_ReturnValue_1, bool CallFunc_EqualEqual_IntInt_ReturnValue_1, uint8 CallFunc_MakeLiteralByte_ReturnValue_2, class UTextureRenderTarget2D* K2Node_Select_Default_1, int32 CallFunc_Percent_IntInt_ReturnValue_2, bool CallFunc_EqualEqual_IntInt_ReturnValue_2, class UTextureRenderTarget2D* K2Node_Select_Default_2, class UTextureRenderTarget2D* K2Node_Select_Default_3, int32 K2Node_CustomEvent_Res, float K2Node_CustomEvent_WorldSize, float K2Node_CustomEvent_Fading, float K2Node_CustomEvent_TimeBias, class AWaterBody* K2Node_CustomEvent_WaterBody, class UShallowWaterSimComponent_C* K2Node_CustomEvent_ShallowWater, class UGerstnerWaterWaves* K2Node_DynamicCast_AsGerstner_Water_Waves, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_3, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, bool CallFunc_IsValid_ReturnValue_4, bool CallFunc_EqualEqual_ObjectObject_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_5, bool CallFunc_EqualEqual_ObjectObject_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_6, bool CallFunc_IsValid_ReturnValue_7, class UTextureRenderTarget2D* CallFunc_CreateRenderTarget2D_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue_3, bool CallFunc_EqualEqual_IntInt_ReturnValue_4, bool CallFunc_BooleanAND_ReturnValue, class UTextureRenderTarget2D* CallFunc_CreateRenderTarget2D_ReturnValue_1, bool CallFunc_EqualEqual_IntInt_ReturnValue_5, bool CallFunc_EqualEqual_IntInt_ReturnValue_6, bool CallFunc_BooleanAND_ReturnValue_1, class UTextureRenderTarget2D* CallFunc_CreateRenderTarget2D_ReturnValue_2, uint8 CallFunc_MakeLiteralByte_ReturnValue_3, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue_7, bool CallFunc_IsValid_ReturnValue_8, bool CallFunc_EqualEqual_IntInt_ReturnValue_8, bool CallFunc_BooleanAND_ReturnValue_2, int32 CallFunc_Add_IntInt_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, uint8 CallFunc_MakeLiteralByte_ReturnValue_4, uint8 CallFunc_MakeLiteralByte_ReturnValue_5, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue_1, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue_2);
};

}



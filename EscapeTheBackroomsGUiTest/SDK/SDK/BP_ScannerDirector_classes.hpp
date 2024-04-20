#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x38 (0x2E0 - 0x2A8)
// BlueprintGeneratedClass BP_ScannerDirector.BP_ScannerDirector_C
class ABP_ScannerDirector_C : public AMotionScannerDirector
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2A8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                       DefaultSceneRoot;                                  // 0x2B0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	int32                                        TotalSpawned;                                      // 0x2B8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_233A[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UMaterialInstanceDynamic*              LIDARDotsMat;                                      // 0x2C0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        DotScaleFactorSK;                                  // 0x2C8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        SkelMeshCollisionUVROF;                            // 0x2CC(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CanRunSKCollisionUV;                               // 0x2D0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_233B[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector2D                             UVData;                                            // 0x2D4(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        DotScaleFactor;                                    // 0x2DC(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_ScannerDirector_C* GetDefaultObj();

	void InitializeMaterials(class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue);
	void FixUVStretching(const struct FVector& HitLocation, const struct FVector& HitNormal, class UPrimitiveComponent* HitComponent, int32 FaceIndex, const struct FVector2D& HitUVLocation, float* FixedSize, struct FVector* FixedStretch, const struct FRandomStream& CallFunc_MakeRandomStream_ReturnValue, const struct FVector& CallFunc_RandomUnitVectorFromStream_ReturnValue, const struct FVector& CallFunc_Cross_VectorVector_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, const struct FVector& CallFunc_Cross_VectorVector_ReturnValue_1, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue_1, const struct FHitResult& CallFunc_MakeHitResult_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue_1, const struct FVector2D& CallFunc_FindCollisionUV_UV, bool CallFunc_FindCollisionUV_ReturnValue, const struct FHitResult& CallFunc_MakeHitResult_ReturnValue_1, const struct FVector2D& CallFunc_Subtract_Vector2DVector2D_ReturnValue, const struct FVector2D& CallFunc_FindCollisionUV_UV_1, bool CallFunc_FindCollisionUV_ReturnValue_1, float CallFunc_DotProduct2D_ReturnValue, const struct FVector2D& CallFunc_Subtract_Vector2DVector2D_ReturnValue_1, const struct FVector2D& CallFunc_Add_Vector2DVector2D_ReturnValue, float CallFunc_DotProduct2D_ReturnValue_1, float CallFunc_VSize2D_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue);
	void CheckForExistingRT(class AActor* HitActor, class UPrimitiveComponent* HitComponent, class UTextureRenderTarget2D** RenderTarget, class UMaterialInterface* CallFunc_GetMaterial_ReturnValue, const struct FVector& CallFunc_GetActorBounds_Origin, const struct FVector& CallFunc_GetActorBounds_BoxExtent, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue_1, float CallFunc_Multiply_FloatFloat_ReturnValue_2, const class FString& CallFunc_GetObjectName_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue_1, const struct FLIDARDotStruct& CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue_3, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_MapRangeClamped_ReturnValue, int32 CallFunc_FTrunc_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue, float CallFunc_MultiplyMultiply_FloatFloat_ReturnValue, int32 CallFunc_FTrunc_ReturnValue_1, class UTextureRenderTarget2D* CallFunc_CreateRenderTarget2D_ReturnValue, const struct FLIDARDotStruct& CallFunc_CreateLiDarDot_ReturnValue);
	void ReceiveBeginPlay();
	void ClearRenderTargets();
	void MC_LidarDot(const struct FHitResult& HitResult, const struct FColor& Color);
	void ExecuteUbergraph_BP_ScannerDirector(int32 EntryPoint, const struct FHitResult& K2Node_CustomEvent_HitResult, const struct FColor& K2Node_CustomEvent_Color, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FLinearColor& CallFunc_Conv_ColorToLinearColor_ReturnValue, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, const struct FVector& CallFunc_BreakHitResult_Location, const struct FVector& CallFunc_BreakHitResult_ImpactPoint, const struct FVector& CallFunc_BreakHitResult_Normal, const struct FVector& CallFunc_BreakHitResult_ImpactNormal, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, class AActor* CallFunc_BreakHitResult_HitActor, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, class FName CallFunc_BreakHitResult_HitBoneName, int32 CallFunc_BreakHitResult_HitItem, int32 CallFunc_BreakHitResult_ElementIndex, int32 CallFunc_BreakHitResult_FaceIndex, const struct FVector& CallFunc_BreakHitResult_TraceStart, const struct FVector& CallFunc_BreakHitResult_TraceEnd, const struct FVector2D& CallFunc_FindCollisionUV_UV, bool CallFunc_FindCollisionUV_ReturnValue, class UTextureRenderTarget2D* CallFunc_CheckForExistingRT_RenderTarget, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, int32 CallFunc_Map_Length_ReturnValue, const class FString& CallFunc_Conv_IntToString_ReturnValue, float CallFunc_FixUVStretching_FixedSize, const struct FVector& CallFunc_FixUVStretching_FixedStretch, const struct FVector& CallFunc_Conv_Vector2DToVector_ReturnValue, const struct FLinearColor& CallFunc_Conv_VectorToLinearColor_ReturnValue, const struct FLinearColor& CallFunc_Conv_VectorToLinearColor_ReturnValue_1, float CallFunc_Multiply_FloatFloat_ReturnValue, class APawn* CallFunc_GetPlayerPawn_ReturnValue, int32 CallFunc_Array_Add_ReturnValue);
};

}



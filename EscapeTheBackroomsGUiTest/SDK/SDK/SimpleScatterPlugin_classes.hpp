#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x168 (0x388 - 0x220)
// Class SimpleScatterPlugin.SimpleScatter
class ASimpleScatter : public AActor
{
public:
	uint8                                        Pad_D0C[0x70];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         bEnabled;                                          // 0x290(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_D0D[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        RandomSeed;                                        // 0x294(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<struct FInstancedMesh>                InstancedMeshes;                                   // 0x298(0x10)(Edit, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	TArray<struct FScatterSurface>               ScatterSurfaces;                                   // 0x2A8(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPrivate)
	enum class EDistributionMode                 DistributionMode;                                  // 0x2B8(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_D0E[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        InstanceSpacing;                                   // 0x2BC(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FVector2D                             GridScale;                                         // 0x2C0(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FSlopeDistributionLimit               SlopeDistributionLimit;                            // 0x2C8(0x10)(Edit, NoDestructor, NativeAccessSpecifierPrivate)
	struct FHeightDistributionLimit              HeightDistributionLimit;                           // 0x2D8(0x10)(Edit, NoDestructor, NativeAccessSpecifierPrivate)
	TArray<class ASimpleScatterSplineActor*>     SplineActors;                                      // 0x2E8(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPrivate)
	TArray<class AActor*>                        ExcludeMeshes;                                     // 0x2F8(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPrivate)
	struct FVector                               MoveMin;                                           // 0x308(0xC)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FVector                               MoveMax;                                           // 0x314(0xC)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        MoveZ_BySurface;                                   // 0x320(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FRotator                              RotateMin;                                         // 0x324(0xC)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPrivate)
	struct FRotator                              RotateMax;                                         // 0x330(0xC)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPrivate)
	float                                        AlignToSurface;                                    // 0x33C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	enum class ESurfaceAlignMode                 AlignMode;                                         // 0x340(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_D10[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               ScaleMin;                                          // 0x344(0xC)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FVector                               ScaleMax;                                          // 0x350(0xC)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	enum class EScaleMode                        ScaleMode;                                         // 0x35C(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_D11[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        MaterialScaleEffect;                               // 0x360(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FSlopeScaleFalloff                    SlopeScaleFalloff;                                 // 0x364(0x10)(Edit, NoDestructor, NativeAccessSpecifierPrivate)
	int32                                        MinCullDistance;                                   // 0x374(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int32                                        MaxCullDistance;                                   // 0x378(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int32                                        MaxInstancesLimit;                                 // 0x37C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int32                                        DistributionMaterialResolution;                    // 0x380(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bShowDebugMessages;                                // 0x384(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_D15[0x3];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class ASimpleScatter* GetDefaultObj();

	void ManualRefresh();
};

// 0x48 (0x590 - 0x548)
// Class SimpleScatterPlugin.SimpleScatterSpline
class USimpleScatterSpline : public USplineComponent
{
public:
	bool                                         bExcludeSpline;                                    // 0x548(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bClosedSpline;                                     // 0x549(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_D18[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        DensityDistanceEffect;                             // 0x54C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DensityDistanceMin;                                // 0x550(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DensityDistanceMax;                                // 0x554(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DensityDistanceCurve;                              // 0x558(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ScaleDistanceEffect;                               // 0x55C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ScaleDistanceMin;                                  // 0x560(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ScaleDistanceMax;                                  // 0x564(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ScaleDistanceCurve;                                // 0x568(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_D1A[0x24];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class USimpleScatterSpline* GetDefaultObj();

};

// 0x8 (0x228 - 0x220)
// Class SimpleScatterPlugin.SimpleScatterSplineActor
class ASimpleScatterSplineActor : public AActor
{
public:
	class USimpleScatterSpline*                  SplineComponent;                                   // 0x220(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class ASimpleScatterSplineActor* GetDefaultObj();

};

}



#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x128 (0x1D8 - 0xB0)
// Class Water.BuoyancyComponent
class UBuoyancyComponent : public UActorComponent
{
public:
	TArray<struct FSphericalPontoon>             Pontoons;                                          // 0xB0(0x10)(ZeroConstructor, Deprecated, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnEnteredWaterDelegate;                            // 0xC0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnExitedWaterDelegate;                             // 0xD0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FBuoyancyData                         BuoyancyData;                                      // 0xE0(0x50)(Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	TArray<class AWaterBody*>                    CurrentWaterBodies;                                // 0x130(0x10)(ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected)
	class UPrimitiveComponent*                   SimulatingComponent;                               // 0x140(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_15A[0x90];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UBuoyancyComponent* GetDefaultObj();

	void OnPontoonExitedWater(struct FSphericalPontoon& Pontoon);
	void OnPontoonEnteredWater(struct FSphericalPontoon& Pontoon);
	bool IsInWaterBody();
	void GetLastWaterSurfaceInfo(struct FVector* OutWaterPlaneLocation, struct FVector* OutWaterPlaneNormal, struct FVector* OutWaterSurfacePosition, float* OutWaterDepth, int32* OutWaterBodyIdx, struct FVector* OutWaterVelocity);
};

// 0xB8 (0x2D8 - 0x220)
// Class Water.BuoyancyManager
class ABuoyancyManager : public AActor
{
public:
	uint8                                        Pad_161[0x50];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UBuoyancyComponent*>            BuoyancyComponents;                                // 0x270(0x10)(ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	uint8                                        Pad_162[0x58];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class ABuoyancyManager* GetDefaultObj();

	bool GetBuoyancyComponentManager(class UObject* WorldContextObject, class ABuoyancyManager** Manager);
};

// 0x0 (0x80 - 0x80)
// Class Water.ConvertWaterBodyActorsCommandlet
class UConvertWaterBodyActorsCommandlet : public UCommandlet
{
public:

	static class UClass* StaticClass();
	static class UConvertWaterBodyActorsCommandlet* GetDefaultObj();

};

// 0x8 (0x200 - 0x1F8)
// Class Water.EnvQueryTest_InsideWaterBody
class UEnvQueryTest_InsideWaterBody : public UEnvQueryTest
{
public:
	bool                                         bIncludeWaves;                                     // 0x1F8(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bSimpleWaves;                                      // 0x1F9(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIgnoreExclusionVolumes;                           // 0x1FA(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_166[0x5];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UEnvQueryTest_InsideWaterBody* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class Water.GerstnerWaterWaveGeneratorBase
class UGerstnerWaterWaveGeneratorBase : public UObject
{
public:

	static class UClass* StaticClass();
	static class UGerstnerWaterWaveGeneratorBase* GetDefaultObj();

	void GenerateGerstnerWaves(TArray<struct FGerstnerWave>* OutWaves);
};

// 0x38 (0x60 - 0x28)
// Class Water.GerstnerWaterWaveGeneratorSimple
class UGerstnerWaterWaveGeneratorSimple : public UGerstnerWaterWaveGeneratorBase
{
public:
	int32                                        NumWaves;                                          // 0x28(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Seed;                                              // 0x2C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Randomness;                                        // 0x30(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MinWavelength;                                     // 0x34(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaxWavelength;                                     // 0x38(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        WavelengthFalloff;                                 // 0x3C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MinAmplitude;                                      // 0x40(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaxAmplitude;                                      // 0x44(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        AmplitudeFalloff;                                  // 0x48(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        WindAngleDeg;                                      // 0x4C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DirectionAngularSpreadDeg;                         // 0x50(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SmallWaveSteepness;                                // 0x54(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        LargeWaveSteepness;                                // 0x58(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SteepnessFalloff;                                  // 0x5C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UGerstnerWaterWaveGeneratorSimple* GetDefaultObj();

};

// 0x18 (0x40 - 0x28)
// Class Water.GerstnerWaterWaveGeneratorSpectrum
class UGerstnerWaterWaveGeneratorSpectrum : public UGerstnerWaterWaveGeneratorBase
{
public:
	enum class EWaveSpectrumType                 SpectrumType;                                      // 0x28(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_16A[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FGerstnerWaveOctave>           Octaves;                                           // 0x30(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UGerstnerWaterWaveGeneratorSpectrum* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class Water.WaterWavesBase
class UWaterWavesBase : public UObject
{
public:

	static class UClass* StaticClass();
	static class UWaterWavesBase* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class Water.WaterWaves
class UWaterWaves : public UWaterWavesBase
{
public:

	static class UClass* StaticClass();
	static class UWaterWaves* GetDefaultObj();

};

// 0x20 (0x48 - 0x28)
// Class Water.GerstnerWaterWaves
class UGerstnerWaterWaves : public UWaterWaves
{
public:
	class UGerstnerWaterWaveGeneratorBase*       GerstnerWaveGenerator;                             // 0x28(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FGerstnerWave>                 GerstnerWaves;                                     // 0x30(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	float                                        MaxWaveHeight;                                     // 0x40(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_16C[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UGerstnerWaterWaves* GetDefaultObj();

};

// 0x18 (0x48 - 0x30)
// Class Water.GerstnerWaterWaveSubsystem
class UGerstnerWaterWaveSubsystem : public UEngineSubsystem
{
public:
	uint8                                        Pad_175[0x18];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UGerstnerWaterWaveSubsystem* GetDefaultObj();

};

// 0x20 (0x470 - 0x450)
// Class Water.LakeCollisionComponent
class ULakeCollisionComponent : public UPrimitiveComponent
{
public:
	class UBodySetup*                            CachedBodySetup;                                   // 0x450(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, NonPIEDuplicateTransient, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FVector                               BoxExtent;                                         // 0x458(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_176[0xC];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class ULakeCollisionComponent* GetDefaultObj();

};

// 0x8 (0x40 - 0x38)
// Class Water.NiagaraDataInterfaceWater
class UNiagaraDataInterfaceWater : public UNiagaraDataInterface
{
public:
	class AWaterBody*                            SourceBody;                                        // 0x38(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UNiagaraDataInterfaceWater* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class Water.NiagaraWaterFunctionLibrary
class UNiagaraWaterFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UNiagaraWaterFunctionLibrary* GetDefaultObj();

	void SetWaterBody(class UNiagaraComponent* NiagaraSystem, const class FString& OverrideName, class AWaterBody* WaterBody);
};

// 0x30 (0x480 - 0x450)
// Class Water.OceanCollisionComponent
class UOceanCollisionComponent : public UPrimitiveComponent
{
public:
	class UBodySetup*                            CachedBodySetup;                                   // 0x450(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, NonPIEDuplicateTransient, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_18B[0x28];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UOceanCollisionComponent* GetDefaultObj();

};

// 0x0 (0x480 - 0x480)
// Class Water.OceanBoxCollisionComponent
class UOceanBoxCollisionComponent : public UBoxComponent
{
public:

	static class UClass* StaticClass();
	static class UOceanBoxCollisionComponent* GetDefaultObj();

};

// 0xBC8 (0xDE8 - 0x220)
// Class Water.WaterBody
class AWaterBody : public AActor
{
public:
	uint8                                        Pad_19C[0x10];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UPhysicalMaterial*                     PhysicalMaterial;                                  // 0x230(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        TargetWaveMaskDepth;                               // 0x238(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaxWaveHeightOffset;                               // 0x23C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        WaterBodyIndex;                                    // 0x240(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, EditConst, DuplicateTransient, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bFillCollisionUnderWaterBodiesForNavmesh;          // 0x244(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_19E[0xB];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FUnderwaterPostProcessSettings        UnderwaterPostProcessSettings;                     // 0x250(0x580)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	enum class EWaterBodyType                    WaterBodyType;                                     // 0x7D0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1A0[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FWaterCurveSettings                   CurveSettings;                                     // 0x7D8(0x20)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	class UMaterialInterface*                    WaterMaterial;                                     // 0x7F8(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMaterialInterface*                    UnderwaterPostProcessMaterial;                     // 0x800(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAffectsLandscape;                                 // 0x808(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bGenerateCollisions;                               // 0x809(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bOverrideWaterMesh;                                // 0x80A(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1A2[0x5];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UStaticMesh*                           WaterMeshOverride;                                 // 0x810(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        OverlapMaterialPriority;                           // 0x818(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class FName                                  CollisionProfileName;                              // 0x81C(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1A4[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UWaterSplineComponent*                 SplineComp;                                        // 0x828(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UWaterSplineMetadata*                  WaterSplineMetadata;                               // 0x830(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UMaterialInstanceDynamic*              WaterMID;                                          // 0x838(0x8)(Edit, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, IsPlainOldData, NoDestructor, Protected, TextExportTransient, NonPIEDuplicateTransient, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UMaterialInstanceDynamic*              UnderwaterPostProcessMID;                          // 0x840(0x8)(Edit, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, IsPlainOldData, NoDestructor, Protected, TextExportTransient, NonPIEDuplicateTransient, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<TLazyObjectPtr<class AWaterBodyIsland>> Islands;                                           // 0x848(0x10)(Edit, ZeroConstructor, DisableEditOnTemplate, AdvancedDisplay, Protected, UObjectWrapper, NativeAccessSpecifierProtected)
	TArray<TLazyObjectPtr<class AWaterBodyExclusionVolume>> ExclusionVolumes;                                  // 0x858(0x10)(Edit, ZeroConstructor, DisableEditOnTemplate, AdvancedDisplay, Protected, UObjectWrapper, NativeAccessSpecifierProtected)
	TWeakObjectPtr<class ALandscapeProxy>        Landscape;                                         // 0x868(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FPostProcessSettings                  CurrentPostProcessSettings;                        // 0x870(0x560)(Transient, Protected, NativeAccessSpecifierProtected)
	bool                                         bCanAffectNavigation;                              // 0xDD0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1A5[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TSubclassOf<class UNavAreaBase>              WaterNavAreaClass;                                 // 0xDD8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UWaterWavesBase*                       WaterWaves;                                        // 0xDE0(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class AWaterBody* GetDefaultObj();

	void SetWaterWaves(class UWaterWavesBase* InWaterWaves);
	void OnWaterBodyChanged(bool bShapeOrPositionChanged, bool bWeightmapSettingsChanged);
	class UWaterSplineComponent* GetWaterSpline();
	class UMaterialInstanceDynamic* GetWaterMaterialInstance();
	class UMaterialInterface* GetWaterMaterial();
	class UMaterialInstanceDynamic* GetUnderwaterPostProcessMaterialInstance();
	class UMaterialInstanceDynamic* GetRiverToOceanTransitionMaterialInstance();
	class UMaterialInstanceDynamic* GetRiverToLakeTransitionMaterialInstance();
	float GetMaxWaveHeight();
	TArray<class AWaterBodyIsland*> GetIslands();
	TArray<class AWaterBodyExclusionVolume*> GetExclusionVolumes();
};

// 0x0 (0x28 - 0x28)
// Class Water.WaterBodyGenerator
class UWaterBodyGenerator : public UObject
{
public:

	static class UClass* StaticClass();
	static class UWaterBodyGenerator* GetDefaultObj();

};

// 0x8 (0x30 - 0x28)
// Class Water.CustomMeshGenerator
class UCustomMeshGenerator : public UWaterBodyGenerator
{
public:
	class UStaticMeshComponent*                  MeshComp;                                          // 0x28(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, NonPIEDuplicateTransient, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UCustomMeshGenerator* GetDefaultObj();

};

// 0x8 (0xDF0 - 0xDE8)
// Class Water.WaterBodyCustom
class AWaterBodyCustom : public AWaterBody
{
public:
	class UCustomMeshGenerator*                  CustomGenerator;                                   // 0xDE8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, NonPIEDuplicateTransient, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class AWaterBodyCustom* GetDefaultObj();

};

// 0x18 (0x280 - 0x268)
// Class Water.WaterBodyExclusionVolume
class AWaterBodyExclusionVolume : public APhysicsVolume
{
public:
	bool                                         bIgnoreAllOverlappingWaterBodies;                  // 0x268(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1A8[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class AWaterBody*>                    WaterBodiesToIgnore;                               // 0x270(0x10)(Edit, ZeroConstructor, DisableEditOnTemplate, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class AWaterBodyExclusionVolume* GetDefaultObj();

};

// 0x10 (0x230 - 0x220)
// Class Water.WaterBodyIsland
class AWaterBodyIsland : public AActor
{
public:
	uint8                                        Pad_1AB[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UWaterSplineComponent*                 SplineComp;                                        // 0x228(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class AWaterBodyIsland* GetDefaultObj();

	class UWaterSplineComponent* GetWaterSpline();
};

// 0x18 (0x40 - 0x28)
// Class Water.LakeGenerator
class ULakeGenerator : public UWaterBodyGenerator
{
public:
	class UStaticMeshComponent*                  LakeMeshComp;                                      // 0x28(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, NonPIEDuplicateTransient, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UBoxComponent*                         LakeCollisionComp;                                 // 0x30(0x8)(ExportObject, ZeroConstructor, InstancedReference, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class ULakeCollisionComponent*               LakeCollision;                                     // 0x38(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, NonPIEDuplicateTransient, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class ULakeGenerator* GetDefaultObj();

};

// 0x8 (0xDF0 - 0xDE8)
// Class Water.WaterBodyLake
class AWaterBodyLake : public AWaterBody
{
public:
	class ULakeGenerator*                        LakeGenerator;                                     // 0xDE8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, NonPIEDuplicateTransient, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class AWaterBodyLake* GetDefaultObj();

};

// 0x20 (0x48 - 0x28)
// Class Water.OceanGenerator
class UOceanGenerator : public UWaterBodyGenerator
{
public:
	TArray<class UOceanBoxCollisionComponent*>   CollisionBoxes;                                    // 0x28(0x10)(ExportObject, ZeroConstructor, ContainsInstancedReference, NonPIEDuplicateTransient, NativeAccessSpecifierPrivate)
	TArray<class UOceanCollisionComponent*>      CollisionHullSets;                                 // 0x38(0x10)(ExportObject, ZeroConstructor, ContainsInstancedReference, NonPIEDuplicateTransient, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UOceanGenerator* GetDefaultObj();

};

// 0x18 (0xE00 - 0xDE8)
// Class Water.WaterBodyOcean
class AWaterBodyOcean : public AWaterBody
{
public:
	class UOceanGenerator*                       OceanGenerator;                                    // 0xDE8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, NonPIEDuplicateTransient, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FVector                               CollisionExtents;                                  // 0xDF0(0xC)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        HeightOffset;                                      // 0xDFC(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class AWaterBodyOcean* GetDefaultObj();

};

// 0x10 (0x38 - 0x28)
// Class Water.RiverGenerator
class URiverGenerator : public UWaterBodyGenerator
{
public:
	TArray<class USplineMeshComponent*>          SplineMeshComponents;                              // 0x28(0x10)(ExportObject, ZeroConstructor, ContainsInstancedReference, NonPIEDuplicateTransient, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class URiverGenerator* GetDefaultObj();

};

// 0x28 (0xE10 - 0xDE8)
// Class Water.WaterBodyRiver
class AWaterBodyRiver : public AWaterBody
{
public:
	class URiverGenerator*                       RiverGenerator;                                    // 0xDE8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, NonPIEDuplicateTransient, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UMaterialInterface*                    LakeTransitionMaterial;                            // 0xDF0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UMaterialInstanceDynamic*              LakeTransitionMID;                                 // 0xDF8(0x8)(Edit, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, IsPlainOldData, NoDestructor, Protected, TextExportTransient, NonPIEDuplicateTransient, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UMaterialInterface*                    OceanTransitionMaterial;                           // 0xE00(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UMaterialInstanceDynamic*              OceanTransitionMID;                                // 0xE08(0x8)(Edit, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, IsPlainOldData, NoDestructor, Protected, TextExportTransient, NonPIEDuplicateTransient, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class AWaterBodyRiver* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class Water.WaterBrushActorInterface
class IWaterBrushActorInterface : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IWaterBrushActorInterface* GetDefaultObj();

};

// 0x10 (0x230 - 0x220)
// Class Water.WaterMeshActor
class AWaterMeshActor : public AActor
{
public:
	class UTexture2D*                            WaterVelocityTexture;                              // 0x220(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UWaterMeshComponent*                   WaterMesh;                                         // 0x228(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class AWaterMeshActor* GetDefaultObj();

};

// 0x128 (0x5A0 - 0x478)
// Class Water.WaterMeshComponent
class UWaterMeshComponent : public UMeshComponent
{
public:
	int32                                        ForceCollapseDensityLevel;                         // 0x478(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        TileSize;                                          // 0x47C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FIntPoint                             ExtentInTiles;                                     // 0x480(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMaterialInterface*                    FarDistanceMaterial;                               // 0x488(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        FarDistanceMeshExtent;                             // 0x490(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               RTWorldLocation;                                   // 0x494(0xC)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               RTWorldSizeVector;                                 // 0x4A0(0xC)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1B1[0x64];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSet<class UMaterialInterface*>              UsedMaterials;                                     // 0x510(0x50)(Transient, TextExportTransient, NonPIEDuplicateTransient, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1B4[0x30];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        TessellationFactor;                                // 0x590(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        LODScale;                                          // 0x594(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1B5[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UWaterMeshComponent* GetDefaultObj();

	bool IsEnabled();
};

// 0x40 (0x78 - 0x38)
// Class Water.WaterRuntimeSettings
class UWaterRuntimeSettings : public UDeveloperSettings
{
public:
	enum class ECollisionChannel                 CollisionChannelForWaterTraces;                    // 0x38(0x1)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1B8[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TSoftObjectPtr<class UMaterialParameterCollection> MaterialParameterCollection;                       // 0x40(0x28)(Edit, Config, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        WaterBodyIconWorldSize;                            // 0x68(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        WaterBodyIconWorldZOffset;                         // 0x6C(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  DefaultWaterCollisionProfileName;                  // 0x70(0x8)(Edit, ZeroConstructor, Config, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UWaterRuntimeSettings* GetDefaultObj();

};

// 0x28 (0x570 - 0x548)
// Class Water.WaterSplineComponent
class UWaterSplineComponent : public USplineComponent
{
public:
	struct FWaterSplineCurveDefaults             WaterSplineDefaults;                               // 0x548(0x10)(Edit, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic)
	struct FWaterSplineCurveDefaults             PreviousWaterSplineDefaults;                       // 0x558(0x10)(NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_1BA[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UWaterSplineComponent* GetDefaultObj();

};

// 0x78 (0xA0 - 0x28)
// Class Water.WaterSplineMetadata
class UWaterSplineMetadata : public USplineMetadata
{
public:
	struct FInterpCurveFloat                     Depth;                                             // 0x28(0x18)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FInterpCurveFloat                     WaterVelocityScalar;                               // 0x40(0x18)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FInterpCurveFloat                     RiverWidth;                                        // 0x58(0x18)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FInterpCurveFloat                     AudioIntensity;                                    // 0x70(0x18)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FInterpCurveVector                    WaterVelocity;                                     // 0x88(0x18)(ZeroConstructor, Deprecated, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UWaterSplineMetadata* GetDefaultObj();

};

// 0xC8 (0x108 - 0x40)
// Class Water.WaterSubsystem
class UWaterSubsystem : public UTickableWorldSubsystem
{
public:
	uint8                                        Pad_1C7[0x38];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ABuoyancyManager*                      BuoyancyManager;                                   // 0x78(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnCameraUnderwaterStateChanged;                    // 0x80(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnWaterScalabilityChanged;                         // 0x90(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	class UStaticMesh*                           DefaultRiverMesh;                                  // 0xA0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UStaticMesh*                           DefaultLakeMesh;                                   // 0xA8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AWaterMeshActor*                       WaterMeshActor;                                    // 0xB0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1CA[0x28];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UMaterialParameterCollection*          MaterialParameterCollection;                       // 0xE0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1CB[0x20];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UWaterSubsystem* GetDefaultObj();

	void SetOceanFloodHeight(float InFloodHeight);
	void PrintToWaterLog(const class FString& Message, bool bWarning);
	bool IsWaterRenderingEnabled();
	bool IsUnderwaterPostProcessEnabled();
	bool IsShallowWaterSimulationEnabled();
	float GetWaterTimeSeconds();
	float GetSmoothedWorldTimeSeconds();
	int32 GetShallowWaterSimulationRenderTargetSize();
	int32 GetShallowWaterMaxImpulseForces();
	int32 GetShallowWaterMaxDynamicForces();
	float GetOceanTotalHeight();
	float GetOceanFloodHeight();
	float GetOceanBaseHeight();
	float GetCameraUnderwaterDepth();
};

// 0x8 (0x30 - 0x28)
// Class Water.WaterWavesAsset
class UWaterWavesAsset : public UObject
{
public:
	class UWaterWaves*                           WaterWaves;                                        // 0x28(0x8)(Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UWaterWavesAsset* GetDefaultObj();

};

// 0x8 (0x30 - 0x28)
// Class Water.WaterWavesAssetReference
class UWaterWavesAssetReference : public UWaterWavesBase
{
public:
	class UWaterWavesAsset*                      WaterWavesAsset;                                   // 0x28(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UWaterWavesAssetReference* GetDefaultObj();

};

}



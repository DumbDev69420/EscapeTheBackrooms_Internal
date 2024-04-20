#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x260 (0x398 - 0x138)
// Class ChaosVehicles.ChaosVehicleMovementComponent
class UChaosVehicleMovementComponent : public UPawnMovementComponent
{
public:
	uint8                                        bReverseAsBrake : 1;                               // Mask: 0x1, PropSize: 0x10x138(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_BA : 7;                                     // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_B51[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Mass;                                              // 0x13C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ChassisWidth;                                      // 0x140(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ChassisHeight;                                     // 0x144(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DragCoefficient;                                   // 0x148(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DownforceCoefficient;                              // 0x14C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DragArea;                                          // 0x150(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DebugDragMagnitude;                                // 0x154(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               InertiaTensorScale;                                // 0x158(0xC)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SleepThreshold;                                    // 0x164(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SleepSlopeLimit;                                   // 0x168(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_B52[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FVehicleAerofoilConfig>        Aerofoils;                                         // 0x170(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FVehicleThrustConfig>          Thrusters;                                         // 0x180(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FVehicleTorqueControlConfig           TorqueControl;                                     // 0x190(0x20)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FVehicleTargetRotationControlConfig   TargetRotationControl;                             // 0x1B0(0x2C)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FVehicleStabilizeControlConfig        StabilizeControl;                                  // 0x1DC(0xC)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_B54[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	uint8                                        bRawHandbrakeInput : 1;                            // Mask: 0x1, PropSize: 0x10x1EC(0x1)(Transient, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        bRawGearUpInput : 1;                               // Mask: 0x2, PropSize: 0x10x1EC(0x1)(Transient, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        bRawGearDownInput : 1;                             // Mask: 0x4, PropSize: 0x10x1EC(0x1)(Transient, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        BitPad_BB : 5;                                     // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_B55[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	uint8                                        bWasAvoidanceUpdated : 1;                          // Mask: 0x1, PropSize: 0x10x1F0(0x1)(Transient, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        BitPad_BC : 7;                                     // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_B57[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVehicleReplicatedState               ReplicatedState;                                   // 0x1F4(0x28)(Net, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_B58[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        RawSteeringInput;                                  // 0x220(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        RawThrottleInput;                                  // 0x224(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        RawBrakeInput;                                     // 0x228(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        RawPitchInput;                                     // 0x22C(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        RawRollInput;                                      // 0x230(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        RawYawInput;                                       // 0x234(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        SteeringInput;                                     // 0x238(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        ThrottleInput;                                     // 0x23C(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        BrakeInput;                                        // 0x240(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        PitchInput;                                        // 0x244(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        RollInput;                                         // 0x248(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        YawInput;                                          // 0x24C(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        HandbrakeInput;                                    // 0x250(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        IdleBrakeInput;                                    // 0x254(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        StopThreshold;                                     // 0x258(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        WrongDirectionThreshold;                           // 0x25C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FVehicleInputRateConfig               ThrottleInputRate;                                 // 0x260(0x8)(Edit, NoDestructor, AdvancedDisplay, Protected, NativeAccessSpecifierProtected)
	struct FVehicleInputRateConfig               BrakeInputRate;                                    // 0x268(0x8)(Edit, NoDestructor, AdvancedDisplay, Protected, NativeAccessSpecifierProtected)
	struct FVehicleInputRateConfig               SteeringInputRate;                                 // 0x270(0x8)(Edit, NoDestructor, AdvancedDisplay, Protected, NativeAccessSpecifierProtected)
	struct FVehicleInputRateConfig               HandbrakeInputRate;                                // 0x278(0x8)(Edit, NoDestructor, AdvancedDisplay, Protected, NativeAccessSpecifierProtected)
	struct FVehicleInputRateConfig               PitchInputRate;                                    // 0x280(0x8)(Edit, NoDestructor, AdvancedDisplay, Protected, NativeAccessSpecifierProtected)
	struct FVehicleInputRateConfig               RollInputRate;                                     // 0x288(0x8)(Edit, NoDestructor, AdvancedDisplay, Protected, NativeAccessSpecifierProtected)
	struct FVehicleInputRateConfig               YawInputRate;                                      // 0x290(0x8)(Edit, NoDestructor, AdvancedDisplay, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_B61[0xE8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AController*                           OverrideController;                                // 0x380(0x8)(Net, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_B62[0x10];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UChaosVehicleMovementComponent* GetDefaultObj();

	void SetYawInput(float Yaw);
	void SetUseAutomaticGears(bool bUseAuto);
	void SetThrottleInput(float Throttle);
	void SetTargetGear(int32 GearNum, bool bImmediate);
	void SetSteeringInput(float Steering);
	void SetRollInput(float Roll);
	void SetPitchInput(float Pitch);
	void SetHandbrakeInput(bool bNewHandbrake);
	void SetChangeUpInput(bool bNewGearUp);
	void SetChangeDownInput(bool bNewGearDown);
	void SetBrakeInput(float Brake);
	void ServerUpdateState(float InSteeringInput, float InThrottleInput, float InBrakeInput, float InHandbrakeInput, int32 InCurrentGear, float InRollInput, float InPitchInput, float InYawInput);
	void IncreaseThrottleInput(float ThrottleDelta);
	bool GetUseAutoGears();
	int32 GetTargetGear();
	float GetForwardSpeedMPH();
	float GetForwardSpeed();
	int32 GetCurrentGear();
	void EnableSelfRighting(bool InState);
	void DecreaseThrottleInput(float ThrottleDelta);
};

// 0x1F0 (0x218 - 0x28)
// Class ChaosVehicles.ChaosVehicleWheel
class UChaosVehicleWheel : public UObject
{
public:
	class UStaticMesh*                           CollisionMesh;                                     // 0x28(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EAxleType                         AxleType;                                          // 0x30(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_B6D[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               Offset;                                            // 0x34(0xC)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        WheelRadius;                                       // 0x40(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        WheelWidth;                                        // 0x44(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        LongitudinalFrictionForceMultiplier;               // 0x48(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        LateralFrictionForceMultiplier;                    // 0x4C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SideSlipModifier;                                  // 0x50(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SlipThreshold;                                     // 0x54(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SkidThreshold;                                     // 0x58(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaxSteerAngle;                                     // 0x5C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAffectedBySteering;                               // 0x60(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAffectedByBrake;                                  // 0x61(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAffectedByHandbrake;                              // 0x62(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAffectedByEngine;                                 // 0x63(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bABSEnabled;                                       // 0x64(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bTractionControlEnabled;                           // 0x65(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_B70[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               SuspensionAxis;                                    // 0x68(0xC)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               SuspensionForceOffset;                             // 0x74(0xC)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SuspensionMaxRaise;                                // 0x80(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SuspensionMaxDrop;                                 // 0x84(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SuspensionDampingRatio;                            // 0x88(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        WheelLoadRatio;                                    // 0x8C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SpringRate;                                        // 0x90(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SpringPreload;                                     // 0x94(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        SuspensionSmoothing;                               // 0x98(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        RollbarScaling;                                    // 0x9C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ESweepShape                       SweepShape;                                        // 0xA0(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ESweepType                        SweepType;                                         // 0xA1(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_B73[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        MaxBrakeTorque;                                    // 0xA4(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaxHandBrakeTorque;                                // 0xA8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_B74[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UChaosWheeledVehicleMovementComponent* VehicleSim;                                        // 0xB0(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        WheelIndex;                                        // 0xB8(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DebugLongSlip;                                     // 0xBC(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DebugLatSlip;                                      // 0xC0(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DebugNormalizedTireLoad;                           // 0xC4(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_B75[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        DebugWheelTorque;                                  // 0xCC(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DebugLongForce;                                    // 0xD0(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DebugLatForce;                                     // 0xD4(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               Location;                                          // 0xD8(0xC)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               OldLocation;                                       // 0xE4(0xC)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               Velocity;                                          // 0xF0(0xC)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_B76[0x11C];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UChaosVehicleWheel* GetDefaultObj();

	bool IsInAir();
	float GetSuspensionOffset();
	float GetSteerAngle();
	float GetRotationAngle();
	enum class EAxleType GetAxleType();
};

// 0x308 (0x6A0 - 0x398)
// Class ChaosVehicles.ChaosWheeledVehicleMovementComponent
class UChaosWheeledVehicleMovementComponent : public UChaosVehicleMovementComponent
{
public:
	bool                                         bSuspensionEnabled;                                // 0x398(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bWheelFrictionEnabled;                             // 0x399(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_B90[0x6];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FChaosWheelSetup>              WheelSetups;                                       // 0x3A0(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                         bMechanicalSimEnabled;                             // 0x3B0(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_B91[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVehicleEngineConfig                  EngineSetup;                                       // 0x3B8(0xC8)(Edit, NativeAccessSpecifierPublic)
	struct FVehicleDifferentialConfig            DifferentialSetup;                                 // 0x480(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FVehicleTransmissionConfig            TransmissionSetup;                                 // 0x488(0x70)(Edit, NativeAccessSpecifierPublic)
	struct FVehicleSteeringConfig                SteeringSetup;                                     // 0x4F8(0xB8)(Edit, NativeAccessSpecifierPublic)
	TArray<class UChaosVehicleWheel*>            Wheels;                                            // 0x5B0(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, DuplicateTransient, NativeAccessSpecifierPublic)
	uint8                                        Pad_B92[0xE0];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UChaosWheeledVehicleMovementComponent* GetDefaultObj();

	struct FWheelStatus MakeWheelStatus(bool bInContact, struct FVector* ContactPoint, class UPhysicalMaterial* PhysMaterial, float NormalizedSuspensionLength, float SpringForce, bool bIsSlipping, float SlipMagnitude, bool bIsSkidding, float SkidMagnitude, struct FVector* SkidNormal);
	struct FWheelStatus GetWheelState(int32 WheelIndex);
	int32 GetNumWheels();
	float GetEngineRotationSpeed();
	float GetEngineMaxRotationSpeed();
	void EnableWheelFriction(bool InState);
	void EnableSuspension(bool InState);
	void EnableMechanicalSim(bool InState);
	void BreakWheelStatus(struct FWheelStatus& Status, bool* bInContact, struct FVector* ContactPoint, class UPhysicalMaterial** PhysMaterial, float* NormalizedSuspensionLength, float* SpringForce, bool* bIsSlipping, float* SlipMagnitude, bool* bIsSkidding, float* SkidMagnitude, struct FVector* SkidNormal);
};

// 0x7A8 (0xA60 - 0x2B8)
// Class ChaosVehicles.VehicleAnimationInstance
class UVehicleAnimationInstance : public UAnimInstance
{
public:
	uint8                                        Pad_B97[0x798];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	class UChaosWheeledVehicleMovementComponent* WheeledVehicleComponent;                           // 0xA50(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_B98[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UVehicleAnimationInstance* GetDefaultObj();

	class AWheeledVehiclePawn* GetVehicle();
};

// 0x10 (0x290 - 0x280)
// Class ChaosVehicles.WheeledVehiclePawn
class AWheeledVehiclePawn : public APawn
{
public:
	class USkeletalMeshComponent*                Mesh;                                              // 0x280(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UChaosVehicleMovementComponent*        VehicleMovementComponent;                          // 0x288(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class AWheeledVehiclePawn* GetDefaultObj();

};

}



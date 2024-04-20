#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
//---------------------------------------------------------------------------------------------------------------------
// PARAMETERS
//---------------------------------------------------------------------------------------------------------------------

// 0x4 (0x4 - 0x0)
// Function ChaosVehicles.ChaosVehicleMovementComponent.SetYawInput
struct UChaosVehicleMovementComponent_SetYawInput_Params
{
public:
	float                                        Yaw;                                               // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function ChaosVehicles.ChaosVehicleMovementComponent.SetUseAutomaticGears
struct UChaosVehicleMovementComponent_SetUseAutomaticGears_Params
{
public:
	bool                                         bUseAuto;                                          // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function ChaosVehicles.ChaosVehicleMovementComponent.SetThrottleInput
struct UChaosVehicleMovementComponent_SetThrottleInput_Params
{
public:
	float                                        Throttle;                                          // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function ChaosVehicles.ChaosVehicleMovementComponent.SetTargetGear
struct UChaosVehicleMovementComponent_SetTargetGear_Params
{
public:
	int32                                        GearNum;                                           // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bImmediate;                                        // 0x4(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_B45[0x3];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x4 (0x4 - 0x0)
// Function ChaosVehicles.ChaosVehicleMovementComponent.SetSteeringInput
struct UChaosVehicleMovementComponent_SetSteeringInput_Params
{
public:
	float                                        Steering;                                          // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function ChaosVehicles.ChaosVehicleMovementComponent.SetRollInput
struct UChaosVehicleMovementComponent_SetRollInput_Params
{
public:
	float                                        Roll;                                              // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function ChaosVehicles.ChaosVehicleMovementComponent.SetPitchInput
struct UChaosVehicleMovementComponent_SetPitchInput_Params
{
public:
	float                                        Pitch;                                             // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function ChaosVehicles.ChaosVehicleMovementComponent.SetHandbrakeInput
struct UChaosVehicleMovementComponent_SetHandbrakeInput_Params
{
public:
	bool                                         bNewHandbrake;                                     // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function ChaosVehicles.ChaosVehicleMovementComponent.SetChangeUpInput
struct UChaosVehicleMovementComponent_SetChangeUpInput_Params
{
public:
	bool                                         bNewGearUp;                                        // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function ChaosVehicles.ChaosVehicleMovementComponent.SetChangeDownInput
struct UChaosVehicleMovementComponent_SetChangeDownInput_Params
{
public:
	bool                                         bNewGearDown;                                      // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function ChaosVehicles.ChaosVehicleMovementComponent.SetBrakeInput
struct UChaosVehicleMovementComponent_SetBrakeInput_Params
{
public:
	float                                        Brake;                                             // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function ChaosVehicles.ChaosVehicleMovementComponent.ServerUpdateState
struct UChaosVehicleMovementComponent_ServerUpdateState_Params
{
public:
	float                                        InSteeringInput;                                   // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        InThrottleInput;                                   // 0x4(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        InBrakeInput;                                      // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        InHandbrakeInput;                                  // 0xC(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        InCurrentGear;                                     // 0x10(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        InRollInput;                                       // 0x14(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        InPitchInput;                                      // 0x18(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        InYawInput;                                        // 0x1C(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function ChaosVehicles.ChaosVehicleMovementComponent.IncreaseThrottleInput
struct UChaosVehicleMovementComponent_IncreaseThrottleInput_Params
{
public:
	float                                        ThrottleDelta;                                     // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function ChaosVehicles.ChaosVehicleMovementComponent.GetUseAutoGears
struct UChaosVehicleMovementComponent_GetUseAutoGears_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function ChaosVehicles.ChaosVehicleMovementComponent.GetTargetGear
struct UChaosVehicleMovementComponent_GetTargetGear_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function ChaosVehicles.ChaosVehicleMovementComponent.GetForwardSpeedMPH
struct UChaosVehicleMovementComponent_GetForwardSpeedMPH_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function ChaosVehicles.ChaosVehicleMovementComponent.GetForwardSpeed
struct UChaosVehicleMovementComponent_GetForwardSpeed_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function ChaosVehicles.ChaosVehicleMovementComponent.GetCurrentGear
struct UChaosVehicleMovementComponent_GetCurrentGear_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function ChaosVehicles.ChaosVehicleMovementComponent.EnableSelfRighting
struct UChaosVehicleMovementComponent_EnableSelfRighting_Params
{
public:
	bool                                         InState;                                           // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function ChaosVehicles.ChaosVehicleMovementComponent.DecreaseThrottleInput
struct UChaosVehicleMovementComponent_DecreaseThrottleInput_Params
{
public:
	float                                        ThrottleDelta;                                     // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function ChaosVehicles.ChaosVehicleWheel.IsInAir
struct UChaosVehicleWheel_IsInAir_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function ChaosVehicles.ChaosVehicleWheel.GetSuspensionOffset
struct UChaosVehicleWheel_GetSuspensionOffset_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function ChaosVehicles.ChaosVehicleWheel.GetSteerAngle
struct UChaosVehicleWheel_GetSteerAngle_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function ChaosVehicles.ChaosVehicleWheel.GetRotationAngle
struct UChaosVehicleWheel_GetRotationAngle_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function ChaosVehicles.ChaosVehicleWheel.GetAxleType
struct UChaosVehicleWheel_GetAxleType_Params
{
public:
	enum class EAxleType                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x78 (0x78 - 0x0)
// Function ChaosVehicles.ChaosWheeledVehicleMovementComponent.MakeWheelStatus
struct UChaosWheeledVehicleMovementComponent_MakeWheelStatus_Params
{
public:
	bool                                         bInContact;                                        // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_B79[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               ContactPoint;                                      // 0x4(0xC)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPhysicalMaterial*                     PhysMaterial;                                      // 0x10(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        NormalizedSuspensionLength;                        // 0x18(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SpringForce;                                       // 0x1C(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsSlipping;                                       // 0x20(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_B7A[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        SlipMagnitude;                                     // 0x24(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsSkidding;                                       // 0x28(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_B7C[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        SkidMagnitude;                                     // 0x2C(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               SkidNormal;                                        // 0x30(0xC)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FWheelStatus                          ReturnValue;                                       // 0x3C(0x3C)(Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x40 (0x40 - 0x0)
// Function ChaosVehicles.ChaosWheeledVehicleMovementComponent.GetWheelState
struct UChaosWheeledVehicleMovementComponent_GetWheelState_Params
{
public:
	int32                                        WheelIndex;                                        // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FWheelStatus                          ReturnValue;                                       // 0x4(0x3C)(ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function ChaosVehicles.ChaosWheeledVehicleMovementComponent.GetNumWheels
struct UChaosWheeledVehicleMovementComponent_GetNumWheels_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function ChaosVehicles.ChaosWheeledVehicleMovementComponent.GetEngineRotationSpeed
struct UChaosWheeledVehicleMovementComponent_GetEngineRotationSpeed_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function ChaosVehicles.ChaosWheeledVehicleMovementComponent.GetEngineMaxRotationSpeed
struct UChaosWheeledVehicleMovementComponent_GetEngineMaxRotationSpeed_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function ChaosVehicles.ChaosWheeledVehicleMovementComponent.EnableWheelFriction
struct UChaosWheeledVehicleMovementComponent_EnableWheelFriction_Params
{
public:
	bool                                         InState;                                           // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function ChaosVehicles.ChaosWheeledVehicleMovementComponent.EnableSuspension
struct UChaosWheeledVehicleMovementComponent_EnableSuspension_Params
{
public:
	bool                                         InState;                                           // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function ChaosVehicles.ChaosWheeledVehicleMovementComponent.EnableMechanicalSim
struct UChaosWheeledVehicleMovementComponent_EnableMechanicalSim_Params
{
public:
	bool                                         InState;                                           // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x80 (0x80 - 0x0)
// Function ChaosVehicles.ChaosWheeledVehicleMovementComponent.BreakWheelStatus
struct UChaosWheeledVehicleMovementComponent_BreakWheelStatus_Params
{
public:
	struct FWheelStatus                          Status;                                            // 0x0(0x3C)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         bInContact;                                        // 0x3C(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_B8A[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               ContactPoint;                                      // 0x40(0xC)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_B8B[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UPhysicalMaterial*                     PhysMaterial;                                      // 0x50(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        NormalizedSuspensionLength;                        // 0x58(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SpringForce;                                       // 0x5C(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsSlipping;                                       // 0x60(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_B8C[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        SlipMagnitude;                                     // 0x64(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsSkidding;                                       // 0x68(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_B8E[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        SkidMagnitude;                                     // 0x6C(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               SkidNormal;                                        // 0x70(0xC)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_B8F[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// Function ChaosVehicles.VehicleAnimationInstance.GetVehicle
struct UVehicleAnimationInstance_GetVehicle_Params
{
public:
	class AWheeledVehiclePawn*                   ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}
}



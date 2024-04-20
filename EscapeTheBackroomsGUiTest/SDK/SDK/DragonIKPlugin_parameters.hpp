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

// 0x70 (0x70 - 0x0)
// Function DragonIKPlugin.DragonIK_Library.QuatLookXatLocation
struct UDragonIK_Library_QuatLookXatLocation_Params
{
public:
	struct FTransform                            LookAtFromTransform;                               // 0x0(0x30)(ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector                               LookAtTarget;                                      // 0x30(0xC)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3B2[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            ReturnValue;                                       // 0x40(0x30)(Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// Function DragonIKPlugin.DragonIK_Library.LookAtVector_V2
struct UDragonIK_Library_LookAtVector_V2_Params
{
public:
	struct FVector                               Source_Location;                                   // 0x0(0xC)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               LookAt;                                            // 0xC(0xC)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               UpDirection;                                       // 0x18(0xC)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                              ReturnValue;                                       // 0x24(0xC)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// Function DragonIKPlugin.DragonIK_Library.LookAtRotation_V3
struct UDragonIK_Library_LookAtRotation_V3_Params
{
public:
	struct FVector                               Source;                                            // 0x0(0xC)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               Target;                                            // 0xC(0xC)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               UpVector;                                          // 0x18(0xC)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                              ReturnValue;                                       // 0x24(0xC)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x24 (0x24 - 0x0)
// Function DragonIKPlugin.DragonIK_Library.CustomLookRotation
struct UDragonIK_Library_CustomLookRotation_Params
{
public:
	struct FVector                               LookAt;                                            // 0x0(0xC)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               UpDirection;                                       // 0xC(0xC)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                              ReturnValue;                                       // 0x18(0xC)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// 0xD0 (0xD0 - 0x0)
// Function DragonIKPlugin.DragonIKFootStepsComponent.CallFootSteps
struct UDragonIKFootStepsComponent_CallFootSteps_Params
{
public:
	class FName                                  bone_name;                                         // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3C6[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            Foot_transform;                                    // 0x10(0x30)(Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	float                                        Height_difference;                                 // 0x40(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FHitResult                            Hit_info;                                          // 0x44(0x88)(Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	uint8                                        Pad_3C7[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function DragonIKPlugin.DragonIKPhysicsComponent.UpdatePhysanimData
struct UDragonIKPhysicsComponent_UpdatePhysanimData_Params
{
public:
	int32                                        LinearStrength;                                    // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        AngularStrength;                                   // 0x4(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        LinearDamp;                                        // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        AngularDamp;                                       // 0xC(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function DragonIKPlugin.DragonIKPhysicsComponent.SetInterpolation
struct UDragonIKPhysicsComponent_SetInterpolation_Params
{
public:
	int32                                        Inter_value;                                       // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function DragonIKPlugin.DragonIKPhysicsComponent.ReleaseAllHandles
struct UDragonIKPhysicsComponent_ReleaseAllHandles_Params
{
public:
	bool                                         Go_ragdoll;                                        // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function DragonIKPlugin.DragonIKPhysicsComponent.ReGrabAllHandles
struct UDragonIKPhysicsComponent_ReGrabAllHandles_Params
{
public:
	bool                                         Exit_ragdoll;                                      // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xB0 (0xB0 - 0x0)
// Function DragonIKPlugin.DragonIKPhysicsComponent.OnHitCallback
struct UDragonIKPhysicsComponent_OnHitCallback_Params
{
public:
	struct FHitResult                            Hit;                                               // 0x0(0x88)(ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	class FName                                  Optional_Override_Hit_Bone_Name;                   // 0x88(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               Hit_location;                                      // 0x90(0xC)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               Hit_impulse_direction;                             // 0x9C(0xC)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  Hit_bone_name;                                     // 0xA8(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function DragonIKPlugin.DragonIKPhysicsComponent.Modify_Reset_Bone_Info
struct UDragonIKPhysicsComponent_Modify_Reset_Bone_Info_Params
{
public:
	TArray<class FName>                          bone_list;                                         // 0x0(0x10)(Parm, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function DragonIKPlugin.DragonIKPhysicsComponent.FirstTimeInitialization
struct UDragonIKPhysicsComponent_FirstTimeInitialization_Params
{
public:
	class USkeletalMeshComponent*                Skeleton_input;                                    // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x50 (0x50 - 0x0)
// Function DragonIKPlugin.DragonIKPhysicsComponent.Control_Bone_Handle
struct UDragonIKPhysicsComponent_Control_Bone_Handle_Params
{
public:
	class FName                                  bone_name;                                         // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3CE[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            Override_transform;                                // 0x10(0x30)(Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         Enable;                                            // 0x40(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3CF[0xF];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

}
}



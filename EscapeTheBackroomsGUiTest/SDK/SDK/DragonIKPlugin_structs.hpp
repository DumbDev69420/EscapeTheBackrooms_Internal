#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------

enum class EIK_Type_Plugin : uint8
{
	ENUM_Two_Bone_Ik               = 0,
	ENUM_Single_Bone_Ik            = 1,
	ENUM_MAX                       = 2,
};

enum class ESolverComplexityPluginEnum : uint8
{
	VE_Simple                      = 0,
	VE_Complex                     = 1,
	VE_MAX                         = 2,
};

enum class ERefPosePluginEnum : uint8
{
	VE_Animated                    = 0,
	VE_Rest                        = 1,
	VE_MAX                         = 2,
};

enum class EInterpoRotation_Type_Plugin : uint8
{
	ENUM_DivisiveRot_Interp        = 0,
	ENUM_LegacyRot_Interp          = 1,
	ENUM_MAX                       = 2,
};

enum class EInterpoLocation_Type_Plugin : uint8
{
	ENUM_DivisiveLoc_Interp        = 0,
	ENUM_LegacyLoc_Interp          = 1,
	ENUM_MAX                       = 2,
};

enum class EIKTrace_Type_Plugin : uint8
{
	ENUM_LineTrace_Type            = 0,
	ENUM_SphereTrace_Type          = 1,
	ENUM_BoxTrace_Type             = 2,
	ENUM_MAX                       = 3,
};

enum class ERotation_Type_DragonIK : uint8
{
	ENUM_AdditiveRotation          = 0,
	ENUM_ReplaceRotation           = 1,
	ENUM_MAX                       = 2,
};

enum class EInputTransformSpace_DragonIK : uint8
{
	ENUM_WorldSpaceSystem          = 0,
	ENUM_ComponentSpaceSystem      = 1,
	ENUM_MAX                       = 2,
};

enum class EPole_System_DragonIK : uint8
{
	ENUM_SinglePoleSystem          = 0,
	ENUM_NSEWPoleSystem            = 1,
	ENUM_MAX                       = 2,
};

enum class ETwist_Type_DragonIK : uint8
{
	ENUM_PoseAxisTwist             = 0,
	ENUM_UpAxisTwist               = 1,
	ENUM_MAX                       = 2,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0xB8 (0xC8 - 0x10)
// ScriptStruct DragonIKPlugin.AnimNode_DragonControlBase
struct FAnimNode_DragonControlBase : public FAnimNode_Base
{
public:
	struct FComponentSpacePoseLink               ComponentPose;                                     // 0x10(0x10)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	int32                                        LODThreshold;                                      // 0x20(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ActualAlpha;                                       // 0x24(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EAnimAlphaInputType               AlphaInputType;                                    // 0x28(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAlphaBoolEnabled;                                 // 0x29(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3DC[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Alpha;                                             // 0x2C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FInputScaleBias                       AlphaScaleBias;                                    // 0x30(0x8)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FInputAlphaBoolBlend                  AlphaBoolBlend;                                    // 0x38(0x48)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	class FName                                  AlphaCurveName;                                    // 0x80(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FInputScaleBiasClamp                  AlphaScaleBiasClamp;                               // 0x88(0x30)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_3DD[0x10];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// ScriptStruct DragonIKPlugin.DragonData_FingerData
struct FDragonData_FingerData
{
public:
	class FName                                  Finger_Bone_Name;                                  // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Trace_Scale;                                       // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               Trace_Offset;                                      // 0xC(0xC)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Is_Finger_Backward;                                // 0x18(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3DE[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x80 (0x80 - 0x0)
// ScriptStruct DragonIKPlugin.DragonData_FootData
struct FDragonData_FootData
{
public:
	class FName                                  Feet_Bone_Name;                                    // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  Knee_Bone_Name;                                    // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  Thigh_Bone_Name;                                   // 0x10(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                              Feet_Rotation_Offset;                              // 0x18(0xC)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         Fixed_Pole;                                        // 0x24(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3DF[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               Knee_Direction_Offset;                             // 0x28(0xC)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               Feet_Trace_Offset;                                 // 0x34(0xC)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Front_Trace_Point_Spacing;                         // 0x40(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Side_Traces_Spacing;                               // 0x44(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Feet_Rotation_Limit;                               // 0x48(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Fixed_Foot_Height;                                 // 0x4C(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3E0[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Feet_Heights;                                      // 0x50(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Feet_Alpha;                                        // 0x54(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Min_Feet_Extension;                                // 0x58(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Max_Feet_Extension;                                // 0x5C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Feet_Slope_Offset_Multiplier;                      // 0x60(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Max_Feet_Lift;                                     // 0x64(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Overrided_Trace_Radius;                            // 0x68(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3E1[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FDragonData_FingerData>        Finger_Array;                                      // 0x70(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct DragonIKPlugin.DragonData_MultiInput
struct FDragonData_MultiInput
{
public:
	class FName                                  Start_Spine;                                       // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  Pelvis;                                            // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FDragonData_FootData>          FeetBones;                                         // 0x10(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x40 (0x40 - 0x0)
// ScriptStruct DragonIKPlugin.DragonData_SingleArmElement
struct FDragonData_SingleArmElement
{
public:
	struct FTransform                            Overrided_Arm_Transform;                           // 0x0(0x30)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	float                                        Arm_Alpha;                                         // 0x30(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                              Rotation_offset;                                   // 0x34(0xC)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct DragonIKPlugin.DragonData_Overrided_Location_Data
struct FDragonData_Overrided_Location_Data
{
public:
	TArray<struct FDragonData_SingleArmElement>  Arm_TargetLocation_Overrides;                      // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x11C (0x11C - 0x0)
// ScriptStruct DragonIKPlugin.DragonData_ArmsData
struct FDragonData_ArmsData
{
public:
	struct FBoneReference                        Clavicle_Bone;                                     // 0x0(0x10)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FBoneReference                        Shoulder_Bone_Name;                                // 0x10(0x10)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FBoneReference                        Elbow_Bone_Name;                                   // 0x20(0x10)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FBoneReference                        Hand_Bone_Name;                                    // 0x30(0x10)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         Is_this_right_hand;                                // 0x40(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Invert_lower_twist;                                // 0x41(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Invert_upper_twist;                                // 0x42(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3E2[0x1];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               Local_Direction_Axis;                              // 0x44(0xC)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               Arm_Aiming_Offset;                                 // 0x50(0xC)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Accurate_hand_rotation;                            // 0x5C(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Relative_axis;                                     // 0x5D(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3E3[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Maximum_Extension;                                 // 0x60(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Minimum_Extension;                                 // 0x64(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Max_Stretch_Ratio;                                 // 0x68(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Stretch_lower_arm_Priorty;                         // 0x6C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               Elbow_Pole_Offset;                                 // 0x70(0xC)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               North_Pole_Offset;                                 // 0x7C(0xC)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               South_Pole_Offset;                                 // 0x88(0xC)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               West_Pole_Offset;                                  // 0x94(0xC)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               East_Pole_Offset;                                  // 0xA0(0xC)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Override_limits;                                   // 0xAC(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3E5[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector2D                             Max_Arm_H_Angle;                                   // 0xB0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                             Max_Arm_V_Angle;                                   // 0xB8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                             Inner_Clavicle_Side_Limit;                         // 0xC0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                             Inner_Clavicle_Vertical_Limit;                     // 0xC8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                             Outer_Clavicle_Side_Limit;                         // 0xD0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                             Outer_Clavicle_Vertical_Limit;                     // 0xD8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                             Shoulder_Inner_Clamp;                              // 0xE0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                             Shoulder_Outer_Clamp;                              // 0xE8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                             ForeArm_Angle_Limit;                               // 0xF0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Twist_Offset_Reverse;                              // 0xF8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3E7[0x20];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xC (0xC - 0x0)
// ScriptStruct DragonIKPlugin.DragonData_ArmSizeStruct
struct FDragonData_ArmSizeStruct
{
public:
	bool                                         Use_Custom_Arm_Sizes;                              // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3E9[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Custom_upperArm_length;                            // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Custom_lowerArm_length;                            // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct DragonIKPlugin.DragonData_CustomArmLengths
struct FDragonData_CustomArmLengths
{
public:
	TArray<struct FDragonData_ArmSizeStruct>     CustomArmSizeArray;                                // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x908 (0x9D0 - 0xC8)
// ScriptStruct DragonIKPlugin.AnimNode_DragonAimSolver
struct FAnimNode_DragonAimSolver : public FAnimNode_DragonControlBase
{
public:
	struct FBoneReference                        EndSplineBone;                                     // 0xC8(0x10)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FBoneReference                        StartSplineBone;                                   // 0xD8(0x10)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_3EA[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            LookAtLocation;                                    // 0xF0(0x30)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FDragonData_MultiInput                Dragon_input_data;                                 // 0x120(0x20)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	uint8                                        Pad_3EB[0x88];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FDragonData_ArmsData>          Aiming_Hand_Limbs;                                 // 0x1C8(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_3EC[0x10];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FDragonData_Overrided_Location_Data   Arm_TargetLocation_Overrides;                      // 0x1E8(0x10)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	bool                                         Use_Separate_Targets;                              // 0x1F8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Override_Hand_Rotation;                            // 0x1F9(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Enable_head_aim;                                   // 0x1FA(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAllowHandStretching;                              // 0x1FB(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Reach_instead;                                     // 0x1FC(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Aggregate_Hand_Body;                               // 0x1FD(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Let_Arm_Twist_With_Hand;                           // 0x1FE(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EPole_System_DragonIK             Pole_system_input;                                 // 0x1FF(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ETwist_Type_DragonIK              Arm_twist_axis;                                    // 0x200(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ERotation_Type_DragonIK           Hand_rotation_method;                              // 0x201(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Override_Head_Rotation;                            // 0x202(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Enable_Hand_Interpolation;                         // 0x203(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Hand_Interpolation_Speed;                          // 0x204(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDragonData_CustomArmLengths          Custom_arm_lengths;                                // 0x208(0x10)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	enum class EInputTransformSpace_DragonIK     Arm_transform_space;                               // 0x218(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3ED[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Main_Arm_Index;                                    // 0x21C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3EE[0x90];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Lookat_Radius;                                     // 0x2B0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                              Inner_Body_Clamp;                                  // 0x2B4(0xC)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	float                                        Lookat_Clamp;                                      // 0x2C0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Limbs_Clamp;                                       // 0x2C4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Downward_Dip_Multiplier;                           // 0x2C8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Inverted_Dip_Multiplier;                           // 0x2CC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Vertical_Dip_Treshold;                             // 0x2D0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Side_Move_Multiplier;                              // 0x2D4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Side_Down_Multiplier;                              // 0x2D8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Up_Rot_Clamp;                                      // 0x2DC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                             Verticle_Range_Angles;                             // 0x2E0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                             Horizontal_Range_Angles;                           // 0x2E8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRuntimeFloatCurve                    Look_Bending_Curve;                                // 0x2F0(0x88)(Edit, NativeAccessSpecifierPublic)
	struct FRuntimeFloatCurve                    Look_Multiplier_Curve;                             // 0x378(0x88)(Edit, NativeAccessSpecifierPublic)
	enum class EInputTransformSpace_DragonIK     Look_transform_space;                              // 0x400(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Lock_Legs;                                         // 0x401(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Ignore_elbow_modification;                         // 0x402(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Ignore_separate_hand_solving;                      // 0x403(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Use_Natural_Method;                                // 0x404(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Head_Use_Separate_Clamp;                           // 0x405(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Is_Head_Accurate;                                  // 0x406(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Automatic_leg_make;                                // 0x407(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3EF[0x1];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         Enable_solver;                                     // 0x409(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Work_Outside_PIE;                                  // 0x40A(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Adaptive_Terrain_Tail;                             // 0x40B(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ETraceTypeQuery                   Trace_Channel;                                     // 0x40C(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3F0[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Trace_Up_Height;                                   // 0x410(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Trace_Down_Height;                                 // 0x414(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3F1[0x8C];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	enum class EInterpoLocation_Type_Plugin      Loc_interp_type;                                   // 0x4A4(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3F2[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         Enable_Interpolation;                              // 0x4AD(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3F3[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Interpolation_Speed;                               // 0x4B0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Toggle_Interpolation_Speed;                        // 0x4B4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3F4[0x58];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               LookAt_Axis;                                       // 0x510(0xC)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               Upward_Axis;                                       // 0x51C(0xC)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               TargetOffset;                                      // 0x528(0xC)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Use_Reference_Forward_Axis;                        // 0x534(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3F5[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               Reference_Constant_Forward_Axis;                   // 0x538(0xC)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3F6[0xDC];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            Debug_LookAtLocation;                              // 0x620(0x30)(Edit, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	TArray<struct FTransform>                    Debug_Hand_Locations;                              // 0x650(0x10)(Edit, EditFixedSize, ZeroConstructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_3F7[0x370];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x40 (0x40 - 0x0)
// ScriptStruct DragonIKPlugin.SocketDragonReference
struct FSocketDragonReference
{
public:
	uint8                                        Pad_3F9[0x30];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  SocketName;                                        // 0x30(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3FA[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x60 (0x60 - 0x0)
// ScriptStruct DragonIKPlugin.BoneDragonSocketTarget
struct FBoneDragonSocketTarget
{
public:
	bool                                         bUseSocket;                                        // 0x0(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3FB[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FBoneReference                        BoneReference;                                     // 0x4(0x10)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_3FC[0xC];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSocketDragonReference                SocketReference;                                   // 0x20(0x40)(Edit, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x98 (0x160 - 0xC8)
// ScriptStruct DragonIKPlugin.AnimNode_DragonFabrikSolver
struct FAnimNode_DragonFabrikSolver : public FAnimNode_DragonControlBase
{
public:
	struct FBoneReference                        StartSplineBone;                                   // 0xC8(0x10)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FBoneReference                        EndSplineBone;                                     // 0xD8(0x10)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	float                                        Precision;                                         // 0xE8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaxIterations;                                     // 0xEC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTransform                            Target_Transform;                                  // 0xF0(0x30)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_3FD[0x40];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct DragonIKPlugin.DragonData_FeetAlpha_Struct
struct FDragonData_FeetAlpha_Struct
{
public:
	TArray<float>                                Feet_IK_alpha_array;                               // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct DragonIKPlugin.DragonData_StickyFeetStruct
struct FDragonData_StickyFeetStruct
{
public:
	TArray<bool>                                 Sticky_feet_array;                                 // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct DragonIKPlugin.DragonData_StickySocketStruct
struct FDragonData_StickySocketStruct
{
public:
	TArray<struct FBoneSocketTarget>             Sticky_socket_array;                               // 0x0(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x6F8 (0x7C0 - 0xC8)
// ScriptStruct DragonIKPlugin.AnimNode_DragonFeetSolver
struct FAnimNode_DragonFeetSolver : public FAnimNode_DragonControlBase
{
public:
	struct FDragonData_MultiInput                Dragon_input_data;                                 // 0xC8(0x20)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	uint8                                        Pad_3FE[0x70];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FDragonData_FeetAlpha_Struct          Feet_alpha_multiplier_array;                       // 0x158(0x10)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	uint8                                        Pad_3FF[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	enum class EIK_Type_Plugin                   Ik_type;                                           // 0x170(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EIKTrace_Type_Plugin              Trace_type;                                        // 0x171(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_400[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Trace_Radius;                                      // 0x174(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Override_Curve_Velocity;                           // 0x178(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_401[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Custom_velocity;                                   // 0x17C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EInterpoLocation_Type_Plugin      Loc_interp_type;                                   // 0x180(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_402[0xB];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	enum class EInterpoRotation_Type_Plugin      Rot_interp_type;                                   // 0x18C(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_403[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Virtual_scale;                                     // 0x190(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Automatic_leg_make;                                // 0x194(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Use_OptionalRef_Feet_As_Ref;                       // 0x195(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Enable_solver;                                     // 0x196(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Work_Outside_PIE;                                  // 0x197(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FComponentSpacePoseLink               OptionalRefPose;                                   // 0x198(0x10)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         Interpolate_only_z;                                // 0x1A8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_404[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Shift_speed;                                       // 0x1AC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_405[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Location_Lerp_Speed;                               // 0x1B8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Feet_rotation_speed;                               // 0x1BC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Ignore_shift_speed;                                // 0x1C0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Ignore_Lerping;                                    // 0x1C1(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Ignore_Location_Lerping;                           // 0x1C2(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_406[0x5];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRuntimeFloatCurve                    Interpolation_Velocity_Curve;                      // 0x1C8(0x88)(Edit, NativeAccessSpecifierPublic)
	bool                                         Enable_Complex_Rotation_Method;                    // 0x250(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_407[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRuntimeFloatCurve                    ComplexSimpleFoot_Velocity_Curve;                  // 0x258(0x88)(Edit, NativeAccessSpecifierPublic)
	uint8                                        Pad_408[0x40];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	enum class ETraceTypeQuery                   Trace_Channel;                                     // 0x320(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ETraceTypeQuery                   Anti_Trace_Channel;                                // 0x321(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_409[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        FPS_Lerp_Treshold;                                 // 0x324(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_40A[0x16C];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Line_trace_upper_height;                           // 0x494(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Line_trace_down_height;                            // 0x498(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_40B[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRuntimeFloatCurve                    Trace_Down_Multiplier_Curve;                       // 0x4A0(0x88)(Edit, NativeAccessSpecifierPublic)
	bool                                         Use_Anti_Channel;                                  // 0x528(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Use_footstep_listening;                            // 0x529(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_40D[0xE];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         Should_Rotate_Feet;                                // 0x538(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_40E[0x1];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         Show_trace_in_game;                                // 0x53A(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_40F[0x15];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         Enable_Pitch;                                      // 0x550(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Enable_Roll;                                       // 0x551(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_410[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               Character_direction_vector_CS;                     // 0x554(0xC)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               Character_forward_direction_vector_CS;             // 0x560(0xC)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               Poles_forward_direction_vector_CS;                 // 0x56C(0xC)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Use_Four_Point_Feets;                              // 0x578(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Enable_Foot_Lift_Limit;                            // 0x579(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Affect_Toes_Always;                                // 0x57A(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_411[0x5];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRuntimeFloatCurve                    Finger_Alpha_Velocity_Curve;                       // 0x580(0x88)(Edit, NativeAccessSpecifierPublic)
	float                                        Max_Limb_Radius;                                   // 0x608(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Sticky_feet_mode;                                  // 0x60C(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_412[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Sticky_feet_on_speed;                              // 0x610(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Sticky_feet_off_speed;                             // 0x614(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Sticky_Feet_Range;                                 // 0x618(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_413[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FDragonData_StickyFeetStruct          Sticky_feets_data;                                 // 0x620(0x10)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	bool                                         Sticky_floor_detection;                            // 0x630(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_414[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Floor_value;                                       // 0x634(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Auto_Sticky_Toggle;                                // 0x638(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_415[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FDragonData_StickySocketStruct        Sticky_sockets_data;                               // 0x640(0x10)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	uint8                                        Pad_416[0x160];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Foot_01_Height_Offset;                             // 0x7B0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Foot_02_Height_Offset;                             // 0x7B4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Foot_03_Height_Offset;                             // 0x7B8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Foot_04_Height_Offset;                             // 0x7BC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x48 (0x110 - 0xC8)
// ScriptStruct DragonIKPlugin.AnimNode_DragonPhysicsSolver
struct FAnimNode_DragonPhysicsSolver : public FAnimNode_DragonControlBase
{
public:
	uint8                                        Pad_417[0x40];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Physanim_tag_index;                                // 0x108(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_418[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// ScriptStruct DragonIKPlugin.DragonData_PhysicsBoneStrip
struct FDragonData_PhysicsBoneStrip
{
public:
	struct FBoneReference                        Bone_Chain_Start;                                  // 0x0(0x10)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FBoneReference                        Bone_Chain_End;                                    // 0x10(0x10)(Edit, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x9D8 (0xAA0 - 0xC8)
// ScriptStruct DragonIKPlugin.AnimNode_DragonSpineSolver
struct FAnimNode_DragonSpineSolver : public FAnimNode_DragonControlBase
{
public:
	struct FDragonData_MultiInput                Dragon_input_data;                                 // 0xC8(0x20)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	uint8                                        Pad_419[0x70];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Precision;                                         // 0x158(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaximumPitch;                                      // 0x15C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MinimumPitch;                                      // 0x160(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaximumRoll;                                       // 0x164(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MinimumRoll;                                       // 0x168(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MaxIterations;                                     // 0x16C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_41A[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Shift_speed;                                       // 0x174(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ETraceTypeQuery                   Trace_Channel;                                     // 0x178(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ETraceTypeQuery                   Anti_Trace_Channel;                                // 0x179(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EIKTrace_Type_Plugin              Trace_type;                                        // 0x17A(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_41B[0x1];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Trace_Radius;                                      // 0x17C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Override_Curve_Velocity;                           // 0x180(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_41C[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Custom_velocity;                                   // 0x184(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Rotate_Around_Translate;                           // 0x188(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ESolverComplexityPluginEnum       Complexity_type;                                   // 0x189(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Ignore_Lerping;                                    // 0x18A(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_41D[0x11];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Virtual_scale;                                     // 0x19C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Line_trace_downward_height;                        // 0x1A0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Line_trace_upper_height;                           // 0x1A4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Use_Anti_Channel;                                  // 0x1A8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_41E[0x13];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         Stabilize_pelvis_legs;                             // 0x1BC(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_41F[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Pelvis_UpSlopeStabilization_Alpha;                 // 0x1C0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Pelvis_DownSlopeStabilization_Alpha;               // 0x1C4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Stabilize_chest_legs;                              // 0x1C8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_420[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Chest_UpSlopeStabilization_Alpha;                  // 0x1CC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Chest_DownslopeStabilization_Alpha;                // 0x1D0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FBoneReference                        Stabilization_Head_Bone;                           // 0x1D4(0x10)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FBoneReference                        Stabilization_Tail_Bone;                           // 0x1E4(0x10)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         Use_Ducking_Feature;                               // 0x1F4(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ETraceTypeQuery                   Ducking_Trace_Channel;                             // 0x1F5(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_421[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Ducking_Limit;                                     // 0x1F8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Pelvis_Crouch_Height;                              // 0x1FC(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Pelvis_Crouch_Rotation_Intensity;                  // 0x200(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               Duck_Pelvis_Trace_Offset;                          // 0x204(0xC)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Chest_Crouch_Height;                               // 0x210(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Chest_Crouch_Rotation_Intensity;                   // 0x214(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               Duck_Chest_Trace_Offset;                           // 0x218(0xC)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_422[0x140];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Slanted_Height_Up_Offset;                          // 0x364(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_423[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Slanted_Height_Down_Offset;                        // 0x36C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Dip_multiplier;                                    // 0x370(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Pelvis_adaptive_gravity;                           // 0x374(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Reverse_fabrik;                                    // 0x378(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_424[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         Calculation_To_RefPose;                            // 0x380(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_425[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Chest_Slanted_Height_Up_Offset;                    // 0x384(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Chest_Slanted_Height_Down_Offset;                  // 0x388(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Chest_side_dip_multiplier;                         // 0x38C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Chest_adaptive_gravity;                            // 0x390(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Chest_Base_Offset;                                 // 0x394(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Pelvis_Base_Offset;                                // 0x398(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Virtual_leg_width;                                 // 0x39C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Maximum_Dip_Height;                                // 0x3A0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_426[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRuntimeFloatCurve                    Pelvis_Height_Multiplier_Curve;                    // 0x3A8(0x88)(Edit, NativeAccessSpecifierPublic)
	float                                        Maximum_Dip_Height_Chest;                          // 0x430(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_427[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRuntimeFloatCurve                    Chest_Height_Multiplier_Curve;                     // 0x438(0x88)(Edit, NativeAccessSpecifierPublic)
	uint8                                        Pad_428[0xC];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Rotation_power_between;                            // 0x4CC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Use_Automatic_Fabrik_Selection;                    // 0x4D0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_429[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Trace_Lerp_Speed;                                  // 0x4D4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Location_Lerp_Speed;                               // 0x4D8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_42A[0x10];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Rotation_Lerp_Speed;                               // 0x4EC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_42B[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRuntimeFloatCurve                    Interpolation_Multiplier_Curve;                    // 0x4F8(0x88)(Edit, NativeAccessSpecifierPublic)
	float                                        Chest_Influence_Alpha;                             // 0x580(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Pelvis_ForwardRotation_Intensity;                  // 0x584(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Pelvis_UpwardForwardRotation_Intensity;            // 0x588(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Body_Rotation_Intensity;                           // 0x58C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Pelvis_Rotation_Offset;                            // 0x590(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Chest_ForwardRotation_Intensity;                   // 0x594(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Chest_UpwardForwardRotation_Intensity;             // 0x598(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Chest_SidewardRotation_Intensity;                  // 0x59C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Chest_Rotation_Offset;                             // 0x5A0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_42C[0x3C];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         Full_Extended_Spine;                               // 0x5E0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_42D[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Max_extension_ratio;                               // 0x5E4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Min_extension_ratio;                               // 0x5E8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Extension_switch_speed;                            // 0x5EC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_42E[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         Enable_solver;                                     // 0x5F4(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Work_Outside_PIE;                                  // 0x5F5(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Use_Fake_Chest_Rotations;                          // 0x5F6(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Use_Fake_Pelvis_Rotations;                         // 0x5F7(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_42F[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         Force_Activation;                                  // 0x5FC(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Accurate_feet_placement;                           // 0x5FD(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_430[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRuntimeFloatCurve                    Accurate_Foot_Curve;                               // 0x600(0x88)(Edit, NativeAccessSpecifierPublic)
	bool                                         Use_crosshair_trace_also_for_fail_distance;        // 0x688(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Only_Root_Solve;                                   // 0x689(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Ignore_Chest_Solve;                                // 0x68A(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_431[0x9];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               Overall_PostSolved_Offset;                         // 0x694(0xC)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               Character_direction_vector_CS;                     // 0x6A0(0xC)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               Forward_Direction_Vector;                          // 0x6AC(0xC)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Flip_forward_and_right;                            // 0x6B8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_432[0xF];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	enum class ERefPosePluginEnum                SolverReferencePose;                               // 0x6C8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Spine_Feet_Connect;                                // 0x6C9(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_433[0x30A];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Snake_Joint_Speed;                                 // 0x9D4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Enable_Snake_Interpolation;                        // 0x9D8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Is_snake;                                          // 0x9D9(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Ignore_End_Points;                                 // 0x9DA(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_434[0x1];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Maximum_Feet_Distance;                             // 0x9DC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Minimum_Feet_Distance;                             // 0x9E0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         DisplayLineTrace;                                  // 0x9E4(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_435[0xBB];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x2C (0x2C - 0x0)
// ScriptStruct DragonIKPlugin.DragonData_WarpLimbsData
struct FDragonData_WarpLimbsData
{
public:
	class FName                                  Foot_Bone_Name;                                    // 0x0(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  Knee_Bone_Name;                                    // 0x8(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  Thigh_Bone_Name;                                   // 0x10(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Warp_Lift_Reference_Location;                      // 0x18(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Warp_Param_Adder;                                  // 0x1C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                             Min_Max_Warp;                                      // 0x20(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Max_extra_compression_height;                      // 0x28(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x488 (0x550 - 0xC8)
// ScriptStruct DragonIKPlugin.AnimNode_DragonWarpSolver
struct FAnimNode_DragonWarpSolver : public FAnimNode_DragonControlBase
{
public:
	TArray<struct FDragonData_WarpLimbsData>     Dragon_limb_input;                                 // 0xC8(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	class FName                                  Hip_Bone_Name;                                     // 0xD8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_436[0x44];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         Enable_solver;                                     // 0x124(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_437[0x11F];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               Character_direction_vector_CS;                     // 0x244(0xC)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               Forward_vector_CS;                                 // 0x250(0xC)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Speed_warping_const;                               // 0x25C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Enable_slope_warp;                                 // 0x260(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_438[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Automatic_speed_warping_const;                     // 0x264(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Slope_detection_tolerance;                         // 0x268(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Warp_Slope_Interpolation;                          // 0x26C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_439[0x30];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	enum class ETraceTypeQuery                   Trace_Channel;                                     // 0x2A0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_43A[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Line_trace_downward_height;                        // 0x2A4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Line_trace_upper_height;                           // 0x2A8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Virtual_leg_width;                                 // 0x2AC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Virtual_scale;                                     // 0x2B0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_43B[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         DisplayLineTrace;                                  // 0x2B8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_43C[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Limb_Compression_Intensity;                        // 0x2BC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRuntimeFloatCurve                    Limb_Lifting_Curve;                                // 0x2C0(0x88)(Edit, NativeAccessSpecifierPublic)
	float                                        Hip_Change_Intensity;                              // 0x348(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_43D[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRuntimeFloatCurve                    Hip_Lifting_Curve;                                 // 0x350(0x88)(Edit, NativeAccessSpecifierPublic)
	uint8                                        Pad_43E[0x178];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x70 (0x70 - 0x0)
// ScriptStruct DragonIKPlugin.CCDIK_Modified_ChainLink
struct FCCDIK_Modified_ChainLink
{
public:
	uint8                                        Pad_43F[0x70];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xC (0xC - 0x0)
// ScriptStruct DragonIKPlugin.DragonData_PhysicsHandleMultiplier
struct FDragonData_PhysicsHandleMultiplier
{
public:
	class FName                                  bone_name;                                         // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        bone_strength;                                     // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct DragonIKPlugin.DragonData_PhysicsParentRelationship
struct FDragonData_PhysicsParentRelationship
{
public:
	class FName                                  Child_bone_name;                                   // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  Parent_bone_name;                                  // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}



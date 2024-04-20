#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------

enum class EVRActionHand : uint8
{
	EActionHand_Left               = 0,
	EActionHand_Right              = 1,
	EActionHand_MAX                = 2,
};

enum class EVROpenVRSkeletonType : uint8
{
	OVR_SkeletonType_UE4Default_Left = 0,
	OVR_SkeletonType_UE4Default_Right = 1,
	OVR_SkeletonType_OpenVRDefault_Left = 2,
	OVR_SkeletonType_OpenVRDefault_Right = 3,
	OVERSkeletonType_Custom        = 4,
	EVROpenVRSkeletonType_MAX      = 5,
};

enum class EVRSkeletalReplicationType : uint8
{
	Rep_CurlOnly                   = 0,
	Rep_CurlAndSplay               = 1,
	Rep_HardTransforms             = 2,
	Rep_SteamVRCompressedTransforms = 3,
	Rep_MAX                        = 4,
};

enum class EVROpenInputFingerIndexType : uint8
{
	VRFinger_Thumb                 = 0,
	VRFinger_Index                 = 1,
	VRFinger_Middle                = 2,
	VRFinger_Ring                  = 3,
	VRFinger_Pinky                 = 4,
	VRFingerSplay_Thumb_Index      = 5,
	VRFingerSplay_Index_Middle     = 6,
	VRFingerSplay_Middle_Ring      = 7,
	VRFingerSplay_Ring_Pinky       = 8,
	EVROpenInputFingerIndexType_MAX = 9,
};

enum class EVROpenInputSkeletalTrackingLevel : uint8
{
	VRSkeletalTracking_Estimated   = 0,
	VRSkeletalTracking_Partial     = 1,
	VRSkeletalTracking_Full        = 2,
	VRSkeletalTrackingLevel_Max    = 3,
	EVROpenInputSkeletalTrackingLevel_MAX = 4,
};

enum class EVROpenInputReferencePose : uint8
{
	VRSkeletalReferencePose_BindPose = 0,
	VRSkeletalReferencePose_OpenHand = 1,
	VRSkeletalReferencePose_Fist   = 2,
	VRSkeletalReferencePose_GripLimit = 3,
	VRSkeletalReferencePose_MAX    = 4,
};

enum class EVROpenInputBones : uint8
{
	EBone_Root                     = 0,
	EBone_Wrist                    = 1,
	EBone_Thumb0                   = 2,
	EBone_Thumb1                   = 3,
	EBone_Thumb2                   = 4,
	EBone_Thumb3                   = 5,
	EBone_IndexFinger0             = 6,
	EBone_IndexFinger1             = 7,
	EBone_IndexFinger2             = 8,
	EBone_IndexFinger3             = 9,
	EBone_IndexFinger4             = 10,
	EBone_MiddleFinger0            = 11,
	EBone_MiddleFinger1            = 12,
	EBone_MiddleFinger2            = 13,
	EBone_MiddleFinger3            = 14,
	EBone_MiddleFinger4            = 15,
	EBone_RingFinger0              = 16,
	EBone_RingFinger1              = 17,
	EBone_RingFinger2              = 18,
	EBone_RingFinger3              = 19,
	EBone_RingFinger4              = 20,
	EBone_PinkyFinger0             = 21,
	EBone_PinkyFinger1             = 22,
	EBone_PinkyFinger2             = 23,
	EBone_PinkyFinger3             = 24,
	EBone_PinkyFinger4             = 25,
	EBone_Aux_Thumb                = 26,
	EBone_Aux_IndexFinger          = 27,
	EBone_Aux_MiddleFinger         = 28,
	EBone_Aux_RingFinger           = 29,
	EBone_Aux_PinkyFinger          = 30,
	EBone_Count                    = 31,
	EBone_MAX                      = 32,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x50 (0x50 - 0x0)
// ScriptStruct OpenInputPlugin.BPOpenVRActionSkeletalData
struct FBPOpenVRActionSkeletalData
{
public:
	enum class EVRActionHand                     TargetHand;                                        // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAllowDeformingMesh;                               // 0x1(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bMirrorHand;                                       // 0x2(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bMirrorLeftRight;                                  // 0x3(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_CC4[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FTransform>                    SkeletalTransforms;                                // 0x8(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NativeAccessSpecifierPublic)
	uint8                                        Pad_CC5[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            AdditionTransform;                                 // 0x20(0x30)(Edit, BlueprintVisible, IsPlainOldData, RepSkip, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct OpenInputPlugin.BPOpenVRSkeletalPair
struct FBPOpenVRSkeletalPair
{
public:
	enum class EVROpenInputBones                 OpenVRBone;                                        // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_CC7[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  BoneToTarget;                                      // 0x4(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_CC8[0x14];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x40 (0x40 - 0x0)
// ScriptStruct OpenInputPlugin.BPSkeletalMappingData
struct FBPSkeletalMappingData
{
public:
	TArray<struct FBPOpenVRSkeletalPair>         BonePairs;                                         // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                         bMergeMissingBonesUE4;                             // 0x10(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EVRActionHand                     TargetHand;                                        // 0x11(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_CC9[0x2E];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xA8 (0x170 - 0xC8)
// ScriptStruct OpenInputPlugin.AnimNode_ApplyOpenInputTransform
struct FAnimNode_ApplyOpenInputTransform : public FAnimNode_SkeletalControlBase
{
public:
	enum class EVROpenVRSkeletonType             SkeletonType;                                      // 0xC8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bSkipRootBone;                                     // 0xC9(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bOnlyApplyWristTransform;                          // 0xCA(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_CCA[0x5];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FBPOpenVRActionSkeletalData           OptionalStoredActionInfo;                          // 0xD0(0x50)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FBPSkeletalMappingData                MappedBonePairs;                                   // 0x120(0x40)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	uint8                                        Pad_CCB[0x10];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// ScriptStruct OpenInputPlugin.BPOpenVRGesturePoseData
struct FBPOpenVRGesturePoseData
{
public:
	TArray<float>                                PoseFingerCurls;                                   // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, RepSkip, NativeAccessSpecifierPublic)
	TArray<float>                                PoseFingerSplays;                                  // 0x10(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, RepSkip, NativeAccessSpecifierPublic)
};

// 0x58 (0x58 - 0x0)
// ScriptStruct OpenInputPlugin.BPSkeletalRepContainer
struct FBPSkeletalRepContainer
{
public:
	enum class EVRActionHand                     TargetHand;                                        // 0x0(0x1)(ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EVRSkeletalReplicationType        ReplicationType;                                   // 0x1(0x1)(ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_CCC[0x6];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FBPOpenVRGesturePoseData              PoseFingerData;                                    // 0x8(0x20)(Transient, RepSkip, NativeAccessSpecifierPublic)
	bool                                         bAllowDeformingMesh;                               // 0x28(0x1)(ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_CCD[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FTransform>                    SkeletalTransforms;                                // 0x30(0x10)(ZeroConstructor, Transient, RepSkip, NativeAccessSpecifierPublic)
	uint8                                        BoneCount;                                         // 0x40(0x1)(ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_CCE[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<uint8>                                CompressedTransforms;                              // 0x48(0x10)(ZeroConstructor, Transient, RepSkip, NativeAccessSpecifierPublic)
};

// 0xF0 (0xF0 - 0x0)
// ScriptStruct OpenInputPlugin.BPOpenVRActionInfo
struct FBPOpenVRActionInfo
{
public:
	bool                                         bGetSkeletalTransforms_WithController;             // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_CCF[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                ActionName;                                        // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, RepSkip, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_CD0[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FBPOpenVRActionSkeletalData           SkeletalData;                                      // 0x20(0x50)(Edit, BlueprintVisible, RepSkip, NativeAccessSpecifierPublic)
	TArray<int32>                                BoneParentIndexes;                                 // 0x70(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NativeAccessSpecifierPublic)
	struct FBPOpenVRGesturePoseData              PoseFingerData;                                    // 0x80(0x20)(BlueprintVisible, BlueprintReadOnly, Transient, RepSkip, NativeAccessSpecifierPublic)
	TArray<struct FTransform>                    OldSkeletalTransforms;                             // 0xA0(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NativeAccessSpecifierPublic)
	bool                                         bHasValidData;                                     // 0xB0(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EVROpenInputSkeletalTrackingLevel SkeletalTrackingLevel;                             // 0xB1(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_CD1[0x1E];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<uint8>                                CompressedTransforms;                              // 0xD0(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	uint32                                       CompressedSize;                                    // 0xE0(0x4)(ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int8                                         BoneCount;                                         // 0xE4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_CD2[0xB];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// ScriptStruct OpenInputPlugin.BPOpenVRActionHandle
struct FBPOpenVRActionHandle
{
public:
	uint8                                        Pad_CD3[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x790 - 0x770)
// ScriptStruct OpenInputPlugin.OpenInputAnimInstanceProxy
struct FOpenInputAnimInstanceProxy : public FAnimInstanceProxy
{
public:
	uint8                                        Pad_CD4[0x20];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xC (0xC - 0x0)
// ScriptStruct OpenInputPlugin.OpenInputGestureFingerPosition
struct FOpenInputGestureFingerPosition
{
public:
	enum class EVROpenInputFingerIndexType       IndexType;                                         // 0x0(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_CD5[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Value;                                             // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Threshold;                                         // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct OpenInputPlugin.OpenInputGesture
struct FOpenInputGesture
{
public:
	class FName                                  Name;                                              // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FOpenInputGestureFingerPosition> FingerValues;                                      // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                         bUseFingerCurlOnly;                                // 0x18(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_CD6[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

}



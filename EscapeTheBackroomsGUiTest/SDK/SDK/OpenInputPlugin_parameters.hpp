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

// 0x3 (0x3 - 0x0)
// Function OpenInputPlugin.OpenInputFunctionLibrary.GetSkeletalTrackingLevel
struct UOpenInputFunctionLibrary_GetSkeletalTrackingLevel_Params
{
public:
	enum class EVROpenInputSkeletalTrackingLevel SkeletalTrackingLevelOut;                          // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EVRActionHand                     HandToRetreive;                                    // 0x1(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x2(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x110 (0x110 - 0x0)
// Function OpenInputPlugin.OpenInputFunctionLibrary.GetReferencePose
struct UOpenInputFunctionLibrary_GetReferencePose_Params
{
public:
	struct FBPOpenVRActionInfo                   BlankActionToFill;                                 // 0x0(0xF0)(Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FBPOpenVRActionHandle                 ActionHandleToQuery;                               // 0xF0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	class UObject*                               WorldContextObject;                                // 0xF8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EVROpenInputReferencePose         PoseTypeToRetreive;                                // 0x100(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x101(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_C6E[0xE];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x130 (0x130 - 0x0)
// Function OpenInputPlugin.OpenInputFunctionLibrary.GetOpenVRBoneTransform
struct UOpenInputFunctionLibrary_GetOpenVRBoneTransform_Params
{
public:
	enum class EVROpenInputBones                 BoneToGet;                                         // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_C75[0xF];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FBPOpenVRActionInfo                   HandSkeletalAction;                                // 0x10(0xF0)(Parm, NativeAccessSpecifierPublic)
	struct FTransform                            ReturnValue;                                       // 0x100(0x30)(Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x48 (0x48 - 0x0)
// Function OpenInputPlugin.OpenInputFunctionLibrary.GetHandCurlAndSplayValues
struct UOpenInputFunctionLibrary_GetHandCurlAndSplayValues_Params
{
public:
	enum class EVRActionHand                     TargetHand;                                        // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_C80[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FBPOpenVRGesturePoseData              CurlAndSplayValuesOut;                             // 0x8(0x20)(Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class UObject*                               WorldContextObject;                                // 0x28(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                OptionalCustomActionName;                          // 0x30(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x40(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_C81[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x100 (0x100 - 0x0)
// Function OpenInputPlugin.OpenInputFunctionLibrary.GetActionPose
struct UOpenInputFunctionLibrary_GetActionPose_Params
{
public:
	struct FBPOpenVRActionInfo                   Action;                                            // 0x0(0xF0)(Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class UObject*                               WorldContextObject;                                // 0xF0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bGetCompressedData;                                // 0xF8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bGetGestureValues;                                 // 0xF9(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0xFA(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_C82[0x5];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x150 (0x150 - 0x0)
// Function OpenInputPlugin.OpenInputFunctionLibrary.FillRepContainerFromActionInfo
struct UOpenInputFunctionLibrary_FillRepContainerFromActionInfo_Params
{
public:
	struct FBPOpenVRActionInfo                   ActionInfo;                                        // 0x0(0xF0)(Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FBPSkeletalRepContainer               TargetRepContainer;                                // 0xF0(0x58)(Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	enum class EVRSkeletalReplicationType        ReplicationType;                                   // 0x148(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_C83[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x160 (0x160 - 0x0)
// Function OpenInputPlugin.OpenInputFunctionLibrary.FillActionInfoFromRepContainer
struct UOpenInputFunctionLibrary_FillActionInfoFromRepContainer_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_C90[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FBPOpenVRActionInfo                   ActionInfo;                                        // 0x10(0xF0)(Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FBPSkeletalRepContainer               TargetRepContainer;                                // 0x100(0x58)(Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	uint8                                        Pad_C91[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x1 (0x1 - 0x0)
// Function OpenInputPlugin.OpenInputSkeletalMeshComponent.SetDetectGestures
struct UOpenInputSkeletalMeshComponent_SetDetectGestures_Params
{
public:
	bool                                         bNewDetectGestures;                                // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x58 (0x58 - 0x0)
// Function OpenInputPlugin.OpenInputSkeletalMeshComponent.Server_SendSkeletalTransforms
struct UOpenInputSkeletalMeshComponent_Server_SendSkeletalTransforms_Params
{
public:
	struct FBPSkeletalRepContainer               SkeletalInfo;                                      // 0x0(0x58)(ConstParm, Parm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// Function OpenInputPlugin.OpenInputSkeletalMeshComponent.SaveCurrentPose
struct UOpenInputSkeletalMeshComponent_SaveCurrentPose_Params
{
public:
	class FName                                  RecordingName;                                     // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUseFingerCurlOnly;                                // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EVRActionHand                     HandToSave;                                        // 0x9(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_CAA[0x2];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x120 (0x120 - 0x0)
// Function OpenInputPlugin.OpenInputSkeletalMeshComponent.K2_DetectCurrentPose
struct UOpenInputSkeletalMeshComponent_K2_DetectCurrentPose_Params
{
public:
	struct FBPOpenVRActionInfo                   SkeletalAction;                                    // 0x0(0xF0)(Parm, OutParm, NativeAccessSpecifierPublic)
	struct FOpenInputGesture                     GestureOut;                                        // 0xF0(0x20)(Parm, OutParm, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x110(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_CAC[0xF];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x30 (0x30 - 0x0)
// Function OpenInputPlugin.OpenInputSkeletalMeshComponent.GetFingerCurlAndSplayData
struct UOpenInputSkeletalMeshComponent_GetFingerCurlAndSplayData_Params
{
public:
	enum class EVRActionHand                     TargetHand;                                        // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_CAD[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FBPOpenVRGesturePoseData              OutFingerPoseData;                                 // 0x8(0x20)(Parm, OutParm, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x28(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_CAE[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x40 (0x40 - 0x0)
// Function OpenInputPlugin.OpenInputAnimInstance.InitializeCustomBoneMapping
struct UOpenInputAnimInstance_InitializeCustomBoneMapping_Params
{
public:
	struct FBPSkeletalMappingData                SkeletalMappingData;                               // 0x0(0x40)(Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

}
}



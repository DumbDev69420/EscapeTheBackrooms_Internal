#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// Class OpenInputPlugin.OpenInputFunctionLibrary
class UOpenInputFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UOpenInputFunctionLibrary* GetDefaultObj();

	bool GetSkeletalTrackingLevel(enum class EVROpenInputSkeletalTrackingLevel* SkeletalTrackingLevelOut, enum class EVRActionHand HandToRetreive);
	bool GetReferencePose(struct FBPOpenVRActionInfo& BlankActionToFill, const struct FBPOpenVRActionHandle& ActionHandleToQuery, class UObject* WorldContextObject, enum class EVROpenInputReferencePose PoseTypeToRetreive);
	struct FTransform GetOpenVRBoneTransform(enum class EVROpenInputBones BoneToGet, const struct FBPOpenVRActionInfo& HandSkeletalAction);
	bool GetHandCurlAndSplayValues(enum class EVRActionHand TargetHand, struct FBPOpenVRGesturePoseData& CurlAndSplayValuesOut, class UObject* WorldContextObject, const class FString& OptionalCustomActionName);
	bool GetActionPose(struct FBPOpenVRActionInfo& Action, class UObject* WorldContextObject, bool bGetCompressedData, bool bGetGestureValues);
	void FillRepContainerFromActionInfo(struct FBPOpenVRActionInfo& ActionInfo, struct FBPSkeletalRepContainer& TargetRepContainer, enum class EVRSkeletalReplicationType ReplicationType);
	void FillActionInfoFromRepContainer(class UObject* WorldContextObject, struct FBPOpenVRActionInfo& ActionInfo, struct FBPSkeletalRepContainer& TargetRepContainer);
};

// 0x10 (0x40 - 0x30)
// Class OpenInputPlugin.OpenInputGestureDatabase
class UOpenInputGestureDatabase : public UDataAsset
{
public:
	TArray<struct FOpenInputGesture>             Gestures;                                          // 0x30(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UOpenInputGestureDatabase* GetDefaultObj();

};

// 0x198 (0x1060 - 0xEC8)
// Class OpenInputPlugin.OpenInputSkeletalMeshComponent
class UOpenInputSkeletalMeshComponent : public USkeletalMeshComponent
{
public:
	bool                                         bDetectGestures;                                   // 0xEC8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_CAF[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            OnNewGestureDetected;                              // 0xED0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnGestureEnded;                                    // 0xEE0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	class UOpenInputGestureDatabase*             GesturesDB;                                        // 0xEF0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bOffsetByControllerProfile;                        // 0xEF8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_CB1[0x3F];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FBPOpenVRActionInfo>           HandSkeletalActions;                               // 0xF38(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FBPSkeletalRepContainer               LeftHandRep;                                       // 0xF48(0x58)(Net, Transient, RepNotify, NativeAccessSpecifierPublic)
	struct FBPSkeletalRepContainer               RightHandRep;                                      // 0xFA0(0x58)(Net, Transient, RepNotify, NativeAccessSpecifierPublic)
	uint8                                        Pad_CB2[0x48];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         bReplicateSkeletalData;                            // 0x1040(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bSmoothReplicatedSkeletalData;                     // 0x1041(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_CB4[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        ReplicationRateForSkeletalAnimations;              // 0x1044(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EVRSkeletalReplicationType        ReplicationType;                                   // 0x1048(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_CB5[0x17];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UOpenInputSkeletalMeshComponent* GetDefaultObj();

	void SetDetectGestures(bool bNewDetectGestures);
	void Server_SendSkeletalTransforms(struct FBPSkeletalRepContainer& SkeletalInfo);
	void SaveCurrentPose(class FName RecordingName, bool bUseFingerCurlOnly, enum class EVRActionHand HandToSave);
	void OnRep_SkeletalTransformRight();
	void OnRep_SkeletalTransformLeft();
	void NewControllerProfileLoaded();
	bool K2_DetectCurrentPose(struct FBPOpenVRActionInfo* SkeletalAction, struct FOpenInputGesture* GestureOut);
	bool GetFingerCurlAndSplayData(enum class EVRActionHand TargetHand, struct FBPOpenVRGesturePoseData* OutFingerPoseData);
};

// 0x798 (0xA50 - 0x2B8)
// Class OpenInputPlugin.OpenInputAnimInstance
class UOpenInputAnimInstance : public UAnimInstance
{
public:
	class UOpenInputSkeletalMeshComponent*       OwningMesh;                                        // 0x2B8(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_CB6[0x790];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UOpenInputAnimInstance* GetDefaultObj();

	void InitializeCustomBoneMapping(struct FBPSkeletalMappingData& SkeletalMappingData);
};

}



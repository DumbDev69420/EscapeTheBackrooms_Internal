#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class OpenInputPlugin.OpenInputFunctionLibrary
// (None)

class UClass* UOpenInputFunctionLibrary::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("OpenInputFunctionLibrary");

	return Clss;
}


// OpenInputFunctionLibrary OpenInputPlugin.Default__OpenInputFunctionLibrary
// (Public, ClassDefaultObject, ArchetypeObject)

class UOpenInputFunctionLibrary* UOpenInputFunctionLibrary::GetDefaultObj()
{
	static class UOpenInputFunctionLibrary* Default = nullptr;

	if (!Default)
		Default = static_cast<UOpenInputFunctionLibrary*>(UOpenInputFunctionLibrary::StaticClass()->DefaultObject);

	return Default;
}


// Function OpenInputPlugin.OpenInputFunctionLibrary.GetSkeletalTrackingLevel
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// enum class EVROpenInputSkeletalTrackingLevelSkeletalTrackingLevelOut                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EVRActionHand           HandToRetreive                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UOpenInputFunctionLibrary::GetSkeletalTrackingLevel(enum class EVROpenInputSkeletalTrackingLevel* SkeletalTrackingLevelOut, enum class EVRActionHand HandToRetreive)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OpenInputFunctionLibrary", "GetSkeletalTrackingLevel");

	Params::UOpenInputFunctionLibrary_GetSkeletalTrackingLevel_Params Parms{};

	Parms.HandToRetreive = HandToRetreive;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (SkeletalTrackingLevelOut != nullptr)
		*SkeletalTrackingLevelOut = Parms.SkeletalTrackingLevelOut;

	return Parms.ReturnValue;

}


// Function OpenInputPlugin.OpenInputFunctionLibrary.GetReferencePose
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FBPOpenVRActionInfo         BlankActionToFill                                                (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FBPOpenVRActionHandle       ActionHandleToQuery                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EVROpenInputReferencePosePoseTypeToRetreive                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UOpenInputFunctionLibrary::GetReferencePose(struct FBPOpenVRActionInfo& BlankActionToFill, const struct FBPOpenVRActionHandle& ActionHandleToQuery, class UObject* WorldContextObject, enum class EVROpenInputReferencePose PoseTypeToRetreive)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OpenInputFunctionLibrary", "GetReferencePose");

	Params::UOpenInputFunctionLibrary_GetReferencePose_Params Parms{};

	Parms.BlankActionToFill = BlankActionToFill;
	Parms.ActionHandleToQuery = ActionHandleToQuery;
	Parms.WorldContextObject = WorldContextObject;
	Parms.PoseTypeToRetreive = PoseTypeToRetreive;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function OpenInputPlugin.OpenInputFunctionLibrary.GetOpenVRBoneTransform
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// enum class EVROpenInputBones       BoneToGet                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FBPOpenVRActionInfo         HandSkeletalAction                                               (Parm, NativeAccessSpecifierPublic)
// struct FTransform                  ReturnValue                                                      (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

struct FTransform UOpenInputFunctionLibrary::GetOpenVRBoneTransform(enum class EVROpenInputBones BoneToGet, const struct FBPOpenVRActionInfo& HandSkeletalAction)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OpenInputFunctionLibrary", "GetOpenVRBoneTransform");

	Params::UOpenInputFunctionLibrary_GetOpenVRBoneTransform_Params Parms{};

	Parms.BoneToGet = BoneToGet;
	Parms.HandSkeletalAction = HandSkeletalAction;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function OpenInputPlugin.OpenInputFunctionLibrary.GetHandCurlAndSplayValues
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// enum class EVRActionHand           TargetHand                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FBPOpenVRGesturePoseData    CurlAndSplayValuesOut                                            (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      OptionalCustomActionName                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UOpenInputFunctionLibrary::GetHandCurlAndSplayValues(enum class EVRActionHand TargetHand, struct FBPOpenVRGesturePoseData& CurlAndSplayValuesOut, class UObject* WorldContextObject, const class FString& OptionalCustomActionName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OpenInputFunctionLibrary", "GetHandCurlAndSplayValues");

	Params::UOpenInputFunctionLibrary_GetHandCurlAndSplayValues_Params Parms{};

	Parms.TargetHand = TargetHand;
	Parms.CurlAndSplayValuesOut = CurlAndSplayValuesOut;
	Parms.WorldContextObject = WorldContextObject;
	Parms.OptionalCustomActionName = OptionalCustomActionName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function OpenInputPlugin.OpenInputFunctionLibrary.GetActionPose
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FBPOpenVRActionInfo         Action                                                           (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bGetCompressedData                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bGetGestureValues                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UOpenInputFunctionLibrary::GetActionPose(struct FBPOpenVRActionInfo& Action, class UObject* WorldContextObject, bool bGetCompressedData, bool bGetGestureValues)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OpenInputFunctionLibrary", "GetActionPose");

	Params::UOpenInputFunctionLibrary_GetActionPose_Params Parms{};

	Parms.Action = Action;
	Parms.WorldContextObject = WorldContextObject;
	Parms.bGetCompressedData = bGetCompressedData;
	Parms.bGetGestureValues = bGetGestureValues;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function OpenInputPlugin.OpenInputFunctionLibrary.FillRepContainerFromActionInfo
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FBPOpenVRActionInfo         ActionInfo                                                       (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FBPSkeletalRepContainer     TargetRepContainer                                               (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// enum class EVRSkeletalReplicationTypeReplicationType                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UOpenInputFunctionLibrary::FillRepContainerFromActionInfo(struct FBPOpenVRActionInfo& ActionInfo, struct FBPSkeletalRepContainer& TargetRepContainer, enum class EVRSkeletalReplicationType ReplicationType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OpenInputFunctionLibrary", "FillRepContainerFromActionInfo");

	Params::UOpenInputFunctionLibrary_FillRepContainerFromActionInfo_Params Parms{};

	Parms.ActionInfo = ActionInfo;
	Parms.TargetRepContainer = TargetRepContainer;
	Parms.ReplicationType = ReplicationType;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function OpenInputPlugin.OpenInputFunctionLibrary.FillActionInfoFromRepContainer
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FBPOpenVRActionInfo         ActionInfo                                                       (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FBPSkeletalRepContainer     TargetRepContainer                                               (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UOpenInputFunctionLibrary::FillActionInfoFromRepContainer(class UObject* WorldContextObject, struct FBPOpenVRActionInfo& ActionInfo, struct FBPSkeletalRepContainer& TargetRepContainer)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OpenInputFunctionLibrary", "FillActionInfoFromRepContainer");

	Params::UOpenInputFunctionLibrary_FillActionInfoFromRepContainer_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.ActionInfo = ActionInfo;
	Parms.TargetRepContainer = TargetRepContainer;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class OpenInputPlugin.OpenInputGestureDatabase
// (None)

class UClass* UOpenInputGestureDatabase::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("OpenInputGestureDatabase");

	return Clss;
}


// OpenInputGestureDatabase OpenInputPlugin.Default__OpenInputGestureDatabase
// (Public, ClassDefaultObject, ArchetypeObject)

class UOpenInputGestureDatabase* UOpenInputGestureDatabase::GetDefaultObj()
{
	static class UOpenInputGestureDatabase* Default = nullptr;

	if (!Default)
		Default = static_cast<UOpenInputGestureDatabase*>(UOpenInputGestureDatabase::StaticClass()->DefaultObject);

	return Default;
}


// Class OpenInputPlugin.OpenInputSkeletalMeshComponent
// (SceneComponent, PrimitiveComponent, SkinnedMeshComponent, SkeletalMeshComponent)

class UClass* UOpenInputSkeletalMeshComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("OpenInputSkeletalMeshComponent");

	return Clss;
}


// OpenInputSkeletalMeshComponent OpenInputPlugin.Default__OpenInputSkeletalMeshComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UOpenInputSkeletalMeshComponent* UOpenInputSkeletalMeshComponent::GetDefaultObj()
{
	static class UOpenInputSkeletalMeshComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UOpenInputSkeletalMeshComponent*>(UOpenInputSkeletalMeshComponent::StaticClass()->DefaultObject);

	return Default;
}


// Function OpenInputPlugin.OpenInputSkeletalMeshComponent.SetDetectGestures
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bNewDetectGestures                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UOpenInputSkeletalMeshComponent::SetDetectGestures(bool bNewDetectGestures)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OpenInputSkeletalMeshComponent", "SetDetectGestures");

	Params::UOpenInputSkeletalMeshComponent_SetDetectGestures_Params Parms{};

	Parms.bNewDetectGestures = bNewDetectGestures;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function OpenInputPlugin.OpenInputSkeletalMeshComponent.Server_SendSkeletalTransforms
// (Net, Native, Event, Public, NetServer, NetValidate)
// Parameters:
// struct FBPSkeletalRepContainer     SkeletalInfo                                                     (ConstParm, Parm, ReferenceParm, NativeAccessSpecifierPublic)

void UOpenInputSkeletalMeshComponent::Server_SendSkeletalTransforms(struct FBPSkeletalRepContainer& SkeletalInfo)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OpenInputSkeletalMeshComponent", "Server_SendSkeletalTransforms");

	Params::UOpenInputSkeletalMeshComponent_Server_SendSkeletalTransforms_Params Parms{};

	Parms.SkeletalInfo = SkeletalInfo;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function OpenInputPlugin.OpenInputSkeletalMeshComponent.SaveCurrentPose
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FName                        RecordingName                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bUseFingerCurlOnly                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EVRActionHand           HandToSave                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UOpenInputSkeletalMeshComponent::SaveCurrentPose(class FName RecordingName, bool bUseFingerCurlOnly, enum class EVRActionHand HandToSave)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OpenInputSkeletalMeshComponent", "SaveCurrentPose");

	Params::UOpenInputSkeletalMeshComponent_SaveCurrentPose_Params Parms{};

	Parms.RecordingName = RecordingName;
	Parms.bUseFingerCurlOnly = bUseFingerCurlOnly;
	Parms.HandToSave = HandToSave;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function OpenInputPlugin.OpenInputSkeletalMeshComponent.OnRep_SkeletalTransformRight
// (Native, Public)
// Parameters:

void UOpenInputSkeletalMeshComponent::OnRep_SkeletalTransformRight()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OpenInputSkeletalMeshComponent", "OnRep_SkeletalTransformRight");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function OpenInputPlugin.OpenInputSkeletalMeshComponent.OnRep_SkeletalTransformLeft
// (Native, Public)
// Parameters:

void UOpenInputSkeletalMeshComponent::OnRep_SkeletalTransformLeft()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OpenInputSkeletalMeshComponent", "OnRep_SkeletalTransformLeft");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function OpenInputPlugin.OpenInputSkeletalMeshComponent.NewControllerProfileLoaded
// (Final, Native, Public)
// Parameters:

void UOpenInputSkeletalMeshComponent::NewControllerProfileLoaded()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OpenInputSkeletalMeshComponent", "NewControllerProfileLoaded");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function OpenInputPlugin.OpenInputSkeletalMeshComponent.K2_DetectCurrentPose
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FBPOpenVRActionInfo         SkeletalAction                                                   (Parm, OutParm, NativeAccessSpecifierPublic)
// struct FOpenInputGesture           GestureOut                                                       (Parm, OutParm, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UOpenInputSkeletalMeshComponent::K2_DetectCurrentPose(struct FBPOpenVRActionInfo* SkeletalAction, struct FOpenInputGesture* GestureOut)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OpenInputSkeletalMeshComponent", "K2_DetectCurrentPose");

	Params::UOpenInputSkeletalMeshComponent_K2_DetectCurrentPose_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (SkeletalAction != nullptr)
		*SkeletalAction = std::move(Parms.SkeletalAction);

	if (GestureOut != nullptr)
		*GestureOut = std::move(Parms.GestureOut);

	return Parms.ReturnValue;

}


// Function OpenInputPlugin.OpenInputSkeletalMeshComponent.GetFingerCurlAndSplayData
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// enum class EVRActionHand           TargetHand                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FBPOpenVRGesturePoseData    OutFingerPoseData                                                (Parm, OutParm, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UOpenInputSkeletalMeshComponent::GetFingerCurlAndSplayData(enum class EVRActionHand TargetHand, struct FBPOpenVRGesturePoseData* OutFingerPoseData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OpenInputSkeletalMeshComponent", "GetFingerCurlAndSplayData");

	Params::UOpenInputSkeletalMeshComponent_GetFingerCurlAndSplayData_Params Parms{};

	Parms.TargetHand = TargetHand;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutFingerPoseData != nullptr)
		*OutFingerPoseData = std::move(Parms.OutFingerPoseData);

	return Parms.ReturnValue;

}


// Class OpenInputPlugin.OpenInputAnimInstance
// (None)

class UClass* UOpenInputAnimInstance::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("OpenInputAnimInstance");

	return Clss;
}


// OpenInputAnimInstance OpenInputPlugin.Default__OpenInputAnimInstance
// (Public, ClassDefaultObject, ArchetypeObject)

class UOpenInputAnimInstance* UOpenInputAnimInstance::GetDefaultObj()
{
	static class UOpenInputAnimInstance* Default = nullptr;

	if (!Default)
		Default = static_cast<UOpenInputAnimInstance*>(UOpenInputAnimInstance::StaticClass()->DefaultObject);

	return Default;
}


// Function OpenInputPlugin.OpenInputAnimInstance.InitializeCustomBoneMapping
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FBPSkeletalMappingData      SkeletalMappingData                                              (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UOpenInputAnimInstance::InitializeCustomBoneMapping(struct FBPSkeletalMappingData& SkeletalMappingData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OpenInputAnimInstance", "InitializeCustomBoneMapping");

	Params::UOpenInputAnimInstance_InitializeCustomBoneMapping_Params Parms{};

	Parms.SkeletalMappingData = SkeletalMappingData;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}

}



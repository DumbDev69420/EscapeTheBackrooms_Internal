#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class Backrooms.AI_ObjectWC
// (None)

class UClass* UAI_ObjectWC::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AI_ObjectWC");

	return Clss;
}


// AI_ObjectWC Backrooms.Default__AI_ObjectWC
// (Public, ClassDefaultObject, ArchetypeObject)

class UAI_ObjectWC* UAI_ObjectWC::GetDefaultObj()
{
	static class UAI_ObjectWC* Default = nullptr;

	if (!Default)
		Default = static_cast<UAI_ObjectWC*>(UAI_ObjectWC::StaticClass()->DefaultObject);

	return Default;
}


// Function Backrooms.AI_ObjectWC.StartExecute
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UAI_ObjectWC::StartExecute()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AI_ObjectWC", "StartExecute");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function Backrooms.AI_ObjectWC.OnUpdate
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UAI_ObjectWC::OnUpdate()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AI_ObjectWC", "OnUpdate");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function Backrooms.AI_ObjectWC.GetWeight
// (Native, Event, Public, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UAI_ObjectWC::GetWeight()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AI_ObjectWC", "GetWeight");

	Params::UAI_ObjectWC_GetWeight_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Backrooms.AI_ObjectWC.FinishExecute
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UAI_ObjectWC::FinishExecute()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AI_ObjectWC", "FinishExecute");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Class Backrooms.BackroomsBPFunctionLibrary
// (None)

class UClass* UBackroomsBPFunctionLibrary::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BackroomsBPFunctionLibrary");

	return Clss;
}


// BackroomsBPFunctionLibrary Backrooms.Default__BackroomsBPFunctionLibrary
// (Public, ClassDefaultObject, ArchetypeObject)

class UBackroomsBPFunctionLibrary* UBackroomsBPFunctionLibrary::GetDefaultObj()
{
	static class UBackroomsBPFunctionLibrary* Default = nullptr;

	if (!Default)
		Default = static_cast<UBackroomsBPFunctionLibrary*>(UBackroomsBPFunctionLibrary::StaticClass()->DefaultObject);

	return Default;
}


// Function Backrooms.BackroomsBPFunctionLibrary.SetLogValue
// (Final, Native, Static, Private, BlueprintCallable)
// Parameters:
// class FString                      Key                                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Value                                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UBackroomsBPFunctionLibrary::SetLogValue(const class FString& Key, const class FString& Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BackroomsBPFunctionLibrary", "SetLogValue");

	Params::UBackroomsBPFunctionLibrary_SetLogValue_Params Parms{};

	Parms.Key = Key;
	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Backrooms.BackroomsBPFunctionLibrary.SetCurrentLevelLogs
// (Final, Native, Static, Private, BlueprintCallable)
// Parameters:
// class FString                      LevelName                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UBackroomsBPFunctionLibrary::SetCurrentLevelLogs(const class FString& LevelName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BackroomsBPFunctionLibrary", "SetCurrentLevelLogs");

	Params::UBackroomsBPFunctionLibrary_SetCurrentLevelLogs_Params Parms{};

	Parms.LevelName = LevelName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Backrooms.BackroomsBPFunctionLibrary.SaveToClipboard
// (Final, Native, Static, Private, BlueprintCallable)
// Parameters:
// class FString                      ToClipboard                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UBackroomsBPFunctionLibrary::SaveToClipboard(const class FString& ToClipboard)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BackroomsBPFunctionLibrary", "SaveToClipboard");

	Params::UBackroomsBPFunctionLibrary_SaveToClipboard_Params Parms{};

	Parms.ToClipboard = ToClipboard;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Backrooms.BackroomsBPFunctionLibrary.ResetWorldTime
// (Final, Native, Static, Private, BlueprintCallable)
// Parameters:
// class AGameMode*                   GameMode                                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UBackroomsBPFunctionLibrary::ResetWorldTime(class AGameMode* GameMode)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BackroomsBPFunctionLibrary", "ResetWorldTime");

	Params::UBackroomsBPFunctionLibrary_ResetWorldTime_Params Parms{};

	Parms.GameMode = GameMode;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Backrooms.BackroomsBPFunctionLibrary.ResetInputSettings
// (Final, Native, Static, Private, BlueprintCallable)
// Parameters:

void UBackroomsBPFunctionLibrary::ResetInputSettings()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BackroomsBPFunctionLibrary", "ResetInputSettings");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function Backrooms.BackroomsBPFunctionLibrary.ReloadBindings
// (Final, Native, Static, Private, BlueprintCallable)
// Parameters:

void UBackroomsBPFunctionLibrary::ReloadBindings()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BackroomsBPFunctionLibrary", "ReloadBindings");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function Backrooms.BackroomsBPFunctionLibrary.PlayRate
// (Final, Native, Static, Private, BlueprintCallable)
// Parameters:
// class UTimelineComponent*          Timeline                                                         (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Sec                                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UTimelineComponent*          ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UTimelineComponent* UBackroomsBPFunctionLibrary::PlayRate(class UTimelineComponent* Timeline, float Sec)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BackroomsBPFunctionLibrary", "PlayRate");

	Params::UBackroomsBPFunctionLibrary_PlayRate_Params Parms{};

	Parms.Timeline = Timeline;
	Parms.Sec = Sec;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Backrooms.BackroomsBPFunctionLibrary.LoadXP
// (Final, Native, Static, Private, BlueprintCallable)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UBackroomsBPFunctionLibrary::LoadXP()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BackroomsBPFunctionLibrary", "LoadXP");

	Params::UBackroomsBPFunctionLibrary_LoadXP_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Backrooms.BackroomsBPFunctionLibrary.K2_IsTearingDown
// (Final, Native, Static, Private, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                     Caller                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               IsTearingDown                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UBackroomsBPFunctionLibrary::K2_IsTearingDown(class UObject* Caller, bool* IsTearingDown)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BackroomsBPFunctionLibrary", "K2_IsTearingDown");

	Params::UBackroomsBPFunctionLibrary_K2_IsTearingDown_Params Parms{};

	Parms.Caller = Caller;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (IsTearingDown != nullptr)
		*IsTearingDown = Parms.IsTearingDown;

}


// Function Backrooms.BackroomsBPFunctionLibrary.IsNoHMDMode
// (Final, Native, Static, Private, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UBackroomsBPFunctionLibrary::IsNoHMDMode()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BackroomsBPFunctionLibrary", "IsNoHMDMode");

	Params::UBackroomsBPFunctionLibrary_IsNoHMDMode_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Backrooms.BackroomsBPFunctionLibrary.GetSystemTimeSeconds
// (Final, Native, Static, Private, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FDateTime                   DateTime                                                         (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UBackroomsBPFunctionLibrary::GetSystemTimeSeconds(const struct FDateTime& DateTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BackroomsBPFunctionLibrary", "GetSystemTimeSeconds");

	Params::UBackroomsBPFunctionLibrary_GetSystemTimeSeconds_Params Parms{};

	Parms.DateTime = DateTime;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Backrooms.BackroomsBPFunctionLibrary.GetSplinePoints
// (Final, Native, Static, Private, BlueprintCallable, BlueprintPure)
// Parameters:
// class USplineComponent*            SplineComponent                                                  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FVector>             ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<struct FVector> UBackroomsBPFunctionLibrary::GetSplinePoints(class USplineComponent* SplineComponent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BackroomsBPFunctionLibrary", "GetSplinePoints");

	Params::UBackroomsBPFunctionLibrary_GetSplinePoints_Params Parms{};

	Parms.SplineComponent = SplineComponent;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Backrooms.BackroomsBPFunctionLibrary.GetSaveGameSlotsByType
// (Final, Native, Static, Private, BlueprintCallable)
// Parameters:
// class FString                      Prefix                                                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<class FString>              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<class FString> UBackroomsBPFunctionLibrary::GetSaveGameSlotsByType(const class FString& Prefix)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BackroomsBPFunctionLibrary", "GetSaveGameSlotsByType");

	Params::UBackroomsBPFunctionLibrary_GetSaveGameSlotsByType_Params Parms{};

	Parms.Prefix = Prefix;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Backrooms.BackroomsBPFunctionLibrary.GetPlayerStateArray
// (Final, Native, Static, Private, BlueprintCallable, BlueprintPure)
// Parameters:
// class AGameStateBase*              GameState                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<class APlayerState*>        ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<class APlayerState*> UBackroomsBPFunctionLibrary::GetPlayerStateArray(class AGameStateBase* GameState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BackroomsBPFunctionLibrary", "GetPlayerStateArray");

	Params::UBackroomsBPFunctionLibrary_GetPlayerStateArray_Params Parms{};

	Parms.GameState = GameState;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Backrooms.BackroomsBPFunctionLibrary.GetIndexOfClosestSplinePoint
// (Final, Native, Static, Private, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// class USplineComponent*            SplineComponent                                                  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     WorldLocation                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UBackroomsBPFunctionLibrary::GetIndexOfClosestSplinePoint(class USplineComponent* SplineComponent, const struct FVector& WorldLocation)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BackroomsBPFunctionLibrary", "GetIndexOfClosestSplinePoint");

	Params::UBackroomsBPFunctionLibrary_GetIndexOfClosestSplinePoint_Params Parms{};

	Parms.SplineComponent = SplineComponent;
	Parms.WorldLocation = WorldLocation;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Backrooms.BackroomsBPFunctionLibrary.GetDateFromSeconds
// (Final, Native, Static, Private, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// int32                              Seconds                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FDateTime                   ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FDateTime UBackroomsBPFunctionLibrary::GetDateFromSeconds(int32 Seconds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BackroomsBPFunctionLibrary", "GetDateFromSeconds");

	Params::UBackroomsBPFunctionLibrary_GetDateFromSeconds_Params Parms{};

	Parms.Seconds = Seconds;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Backrooms.BackroomsBPFunctionLibrary.GetAllSaveGameSlotNames
// (Final, Native, Static, Private, BlueprintCallable)
// Parameters:
// TArray<class FString>              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<class FString> UBackroomsBPFunctionLibrary::GetAllSaveGameSlotNames()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BackroomsBPFunctionLibrary", "GetAllSaveGameSlotNames");

	Params::UBackroomsBPFunctionLibrary_GetAllSaveGameSlotNames_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Backrooms.BackroomsBPFunctionLibrary.DetectCurrentGesture
// (Final, Native, Static, Private, BlueprintCallable)
// Parameters:
// TArray<float>                      PoseFingerCurls                                                  (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// class UOpenInputGestureDatabase*   GesturesDB                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FName UBackroomsBPFunctionLibrary::DetectCurrentGesture(const TArray<float>& PoseFingerCurls, class UOpenInputGestureDatabase* GesturesDB)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BackroomsBPFunctionLibrary", "DetectCurrentGesture");

	Params::UBackroomsBPFunctionLibrary_DetectCurrentGesture_Params Parms{};

	Parms.PoseFingerCurls = PoseFingerCurls;
	Parms.GesturesDB = GesturesDB;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Backrooms.BackroomsBPFunctionLibrary.DeleteInputSettings
// (Final, Native, Static, Private, BlueprintCallable)
// Parameters:

void UBackroomsBPFunctionLibrary::DeleteInputSettings()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BackroomsBPFunctionLibrary", "DeleteInputSettings");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function Backrooms.BackroomsBPFunctionLibrary.ClearVoice
// (Final, Native, Static, Private, BlueprintCallable)
// Parameters:

void UBackroomsBPFunctionLibrary::ClearVoice()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BackroomsBPFunctionLibrary", "ClearVoice");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function Backrooms.BackroomsBPFunctionLibrary.ClearCharacterFloor
// (Final, Native, Static, Private, BlueprintCallable)
// Parameters:
// class ACharacter*                  Character                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UBackroomsBPFunctionLibrary::ClearCharacterFloor(class ACharacter* Character)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BackroomsBPFunctionLibrary", "ClearCharacterFloor");

	Params::UBackroomsBPFunctionLibrary_ClearCharacterFloor_Params Parms{};

	Parms.Character = Character;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Backrooms.BackroomsBPFunctionLibrary.CanNavigationReachPoint
// (Final, Native, Static, Private, HasDefaults, BlueprintCallable)
// Parameters:
// class APawn*                       Pawn                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     StartLocation                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     EndLocation                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UBackroomsBPFunctionLibrary::CanNavigationReachPoint(class APawn* Pawn, const struct FVector& StartLocation, const struct FVector& EndLocation)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BackroomsBPFunctionLibrary", "CanNavigationReachPoint");

	Params::UBackroomsBPFunctionLibrary_CanNavigationReachPoint_Params Parms{};

	Parms.Pawn = Pawn;
	Parms.StartLocation = StartLocation;
	Parms.EndLocation = EndLocation;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Backrooms.BackroomsBPFunctionLibrary.AddXP
// (Final, Native, Static, Private, BlueprintCallable)
// Parameters:
// float                              XpToAdd                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UBackroomsBPFunctionLibrary::AddXP(float XpToAdd)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BackroomsBPFunctionLibrary", "AddXP");

	Params::UBackroomsBPFunctionLibrary_AddXP_Params Parms{};

	Parms.XpToAdd = XpToAdd;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class Backrooms.BoatComponent
// (None)

class UClass* UBoatComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BoatComponent");

	return Clss;
}


// BoatComponent Backrooms.Default__BoatComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UBoatComponent* UBoatComponent::GetDefaultObj()
{
	static class UBoatComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UBoatComponent*>(UBoatComponent::StaticClass()->DefaultObject);

	return Default;
}


// Function Backrooms.BoatComponent.Server_PassMovementInfo
// (Net, Native, Event, Protected, NetServer)
// Parameters:
// struct FRepXShipMovement           NewRepXShipMovement                                              (ConstParm, Parm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)

void UBoatComponent::Server_PassMovementInfo(struct FRepXShipMovement& NewRepXShipMovement)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BoatComponent", "Server_PassMovementInfo");

	Params::UBoatComponent_Server_PassMovementInfo_Params Parms{};

	Parms.NewRepXShipMovement = NewRepXShipMovement;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Backrooms.BoatComponent.IsEngineInWater
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UBoatComponent::IsEngineInWater()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BoatComponent", "IsEngineInWater");

	Params::UBoatComponent_IsEngineInWater_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Backrooms.BoatComponent.GetXShipPawn
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class ABoatPawn*                   ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class ABoatPawn* UBoatComponent::GetXShipPawn()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BoatComponent", "GetXShipPawn");

	Params::UBoatComponent_GetXShipPawn_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Backrooms.BoatComponent.GetShipBoundsRadius
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UBoatComponent::GetShipBoundsRadius()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BoatComponent", "GetShipBoundsRadius");

	Params::UBoatComponent_GetShipBoundsRadius_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Backrooms.BoatComponent.EnableAllFloaters
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UBoatComponent::EnableAllFloaters()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BoatComponent", "EnableAllFloaters");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function Backrooms.BoatComponent.EnableAllEngines
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UBoatComponent::EnableAllEngines()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BoatComponent", "EnableAllEngines");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function Backrooms.BoatComponent.DisableAllFloaters
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UBoatComponent::DisableAllFloaters()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BoatComponent", "DisableAllFloaters");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function Backrooms.BoatComponent.DisableAllEngines
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UBoatComponent::DisableAllEngines()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BoatComponent", "DisableAllEngines");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Class Backrooms.InteractablePawn
// (Actor, Pawn)

class UClass* AInteractablePawn::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("InteractablePawn");

	return Clss;
}


// InteractablePawn Backrooms.Default__InteractablePawn
// (Public, ClassDefaultObject, ArchetypeObject)

class AInteractablePawn* AInteractablePawn::GetDefaultObj()
{
	static class AInteractablePawn* Default = nullptr;

	if (!Default)
		Default = static_cast<AInteractablePawn*>(AInteractablePawn::StaticClass()->DefaultObject);

	return Default;
}


// Function Backrooms.InteractablePawn.ToggleMouse
// (Net, NetReliable, Native, Event, NetMulticast, Public, BlueprintCallable)
// Parameters:
// bool                               bHide                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AInteractablePawn::ToggleMouse(bool bHide)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InteractablePawn", "ToggleMouse");

	Params::AInteractablePawn_ToggleMouse_Params Parms{};

	Parms.bHide = bHide;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Backrooms.InteractablePawn.SetUsingVR
// (Net, NetReliable, Native, Event, NetMulticast, Public)
// Parameters:
// class ACharacter*                  Character                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bPossess                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AInteractablePawn::SetUsingVR(class ACharacter* Character, bool bPossess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InteractablePawn", "SetUsingVR");

	Params::AInteractablePawn_SetUsingVR_Params Parms{};

	Parms.Character = Character;
	Parms.bPossess = bPossess;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Backrooms.InteractablePawn.SetCameraPostProcessing
// (Net, NetReliable, Native, Event, NetMulticast, Public)
// Parameters:
// class ACharacter*                  Character                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AInteractablePawn::SetCameraPostProcessing(class ACharacter* Character)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InteractablePawn", "SetCameraPostProcessing");

	Params::AInteractablePawn_SetCameraPostProcessing_Params Parms{};

	Parms.Character = Character;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Backrooms.InteractablePawn.ResetUsage
// (Native, Public, BlueprintCallable)
// Parameters:

void AInteractablePawn::ResetUsage()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InteractablePawn", "ResetUsage");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function Backrooms.InteractablePawn.OnVRPossess
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// bool                               bPossess                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AInteractablePawn::OnVRPossess(bool bPossess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InteractablePawn", "OnVRPossess");

	Params::AInteractablePawn_OnVRPossess_Params Parms{};

	Parms.bPossess = bPossess;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Backrooms.InteractablePawn.OnUsedServer
// (Net, NetReliable, Native, Event, Public, NetServer)
// Parameters:
// class ACharacter*                  Character                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AInteractablePawn::OnUsedServer(class ACharacter* Character)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InteractablePawn", "OnUsedServer");

	Params::AInteractablePawn_OnUsedServer_Params Parms{};

	Parms.Character = Character;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Backrooms.InteractablePawn.OnUsedNotify
// (Native, Event, Public, BlueprintEvent)
// Parameters:

void AInteractablePawn::OnUsedNotify()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InteractablePawn", "OnUsedNotify");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function Backrooms.InteractablePawn.OnUsedMulticast
// (Net, NetReliable, Native, Event, NetMulticast, Public)
// Parameters:

void AInteractablePawn::OnUsedMulticast()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InteractablePawn", "OnUsedMulticast");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function Backrooms.InteractablePawn.OnUsedAll
// (Native, Event, Public, BlueprintEvent)
// Parameters:

void AInteractablePawn::OnUsedAll()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InteractablePawn", "OnUsedAll");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function Backrooms.InteractablePawn.OnUnPossess
// (Native, Event, Public, BlueprintEvent)
// Parameters:

void AInteractablePawn::OnUnPossess()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InteractablePawn", "OnUnPossess");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function Backrooms.InteractablePawn.OnStopInteracting
// (Net, NetReliable, Native, Event, Public, NetServer, BlueprintCallable)
// Parameters:

void AInteractablePawn::OnStopInteracting()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InteractablePawn", "OnStopInteracting");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function Backrooms.InteractablePawn.OnStartInteracting
// (Net, NetReliable, Native, Event, Public, NetServer, BlueprintCallable)
// Parameters:
// class ACharacter*                  Character                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AInteractablePawn::OnStartInteracting(class ACharacter* Character)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InteractablePawn", "OnStartInteracting");

	Params::AInteractablePawn_OnStartInteracting_Params Parms{};

	Parms.Character = Character;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Backrooms.InteractablePawn.OnRep_WasUsed
// (Final, Native, Public)
// Parameters:

void AInteractablePawn::OnRep_WasUsed()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InteractablePawn", "OnRep_WasUsed");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function Backrooms.InteractablePawn.OnPossess
// (Native, Event, Public, BlueprintEvent)
// Parameters:

void AInteractablePawn::OnPossess()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InteractablePawn", "OnPossess");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function Backrooms.InteractablePawn.OnHiddenPossess
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// class ACharacter*                  Character                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AInteractablePawn::OnHiddenPossess(class ACharacter* Character)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InteractablePawn", "OnHiddenPossess");

	Params::AInteractablePawn_OnHiddenPossess_Params Parms{};

	Parms.Character = Character;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Backrooms.InteractablePawn.OnAttemptUse
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// bool                               CanUse                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AInteractablePawn::OnAttemptUse(bool CanUse)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InteractablePawn", "OnAttemptUse");

	Params::AInteractablePawn_OnAttemptUse_Params Parms{};

	Parms.CanUse = CanUse;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Backrooms.InteractablePawn.BlockUsage
// (Native, Public, BlueprintCallable)
// Parameters:

void AInteractablePawn::BlockUsage()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InteractablePawn", "BlockUsage");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Class Backrooms.BoatPawn
// (Actor, Pawn)

class UClass* ABoatPawn::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BoatPawn");

	return Clss;
}


// BoatPawn Backrooms.Default__BoatPawn
// (Public, ClassDefaultObject, ArchetypeObject)

class ABoatPawn* ABoatPawn::GetDefaultObj()
{
	static class ABoatPawn* Default = nullptr;

	if (!Default)
		Default = static_cast<ABoatPawn*>(ABoatPawn::StaticClass()->DefaultObject);

	return Default;
}


// Function Backrooms.BoatPawn.GetXShipComponent
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UBoatComponent*              ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UBoatComponent* ABoatPawn::GetXShipComponent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BoatPawn", "GetXShipComponent");

	Params::ABoatPawn_GetXShipComponent_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Backrooms.BoatPawn.GetWaterWorldZ
// (Native, Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector2D                   InLocation                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float ABoatPawn::GetWaterWorldZ(const struct FVector2D& InLocation)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BoatPawn", "GetWaterWorldZ");

	Params::ABoatPawn_GetWaterWorldZ_Params Parms{};

	Parms.InLocation = InLocation;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Backrooms.BoatPawn.GetWaterNormal
// (Native, Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector2D                   InLocation                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FVector ABoatPawn::GetWaterNormal(const struct FVector2D& InLocation)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BoatPawn", "GetWaterNormal");

	Params::ABoatPawn_GetWaterNormal_Params Parms{};

	Parms.InLocation = InLocation;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Backrooms.BoatPawn.GetWaterDensity
// (Native, Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector2D                   InLocation                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float ABoatPawn::GetWaterDensity(const struct FVector2D& InLocation)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BoatPawn", "GetWaterDensity");

	Params::ABoatPawn_GetWaterDensity_Params Parms{};

	Parms.InLocation = InLocation;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Backrooms.BoatPawn.AddRotationInput
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// float                              ScaleValue                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ABoatPawn::AddRotationInput(float ScaleValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BoatPawn", "AddRotationInput");

	Params::ABoatPawn_AddRotationInput_Params Parms{};

	Parms.ScaleValue = ScaleValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class Backrooms.InteractableActor
// (Actor)

class UClass* AInteractableActor::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("InteractableActor");

	return Clss;
}


// InteractableActor Backrooms.Default__InteractableActor
// (Public, ClassDefaultObject, ArchetypeObject)

class AInteractableActor* AInteractableActor::GetDefaultObj()
{
	static class AInteractableActor* Default = nullptr;

	if (!Default)
		Default = static_cast<AInteractableActor*>(AInteractableActor::StaticClass()->DefaultObject);

	return Default;
}


// Function Backrooms.InteractableActor.ResetUsage
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void AInteractableActor::ResetUsage()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InteractableActor", "ResetUsage");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function Backrooms.InteractableActor.OnUsedServer
// (Net, NetReliable, Native, Event, Public, NetServer)
// Parameters:

void AInteractableActor::OnUsedServer()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InteractableActor", "OnUsedServer");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function Backrooms.InteractableActor.OnUsedNotify
// (Native, Event, Public, BlueprintEvent)
// Parameters:

void AInteractableActor::OnUsedNotify()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InteractableActor", "OnUsedNotify");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function Backrooms.InteractableActor.OnUsedMulticast
// (Net, NetReliable, Native, Event, NetMulticast, Public)
// Parameters:

void AInteractableActor::OnUsedMulticast()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InteractableActor", "OnUsedMulticast");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function Backrooms.InteractableActor.OnUsedAll
// (Native, Event, Public, BlueprintEvent)
// Parameters:

void AInteractableActor::OnUsedAll()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InteractableActor", "OnUsedAll");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function Backrooms.InteractableActor.OnRep_WasUsed
// (Final, Native, Public)
// Parameters:

void AInteractableActor::OnRep_WasUsed()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InteractableActor", "OnRep_WasUsed");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function Backrooms.InteractableActor.BlockUsage
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void AInteractableActor::BlockUsage()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InteractableActor", "BlockUsage");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Class Backrooms.ClientInteractableActor
// (Actor)

class UClass* AClientInteractableActor::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ClientInteractableActor");

	return Clss;
}


// ClientInteractableActor Backrooms.Default__ClientInteractableActor
// (Public, ClassDefaultObject, ArchetypeObject)

class AClientInteractableActor* AClientInteractableActor::GetDefaultObj()
{
	static class AClientInteractableActor* Default = nullptr;

	if (!Default)
		Default = static_cast<AClientInteractableActor*>(AClientInteractableActor::StaticClass()->DefaultObject);

	return Default;
}


// Function Backrooms.ClientInteractableActor.OnUsed
// (Native, Event, Public, BlueprintEvent)
// Parameters:

void AClientInteractableActor::OnUsed()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ClientInteractableActor", "OnUsed");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Class Backrooms.ClientInteractablePawn
// (Actor, Pawn)

class UClass* AClientInteractablePawn::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ClientInteractablePawn");

	return Clss;
}


// ClientInteractablePawn Backrooms.Default__ClientInteractablePawn
// (Public, ClassDefaultObject, ArchetypeObject)

class AClientInteractablePawn* AClientInteractablePawn::GetDefaultObj()
{
	static class AClientInteractablePawn* Default = nullptr;

	if (!Default)
		Default = static_cast<AClientInteractablePawn*>(AClientInteractablePawn::StaticClass()->DefaultObject);

	return Default;
}


// Function Backrooms.ClientInteractablePawn.OnUsed
// (Native, Event, Public, BlueprintEvent)
// Parameters:

void AClientInteractablePawn::OnUsed()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ClientInteractablePawn", "OnUsed");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Class Backrooms.CrosshairWidget
// (None)

class UClass* UCrosshairWidget::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CrosshairWidget");

	return Clss;
}


// CrosshairWidget Backrooms.Default__CrosshairWidget
// (Public, ClassDefaultObject, ArchetypeObject)

class UCrosshairWidget* UCrosshairWidget::GetDefaultObj()
{
	static class UCrosshairWidget* Default = nullptr;

	if (!Default)
		Default = static_cast<UCrosshairWidget*>(UCrosshairWidget::StaticClass()->DefaultObject);

	return Default;
}


// Class Backrooms.CustomUserWidget
// (None)

class UClass* UCustomUserWidget::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CustomUserWidget");

	return Clss;
}


// CustomUserWidget Backrooms.Default__CustomUserWidget
// (Public, ClassDefaultObject, ArchetypeObject)

class UCustomUserWidget* UCustomUserWidget::GetDefaultObj()
{
	static class UCustomUserWidget* Default = nullptr;

	if (!Default)
		Default = static_cast<UCustomUserWidget*>(UCustomUserWidget::StaticClass()->DefaultObject);

	return Default;
}


// Function Backrooms.CustomUserWidget.ToggleInventory
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsVisible                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCustomUserWidget::ToggleInventory(bool IsVisible)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CustomUserWidget", "ToggleInventory");

	Params::UCustomUserWidget_ToggleInventory_Params Parms{};

	Parms.IsVisible = IsVisible;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Backrooms.CustomUserWidget.SetHotbarSlot
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              ItemSlot                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCustomUserWidget::SetHotbarSlot(int32 ItemSlot)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CustomUserWidget", "SetHotbarSlot");

	Params::UCustomUserWidget_SetHotbarSlot_Params Parms{};

	Parms.ItemSlot = ItemSlot;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Backrooms.CustomUserWidget.RefreshInventory
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UCustomUserWidget::RefreshInventory()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CustomUserWidget", "RefreshInventory");

	Params::UCustomUserWidget_RefreshInventory_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Class Backrooms.DroppedItem
// (Actor)

class UClass* ADroppedItem::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DroppedItem");

	return Clss;
}


// DroppedItem Backrooms.Default__DroppedItem
// (Public, ClassDefaultObject, ArchetypeObject)

class ADroppedItem* ADroppedItem::GetDefaultObj()
{
	static class ADroppedItem* Default = nullptr;

	if (!Default)
		Default = static_cast<ADroppedItem*>(ADroppedItem::StaticClass()->DefaultObject);

	return Default;
}


// Function Backrooms.DroppedItem.UpdatePhysicsLocation
// (Final, Native, Private)
// Parameters:

void ADroppedItem::UpdatePhysicsLocation()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DroppedItem", "UpdatePhysicsLocation");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function Backrooms.DroppedItem.StopPhysics
// (Final, Native, Private)
// Parameters:

void ADroppedItem::StopPhysics()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DroppedItem", "StopPhysics");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function Backrooms.DroppedItem.OnEndFocus
// (Native, Event, Public, BlueprintEvent)
// Parameters:

void ADroppedItem::OnEndFocus()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DroppedItem", "OnEndFocus");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function Backrooms.DroppedItem.OnBeginFocus
// (Native, Event, Public, BlueprintEvent)
// Parameters:

void ADroppedItem::OnBeginFocus()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DroppedItem", "OnBeginFocus");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function Backrooms.DroppedItem.EvaluatePhysics
// (Net, NetReliable, Native, Event, NetMulticast, Public)
// Parameters:

void ADroppedItem::EvaluatePhysics()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DroppedItem", "EvaluatePhysics");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Class Backrooms.DryLandVolume
// (Actor)

class UClass* ADryLandVolume::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DryLandVolume");

	return Clss;
}


// DryLandVolume Backrooms.Default__DryLandVolume
// (Public, ClassDefaultObject, ArchetypeObject)

class ADryLandVolume* ADryLandVolume::GetDefaultObj()
{
	static class ADryLandVolume* Default = nullptr;

	if (!Default)
		Default = static_cast<ADryLandVolume*>(ADryLandVolume::StaticClass()->DefaultObject);

	return Default;
}


// Class Backrooms.EnvQueryTest_CheckVisibility
// (None)

class UClass* UEnvQueryTest_CheckVisibility::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EnvQueryTest_CheckVisibility");

	return Clss;
}


// EnvQueryTest_CheckVisibility Backrooms.Default__EnvQueryTest_CheckVisibility
// (Public, ClassDefaultObject, ArchetypeObject)

class UEnvQueryTest_CheckVisibility* UEnvQueryTest_CheckVisibility::GetDefaultObj()
{
	static class UEnvQueryTest_CheckVisibility* Default = nullptr;

	if (!Default)
		Default = static_cast<UEnvQueryTest_CheckVisibility*>(UEnvQueryTest_CheckVisibility::StaticClass()->DefaultObject);

	return Default;
}


// Class Backrooms.FancyCameraComponent
// (SceneComponent)

class UClass* UFancyCameraComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FancyCameraComponent");

	return Clss;
}


// FancyCameraComponent Backrooms.Default__FancyCameraComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UFancyCameraComponent* UFancyCameraComponent::GetDefaultObj()
{
	static class UFancyCameraComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UFancyCameraComponent*>(UFancyCameraComponent::StaticClass()->DefaultObject);

	return Default;
}


// Class Backrooms.FancyCharacter
// (Actor, Pawn)

class UClass* AFancyCharacter::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FancyCharacter");

	return Clss;
}


// FancyCharacter Backrooms.Default__FancyCharacter
// (Public, ClassDefaultObject, ArchetypeObject)

class AFancyCharacter* AFancyCharacter::GetDefaultObj()
{
	static class AFancyCharacter* Default = nullptr;

	if (!Default)
		Default = static_cast<AFancyCharacter*>(AFancyCharacter::StaticClass()->DefaultObject);

	return Default;
}


// Function Backrooms.FancyCharacter.TryPickup
// (Native, Event, Public, BlueprintEvent)
// Parameters:

void AFancyCharacter::TryPickup()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FancyCharacter", "TryPickup");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function Backrooms.FancyCharacter.TogglePlayerVisibility
// (Net, NetReliable, Native, Event, Public, NetClient, BlueprintCallable)
// Parameters:
// bool                               IsHidden                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AFancyCharacter::TogglePlayerVisibility(bool IsHidden)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FancyCharacter", "TogglePlayerVisibility");

	Params::AFancyCharacter_TogglePlayerVisibility_Params Parms{};

	Parms.IsHidden = IsHidden;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Backrooms.FancyCharacter.TogglePlayerLegs
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsHidden                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AFancyCharacter::TogglePlayerLegs(bool IsHidden)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FancyCharacter", "TogglePlayerLegs");

	Params::AFancyCharacter_TogglePlayerLegs_Params Parms{};

	Parms.IsHidden = IsHidden;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Backrooms.FancyCharacter.ToggleBlur
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// bool                               ShouldBlur                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AFancyCharacter::ToggleBlur(bool ShouldBlur)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FancyCharacter", "ToggleBlur");

	Params::AFancyCharacter_ToggleBlur_Params Parms{};

	Parms.ShouldBlur = ShouldBlur;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Backrooms.FancyCharacter.StopPushing
// (Native, Event, Public, BlueprintEvent)
// Parameters:

void AFancyCharacter::StopPushing()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FancyCharacter", "StopPushing");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function Backrooms.FancyCharacter.SetIsOverlapOnly
// (Net, NetReliable, Native, Event, Public, NetServer, BlueprintCallable)
// Parameters:
// bool                               ShouldOverlapOnly                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AFancyCharacter::SetIsOverlapOnly(bool ShouldOverlapOnly)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FancyCharacter", "SetIsOverlapOnly");

	Params::AFancyCharacter_SetIsOverlapOnly_Params Parms{};

	Parms.ShouldOverlapOnly = ShouldOverlapOnly;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Backrooms.FancyCharacter.SetCanCollide
// (Net, NetReliable, Native, Event, Public, NetServer, BlueprintCallable)
// Parameters:
// bool                               ShouldCollide                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AFancyCharacter::SetCanCollide(bool ShouldCollide)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FancyCharacter", "SetCanCollide");

	Params::AFancyCharacter_SetCanCollide_Params Parms{};

	Parms.ShouldCollide = ShouldCollide;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Backrooms.FancyCharacter.OnSanityUpdate
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// float                              Sanity                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AFancyCharacter::OnSanityUpdate(float Sanity)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FancyCharacter", "OnSanityUpdate");

	Params::AFancyCharacter_OnSanityUpdate_Params Parms{};

	Parms.Sanity = Sanity;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Backrooms.FancyCharacter.OnRep_IsOverlapOnly
// (Final, Native, Private)
// Parameters:

void AFancyCharacter::OnRep_IsOverlapOnly()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FancyCharacter", "OnRep_IsOverlapOnly");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function Backrooms.FancyCharacter.OnRep_CanCollide
// (Final, Native, Private)
// Parameters:

void AFancyCharacter::OnRep_CanCollide()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FancyCharacter", "OnRep_CanCollide");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function Backrooms.FancyCharacter.KillPlayer
// (Net, NetReliable, Native, Event, Public, NetServer, BlueprintCallable)
// Parameters:

void AFancyCharacter::KillPlayer()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FancyCharacter", "KillPlayer");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function Backrooms.FancyCharacter.InteractCallBackVR
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// class AActor*                      Actor                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AFancyCharacter::InteractCallBackVR(class AActor* Actor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FancyCharacter", "InteractCallBackVR");

	Params::AFancyCharacter_InteractCallBackVR_Params Parms{};

	Parms.Actor = Actor;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Backrooms.FancyCharacter.Interact
// (Net, NetReliable, Native, Event, Protected, NetServer)
// Parameters:
// class AActor*                      Actor                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AFancyCharacter::Interact(class AActor* Actor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FancyCharacter", "Interact");

	Params::AFancyCharacter_Interact_Params Parms{};

	Parms.Actor = Actor;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Backrooms.FancyCharacter.HideItem
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsVisible                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AFancyCharacter::HideItem(bool IsVisible)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FancyCharacter", "HideItem");

	Params::AFancyCharacter_HideItem_Params Parms{};

	Parms.IsVisible = IsVisible;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Backrooms.FancyCharacter.CheckSpawnedItems
// (Native, Event, Public, BlueprintEvent)
// Parameters:

void AFancyCharacter::CheckSpawnedItems()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FancyCharacter", "CheckSpawnedItems");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function Backrooms.FancyCharacter.CheckPawn
// (Net, NetReliable, Native, Event, Public, NetServer, BlueprintCallable)
// Parameters:

void AFancyCharacter::CheckPawn()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FancyCharacter", "CheckPawn");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function Backrooms.FancyCharacter.ChangeCrosshairVisibility
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsVisible                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AFancyCharacter::ChangeCrosshairVisibility(bool IsVisible)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FancyCharacter", "ChangeCrosshairVisibility");

	Params::AFancyCharacter_ChangeCrosshairVisibility_Params Parms{};

	Parms.IsVisible = IsVisible;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class Backrooms.FancyGameInstance
// (None)

class UClass* UFancyGameInstance::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FancyGameInstance");

	return Clss;
}


// FancyGameInstance Backrooms.Default__FancyGameInstance
// (Public, ClassDefaultObject, ArchetypeObject)

class UFancyGameInstance* UFancyGameInstance::GetDefaultObj()
{
	static class UFancyGameInstance* Default = nullptr;

	if (!Default)
		Default = static_cast<UFancyGameInstance*>(UFancyGameInstance::StaticClass()->DefaultObject);

	return Default;
}


// Function Backrooms.FancyGameInstance.UpdateCurrentGameLanguage
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UFancyGameInstance::UpdateCurrentGameLanguage()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FancyGameInstance", "UpdateCurrentGameLanguage");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function Backrooms.FancyGameInstance.ResetAchievements
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UFancyGameInstance::ResetAchievements()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FancyGameInstance", "ResetAchievements");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function Backrooms.FancyGameInstance.OnSteamOverlayIsActive
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsOverlayActive                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFancyGameInstance::OnSteamOverlayIsActive(bool IsOverlayActive)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FancyGameInstance", "OnSteamOverlayIsActive");

	Params::UFancyGameInstance_OnSteamOverlayIsActive_Params Parms{};

	Parms.IsOverlayActive = IsOverlayActive;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Backrooms.FancyGameInstance.InitializeStats
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UFancyGameInstance::InitializeStats()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FancyGameInstance", "InitializeStats");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function Backrooms.FancyGameInstance.InitializeCPPElements
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UFancyGameInstance::InitializeCPPElements()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FancyGameInstance", "InitializeCPPElements");

	Params::UFancyGameInstance_InitializeCPPElements_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Backrooms.FancyGameInstance.GetCurrentGameLanguage
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString UFancyGameInstance::GetCurrentGameLanguage()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FancyGameInstance", "GetCurrentGameLanguage");

	Params::UFancyGameInstance_GetCurrentGameLanguage_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Backrooms.FancyGameInstance.CreateMission
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      TargetEscapeLevel                                                (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              LevelBaseXP                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              LevelTimeLimit                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      MissionStructRowName                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFancyGameInstance::CreateMission(const class FString& TargetEscapeLevel, float LevelBaseXP, float LevelTimeLimit, const class FString& MissionStructRowName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FancyGameInstance", "CreateMission");

	Params::UFancyGameInstance_CreateMission_Params Parms{};

	Parms.TargetEscapeLevel = TargetEscapeLevel;
	Parms.LevelBaseXP = LevelBaseXP;
	Parms.LevelTimeLimit = LevelTimeLimit;
	Parms.MissionStructRowName = MissionStructRowName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Backrooms.FancyGameInstance.CompleteMission
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              TimeCompleted                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FMissionStructure           ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FMissionStructure UFancyGameInstance::CompleteMission(float TimeCompleted)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FancyGameInstance", "CompleteMission");

	Params::UFancyGameInstance_CompleteMission_Params Parms{};

	Parms.TimeCompleted = TimeCompleted;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Backrooms.FancyGameInstance.CheckCurrentEvent
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UFancyGameInstance::CheckCurrentEvent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FancyGameInstance", "CheckCurrentEvent");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Class Backrooms.FancyGameMode
// (Actor)

class UClass* AFancyGameMode::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FancyGameMode");

	return Clss;
}


// FancyGameMode Backrooms.Default__FancyGameMode
// (Public, ClassDefaultObject, ArchetypeObject)

class AFancyGameMode* AFancyGameMode::GetDefaultObj()
{
	static class AFancyGameMode* Default = nullptr;

	if (!Default)
		Default = static_cast<AFancyGameMode*>(AFancyGameMode::StaticClass()->DefaultObject);

	return Default;
}


// Function Backrooms.FancyGameMode.OnDecreaseSanity
// (Native, Event, Protected, BlueprintEvent)
// Parameters:

void AFancyGameMode::OnDecreaseSanity()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FancyGameMode", "OnDecreaseSanity");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Class Backrooms.FancyMovementComponent
// (None)

class UClass* UFancyMovementComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FancyMovementComponent");

	return Clss;
}


// FancyMovementComponent Backrooms.Default__FancyMovementComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UFancyMovementComponent* UFancyMovementComponent::GetDefaultObj()
{
	static class UFancyMovementComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UFancyMovementComponent*>(UFancyMovementComponent::StaticClass()->DefaultObject);

	return Default;
}


// Function Backrooms.FancyMovementComponent.SetSprinting
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               Sprint                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFancyMovementComponent::SetSprinting(bool Sprint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FancyMovementComponent", "SetSprinting");

	Params::UFancyMovementComponent_SetSprinting_Params Parms{};

	Parms.Sprint = Sprint;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class Backrooms.FancyPlayerController
// (Actor, PlayerController)

class UClass* AFancyPlayerController::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FancyPlayerController");

	return Clss;
}


// FancyPlayerController Backrooms.Default__FancyPlayerController
// (Public, ClassDefaultObject, ArchetypeObject)

class AFancyPlayerController* AFancyPlayerController::GetDefaultObj()
{
	static class AFancyPlayerController* Default = nullptr;

	if (!Default)
		Default = static_cast<AFancyPlayerController*>(AFancyPlayerController::StaticClass()->DefaultObject);

	return Default;
}


// Function Backrooms.FancyPlayerController.OnPlayerTravel
// (Native, Event, Protected, BlueprintEvent)
// Parameters:

void AFancyPlayerController::OnPlayerTravel()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FancyPlayerController", "OnPlayerTravel");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function Backrooms.FancyPlayerController.GetObjectScreenRadius
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UStaticMeshComponent*        MeshComponent                                                    (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float AFancyPlayerController::GetObjectScreenRadius(class UStaticMeshComponent* MeshComponent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FancyPlayerController", "GetObjectScreenRadius");

	Params::AFancyPlayerController_GetObjectScreenRadius_Params Parms{};

	Parms.MeshComponent = MeshComponent;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class Backrooms.FancyPlayerState
// (Actor)

class UClass* AFancyPlayerState::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FancyPlayerState");

	return Clss;
}


// FancyPlayerState Backrooms.Default__FancyPlayerState
// (Public, ClassDefaultObject, ArchetypeObject)

class AFancyPlayerState* AFancyPlayerState::GetDefaultObj()
{
	static class AFancyPlayerState* Default = nullptr;

	if (!Default)
		Default = static_cast<AFancyPlayerState*>(AFancyPlayerState::StaticClass()->DefaultObject);

	return Default;
}


// Function Backrooms.FancyPlayerState.RemoveSanity
// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
// Parameters:
// float                              Amount                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AFancyPlayerState::RemoveSanity(float Amount)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FancyPlayerState", "RemoveSanity");

	Params::AFancyPlayerState_RemoveSanity_Params Parms{};

	Parms.Amount = Amount;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Backrooms.FancyPlayerState.OnRep_Sanity
// (Final, Native, Public)
// Parameters:

void AFancyPlayerState::OnRep_Sanity()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FancyPlayerState", "OnRep_Sanity");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function Backrooms.FancyPlayerState.OnKillPlayer
// (Native, Event, Public, BlueprintEvent)
// Parameters:

void AFancyPlayerState::OnKillPlayer()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FancyPlayerState", "OnKillPlayer");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function Backrooms.FancyPlayerState.AddSanity
// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
// Parameters:
// float                              Amount                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AFancyPlayerState::AddSanity(float Amount)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FancyPlayerState", "AddSanity");

	Params::AFancyPlayerState_AddSanity_Params Parms{};

	Parms.Amount = Amount;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class Backrooms.FancySpringArmComponent
// (SceneComponent)

class UClass* UFancySpringArmComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FancySpringArmComponent");

	return Clss;
}


// FancySpringArmComponent Backrooms.Default__FancySpringArmComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UFancySpringArmComponent* UFancySpringArmComponent::GetDefaultObj()
{
	static class UFancySpringArmComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UFancySpringArmComponent*>(UFancySpringArmComponent::StaticClass()->DefaultObject);

	return Default;
}


// Class Backrooms.GripMotionControllerComponent
// (SceneComponent, PrimitiveComponent)

class UClass* UGripMotionControllerComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GripMotionControllerComponent");

	return Clss;
}


// GripMotionControllerComponent Backrooms.Default__GripMotionControllerComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UGripMotionControllerComponent* UGripMotionControllerComponent::GetDefaultObj()
{
	static class UGripMotionControllerComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UGripMotionControllerComponent*>(UGripMotionControllerComponent::StaticClass()->DefaultObject);

	return Default;
}


// Function Backrooms.GripMotionControllerComponent.Server_SendControllerTransform
// (Net, Native, Event, Public, NetServer, HasDefaults, NetValidate)
// Parameters:
// struct FTransform                  NewTransform                                                     (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

void UGripMotionControllerComponent::Server_SendControllerTransform(const struct FTransform& NewTransform)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GripMotionControllerComponent", "Server_SendControllerTransform");

	Params::UGripMotionControllerComponent_Server_SendControllerTransform_Params Parms{};

	Parms.NewTransform = NewTransform;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Backrooms.GripMotionControllerComponent.OnRep_ReplicatedControllerTransform
// (Native, Public)
// Parameters:

void UGripMotionControllerComponent::OnRep_ReplicatedControllerTransform()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GripMotionControllerComponent", "OnRep_ReplicatedControllerTransform");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function Backrooms.GripMotionControllerComponent.GetPhysicsVelocity
// (Final, Native, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FVector                     AngularVelocity                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     LinearVelocity                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGripMotionControllerComponent::GetPhysicsVelocity(struct FVector* AngularVelocity, struct FVector* LinearVelocity)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GripMotionControllerComponent", "GetPhysicsVelocity");

	Params::UGripMotionControllerComponent_GetPhysicsVelocity_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (AngularVelocity != nullptr)
		*AngularVelocity = std::move(Parms.AngularVelocity);

	if (LinearVelocity != nullptr)
		*LinearVelocity = std::move(Parms.LinearVelocity);

}


// Function Backrooms.GripMotionControllerComponent.BP_IsLocallyControlled
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UGripMotionControllerComponent::BP_IsLocallyControlled()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GripMotionControllerComponent", "BP_IsLocallyControlled");

	Params::UGripMotionControllerComponent_BP_IsLocallyControlled_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class Backrooms.InspectableActor
// (Actor)

class UClass* AInspectableActor::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("InspectableActor");

	return Clss;
}


// InspectableActor Backrooms.Default__InspectableActor
// (Public, ClassDefaultObject, ArchetypeObject)

class AInspectableActor* AInspectableActor::GetDefaultObj()
{
	static class AInspectableActor* Default = nullptr;

	if (!Default)
		Default = static_cast<AInspectableActor*>(AInspectableActor::StaticClass()->DefaultObject);

	return Default;
}


// Function Backrooms.InspectableActor.SetViewing
// (Final, Native, Public)
// Parameters:

void AInspectableActor::SetViewing()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InspectableActor", "SetViewing");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function Backrooms.InspectableActor.SetPlayerRef
// (Final, Native, Public)
// Parameters:
// class ACharacter*                  Ref                                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AInspectableActor::SetPlayerRef(class ACharacter* Ref)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InspectableActor", "SetPlayerRef");

	Params::AInspectableActor_SetPlayerRef_Params Parms{};

	Parms.Ref = Ref;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Backrooms.InspectableActor.SetCameraLocation
// (Final, Native, Public)
// Parameters:
// class UCameraComponent*            CameraComponent                                                  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AInspectableActor::SetCameraLocation(class UCameraComponent* CameraComponent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InspectableActor", "SetCameraLocation");

	Params::AInspectableActor_SetCameraLocation_Params Parms{};

	Parms.CameraComponent = CameraComponent;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Backrooms.InspectableActor.GetMesh
// (Final, Native, Public)
// Parameters:
// class UStaticMeshComponent*        ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UStaticMeshComponent* AInspectableActor::GetMesh()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InspectableActor", "GetMesh");

	Params::AInspectableActor_GetMesh_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class Backrooms.InteractableCameraComponent
// (SceneComponent)

class UClass* UInteractableCameraComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("InteractableCameraComponent");

	return Clss;
}


// InteractableCameraComponent Backrooms.Default__InteractableCameraComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UInteractableCameraComponent* UInteractableCameraComponent::GetDefaultObj()
{
	static class UInteractableCameraComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UInteractableCameraComponent*>(UInteractableCameraComponent::StaticClass()->DefaultObject);

	return Default;
}


// Class Backrooms.InteractableComponent
// (SceneComponent, PrimitiveComponent, StaticMeshComponent)

class UClass* UInteractableComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("InteractableComponent");

	return Clss;
}


// InteractableComponent Backrooms.Default__InteractableComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UInteractableComponent* UInteractableComponent::GetDefaultObj()
{
	static class UInteractableComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UInteractableComponent*>(UInteractableComponent::StaticClass()->DefaultObject);

	return Default;
}


// Function Backrooms.InteractableComponent.ResetUsage
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UInteractableComponent::ResetUsage()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InteractableComponent", "ResetUsage");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function Backrooms.InteractableComponent.OnUsedServer
// (Net, NetReliable, Native, Event, Public, NetServer)
// Parameters:
// class ACharacter*                  Character                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UInteractableComponent::OnUsedServer(class ACharacter* Character)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InteractableComponent", "OnUsedServer");

	Params::UInteractableComponent_OnUsedServer_Params Parms{};

	Parms.Character = Character;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Backrooms.InteractableComponent.OnUsedNotify
// (Native, Event, Public, BlueprintEvent)
// Parameters:

void UInteractableComponent::OnUsedNotify()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InteractableComponent", "OnUsedNotify");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function Backrooms.InteractableComponent.OnUsedMulticast
// (Net, NetReliable, Native, Event, NetMulticast, Public)
// Parameters:

void UInteractableComponent::OnUsedMulticast()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InteractableComponent", "OnUsedMulticast");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function Backrooms.InteractableComponent.OnUsedAll
// (Native, Event, Public, BlueprintEvent)
// Parameters:

void UInteractableComponent::OnUsedAll()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InteractableComponent", "OnUsedAll");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function Backrooms.InteractableComponent.OnRep_WasUsed
// (Final, Native, Public)
// Parameters:

void UInteractableComponent::OnRep_WasUsed()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InteractableComponent", "OnRep_WasUsed");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function Backrooms.InteractableComponent.BlockUsage
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UInteractableComponent::BlockUsage()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InteractableComponent", "BlockUsage");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Class Backrooms.InteractableInterface
// (None)

class UClass* IInteractableInterface::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("InteractableInterface");

	return Clss;
}


// InteractableInterface Backrooms.Default__InteractableInterface
// (Public, ClassDefaultObject, ArchetypeObject)

class IInteractableInterface* IInteractableInterface::GetDefaultObj()
{
	static class IInteractableInterface* Default = nullptr;

	if (!Default)
		Default = static_cast<IInteractableInterface*>(IInteractableInterface::StaticClass()->DefaultObject);

	return Default;
}


// Function Backrooms.InteractableInterface.OnActorUsed
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ACharacter*                  Character                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void IInteractableInterface::OnActorUsed(class ACharacter* Character)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InteractableInterface", "OnActorUsed");

	Params::IInteractableInterface_OnActorUsed_Params Parms{};

	Parms.Character = Character;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class Backrooms.InventoryComponent
// (None)

class UClass* UInventoryComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("InventoryComponent");

	return Clss;
}


// InventoryComponent Backrooms.Default__InventoryComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UInventoryComponent* UInventoryComponent::GetDefaultObj()
{
	static class UInventoryComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UInventoryComponent*>(UInventoryComponent::StaticClass()->DefaultObject);

	return Default;
}


// Function Backrooms.InventoryComponent.SwapInventoryItems
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              FirstIdx                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              SecondIdx                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UInventoryComponent::SwapInventoryItems(int32 FirstIdx, int32 SecondIdx)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InventoryComponent", "SwapInventoryItems");

	Params::UInventoryComponent_SwapInventoryItems_Params Parms{};

	Parms.FirstIdx = FirstIdx;
	Parms.SecondIdx = SecondIdx;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Backrooms.InventoryComponent.RemoveFromInventory
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UInventoryItem*              Item                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UInventoryComponent::RemoveFromInventory(class UInventoryItem* Item)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InventoryComponent", "RemoveFromInventory");

	Params::UInventoryComponent_RemoveFromInventory_Params Parms{};

	Parms.Item = Item;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Backrooms.InventoryComponent.IsSlotEmpty
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              SlotIndex                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInventoryComponent::IsSlotEmpty(int32 SlotIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InventoryComponent", "IsSlotEmpty");

	Params::UInventoryComponent_IsSlotEmpty_Params Parms{};

	Parms.SlotIndex = SlotIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Backrooms.InventoryComponent.GetItemAtSlot
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              SlotIndex                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UInventoryItem*              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UInventoryItem* UInventoryComponent::GetItemAtSlot(int32 SlotIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InventoryComponent", "GetItemAtSlot");

	Params::UInventoryComponent_GetItemAtSlot_Params Parms{};

	Parms.SlotIndex = SlotIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Backrooms.InventoryComponent.DropItem
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// uint8                              Slot                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UInventoryComponent::DropItem(uint8 Slot)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InventoryComponent", "DropItem");

	Params::UInventoryComponent_DropItem_Params Parms{};

	Parms.Slot = Slot;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Backrooms.InventoryComponent.AddToInventory
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UInventoryItem*              Item                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInventoryComponent::AddToInventory(class UInventoryItem* Item)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InventoryComponent", "AddToInventory");

	Params::UInventoryComponent_AddToInventory_Params Parms{};

	Parms.Item = Item;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class Backrooms.InventoryItem
// (None)

class UClass* UInventoryItem::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("InventoryItem");

	return Clss;
}


// InventoryItem Backrooms.Default__InventoryItem
// (Public, ClassDefaultObject, ArchetypeObject)

class UInventoryItem* UInventoryItem::GetDefaultObj()
{
	static class UInventoryItem* Default = nullptr;

	if (!Default)
		Default = static_cast<UInventoryItem*>(UInventoryItem::StaticClass()->DefaultObject);

	return Default;
}


// Class Backrooms.ItemActor
// (Actor)

class UClass* AItemActor::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ItemActor");

	return Clss;
}


// ItemActor Backrooms.Default__ItemActor
// (Public, ClassDefaultObject, ArchetypeObject)

class AItemActor* AItemActor::GetDefaultObj()
{
	static class AItemActor* Default = nullptr;

	if (!Default)
		Default = static_cast<AItemActor*>(AItemActor::StaticClass()->DefaultObject);

	return Default;
}


// Function Backrooms.ItemActor.Use
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void AItemActor::Use()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ItemActor", "Use");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function Backrooms.ItemActor.CustomInventoryUse
// (Native, Event, Public, BlueprintEvent)
// Parameters:

void AItemActor::CustomInventoryUse()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ItemActor", "CustomInventoryUse");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Class Backrooms.Level0Generator
// (Actor)

class UClass* ALevel0Generator::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Level0Generator");

	return Clss;
}


// Level0Generator Backrooms.Default__Level0Generator
// (Public, ClassDefaultObject, ArchetypeObject)

class ALevel0Generator* ALevel0Generator::GetDefaultObj()
{
	static class ALevel0Generator* Default = nullptr;

	if (!Default)
		Default = static_cast<ALevel0Generator*>(ALevel0Generator::StaticClass()->DefaultObject);

	return Default;
}


// Function Backrooms.Level0Generator.Generate
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void ALevel0Generator::Generate()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Level0Generator", "Generate");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Class Backrooms.LIDARBlueprintFunctionLibrary
// (None)

class UClass* ULIDARBlueprintFunctionLibrary::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LIDARBlueprintFunctionLibrary");

	return Clss;
}


// LIDARBlueprintFunctionLibrary Backrooms.Default__LIDARBlueprintFunctionLibrary
// (Public, ClassDefaultObject, ArchetypeObject)

class ULIDARBlueprintFunctionLibrary* ULIDARBlueprintFunctionLibrary::GetDefaultObj()
{
	static class ULIDARBlueprintFunctionLibrary* Default = nullptr;

	if (!Default)
		Default = static_cast<ULIDARBlueprintFunctionLibrary*>(ULIDARBlueprintFunctionLibrary::StaticClass()->DefaultObject);

	return Default;
}


// Function Backrooms.LIDARBlueprintFunctionLibrary.FindCollisionUVSkeletalMesh
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FHitResult                  Hit                                                              (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
// struct FVector2D                   UV                                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool ULIDARBlueprintFunctionLibrary::FindCollisionUVSkeletalMesh(struct FHitResult& Hit, struct FVector2D* UV)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LIDARBlueprintFunctionLibrary", "FindCollisionUVSkeletalMesh");

	Params::ULIDARBlueprintFunctionLibrary_FindCollisionUVSkeletalMesh_Params Parms{};

	Parms.Hit = Hit;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (UV != nullptr)
		*UV = std::move(Parms.UV);

	return Parms.ReturnValue;

}


// Function Backrooms.LIDARBlueprintFunctionLibrary.CreateLiDarDot
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     Caller                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UTextureRenderTarget2D*      RenderTarget                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FLIDARDotStruct             ReturnValue                                                      (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)

struct FLIDARDotStruct ULIDARBlueprintFunctionLibrary::CreateLiDarDot(class UObject* Caller, class UTextureRenderTarget2D* RenderTarget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LIDARBlueprintFunctionLibrary", "CreateLiDarDot");

	Params::ULIDARBlueprintFunctionLibrary_CreateLiDarDot_Params Parms{};

	Parms.Caller = Caller;
	Parms.RenderTarget = RenderTarget;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class Backrooms.LIDARComponent
// (None)

class UClass* ULIDARComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LIDARComponent");

	return Clss;
}


// LIDARComponent Backrooms.Default__LIDARComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class ULIDARComponent* ULIDARComponent::GetDefaultObj()
{
	static class ULIDARComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<ULIDARComponent*>(ULIDARComponent::StaticClass()->DefaultObject);

	return Default;
}


// Function Backrooms.LIDARComponent.ShootReset
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void ULIDARComponent::ShootReset()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LIDARComponent", "ShootReset");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function Backrooms.LIDARComponent.ShootGun
// (Net, NetReliable, Native, Event, Public, NetClient, BlueprintCallable)
// Parameters:

void ULIDARComponent::ShootGun()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LIDARComponent", "ShootGun");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function Backrooms.LIDARComponent.ShootAuto
// (Net, NetReliable, Native, Event, Public, NetClient, BlueprintCallable)
// Parameters:

void ULIDARComponent::ShootAuto()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LIDARComponent", "ShootAuto");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function Backrooms.LIDARComponent.ScannerTrace
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UStaticMeshComponent*        Mesh                                                             (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FHitResult                  ReturnValue                                                      (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)

struct FHitResult ULIDARComponent::ScannerTrace(class UStaticMeshComponent* Mesh)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LIDARComponent", "ScannerTrace");

	Params::ULIDARComponent_ScannerTrace_Params Parms{};

	Parms.Mesh = Mesh;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class Backrooms.MapEditorCharacter
// (Actor, Pawn)

class UClass* AMapEditorCharacter::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MapEditorCharacter");

	return Clss;
}


// MapEditorCharacter Backrooms.Default__MapEditorCharacter
// (Public, ClassDefaultObject, ArchetypeObject)

class AMapEditorCharacter* AMapEditorCharacter::GetDefaultObj()
{
	static class AMapEditorCharacter* Default = nullptr;

	if (!Default)
		Default = static_cast<AMapEditorCharacter*>(AMapEditorCharacter::StaticClass()->DefaultObject);

	return Default;
}


// Class Backrooms.MapEditorCharacterMovement
// (None)

class UClass* UMapEditorCharacterMovement::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MapEditorCharacterMovement");

	return Clss;
}


// MapEditorCharacterMovement Backrooms.Default__MapEditorCharacterMovement
// (Public, ClassDefaultObject, ArchetypeObject)

class UMapEditorCharacterMovement* UMapEditorCharacterMovement::GetDefaultObj()
{
	static class UMapEditorCharacterMovement* Default = nullptr;

	if (!Default)
		Default = static_cast<UMapEditorCharacterMovement*>(UMapEditorCharacterMovement::StaticClass()->DefaultObject);

	return Default;
}


// Function Backrooms.MapEditorCharacterMovement.Turn
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              Value                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMapEditorCharacterMovement::Turn(float Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MapEditorCharacterMovement", "Turn");

	Params::UMapEditorCharacterMovement_Turn_Params Parms{};

	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Backrooms.MapEditorCharacterMovement.Server_SetSpeedMultiplier
// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
// Parameters:
// float                              SpeedMultiplier                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMapEditorCharacterMovement::Server_SetSpeedMultiplier(float SpeedMultiplier)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MapEditorCharacterMovement", "Server_SetSpeedMultiplier");

	Params::UMapEditorCharacterMovement_Server_SetSpeedMultiplier_Params Parms{};

	Parms.SpeedMultiplier = SpeedMultiplier;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Backrooms.MapEditorCharacterMovement.MoveUp
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              Value                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMapEditorCharacterMovement::MoveUp(float Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MapEditorCharacterMovement", "MoveUp");

	Params::UMapEditorCharacterMovement_MoveUp_Params Parms{};

	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Backrooms.MapEditorCharacterMovement.MoveRight
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              Value                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMapEditorCharacterMovement::MoveRight(float Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MapEditorCharacterMovement", "MoveRight");

	Params::UMapEditorCharacterMovement_MoveRight_Params Parms{};

	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Backrooms.MapEditorCharacterMovement.MoveForward
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              Value                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMapEditorCharacterMovement::MoveForward(float Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MapEditorCharacterMovement", "MoveForward");

	Params::UMapEditorCharacterMovement_MoveForward_Params Parms{};

	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Backrooms.MapEditorCharacterMovement.LookUp
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              Value                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMapEditorCharacterMovement::LookUp(float Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MapEditorCharacterMovement", "LookUp");

	Params::UMapEditorCharacterMovement_LookUp_Params Parms{};

	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Backrooms.MapEditorCharacterMovement.InMovementMode
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UMapEditorCharacterMovement::InMovementMode()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MapEditorCharacterMovement", "InMovementMode");

	Params::UMapEditorCharacterMovement_InMovementMode_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Backrooms.MapEditorCharacterMovement.Init
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UMapEditorCharacterMovement::Init()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MapEditorCharacterMovement", "Init");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function Backrooms.MapEditorCharacterMovement.IncreaseSpeedMultiplier
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              IncreaseAmount                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMapEditorCharacterMovement::IncreaseSpeedMultiplier(float IncreaseAmount)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MapEditorCharacterMovement", "IncreaseSpeedMultiplier");

	Params::UMapEditorCharacterMovement_IncreaseSpeedMultiplier_Params Parms{};

	Parms.IncreaseAmount = IncreaseAmount;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Backrooms.MapEditorCharacterMovement.EnterMovementMode
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               Enter                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMapEditorCharacterMovement::EnterMovementMode(bool Enter)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MapEditorCharacterMovement", "EnterMovementMode");

	Params::UMapEditorCharacterMovement_EnterMovementMode_Params Parms{};

	Parms.Enter = Enter;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Backrooms.MapEditorCharacterMovement.DecreaseSpeedMultiplier
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              DecreaseAmount                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMapEditorCharacterMovement::DecreaseSpeedMultiplier(float DecreaseAmount)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MapEditorCharacterMovement", "DecreaseSpeedMultiplier");

	Params::UMapEditorCharacterMovement_DecreaseSpeedMultiplier_Params Parms{};

	Parms.DecreaseAmount = DecreaseAmount;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class Backrooms.MapEditorGizmo
// (Actor)

class UClass* AMapEditorGizmo::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MapEditorGizmo");

	return Clss;
}


// MapEditorGizmo Backrooms.Default__MapEditorGizmo
// (Public, ClassDefaultObject, ArchetypeObject)

class AMapEditorGizmo* AMapEditorGizmo::GetDefaultObj()
{
	static class AMapEditorGizmo* Default = nullptr;

	if (!Default)
		Default = static_cast<AMapEditorGizmo*>(AMapEditorGizmo::StaticClass()->DefaultObject);

	return Default;
}


// Class Backrooms.MapEditorHandlerComponent
// (None)

class UClass* UMapEditorHandlerComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MapEditorHandlerComponent");

	return Clss;
}


// MapEditorHandlerComponent Backrooms.Default__MapEditorHandlerComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UMapEditorHandlerComponent* UMapEditorHandlerComponent::GetDefaultObj()
{
	static class UMapEditorHandlerComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UMapEditorHandlerComponent*>(UMapEditorHandlerComponent::StaticClass()->DefaultObject);

	return Default;
}


// Function Backrooms.MapEditorHandlerComponent.UnpossessToReturnPawn
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UMapEditorHandlerComponent::UnpossessToReturnPawn()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MapEditorHandlerComponent", "UnpossessToReturnPawn");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function Backrooms.MapEditorHandlerComponent.Undo
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UMapEditorHandlerComponent::Undo()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MapEditorHandlerComponent", "Undo");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function Backrooms.MapEditorHandlerComponent.SpawnActor
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TSubclassOf<class AActor>          ActorClass                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMapEditorHandlerComponent::SpawnActor(TSubclassOf<class AActor> ActorClass)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MapEditorHandlerComponent", "SpawnActor");

	Params::UMapEditorHandlerComponent_SpawnActor_Params Parms{};

	Parms.ActorClass = ActorClass;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Backrooms.MapEditorHandlerComponent.ShowScale
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UMapEditorHandlerComponent::ShowScale()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MapEditorHandlerComponent", "ShowScale");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function Backrooms.MapEditorHandlerComponent.ShowRotation
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UMapEditorHandlerComponent::ShowRotation()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MapEditorHandlerComponent", "ShowRotation");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function Backrooms.MapEditorHandlerComponent.ShowMovement
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UMapEditorHandlerComponent::ShowMovement()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MapEditorHandlerComponent", "ShowMovement");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function Backrooms.MapEditorHandlerComponent.SetSnapAmount
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FMapEditorSnapping          SnappingAmounts                                                  (Parm, NoDestructor, NativeAccessSpecifierPublic)

void UMapEditorHandlerComponent::SetSnapAmount(const struct FMapEditorSnapping& SnappingAmounts)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MapEditorHandlerComponent", "SetSnapAmount");

	Params::UMapEditorHandlerComponent_SetSnapAmount_Params Parms{};

	Parms.SnappingAmounts = SnappingAmounts;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Backrooms.MapEditorHandlerComponent.SetReturnPawn
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class APawn*                       Pawn                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMapEditorHandlerComponent::SetReturnPawn(class APawn* Pawn)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MapEditorHandlerComponent", "SetReturnPawn");

	Params::UMapEditorHandlerComponent_SetReturnPawn_Params Parms{};

	Parms.Pawn = Pawn;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Backrooms.MapEditorHandlerComponent.SetActorTransform
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FTransform                  NewTransform                                                     (ConstParm, Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

void UMapEditorHandlerComponent::SetActorTransform(const struct FTransform& NewTransform)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MapEditorHandlerComponent", "SetActorTransform");

	Params::UMapEditorHandlerComponent_SetActorTransform_Params Parms{};

	Parms.NewTransform = NewTransform;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Backrooms.MapEditorHandlerComponent.SetActor
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class AActor*                      Actor                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMapEditorHandlerComponent::SetActor(class AActor* Actor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MapEditorHandlerComponent", "SetActor");

	Params::UMapEditorHandlerComponent_SetActor_Params Parms{};

	Parms.Actor = Actor;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Backrooms.MapEditorHandlerComponent.Server_UnpossessToReturnPawn
// (Net, Native, Event, Protected, NetServer, NetValidate)
// Parameters:

void UMapEditorHandlerComponent::Server_UnpossessToReturnPawn()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MapEditorHandlerComponent", "Server_UnpossessToReturnPawn");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function Backrooms.MapEditorHandlerComponent.Server_SpawnActor
// (Net, Native, Event, Protected, NetServer, NetValidate)
// Parameters:
// TSubclassOf<class AActor>          ActorClass                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMapEditorHandlerComponent::Server_SpawnActor(TSubclassOf<class AActor> ActorClass)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MapEditorHandlerComponent", "Server_SpawnActor");

	Params::UMapEditorHandlerComponent_Server_SpawnActor_Params Parms{};

	Parms.ActorClass = ActorClass;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Backrooms.MapEditorHandlerComponent.Server_ReplicateTransform
// (Net, Native, Event, Protected, NetServer, HasDefaults, NetValidate)
// Parameters:
// class AActor*                      Actor                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FTransform                  Transform                                                        (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

void UMapEditorHandlerComponent::Server_ReplicateTransform(class AActor* Actor, const struct FTransform& Transform)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MapEditorHandlerComponent", "Server_ReplicateTransform");

	Params::UMapEditorHandlerComponent_Server_ReplicateTransform_Params Parms{};

	Parms.Actor = Actor;
	Parms.Transform = Transform;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Backrooms.MapEditorHandlerComponent.Server_DeleteActor
// (Net, Native, Event, Protected, NetServer, NetValidate)
// Parameters:
// class AActor*                      Actor                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMapEditorHandlerComponent::Server_DeleteActor(class AActor* Actor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MapEditorHandlerComponent", "Server_DeleteActor");

	Params::UMapEditorHandlerComponent_Server_DeleteActor_Params Parms{};

	Parms.Actor = Actor;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Backrooms.MapEditorHandlerComponent.Release
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UMapEditorHandlerComponent::Release()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MapEditorHandlerComponent", "Release");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function Backrooms.MapEditorHandlerComponent.OnRep_CurrentActor
// (Final, Native, Protected)
// Parameters:

void UMapEditorHandlerComponent::OnRep_CurrentActor()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MapEditorHandlerComponent", "OnRep_CurrentActor");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function Backrooms.MapEditorHandlerComponent.MouseTrace
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// float                              Distance                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bHitGizmo                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bDrawDebugLine                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FHitResult                  ReturnValue                                                      (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)

struct FHitResult UMapEditorHandlerComponent::MouseTrace(float Distance, bool* bHitGizmo, bool bDrawDebugLine)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MapEditorHandlerComponent", "MouseTrace");

	Params::UMapEditorHandlerComponent_MouseTrace_Params Parms{};

	Parms.Distance = Distance;
	Parms.bDrawDebugLine = bDrawDebugLine;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (bHitGizmo != nullptr)
		*bHitGizmo = Parms.bHitGizmo;

	return Parms.ReturnValue;

}


// Function Backrooms.MapEditorHandlerComponent.Init
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UMapEditorHandlerComponent::Init()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MapEditorHandlerComponent", "Init");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function Backrooms.MapEditorHandlerComponent.HasValidReturnPawn
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UMapEditorHandlerComponent::HasValidReturnPawn()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MapEditorHandlerComponent", "HasValidReturnPawn");

	Params::UMapEditorHandlerComponent_HasValidReturnPawn_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Backrooms.MapEditorHandlerComponent.Grab
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UMapEditorHandlerComponent::Grab()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MapEditorHandlerComponent", "Grab");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function Backrooms.MapEditorHandlerComponent.GetSnapAmount
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FMapEditorSnapping          ReturnValue                                                      (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)

struct FMapEditorSnapping UMapEditorHandlerComponent::GetSnapAmount()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MapEditorHandlerComponent", "GetSnapAmount");

	Params::UMapEditorHandlerComponent_GetSnapAmount_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Backrooms.MapEditorHandlerComponent.GetReplicationRate
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UMapEditorHandlerComponent::GetReplicationRate()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MapEditorHandlerComponent", "GetReplicationRate");

	Params::UMapEditorHandlerComponent_GetReplicationRate_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Backrooms.MapEditorHandlerComponent.GetGizmoType
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// enum class EGizmoType              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

enum class EGizmoType UMapEditorHandlerComponent::GetGizmoType()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MapEditorHandlerComponent", "GetGizmoType");

	Params::UMapEditorHandlerComponent_GetGizmoType_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Backrooms.MapEditorHandlerComponent.GetActorTransform
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FTransform                  ReturnValue                                                      (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

struct FTransform UMapEditorHandlerComponent::GetActorTransform()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MapEditorHandlerComponent", "GetActorTransform");

	Params::UMapEditorHandlerComponent_GetActorTransform_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Backrooms.MapEditorHandlerComponent.GetActorName
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString UMapEditorHandlerComponent::GetActorName()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MapEditorHandlerComponent", "GetActorName");

	Params::UMapEditorHandlerComponent_GetActorName_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Backrooms.MapEditorHandlerComponent.DeselectActor
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UMapEditorHandlerComponent::DeselectActor()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MapEditorHandlerComponent", "DeselectActor");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function Backrooms.MapEditorHandlerComponent.DeleteActor
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UMapEditorHandlerComponent::DeleteActor()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MapEditorHandlerComponent", "DeleteActor");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Class Backrooms.MapEditorInterface
// (None)

class UClass* IMapEditorInterface::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MapEditorInterface");

	return Clss;
}


// MapEditorInterface Backrooms.Default__MapEditorInterface
// (Public, ClassDefaultObject, ArchetypeObject)

class IMapEditorInterface* IMapEditorInterface::GetDefaultObj()
{
	static class IMapEditorInterface* Default = nullptr;

	if (!Default)
		Default = static_cast<IMapEditorInterface*>(IMapEditorInterface::StaticClass()->DefaultObject);

	return Default;
}


// Function Backrooms.MapEditorInterface.OnUndo
// (Event, Public, BlueprintEvent)
// Parameters:

void IMapEditorInterface::OnUndo()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MapEditorInterface", "OnUndo");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Backrooms.MapEditorInterface.OnScaleChanged
// (Native, Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                     NewScale                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void IMapEditorInterface::OnScaleChanged(const struct FVector& NewScale)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MapEditorInterface", "OnScaleChanged");

	Params::IMapEditorInterface_OnScaleChanged_Params Parms{};

	Parms.NewScale = NewScale;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Backrooms.MapEditorInterface.OnRelease
// (Event, Public, BlueprintEvent)
// Parameters:

void IMapEditorInterface::OnRelease()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MapEditorInterface", "OnRelease");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Backrooms.MapEditorInterface.OnMaterialLoaded
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FMapEditorItemMaterial      MapEditorItemMaterial                                            (Parm, ContainsInstancedReference, NativeAccessSpecifierPublic)

void IMapEditorInterface::OnMaterialLoaded(const struct FMapEditorItemMaterial& MapEditorItemMaterial)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MapEditorInterface", "OnMaterialLoaded");

	Params::IMapEditorInterface_OnMaterialLoaded_Params Parms{};

	Parms.MapEditorItemMaterial = MapEditorItemMaterial;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Backrooms.MapEditorInterface.OnGrabbed
// (Event, Public, BlueprintEvent)
// Parameters:

void IMapEditorInterface::OnGrabbed()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MapEditorInterface", "OnGrabbed");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Backrooms.MapEditorInterface.OnDeleted
// (Event, Public, BlueprintEvent)
// Parameters:

void IMapEditorInterface::OnDeleted()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MapEditorInterface", "OnDeleted");



	UObject::ProcessEvent(Func, nullptr);

}


// Class Backrooms.MapEditorStatics
// (None)

class UClass* UMapEditorStatics::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MapEditorStatics");

	return Clss;
}


// MapEditorStatics Backrooms.Default__MapEditorStatics
// (Public, ClassDefaultObject, ArchetypeObject)

class UMapEditorStatics* UMapEditorStatics::GetDefaultObj()
{
	static class UMapEditorStatics* Default = nullptr;

	if (!Default)
		Default = static_cast<UMapEditorStatics*>(UMapEditorStatics::StaticClass()->DefaultObject);

	return Default;
}


// Function Backrooms.MapEditorStatics.SpawnMapItemsFromJson
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AActor*                      WorldActor                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      JsonString                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMapEditorStatics::SpawnMapItemsFromJson(class AActor* WorldActor, const class FString& JsonString)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MapEditorStatics", "SpawnMapItemsFromJson");

	Params::UMapEditorStatics_SpawnMapItemsFromJson_Params Parms{};

	Parms.WorldActor = WorldActor;
	Parms.JsonString = JsonString;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Backrooms.MapEditorStatics.SpawnMapItems
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AActor*                      WorldActor                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FMapEditorItems             MapItems                                                         (Parm, NativeAccessSpecifierPublic)

void UMapEditorStatics::SpawnMapItems(class AActor* WorldActor, const struct FMapEditorItems& MapItems)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MapEditorStatics", "SpawnMapItems");

	Params::UMapEditorStatics_SpawnMapItems_Params Parms{};

	Parms.WorldActor = WorldActor;
	Parms.MapItems = MapItems;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Backrooms.MapEditorStatics.SetMaterials
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FMapEditorItemMaterial      MapEditorItemMaterial                                            (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)

void UMapEditorStatics::SetMaterials(struct FMapEditorItemMaterial& MapEditorItemMaterial)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MapEditorStatics", "SetMaterials");

	Params::UMapEditorStatics_SetMaterials_Params Parms{};

	Parms.MapEditorItemMaterial = MapEditorItemMaterial;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Backrooms.MapEditorStatics.SerializeLevel
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class AActor*                      WorldActor                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               Success                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString UMapEditorStatics::SerializeLevel(class AActor* WorldActor, bool* Success)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MapEditorStatics", "SerializeLevel");

	Params::UMapEditorStatics_SerializeLevel_Params Parms{};

	Parms.WorldActor = WorldActor;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Success != nullptr)
		*Success = Parms.Success;

	return Parms.ReturnValue;

}


// Function Backrooms.MapEditorStatics.SaveMapToFile
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class AActor*                      WorldActor                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      MapDirectory                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      MapName                                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      StringToSave                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      FullMapName                                                      (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UMapEditorStatics::SaveMapToFile(class AActor* WorldActor, const class FString& MapDirectory, const class FString& MapName, const class FString& StringToSave, class FString* FullMapName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MapEditorStatics", "SaveMapToFile");

	Params::UMapEditorStatics_SaveMapToFile_Params Parms{};

	Parms.WorldActor = WorldActor;
	Parms.MapDirectory = MapDirectory;
	Parms.MapName = MapName;
	Parms.StringToSave = StringToSave;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (FullMapName != nullptr)
		*FullMapName = std::move(Parms.FullMapName);

	return Parms.ReturnValue;

}


// Function Backrooms.MapEditorStatics.RemoveExtension
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      String                                                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString UMapEditorStatics::RemoveExtension(const class FString& String)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MapEditorStatics", "RemoveExtension");

	Params::UMapEditorStatics_RemoveExtension_Params Parms{};

	Parms.String = String;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Backrooms.MapEditorStatics.LoadMapFromFile
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class AActor*                      WorldActor                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      MapDirectory                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      MapName                                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Extension                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      OutString                                                        (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      FullMapName                                                      (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UMapEditorStatics::LoadMapFromFile(class AActor* WorldActor, const class FString& MapDirectory, const class FString& MapName, const class FString& Extension, class FString* OutString, class FString* FullMapName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MapEditorStatics", "LoadMapFromFile");

	Params::UMapEditorStatics_LoadMapFromFile_Params Parms{};

	Parms.WorldActor = WorldActor;
	Parms.MapDirectory = MapDirectory;
	Parms.MapName = MapName;
	Parms.Extension = Extension;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutString != nullptr)
		*OutString = std::move(Parms.OutString);

	if (FullMapName != nullptr)
		*FullMapName = std::move(Parms.FullMapName);

	return Parms.ReturnValue;

}


// Function Backrooms.MapEditorStatics.GetRealMapName
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      MapName                                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString UMapEditorStatics::GetRealMapName(const class FString& MapName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MapEditorStatics", "GetRealMapName");

	Params::UMapEditorStatics_GetRealMapName_Params Parms{};

	Parms.MapName = MapName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Backrooms.MapEditorStatics.GetMapList
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AActor*                      WorldActor                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Directory                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bCutLevelname                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bShowAllMaps                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<class FString>              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<class FString> UMapEditorStatics::GetMapList(class AActor* WorldActor, const class FString& Directory, bool bCutLevelname, bool bShowAllMaps)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MapEditorStatics", "GetMapList");

	Params::UMapEditorStatics_GetMapList_Params Parms{};

	Parms.WorldActor = WorldActor;
	Parms.Directory = Directory;
	Parms.bCutLevelname = bCutLevelname;
	Parms.bShowAllMaps = bShowAllMaps;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Backrooms.MapEditorStatics.DoesMapExist
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AActor*                      WorldActor                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      MapDirectory                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      MapName                                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UMapEditorStatics::DoesMapExist(class AActor* WorldActor, const class FString& MapDirectory, const class FString& MapName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MapEditorStatics", "DoesMapExist");

	Params::UMapEditorStatics_DoesMapExist_Params Parms{};

	Parms.WorldActor = WorldActor;
	Parms.MapDirectory = MapDirectory;
	Parms.MapName = MapName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Backrooms.MapEditorStatics.DeSerializeLevel
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FString                      JsonString                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               Success                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FMapEditorItems             ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FMapEditorItems UMapEditorStatics::DeSerializeLevel(const class FString& JsonString, bool* Success)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MapEditorStatics", "DeSerializeLevel");

	Params::UMapEditorStatics_DeSerializeLevel_Params Parms{};

	Parms.JsonString = JsonString;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Success != nullptr)
		*Success = Parms.Success;

	return Parms.ReturnValue;

}


// Function Backrooms.MapEditorStatics.ClearMap
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AActor*                      WorldActor                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMapEditorStatics::ClearMap(class AActor* WorldActor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MapEditorStatics", "ClearMap");

	Params::UMapEditorStatics_ClearMap_Params Parms{};

	Parms.WorldActor = WorldActor;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class Backrooms.MissionData
// (None)

class UClass* UMissionData::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MissionData");

	return Clss;
}


// MissionData Backrooms.Default__MissionData
// (Public, ClassDefaultObject, ArchetypeObject)

class UMissionData* UMissionData::GetDefaultObj()
{
	static class UMissionData* Default = nullptr;

	if (!Default)
		Default = static_cast<UMissionData*>(UMissionData::StaticClass()->DefaultObject);

	return Default;
}


// Function Backrooms.MissionData.SetTimeCompleted
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              Time                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMissionData::SetTimeCompleted(float Time)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MissionData", "SetTimeCompleted");

	Params::UMissionData_SetTimeCompleted_Params Parms{};

	Parms.Time = Time;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Backrooms.MissionData.AddPlayerDeath
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UMissionData::AddPlayerDeath()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MissionData", "AddPlayerDeath");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function Backrooms.MissionData.AddLowSanityAmount
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UMissionData::AddLowSanityAmount()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MissionData", "AddLowSanityAmount");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function Backrooms.MissionData.AddEntitySighting
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UMissionData::AddEntitySighting()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MissionData", "AddEntitySighting");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Class Backrooms.MotionScannerComponent
// (None)

class UClass* UMotionScannerComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MotionScannerComponent");

	return Clss;
}


// MotionScannerComponent Backrooms.Default__MotionScannerComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UMotionScannerComponent* UMotionScannerComponent::GetDefaultObj()
{
	static class UMotionScannerComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UMotionScannerComponent*>(UMotionScannerComponent::StaticClass()->DefaultObject);

	return Default;
}


// Function Backrooms.MotionScannerComponent.StartWaveEvent
// (Event, Public, BlueprintEvent)
// Parameters:

void UMotionScannerComponent::StartWaveEvent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MotionScannerComponent", "StartWaveEvent");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Backrooms.MotionScannerComponent.SetNewScanDistance
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              SetDistance                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMotionScannerComponent::SetNewScanDistance(float SetDistance)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MotionScannerComponent", "SetNewScanDistance");

	Params::UMotionScannerComponent_SetNewScanDistance_Params Parms{};

	Parms.SetDistance = SetDistance;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// DelegateFunction Backrooms.MotionScannerComponent.ScannerWaveUpdateDelegate__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// TArray<struct FTargetsStruct>      OutTargets                                                       (Parm, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
// struct FTelemetryStruct            OutTelemetry                                                     (Parm, NoDestructor, NativeAccessSpecifierPublic)

void UMotionScannerComponent::ScannerWaveUpdateDelegate__DelegateSignature(const TArray<struct FTargetsStruct>& OutTargets, const struct FTelemetryStruct& OutTelemetry)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MotionScannerComponent", "ScannerWaveUpdateDelegate__DelegateSignature");

	Params::UMotionScannerComponent_ScannerWaveUpdateDelegate__DelegateSignature_Params Parms{};

	Parms.OutTargets = OutTargets;
	Parms.OutTelemetry = OutTelemetry;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Backrooms.MotionScannerComponent.EndWaveEvent
// (Event, Public, BlueprintEvent)
// Parameters:

void UMotionScannerComponent::EndWaveEvent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MotionScannerComponent", "EndWaveEvent");



	UObject::ProcessEvent(Func, nullptr);

}


// Class Backrooms.MotionScannerDirector
// (Actor)

class UClass* AMotionScannerDirector::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MotionScannerDirector");

	return Clss;
}


// MotionScannerDirector Backrooms.Default__MotionScannerDirector
// (Public, ClassDefaultObject, ArchetypeObject)

class AMotionScannerDirector* AMotionScannerDirector::GetDefaultObj()
{
	static class AMotionScannerDirector* Default = nullptr;

	if (!Default)
		Default = static_cast<AMotionScannerDirector*>(AMotionScannerDirector::StaticClass()->DefaultObject);

	return Default;
}


// Function Backrooms.MotionScannerDirector.CheckLIDARDots
// (Final, Native, Protected, BlueprintCallable)
// Parameters:

void AMotionScannerDirector::CheckLIDARDots()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MotionScannerDirector", "CheckLIDARDots");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Class Backrooms.NoClipVolume
// (Actor)

class UClass* ANoClipVolume::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NoClipVolume");

	return Clss;
}


// NoClipVolume Backrooms.Default__NoClipVolume
// (Public, ClassDefaultObject, ArchetypeObject)

class ANoClipVolume* ANoClipVolume::GetDefaultObj()
{
	static class ANoClipVolume* Default = nullptr;

	if (!Default)
		Default = static_cast<ANoClipVolume*>(ANoClipVolume::StaticClass()->DefaultObject);

	return Default;
}


// Class Backrooms.PlayerStatsComponent
// (None)

class UClass* UPlayerStatsComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PlayerStatsComponent");

	return Clss;
}


// PlayerStatsComponent Backrooms.Default__PlayerStatsComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UPlayerStatsComponent* UPlayerStatsComponent::GetDefaultObj()
{
	static class UPlayerStatsComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UPlayerStatsComponent*>(UPlayerStatsComponent::StaticClass()->DefaultObject);

	return Default;
}


// Class Backrooms.PushableActor
// (Actor)

class UClass* APushableActor::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PushableActor");

	return Clss;
}


// PushableActor Backrooms.Default__PushableActor
// (Public, ClassDefaultObject, ArchetypeObject)

class APushableActor* APushableActor::GetDefaultObj()
{
	static class APushableActor* Default = nullptr;

	if (!Default)
		Default = static_cast<APushableActor*>(APushableActor::StaticClass()->DefaultObject);

	return Default;
}


// Function Backrooms.PushableActor.GetRightBoundingPoints
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                               InInvert                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FVector>             ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<struct FVector> APushableActor::GetRightBoundingPoints(bool InInvert)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PushableActor", "GetRightBoundingPoints");

	Params::APushableActor_GetRightBoundingPoints_Params Parms{};

	Parms.InInvert = InInvert;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Backrooms.PushableActor.GetForwardBoundingPoints
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                               InInvert                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FVector>             ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<struct FVector> APushableActor::GetForwardBoundingPoints(bool InInvert)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PushableActor", "GetForwardBoundingPoints");

	Params::APushableActor_GetForwardBoundingPoints_Params Parms{};

	Parms.InInvert = InInvert;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Backrooms.PushableActor.GetClosesPoint
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// class AActor*                      InActor                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FVector APushableActor::GetClosesPoint(class AActor* InActor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PushableActor", "GetClosesPoint");

	Params::APushableActor_GetClosesPoint_Params Parms{};

	Parms.InActor = InActor;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class Backrooms.RadarMap
// (Actor, Pawn)

class UClass* ARadarMap::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("RadarMap");

	return Clss;
}


// RadarMap Backrooms.Default__RadarMap
// (Public, ClassDefaultObject, ArchetypeObject)

class ARadarMap* ARadarMap::GetDefaultObj()
{
	static class ARadarMap* Default = nullptr;

	if (!Default)
		Default = static_cast<ARadarMap*>(ARadarMap::StaticClass()->DefaultObject);

	return Default;
}


// Class Backrooms.RadarPlayerComponent
// (None)

class UClass* URadarPlayerComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("RadarPlayerComponent");

	return Clss;
}


// RadarPlayerComponent Backrooms.Default__RadarPlayerComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class URadarPlayerComponent* URadarPlayerComponent::GetDefaultObj()
{
	static class URadarPlayerComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<URadarPlayerComponent*>(URadarPlayerComponent::StaticClass()->DefaultObject);

	return Default;
}


// Function Backrooms.RadarPlayerComponent.StartWaveEvent
// (Event, Public, BlueprintEvent)
// Parameters:

void URadarPlayerComponent::StartWaveEvent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RadarPlayerComponent", "StartWaveEvent");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Backrooms.RadarPlayerComponent.SetNewScanDistance
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              SetDistance                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void URadarPlayerComponent::SetNewScanDistance(float SetDistance)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RadarPlayerComponent", "SetNewScanDistance");

	Params::URadarPlayerComponent_SetNewScanDistance_Params Parms{};

	Parms.SetDistance = SetDistance;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// DelegateFunction Backrooms.RadarPlayerComponent.ScannerWaveUpdateDelegate__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// TArray<struct FRadarTargetStruct>  OutTargets                                                       (Parm, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
// struct FTelemetryStruct            OutTelemetry                                                     (Parm, NoDestructor, NativeAccessSpecifierPublic)

void URadarPlayerComponent::ScannerWaveUpdateDelegate__DelegateSignature(const TArray<struct FRadarTargetStruct>& OutTargets, const struct FTelemetryStruct& OutTelemetry)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RadarPlayerComponent", "ScannerWaveUpdateDelegate__DelegateSignature");

	Params::URadarPlayerComponent_ScannerWaveUpdateDelegate__DelegateSignature_Params Parms{};

	Parms.OutTargets = OutTargets;
	Parms.OutTelemetry = OutTelemetry;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Backrooms.RadarPlayerComponent.EndWaveEvent
// (Event, Public, BlueprintEvent)
// Parameters:

void URadarPlayerComponent::EndWaveEvent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RadarPlayerComponent", "EndWaveEvent");



	UObject::ProcessEvent(Func, nullptr);

}


// Class Backrooms.SteamManager
// (None)

class UClass* USteamManager::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SteamManager");

	return Clss;
}


// SteamManager Backrooms.Default__SteamManager
// (Public, ClassDefaultObject, ArchetypeObject)

class USteamManager* USteamManager::GetDefaultObj()
{
	static class USteamManager* Default = nullptr;

	if (!Default)
		Default = static_cast<USteamManager*>(USteamManager::StaticClass()->DefaultObject);

	return Default;
}


// Class Backrooms.WalkingVolume
// (Actor)

class UClass* AWalkingVolume::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WalkingVolume");

	return Clss;
}


// WalkingVolume Backrooms.Default__WalkingVolume
// (Public, ClassDefaultObject, ArchetypeObject)

class AWalkingVolume* AWalkingVolume::GetDefaultObj()
{
	static class AWalkingVolume* Default = nullptr;

	if (!Default)
		Default = static_cast<AWalkingVolume*>(AWalkingVolume::StaticClass()->DefaultObject);

	return Default;
}

}



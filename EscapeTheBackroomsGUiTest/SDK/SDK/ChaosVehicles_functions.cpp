#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class ChaosVehicles.ChaosVehicleMovementComponent
// (None)

class UClass* UChaosVehicleMovementComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ChaosVehicleMovementComponent");

	return Clss;
}


// ChaosVehicleMovementComponent ChaosVehicles.Default__ChaosVehicleMovementComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UChaosVehicleMovementComponent* UChaosVehicleMovementComponent::GetDefaultObj()
{
	static class UChaosVehicleMovementComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UChaosVehicleMovementComponent*>(UChaosVehicleMovementComponent::StaticClass()->DefaultObject);

	return Default;
}


// Function ChaosVehicles.ChaosVehicleMovementComponent.SetYawInput
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              Yaw                                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UChaosVehicleMovementComponent::SetYawInput(float Yaw)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChaosVehicleMovementComponent", "SetYawInput");

	Params::UChaosVehicleMovementComponent_SetYawInput_Params Parms{};

	Parms.Yaw = Yaw;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ChaosVehicles.ChaosVehicleMovementComponent.SetUseAutomaticGears
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bUseAuto                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UChaosVehicleMovementComponent::SetUseAutomaticGears(bool bUseAuto)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChaosVehicleMovementComponent", "SetUseAutomaticGears");

	Params::UChaosVehicleMovementComponent_SetUseAutomaticGears_Params Parms{};

	Parms.bUseAuto = bUseAuto;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ChaosVehicles.ChaosVehicleMovementComponent.SetThrottleInput
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              Throttle                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UChaosVehicleMovementComponent::SetThrottleInput(float Throttle)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChaosVehicleMovementComponent", "SetThrottleInput");

	Params::UChaosVehicleMovementComponent_SetThrottleInput_Params Parms{};

	Parms.Throttle = Throttle;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ChaosVehicles.ChaosVehicleMovementComponent.SetTargetGear
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              GearNum                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bImmediate                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UChaosVehicleMovementComponent::SetTargetGear(int32 GearNum, bool bImmediate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChaosVehicleMovementComponent", "SetTargetGear");

	Params::UChaosVehicleMovementComponent_SetTargetGear_Params Parms{};

	Parms.GearNum = GearNum;
	Parms.bImmediate = bImmediate;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ChaosVehicles.ChaosVehicleMovementComponent.SetSteeringInput
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              Steering                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UChaosVehicleMovementComponent::SetSteeringInput(float Steering)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChaosVehicleMovementComponent", "SetSteeringInput");

	Params::UChaosVehicleMovementComponent_SetSteeringInput_Params Parms{};

	Parms.Steering = Steering;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ChaosVehicles.ChaosVehicleMovementComponent.SetRollInput
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              Roll                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UChaosVehicleMovementComponent::SetRollInput(float Roll)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChaosVehicleMovementComponent", "SetRollInput");

	Params::UChaosVehicleMovementComponent_SetRollInput_Params Parms{};

	Parms.Roll = Roll;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ChaosVehicles.ChaosVehicleMovementComponent.SetPitchInput
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              Pitch                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UChaosVehicleMovementComponent::SetPitchInput(float Pitch)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChaosVehicleMovementComponent", "SetPitchInput");

	Params::UChaosVehicleMovementComponent_SetPitchInput_Params Parms{};

	Parms.Pitch = Pitch;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ChaosVehicles.ChaosVehicleMovementComponent.SetHandbrakeInput
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bNewHandbrake                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UChaosVehicleMovementComponent::SetHandbrakeInput(bool bNewHandbrake)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChaosVehicleMovementComponent", "SetHandbrakeInput");

	Params::UChaosVehicleMovementComponent_SetHandbrakeInput_Params Parms{};

	Parms.bNewHandbrake = bNewHandbrake;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ChaosVehicles.ChaosVehicleMovementComponent.SetChangeUpInput
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bNewGearUp                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UChaosVehicleMovementComponent::SetChangeUpInput(bool bNewGearUp)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChaosVehicleMovementComponent", "SetChangeUpInput");

	Params::UChaosVehicleMovementComponent_SetChangeUpInput_Params Parms{};

	Parms.bNewGearUp = bNewGearUp;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ChaosVehicles.ChaosVehicleMovementComponent.SetChangeDownInput
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bNewGearDown                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UChaosVehicleMovementComponent::SetChangeDownInput(bool bNewGearDown)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChaosVehicleMovementComponent", "SetChangeDownInput");

	Params::UChaosVehicleMovementComponent_SetChangeDownInput_Params Parms{};

	Parms.bNewGearDown = bNewGearDown;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ChaosVehicles.ChaosVehicleMovementComponent.SetBrakeInput
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              Brake                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UChaosVehicleMovementComponent::SetBrakeInput(float Brake)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChaosVehicleMovementComponent", "SetBrakeInput");

	Params::UChaosVehicleMovementComponent_SetBrakeInput_Params Parms{};

	Parms.Brake = Brake;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ChaosVehicles.ChaosVehicleMovementComponent.ServerUpdateState
// (Net, NetReliable, Native, Event, Protected, NetServer, NetValidate)
// Parameters:
// float                              InSteeringInput                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              InThrottleInput                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              InBrakeInput                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              InHandbrakeInput                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              InCurrentGear                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              InRollInput                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              InPitchInput                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              InYawInput                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UChaosVehicleMovementComponent::ServerUpdateState(float InSteeringInput, float InThrottleInput, float InBrakeInput, float InHandbrakeInput, int32 InCurrentGear, float InRollInput, float InPitchInput, float InYawInput)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChaosVehicleMovementComponent", "ServerUpdateState");

	Params::UChaosVehicleMovementComponent_ServerUpdateState_Params Parms{};

	Parms.InSteeringInput = InSteeringInput;
	Parms.InThrottleInput = InThrottleInput;
	Parms.InBrakeInput = InBrakeInput;
	Parms.InHandbrakeInput = InHandbrakeInput;
	Parms.InCurrentGear = InCurrentGear;
	Parms.InRollInput = InRollInput;
	Parms.InPitchInput = InPitchInput;
	Parms.InYawInput = InYawInput;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ChaosVehicles.ChaosVehicleMovementComponent.IncreaseThrottleInput
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              ThrottleDelta                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UChaosVehicleMovementComponent::IncreaseThrottleInput(float ThrottleDelta)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChaosVehicleMovementComponent", "IncreaseThrottleInput");

	Params::UChaosVehicleMovementComponent_IncreaseThrottleInput_Params Parms{};

	Parms.ThrottleDelta = ThrottleDelta;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ChaosVehicles.ChaosVehicleMovementComponent.GetUseAutoGears
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UChaosVehicleMovementComponent::GetUseAutoGears()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChaosVehicleMovementComponent", "GetUseAutoGears");

	Params::UChaosVehicleMovementComponent_GetUseAutoGears_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ChaosVehicles.ChaosVehicleMovementComponent.GetTargetGear
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UChaosVehicleMovementComponent::GetTargetGear()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChaosVehicleMovementComponent", "GetTargetGear");

	Params::UChaosVehicleMovementComponent_GetTargetGear_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ChaosVehicles.ChaosVehicleMovementComponent.GetForwardSpeedMPH
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UChaosVehicleMovementComponent::GetForwardSpeedMPH()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChaosVehicleMovementComponent", "GetForwardSpeedMPH");

	Params::UChaosVehicleMovementComponent_GetForwardSpeedMPH_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ChaosVehicles.ChaosVehicleMovementComponent.GetForwardSpeed
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UChaosVehicleMovementComponent::GetForwardSpeed()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChaosVehicleMovementComponent", "GetForwardSpeed");

	Params::UChaosVehicleMovementComponent_GetForwardSpeed_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ChaosVehicles.ChaosVehicleMovementComponent.GetCurrentGear
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UChaosVehicleMovementComponent::GetCurrentGear()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChaosVehicleMovementComponent", "GetCurrentGear");

	Params::UChaosVehicleMovementComponent_GetCurrentGear_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ChaosVehicles.ChaosVehicleMovementComponent.EnableSelfRighting
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               InState                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UChaosVehicleMovementComponent::EnableSelfRighting(bool InState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChaosVehicleMovementComponent", "EnableSelfRighting");

	Params::UChaosVehicleMovementComponent_EnableSelfRighting_Params Parms{};

	Parms.InState = InState;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ChaosVehicles.ChaosVehicleMovementComponent.DecreaseThrottleInput
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              ThrottleDelta                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UChaosVehicleMovementComponent::DecreaseThrottleInput(float ThrottleDelta)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChaosVehicleMovementComponent", "DecreaseThrottleInput");

	Params::UChaosVehicleMovementComponent_DecreaseThrottleInput_Params Parms{};

	Parms.ThrottleDelta = ThrottleDelta;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class ChaosVehicles.ChaosVehicleWheel
// (None)

class UClass* UChaosVehicleWheel::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ChaosVehicleWheel");

	return Clss;
}


// ChaosVehicleWheel ChaosVehicles.Default__ChaosVehicleWheel
// (Public, ClassDefaultObject, ArchetypeObject)

class UChaosVehicleWheel* UChaosVehicleWheel::GetDefaultObj()
{
	static class UChaosVehicleWheel* Default = nullptr;

	if (!Default)
		Default = static_cast<UChaosVehicleWheel*>(UChaosVehicleWheel::StaticClass()->DefaultObject);

	return Default;
}


// Function ChaosVehicles.ChaosVehicleWheel.IsInAir
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UChaosVehicleWheel::IsInAir()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChaosVehicleWheel", "IsInAir");

	Params::UChaosVehicleWheel_IsInAir_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ChaosVehicles.ChaosVehicleWheel.GetSuspensionOffset
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UChaosVehicleWheel::GetSuspensionOffset()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChaosVehicleWheel", "GetSuspensionOffset");

	Params::UChaosVehicleWheel_GetSuspensionOffset_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ChaosVehicles.ChaosVehicleWheel.GetSteerAngle
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UChaosVehicleWheel::GetSteerAngle()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChaosVehicleWheel", "GetSteerAngle");

	Params::UChaosVehicleWheel_GetSteerAngle_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ChaosVehicles.ChaosVehicleWheel.GetRotationAngle
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UChaosVehicleWheel::GetRotationAngle()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChaosVehicleWheel", "GetRotationAngle");

	Params::UChaosVehicleWheel_GetRotationAngle_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ChaosVehicles.ChaosVehicleWheel.GetAxleType
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class EAxleType               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

enum class EAxleType UChaosVehicleWheel::GetAxleType()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChaosVehicleWheel", "GetAxleType");

	Params::UChaosVehicleWheel_GetAxleType_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class ChaosVehicles.ChaosWheeledVehicleMovementComponent
// (None)

class UClass* UChaosWheeledVehicleMovementComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ChaosWheeledVehicleMovementComponent");

	return Clss;
}


// ChaosWheeledVehicleMovementComponent ChaosVehicles.Default__ChaosWheeledVehicleMovementComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UChaosWheeledVehicleMovementComponent* UChaosWheeledVehicleMovementComponent::GetDefaultObj()
{
	static class UChaosWheeledVehicleMovementComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UChaosWheeledVehicleMovementComponent*>(UChaosWheeledVehicleMovementComponent::StaticClass()->DefaultObject);

	return Default;
}


// Function ChaosVehicles.ChaosWheeledVehicleMovementComponent.MakeWheelStatus
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                               bInContact                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     ContactPoint                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UPhysicalMaterial*           PhysMaterial                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              NormalizedSuspensionLength                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              SpringForce                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bIsSlipping                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              SlipMagnitude                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bIsSkidding                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              SkidMagnitude                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     SkidNormal                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FWheelStatus                ReturnValue                                                      (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)

struct FWheelStatus UChaosWheeledVehicleMovementComponent::MakeWheelStatus(bool bInContact, struct FVector* ContactPoint, class UPhysicalMaterial* PhysMaterial, float NormalizedSuspensionLength, float SpringForce, bool bIsSlipping, float SlipMagnitude, bool bIsSkidding, float SkidMagnitude, struct FVector* SkidNormal)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChaosWheeledVehicleMovementComponent", "MakeWheelStatus");

	Params::UChaosWheeledVehicleMovementComponent_MakeWheelStatus_Params Parms{};

	Parms.bInContact = bInContact;
	Parms.PhysMaterial = PhysMaterial;
	Parms.NormalizedSuspensionLength = NormalizedSuspensionLength;
	Parms.SpringForce = SpringForce;
	Parms.bIsSlipping = bIsSlipping;
	Parms.SlipMagnitude = SlipMagnitude;
	Parms.bIsSkidding = bIsSkidding;
	Parms.SkidMagnitude = SkidMagnitude;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ContactPoint != nullptr)
		*ContactPoint = std::move(Parms.ContactPoint);

	if (SkidNormal != nullptr)
		*SkidNormal = std::move(Parms.SkidNormal);

	return Parms.ReturnValue;

}


// Function ChaosVehicles.ChaosWheeledVehicleMovementComponent.GetWheelState
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              WheelIndex                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FWheelStatus                ReturnValue                                                      (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)

struct FWheelStatus UChaosWheeledVehicleMovementComponent::GetWheelState(int32 WheelIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChaosWheeledVehicleMovementComponent", "GetWheelState");

	Params::UChaosWheeledVehicleMovementComponent_GetWheelState_Params Parms{};

	Parms.WheelIndex = WheelIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ChaosVehicles.ChaosWheeledVehicleMovementComponent.GetNumWheels
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UChaosWheeledVehicleMovementComponent::GetNumWheels()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChaosWheeledVehicleMovementComponent", "GetNumWheels");

	Params::UChaosWheeledVehicleMovementComponent_GetNumWheels_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ChaosVehicles.ChaosWheeledVehicleMovementComponent.GetEngineRotationSpeed
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UChaosWheeledVehicleMovementComponent::GetEngineRotationSpeed()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChaosWheeledVehicleMovementComponent", "GetEngineRotationSpeed");

	Params::UChaosWheeledVehicleMovementComponent_GetEngineRotationSpeed_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ChaosVehicles.ChaosWheeledVehicleMovementComponent.GetEngineMaxRotationSpeed
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UChaosWheeledVehicleMovementComponent::GetEngineMaxRotationSpeed()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChaosWheeledVehicleMovementComponent", "GetEngineMaxRotationSpeed");

	Params::UChaosWheeledVehicleMovementComponent_GetEngineMaxRotationSpeed_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ChaosVehicles.ChaosWheeledVehicleMovementComponent.EnableWheelFriction
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               InState                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UChaosWheeledVehicleMovementComponent::EnableWheelFriction(bool InState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChaosWheeledVehicleMovementComponent", "EnableWheelFriction");

	Params::UChaosWheeledVehicleMovementComponent_EnableWheelFriction_Params Parms{};

	Parms.InState = InState;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ChaosVehicles.ChaosWheeledVehicleMovementComponent.EnableSuspension
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               InState                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UChaosWheeledVehicleMovementComponent::EnableSuspension(bool InState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChaosWheeledVehicleMovementComponent", "EnableSuspension");

	Params::UChaosWheeledVehicleMovementComponent_EnableSuspension_Params Parms{};

	Parms.InState = InState;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ChaosVehicles.ChaosWheeledVehicleMovementComponent.EnableMechanicalSim
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               InState                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UChaosWheeledVehicleMovementComponent::EnableMechanicalSim(bool InState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChaosWheeledVehicleMovementComponent", "EnableMechanicalSim");

	Params::UChaosWheeledVehicleMovementComponent_EnableMechanicalSim_Params Parms{};

	Parms.InState = InState;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ChaosVehicles.ChaosWheeledVehicleMovementComponent.BreakWheelStatus
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FWheelStatus                Status                                                           (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// bool                               bInContact                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     ContactPoint                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UPhysicalMaterial*           PhysMaterial                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              NormalizedSuspensionLength                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              SpringForce                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bIsSlipping                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              SlipMagnitude                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bIsSkidding                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              SkidMagnitude                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     SkidNormal                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UChaosWheeledVehicleMovementComponent::BreakWheelStatus(struct FWheelStatus& Status, bool* bInContact, struct FVector* ContactPoint, class UPhysicalMaterial** PhysMaterial, float* NormalizedSuspensionLength, float* SpringForce, bool* bIsSlipping, float* SlipMagnitude, bool* bIsSkidding, float* SkidMagnitude, struct FVector* SkidNormal)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChaosWheeledVehicleMovementComponent", "BreakWheelStatus");

	Params::UChaosWheeledVehicleMovementComponent_BreakWheelStatus_Params Parms{};

	Parms.Status = Status;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (bInContact != nullptr)
		*bInContact = Parms.bInContact;

	if (ContactPoint != nullptr)
		*ContactPoint = std::move(Parms.ContactPoint);

	if (PhysMaterial != nullptr)
		*PhysMaterial = Parms.PhysMaterial;

	if (NormalizedSuspensionLength != nullptr)
		*NormalizedSuspensionLength = Parms.NormalizedSuspensionLength;

	if (SpringForce != nullptr)
		*SpringForce = Parms.SpringForce;

	if (bIsSlipping != nullptr)
		*bIsSlipping = Parms.bIsSlipping;

	if (SlipMagnitude != nullptr)
		*SlipMagnitude = Parms.SlipMagnitude;

	if (bIsSkidding != nullptr)
		*bIsSkidding = Parms.bIsSkidding;

	if (SkidMagnitude != nullptr)
		*SkidMagnitude = Parms.SkidMagnitude;

	if (SkidNormal != nullptr)
		*SkidNormal = std::move(Parms.SkidNormal);

}


// Class ChaosVehicles.VehicleAnimationInstance
// (None)

class UClass* UVehicleAnimationInstance::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("VehicleAnimationInstance");

	return Clss;
}


// VehicleAnimationInstance ChaosVehicles.Default__VehicleAnimationInstance
// (Public, ClassDefaultObject, ArchetypeObject)

class UVehicleAnimationInstance* UVehicleAnimationInstance::GetDefaultObj()
{
	static class UVehicleAnimationInstance* Default = nullptr;

	if (!Default)
		Default = static_cast<UVehicleAnimationInstance*>(UVehicleAnimationInstance::StaticClass()->DefaultObject);

	return Default;
}


// Function ChaosVehicles.VehicleAnimationInstance.GetVehicle
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class AWheeledVehiclePawn*         ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class AWheeledVehiclePawn* UVehicleAnimationInstance::GetVehicle()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VehicleAnimationInstance", "GetVehicle");

	Params::UVehicleAnimationInstance_GetVehicle_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class ChaosVehicles.WheeledVehiclePawn
// (Actor, Pawn)

class UClass* AWheeledVehiclePawn::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WheeledVehiclePawn");

	return Clss;
}


// WheeledVehiclePawn ChaosVehicles.Default__WheeledVehiclePawn
// (Public, ClassDefaultObject, ArchetypeObject)

class AWheeledVehiclePawn* AWheeledVehiclePawn::GetDefaultObj()
{
	static class AWheeledVehiclePawn* Default = nullptr;

	if (!Default)
		Default = static_cast<AWheeledVehiclePawn*>(AWheeledVehiclePawn::StaticClass()->DefaultObject);

	return Default;
}

}



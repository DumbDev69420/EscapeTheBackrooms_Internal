#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BI_ComputersEvents.BI_ComputersEvents_C
// (None)

class UClass* IBI_ComputersEvents_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BI_ComputersEvents_C");

	return Clss;
}


// BI_ComputersEvents_C BI_ComputersEvents.Default__BI_ComputersEvents_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class IBI_ComputersEvents_C* IBI_ComputersEvents_C::GetDefaultObj()
{
	static class IBI_ComputersEvents_C* Default = nullptr;

	if (!Default)
		Default = static_cast<IBI_ComputersEvents_C*>(IBI_ComputersEvents_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BI_ComputersEvents.BI_ComputersEvents_C.onClose
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void IBI_ComputersEvents_C::OnClose()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BI_ComputersEvents_C", "onClose");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BI_ComputersEvents.BI_ComputersEvents_C.LaunchShortcut
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Program_ID                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  Texture2D__if_applicatable_                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        Text__if_applicatable_                                           (BlueprintVisible, BlueprintReadOnly, Parm)
// class USoundBase*                  Sounnd__if_applicatable_                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFileMediaSource*            Media__if_applicatable_                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      Level_Name__if_applicatable_                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void IBI_ComputersEvents_C::LaunchShortcut(int32 Program_ID, class UTexture2D* Texture2D__if_applicatable_, class FText Text__if_applicatable_, class USoundBase* Sounnd__if_applicatable_, class UFileMediaSource* Media__if_applicatable_, const class FString& Level_Name__if_applicatable_)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BI_ComputersEvents_C", "LaunchShortcut");

	Params::IBI_ComputersEvents_C_LaunchShortcut_Params Parms{};

	Parms.Program_ID = Program_ID;
	Parms.Texture2D__if_applicatable_ = Texture2D__if_applicatable_;
	Parms.Text__if_applicatable_ = Text__if_applicatable_;
	Parms.Sounnd__if_applicatable_ = Sounnd__if_applicatable_;
	Parms.Media__if_applicatable_ = Media__if_applicatable_;
	Parms.Level_Name__if_applicatable_ = Level_Name__if_applicatable_;

	UObject::ProcessEvent(Func, &Parms);

}

}



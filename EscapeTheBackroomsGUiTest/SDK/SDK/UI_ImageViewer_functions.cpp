#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UI_ImageViewer.UI_ImageViewer_C
// (None)

class UClass* UUI_ImageViewer_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UI_ImageViewer_C");

	return Clss;
}


// UI_ImageViewer_C UI_ImageViewer.Default__UI_ImageViewer_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUI_ImageViewer_C* UUI_ImageViewer_C::GetDefaultObj()
{
	static class UUI_ImageViewer_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUI_ImageViewer_C*>(UUI_ImageViewer_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UI_ImageViewer.UI_ImageViewer_C.SetImage
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTexture2D*                  Texture                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_ImageViewer_C::SetImage(class UTexture2D* Texture)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ImageViewer_C", "SetImage");

	Params::UUI_ImageViewer_C_SetImage_Params Parms{};

	Parms.Texture = Texture;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_ImageViewer.UI_ImageViewer_C.ExecuteUbergraph_UI_ImageViewer
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  K2Node_CustomEvent_Texture                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_ImageViewer_C::ExecuteUbergraph_UI_ImageViewer(int32 EntryPoint, class UTexture2D* K2Node_CustomEvent_Texture)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ImageViewer_C", "ExecuteUbergraph_UI_ImageViewer");

	Params::UUI_ImageViewer_C_ExecuteUbergraph_UI_ImageViewer_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CustomEvent_Texture = K2Node_CustomEvent_Texture;

	UObject::ProcessEvent(Func, &Parms);

}

}



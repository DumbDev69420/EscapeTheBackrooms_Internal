#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x20 (0x48 - 0x28)
// Class XRVisualization.XRVisualizationLoadHelper
class UXRVisualizationLoadHelper : public UObject
{
public:
	class UStaticMesh*                           GenericHMD;                                        // 0x28(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UStaticMesh*                           OculusControllerMesh;                              // 0x30(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UStaticMesh*                           ViveControllerMesh;                                // 0x38(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UStaticMesh*                           STEMControllerMesh;                                // 0x40(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UXRVisualizationLoadHelper* GetDefaultObj();

};

// 0x8 (0x30 - 0x28)
// Class XRVisualization.XRVisualizationFunctionLibrary
class UXRVisualizationFunctionLibrary : public UBlueprintFunctionLibrary
{
public:
	class UXRVisualizationLoadHelper*            LoadHelper;                                        // 0x28(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UXRVisualizationFunctionLibrary* GetDefaultObj();

	void RenderMotionController(struct FXRMotionControllerData& XRControllerData, bool bRight);
	void RenderHMD(struct FXRHMDData& XRHMDData);
};

}



#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x40 (0x40 - 0x0)
// UserDefinedStruct S_UI_AudioSettings.S_UI_AudioSettings
struct FS_UI_AudioSettings
{
public:
	bool                                         MusicOnMainMenu_8_AACAFA5A4033E0BD85AC34A715796713; // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1A7C[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class USoundCue*                             MainMenuMusic_6_2AD1142C46261A782BEF62BC80167846;  // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         MusicOnPause_26_1C2BF3D64F1B91CBED40E7A1C6AFF10C;  // 0x10(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1A7D[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class USoundCue*                             PauseMusic_10_53B8178E46120189F9440FA011D27306;    // 0x18(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         SoundOnClick_25_7403D1F049160457DF631790F5A355D6;  // 0x20(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1A7E[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class USoundCue*                             ClickSound_24_A53A3D824DA08C6B0D53EC8BD6DCF8DB;    // 0x28(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         SoundOnHovered_21_AF6F7F48468DEA43D436B5B60BA25D17; // 0x30(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1A7F[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class USoundCue*                             HoveredSound_23_A87553BB4938F92C893F779076099580;  // 0x38(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}



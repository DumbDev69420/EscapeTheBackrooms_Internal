#include "SDK/SDK.hpp"
#include <thread>
#include <algorithm>
#include "Cheat.h"
#include <MinHook.h>

#define Gatekeep

typedef void (*PostRender_t)(SDK::UObject* pObject, SDK::UCanvas* pCanvas);
PostRender_t origin_renderer;

typedef void(__stdcall* fnProcessEvent)(SDK::UObject* Object, SDK::UFunction* Function, void* Params);
fnProcessEvent fnProcessEventOrigin;
fnProcessEvent fnProcessEventTarget;

std::wstring stringToWideString(const std::string& str)
{
	std::wstring wstr(str.length(), L' ');
	std::copy(str.begin(), str.end(), wstr.begin());
	return wstr;
}

void ConsoleExit() {
	HWND ConsoleHandle = GetConsoleWindow();
	FreeConsole();
	SendMessage(ConsoleHandle, WM_CLOSE, 0, 0);
}

namespace FunctionPtrsProcessEvent {
 void* Lobby_PlayerController_COC_KickedFromLobby = nullptr;
 void* MP_PlayerController_COC_KickedFromLobby = nullptr;
 void* Lobby_PlayerController_CReceiveBeginPlay = nullptr;
 void* W_Kicked_C_Tick = nullptr;

 void NullObjects() {
	 Lobby_PlayerController_COC_KickedFromLobby = nullptr;
	 MP_PlayerController_COC_KickedFromLobby = nullptr;
	 Lobby_PlayerController_CReceiveBeginPlay = nullptr;
	 W_Kicked_C_Tick = nullptr;
 }

};


void ProcessEventHook(SDK::UObject* Obj, SDK::UFunction* Function, void* Parms) {

	auto execF = Function;

	


#pragma region FindPointers

	if (!FunctionPtrsProcessEvent::Lobby_PlayerController_COC_KickedFromLobby) {

		static ULONGLONG TickCount_ = 0;
		auto Tick = GetTickCount64();

		if (Tick >= TickCount_) {
			TickCount_ = Tick + 100;

			auto Class_ = SDK::ALobby_PlayerController_C::StaticClass();

			if (Class_)
			{
				auto Func = Class_->GetFunction("Lobby_PlayerController_C", "OC_KickedFromLobby");
				if (Func)
				{
					FunctionPtrsProcessEvent::Lobby_PlayerController_COC_KickedFromLobby = Func;
				}
			}
		}
	}

	if (!FunctionPtrsProcessEvent::MP_PlayerController_COC_KickedFromLobby) {

		static ULONGLONG TickCount_ = 0;
		auto Tick = GetTickCount64();

		if (Tick >= TickCount_) {
			TickCount_ = Tick + 100;

			auto Class_ = SDK::AMP_PlayerController_C::StaticClass();

			if (Class_)
			{
				auto Func = Class_->GetFunction("MP_PlayerController_C", "OC_KickedFromLobby");
				if (Func)
				{
					FunctionPtrsProcessEvent::MP_PlayerController_COC_KickedFromLobby = Func;
				}
			}
		}
	}

	if (!FunctionPtrsProcessEvent::W_Kicked_C_Tick) {

		static ULONGLONG TickCount_ = 0;
		auto Tick = GetTickCount64();

		if (Tick >= TickCount_) {
			TickCount_ = Tick + 100;

			auto Class_ = SDK::UW_Kicked_C::StaticClass();

			if (Class_)
			{
				auto Func = Class_->GetFunction("W_Kicked_C", "Tick");

				if (Func)
				{
					FunctionPtrsProcessEvent::W_Kicked_C_Tick = Func;

				}
			}
		}
	}

	
	if (!FunctionPtrsProcessEvent::Lobby_PlayerController_CReceiveBeginPlay) {

		static ULONGLONG TickCount_ = 0;
		auto Tick = GetTickCount64();

		if (Tick >= TickCount_) {
			TickCount_ = Tick + 100;

			auto Class_ = SDK::ALobby_PlayerController_C::StaticClass();

			if (Class_)
			{
				auto Func = Class_->GetFunction("Lobby_PlayerController_C", "ReceiveBeginPlay");
				if (Func)
				{
					FunctionPtrsProcessEvent::Lobby_PlayerController_CReceiveBeginPlay = Func;
				}
			}
		}
	} 

#pragma endregion



	if (execF == FunctionPtrsProcessEvent::Lobby_PlayerController_COC_KickedFromLobby || execF == FunctionPtrsProcessEvent::MP_PlayerController_COC_KickedFromLobby) {
		Cheat::MainRun(nullptr);

		if (Obj == Cheat::PlayerController) {

			SDK::ABP_BasePlayerController_C* plyCC = (SDK::ABP_BasePlayerController_C*)Obj;

			Cheat::Message("You were kicked by Host!");

			return;
		}

		
	}

	if (execF == FunctionPtrsProcessEvent::Lobby_PlayerController_CReceiveBeginPlay) {

		Cheat::MainRun(nullptr);

		if (Obj != Cheat::PlayerController) {
			SDK::ALobby_PlayerController_C* Controller = (SDK::ALobby_PlayerController_C*)Obj;

			if(Controller->PlayerState)
			Cheat::Message(std::string("Player " + Controller->PlayerState->PlayerNamePrivate.ToString() + "joined your Game!"));
		}
		else
		{

		}
	}

	if (execF == FunctionPtrsProcessEvent::W_Kicked_C_Tick) {
		auto obj_ = (SDK::UW_Kicked_C*)Obj;
		auto params_ = (SDK::Params::UW_Kicked_C_Tick_Params*)Parms;

		auto mssg = Cheat::TextLib->Conv_StringToText(SDK::FString(L"Host the Broke ass Nigga kicked you lmao"));

		obj_->TextBlock_Message->SetText(mssg);



	}
	


	return fnProcessEventOrigin(Obj, Function, Parms);
}


void MainRender(SDK::UObject* object, SDK::UCanvas* Canvas) {

	if (Canvas) {
		//init menu


		static Cheat::UsefullFuncs::RGBA RGBShit = { 0, 0, 0, 255 };
		static SDK::FLinearColor RGBLinear = SDK::FLinearColor(Cheat::UsefullFuncs::RGBATOFLinear(RGBShit.R, RGBShit.G, RGBShit.B, RGBShit.A));

		Cheat::UsefullFuncs::Rainbowify(&RGBShit);
		RGBLinear = SDK::FLinearColor(Cheat::UsefullFuncs::RGBATOFLinear(RGBShit.R, RGBShit.G, RGBShit.B, RGBShit.A));

		if (Settings::ShowWatermark) {
			Cheat::DrawTextRGBWithFString(Canvas, SDK::FString(L"Made by Senpai42"), SDK::FVector2D(10, 10), RGBLinear, false, 1.1f);
		}

		ULONGLONG CountCurrent = GetTickCount64();
		static std::wstring FlyText = L" ";

		static bool UseSteamID = false;

		static ULONGLONG CountUpdateText = 0;

		if (CountCurrent >= CountUpdateText) {
			CountUpdateText = CountCurrent + 200;

			if (!Settings::VelocityFly)
				FlyText = L"(ClientSided)";
			else
				FlyText = L"(ServerSided)";


			UseSteamID = Backend::HostSteamID_Clean != "";
		}


		CWINGui::SetupCanvas(Canvas);

		Cheat::MainRun(Canvas);


		ZeroGUI::Input::Handle();

		if (Settings::SpectatorList) {
			const int SpectatorListPositionY = 60.0f;
			const int Distance = 12.0f;
			int Size = 0;

			Cheat::DrawTextRGBWithFString(Canvas, SDK::FString(L"Spectator List:"), SDK::FVector2D(10, SpectatorListPositionY), SDK::FLinearColor(0.0f, 1.0f, 0.0f, 1.0f), false, 1.1f);

			for (size_t i = 0; i < PlayerStuff::PlayerList.size(); i++)
			{
				if (PlayerStuff::PlayerList[i].IsSpectatingLocalPlayer(Cheat::PlayerController)) {
					Cheat::DrawTextRGBWithFString(Canvas, SDK::FString(PlayerStuff::PlayerList[i].Sanitizedname.c_str()), SDK::FVector2D(26 , SpectatorListPositionY + 21.0f + (Distance * Size)), SDK::FLinearColor(0.0f, 1.0f, 0.0f, 1.0f), false, 1.1f);
					Size++;
				}
			}
		}

		static SDK::FVector2D WindowSize = { 500.0f, 555.0f };

		if (CWINGui::Window("Escape The Backrooms Internal", &Settings::WindowPos, WindowSize, Settings::Open))
		{
			static int tab = 1;
			if (CWINGui::ButtonTab(L"Game Shit", SDK::FVector2D{ 110, 35 }, tab == 0)) { tab = 0; WindowSize = { 500.0f, 640.0f }; }
			if (CWINGui::ButtonTab(L"World Visuals", SDK::FVector2D{ 110, 35 }, tab == 1)) { tab = 1; WindowSize = { 500.0f, 555.0f }; }
			if (CWINGui::ButtonTab(L"Miscellaneous", SDK::FVector2D{ 110, 35 }, tab == 2)) { tab = 2; WindowSize = { 500.0f, 680.0f }; }
			if (CWINGui::ButtonTab(L"Item Spawner", SDK::FVector2D{ 110, 35 }, tab == 3)) { tab = 3; WindowSize = { 500.0f, 620.0f }; }
			if (CWINGui::ButtonTab(L"Level Miscs", SDK::FVector2D{ 110, 35 }, tab == 4)) { tab = 4; WindowSize = { 500.0f, 555.0f }; }
			if (CWINGui::ButtonTab(L"Host Info", SDK::FVector2D{ 110, 35 }, tab == 5)) { tab = 5; WindowSize = { 500.0f, 555.0f }; }
#ifdef Gatekeep
			if (CWINGui::ButtonTab(L"Chat Spoofer", SDK::FVector2D{ 110, 35 }, tab == 6)) { tab = 6; WindowSize = { 540.0f, 625.0f }; }
#endif
			if (CWINGui::ButtonTab(L"Level Loader", SDK::FVector2D{ 110, 35 }, tab == 7)) { tab = 7; WindowSize = { 740.0f, 575.0f }; }

			if (CWINGui::ButtonTab(L"Players", SDK::FVector2D{ 110, 35 }, tab == 8)) { tab = 8; WindowSize = { 600.0f, 555.0f }; }
			if (CWINGui::ButtonTab(L"Hosting Options", SDK::FVector2D{ 110, 35 }, tab == 10)) { tab = 10; WindowSize = { 600.0f, 555.0f }; }

			CWINGui::NextColumn(140.0f);
			CWINGui::Text(L"");
			switch (tab)
			{
			case 0:
				CWINGui::Checkbox(L"Peace Mode (Removes any Entity)", &Settings::PeacefullMode);
				CWINGui::Checkbox(L"No Cameras", &Settings::NoCams);
				CWINGui::Checkbox(L"NoClip (Client Sided)", &Settings::Noclip);

				CWINGui::Checkbox(std::wstring(LR"(Player "Fly" (Press Space))" + FlyText).c_str(), &Settings::PlayerFly);
				CWINGui::Checkbox(LR"(Velocity Fly)", &Settings::VelocityFly);
				CWINGui::SliderFloat(L"Flyspeed", &Settings::PlayerFlySpeedY, 0.01f, 1000.0f);
				if (CWINGui::Button(L"Hide Doors", SDK::FVector2D{ 110, 35 })) {
					Settings::ActorEvent = true;
					Settings::HideWalls = true;
				}
				//if (CWINGui::Button(L"Force Admin", SDK::FVector2D{ 110, 35 })) {
				//	Settings::ForceAdmin = true;
				//}
				if (CWINGui::Button(L"TP to Exit", SDK::FVector2D{ 110, 35 })) {
					Settings::TpToExit = true;
				}
				if (CWINGui::Button(L"Killysf", SDK::FVector2D{ 110, 35 })) {
					Settings::Kys = true;
				}
				if (CWINGui::Button(L"Bring Tapes", SDK::FVector2D{ 110, 35 })) {
					Settings::BringAllItems = true;
				}
#ifdef Gatekeep
				if (CWINGui::Button(L"Unposses Pawn", SDK::FVector2D{ 110, 35 })) {
					Settings::UnpossePawns = true;
				}
#endif
				if (CWINGui::Button(L"Trigger all trigger", SDK::FVector2D{ 110, 35 })) {
					Settings::InteractEvent = true;
				}
				if (CWINGui::Button(L"Drop many Items", SDK::FVector2D{ 110, 35 })) {
					Settings::LagGame = true;
				}
				if (CWINGui::Button(L"Clear Items", SDK::FVector2D{ 110, 35 })) {
					Settings::ClearItems = true;
				}
				if (CWINGui::Button(L"Alloc Console", SDK::FVector2D{ 110, 35 })) {
					Settings::wtf_ = true;
					/*auto arrayAudio = Cheat::AudioData(std::vector<int8>{0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0});

					Cheat::PlayerController->SRV_SendVoiceData((SDK::TArray<int8>)arrayAudio, false, false);*/
				}
				//if (CWINGui::Button(L"Force Ownself", SDK::FVector2D{ 110, 35 })) {
				//	Settings::OwnSelf = true;
				//}
				break;
			case 1:
				//CWINGui::Checkbox(L"Main Switch", &Settings::Esp);
				CWINGui::Checkbox(L"Spectator List", &Settings::SpectatorList);
				CWINGui::Checkbox(L"Enemy Esp", &Settings::EnemyEsp);
				CWINGui::Checkbox(L"Player Esp", &Settings::PlayerEsp);
				CWINGui::Checkbox(L"Item Esp", &Settings::ItemEsp);
				CWINGui::Checkbox(L"Interactables Esp", &Settings::InteractablesEsp);
				CWINGui::Checkbox(L"Boat Esp", &Settings::BoatEsp);
				CWINGui::Checkbox(L"Actor Esp", &Settings::ActorEsp);
				CWINGui::Checkbox(L"Flashlight RGB", &Settings::RGBFlashlight);
				CWINGui::Checkbox(L"Enviroment RGB", &Settings::EnviromentRGB);
				break;

			case 2:
				CWINGui::Checkbox(L"Unlock Playercounter (100 Players)", RGBLinear, &Settings::UnlockPlayers);
				CWINGui::Checkbox(L"Watermark", &Settings::ShowWatermark);
				CWINGui::Checkbox(L"Boat Fly", &Settings::BoatFly);
				CWINGui::Checkbox(L"Boat Speedhack", &Settings::BoatSpeedhack);
				CWINGui::Checkbox(L"RapidFire", &Settings::Rapidfire);
				CWINGui::Checkbox(L"Infinite Stamina", &Settings::InfiniteStamina);
				CWINGui::Checkbox(L"Infinite Sanity", &Settings::InfiniteSanity);
				CWINGui::Checkbox(L"Easy Balance", &Settings::NoStumble);
				CWINGui::Checkbox(L"GodMode (Host Only)(Works only on some Enemies)", &Settings::Godmode);
				CWINGui::Checkbox(L"Speedhack", &Settings::SpeedHack);
				CWINGui::Checkbox(L"Interactables always on", &Settings::InteractAll);
#ifdef Gatekeep
				CWINGui::Checkbox(L"NameChanger", &Settings::NameChanger);
				/*CWINGui::Checkbox(L"NameChanger Random", &Settings::RandomName);*/
				CWINGui::Checkbox(L"Spawner", &Settings::Spawner);
#endif
				CWINGui::Checkbox(L"Fov Changer", &Settings::FovChanger);
				CWINGui::SliderFloat(L"Fov", &Settings::Fov, 10.0f, 200.0f);
				CWINGui::SliderFloat(L"Speed", &Settings::Speed, 100, 10000);
				CWINGui::SliderFloat(L"Boat Speed", &Settings::BoatSpeed, 100, 10000);

				//{
				//	static bool hasfinishedConsole = false;
				//	static std::wstring outputConsole = L"";
				//	if (CWINGui::Button(L"Test bypass CurseFilter", SDK::FVector2D{ 125, 35 })) {

				//		

				//		std::thread(Cheat::GetInputW, "Enter a Something: ", std::ref(outputConsole), std::ref(hasfinishedConsole)).detach();
				//	}

				//	if (hasfinishedConsole) {
				//		hasfinishedConsole = false;

				//		auto value = Algorithm_(outputConsole);

				//		Cheat::MessageW(value);
				//	}
				//}

				
#ifdef Gatekeep
				if (Settings::NameChanger)
				{
					static bool hasfinishedConsole = false;
					static bool hasfinishedConsoleBefore = true;
					static std::wstring outputConsole = L"";

					if (hasfinishedConsole) {
						hasfinishedConsole = false;
						hasfinishedConsoleBefore = true;

						Settings::SetName_NameChanger(outputConsole);
					}

					if ( CWINGui::Button(L"Set Name (Console)", SDK::FVector2D{ 125, 35 }) ){

						if (hasfinishedConsoleBefore) {
							hasfinishedConsoleBefore = false;

							outputConsole = L"";

							std::thread(Cheat::GetInputW, "Enter a Name: ", std::ref(outputConsole), std::ref(hasfinishedConsole)).detach();
						}

					}
				}
#endif
				break;
			case 3:
				CWINGui::Text(L"Item Spawner:");
				/*CWINGui::Checkbox(L"Silent Spawner", &Settings::SilentItemSpawner);*/
				if (CWINGui::Button(L"Give Diving Helmet", SDK::FVector2D{ 125, 35 })) {
					Settings::SpawnItem = true;
					Settings::ItemToSpawn = Settings::Items::DivingHelmet;
				}
				if (CWINGui::Button(L"Give Camera", SDK::FVector2D{ 125, 35 })) {
					Settings::SpawnItem = true;
					Settings::ItemToSpawn = Settings::Items::Camera;
				}
				if (CWINGui::Button(L"Give Glowstick", SDK::FVector2D{ 125, 35 })) {
					Settings::SpawnItem = true;
					Settings::ItemToSpawn = Settings::Items::Glowstick;
				}
				if (CWINGui::Button(L"Give Thermometer", SDK::FVector2D{ 125, 35 })) {
					Settings::SpawnItem = true;
					Settings::ItemToSpawn = Settings::Items::Thermometer;
				}
				if (CWINGui::Button(L"Give WalkieTalkie", SDK::FVector2D{ 125, 35 })) {
					Settings::SpawnItem = true;
					Settings::ItemToSpawn = Settings::Items::WalkiTalkie;
				}
				if (CWINGui::Button(L"Give Almondextract ", SDK::FVector2D{ 125, 35 })) {
					Settings::SpawnItem = true;
					Settings::ItemToSpawn = Settings::Items::AlmondExtract;
				}
				if (CWINGui::Button(L"Give Firework ", SDK::FVector2D{ 125, 35 })) {
					Settings::SpawnItem = true;
					Settings::ItemToSpawn = Settings::Items::Firework;
				}
				if (CWINGui::Button(L"Give Ticket ", SDK::FVector2D{ 125, 35 })) {
					Settings::SpawnItem = true;
					Settings::ItemToSpawn = Settings::Items::Ticket;
				}
				if (CWINGui::Button(L"Give Rope", SDK::FVector2D{ 125, 35 })) {
					Settings::SpawnItem = true;
					Settings::ItemToSpawn = Settings::Items::Rope;
				}
				CWINGui::NextColumn(290.0f);
				CWINGui::Text(L"");
				if (CWINGui::Button(L"Give Flashlight", SDK::FVector2D{ 125, 35 })) {
					Settings::SpawnItem = true;
					Settings::ItemToSpawn = Settings::Items::Flashlight;
				}
				if (CWINGui::Button(L"Give Flaregun", SDK::FVector2D{ 125, 35 })) {
					Settings::SpawnItem = true;
					Settings::ItemToSpawn = Settings::Items::Flaregun;
				}
				if (CWINGui::Button(L"Give Almondwater", SDK::FVector2D{ 125, 35 })) {
					Settings::SpawnItem = true;
					Settings::ItemToSpawn = Settings::Items::Almondwater;
				}
				if (CWINGui::Button(L"Give Chainsaw", SDK::FVector2D{ 125, 35 })) {
					Settings::SpawnItem = true;
					Settings::ItemToSpawn = Settings::Items::Chainsaw;
				}
				if (CWINGui::Button(L"Give Bugspray", SDK::FVector2D{ 125, 35 })) {
					Settings::SpawnItem = true;
					Settings::ItemToSpawn = Settings::Items::Bugspray;
				}
				if (CWINGui::Button(L"Give Lidarscanner", SDK::FVector2D{ 125, 35 })) {
					Settings::SpawnItem = true;
					Settings::ItemToSpawn = Settings::Items::Lidar;
				}
				if (CWINGui::Button(L"Give Crowbar", SDK::FVector2D{ 125, 35 })) {
					Settings::SpawnItem = true;
					Settings::ItemToSpawn = Settings::Items::Crowbar;
				}
				if (CWINGui::Button(L"Give Juice", SDK::FVector2D{ 125, 35 })) {
					Settings::SpawnItem = true;
					Settings::ItemToSpawn = Settings::Items::Speedwateridk;
				}
				if (CWINGui::Button(L"Give Painwater >.< ", SDK::FVector2D{ 125, 35 })) {
					Settings::SpawnItem = true;
					Settings::ItemToSpawn = Settings::Items::Pain;
				}
				if (CWINGui::Button(L"Give Jelly", SDK::FVector2D{ 125, 35 })) {
					Settings::SpawnItem = true;
					Settings::ItemToSpawn = Settings::Items::Jelly;
				}
				
				break;


			case 4:
				CWINGui::Text(stringToWideString(Backend::LevelName).c_str());
				/*CWINGui::Text(L"Coming soon, since this shit takes Time!");*/
				Backend::RunLevelBackend();
				break;

			case 5:
				CWINGui::Text(stringToWideString(UseSteamID ? "Host SteamID: " +  Backend::HostSteamID_Clean : "No Host Detected!").c_str());

				
				if (CWINGui::Button(L"Open Profile", SDK::FVector2D{ 125, 35 })) {

					if (Backend::HostSteamID_Clean != "")
					system(std::string(std::string("start ") + R"(https://steamcommunity.com/profiles/)" + Backend::HostSteamID_Clean + R"(/)").c_str());
					else
					{
						Cheat::Message("Can't Open Steam Profile since no Host has been Detected!", FOREGROUND_RED);
					}
				}
				break;


			case 6:
#ifdef Gatekeep

				CWINGui::Text(std::wstring(L"Spoofed as Player: " + (Settings::PlayerPicked != -1 ? PlayerStuff::PlayerList[Settings::PlayerPicked].name : std::wstring(L"None")) ).c_str());

				{
					CWINGui::NextColumn(140.0f + (190 / 2));
					CWINGui::Text(L"");
					CWINGui::Text(L"");
					CWINGui::Text(L"");
					CWINGui::Text(L"");
					CWINGui::Text(L"");
					CWINGui::Text(L"");
					CWINGui::Text(L"");
					CWINGui::Text(L"");
					CWINGui::Text(L"");
					CWINGui::Text(L"");
					CWINGui::Text(L"");
					CWINGui::Text(L"");
					CWINGui::Text(L"");
					CWINGui::Text(L"");
					if (CWINGui::Button(L"Change Name Back", SDK::FVector2D{ 125, 35 })) {
						Settings::PlayerPicked = -1;
						Settings::ChangeNameEvent = true;
					}

					CWINGui::NextColumn(140.0f);
					CWINGui::Text(L"");
					CWINGui::Text(L"");
				}


				{
					static bool hasfinishedChatSpoof = false;
					static bool hasfinishedChatSpoofBefore = true;
					static std::wstring outputConsoleChatSpoof = L"";


					if (hasfinishedChatSpoof) {
						hasfinishedChatSpoof = false;
						hasfinishedChatSpoofBefore = true;

						Settings::MessageSpoof = outputConsoleChatSpoof;
						Settings::SpoofChatEvent = true;
					}


					for (size_t i = 0; i < PlayerStuff::PlayerList.size(); i++)
					{
						if (i % 10 == 0 && i >= 10) {
							int Row = i / 10;

							CWINGui::NextColumn(140.0f + (190 * Row));
							CWINGui::Text(L"");
							CWINGui::Text(L"");
						}

						if (CWINGui::Button(std::wstring(PlayerStuff::PlayerList[i].name).c_str(), SDK::FVector2D{ 180, 25 }))
						{
							Settings::PlayerPicked = i;
							Settings::NameOfVictim = PlayerStuff::PlayerList[i].name;

							if (hasfinishedChatSpoofBefore) {
								hasfinishedChatSpoofBefore = false;

								outputConsoleChatSpoof = L"";

								std::thread(Cheat::GetInputW, "Enter a Message: ", std::ref(outputConsoleChatSpoof), std::ref(hasfinishedChatSpoof)).detach();
							}
						}



					}
				}
				

				

#endif
				break;

			case 7:
				CWINGui::Text(L"Level Loader 1.0");
				if (CWINGui::Button(L"Main Menu", SDK::FVector2D{ 110, 35 })) {
					Settings::LevelToLoad = L"MainMenuMap";
					Settings::LoadLevel_ = true;
				}
				if (CWINGui::Button(L"Level 0", SDK::FVector2D{ 110, 35 })) {
					Settings::LevelToLoad = L"Level0";
					Settings::LoadLevel_ = true;
				}
				if (CWINGui::Button(L"GarageLevel 1", SDK::FVector2D{ 110, 35 })) {
					Settings::LevelToLoad = L"TopFloor";
					Settings::LoadLevel_ = true;
				}
				if (CWINGui::Button(L"Garage Level 2", SDK::FVector2D{ 110, 35 })) {
					Settings::LevelToLoad = L"MiddleFloor";
					Settings::LoadLevel_ = true;
				}
				if (CWINGui::Button(L"Garage Level 3", SDK::FVector2D{ 110, 35 })) {
					Settings::LevelToLoad = L"GarageLevel2";
					Settings::LoadLevel_ = true;
				}
				if (CWINGui::Button(L"Garage Level 4", SDK::FVector2D{ 110, 35 })) {
					Settings::LevelToLoad = L"BottomFloor";
					Settings::LoadLevel_ = true;
				}
				if (CWINGui::Button(L"Hub Level", SDK::FVector2D{ 110, 35 })) {
					Settings::LevelToLoad = L"TheHub";
					Settings::LoadLevel_ = true;
				}
				if (CWINGui::Button(L"Pipe Level", SDK::FVector2D{ 110, 35 })) {
					Settings::LevelToLoad = L"Pipes";
					Settings::LoadLevel_ = true;
				}
				if (CWINGui::Button(L"Electrical Station", SDK::FVector2D{ 110, 35 })) {
					Settings::LevelToLoad = L"ElectricalStation";
					Settings::LoadLevel_ = true;
				}
				if (CWINGui::Button(L"Office", SDK::FVector2D{ 110, 35 })) {
					Settings::LevelToLoad = L"Office";
					Settings::LoadLevel_ = true;
				}
				CWINGui::NextColumn(260.0f);
				CWINGui::Text(L"");
				CWINGui::Text(L"");
				if (CWINGui::Button(L"Hotel 1", SDK::FVector2D{ 110, 35 })) {
					Settings::LevelToLoad = L"Hotel";
					Settings::LoadLevel_ = true;
				}
				if (CWINGui::Button(L"Hotel 2", SDK::FVector2D{ 110, 35 })) {
					Settings::LevelToLoad = L"Floor3";
					Settings::LoadLevel_ = true;
				}
				if (CWINGui::Button(L"Boiler Room", SDK::FVector2D{ 110, 35 })) {
					Settings::LevelToLoad = L"BoilerRoom";
					Settings::LoadLevel_ = true;
				}
				if (CWINGui::Button(L"Level Fun", SDK::FVector2D{ 110, 35 })) {
					Settings::LevelToLoad = L"LevelFun";
					Settings::LoadLevel_ = true;
				}
				if (CWINGui::Button(L"Poolrooms 1", SDK::FVector2D{ 110, 35 })) {
					Settings::LevelToLoad = L"Poolrooms";
					Settings::LoadLevel_ = true;
				}
				if (CWINGui::Button(L"Level !!!!", SDK::FVector2D{ 110, 35 })) {
					Settings::LevelToLoad = L"LevelRun";
					Settings::LoadLevel_ = true;
				}
				if (CWINGui::Button(L"TheEnd", SDK::FVector2D{ 110, 35 })) {
					Settings::LevelToLoad = L"TheEnd";
					Settings::LoadLevel_ = true;
				}
				if (CWINGui::Button(L"InfiniteStairs", SDK::FVector2D{ 110, 35 })) {
					Settings::LevelToLoad = L"Level922";
					Settings::LoadLevel_ = true;
				}
				if (CWINGui::Button(L"Level94", SDK::FVector2D{ 110, 35 })) {
					Settings::LevelToLoad = L"Level94";
					Settings::LoadLevel_ = true;
				}
				if (CWINGui::Button(L"ClownKingdom", SDK::FVector2D{ 110, 35 })) {
					Settings::LevelToLoad = L"AnimatedKingdom";
					Settings::LoadLevel_ = true;
				}
				CWINGui::NextColumn(380.0f);
				CWINGui::Text(L"");
				CWINGui::Text(L"");
				if (CWINGui::Button(L"LightsOut", SDK::FVector2D{ 110, 35 })) {
					Settings::LevelToLoad = L"LightsOut";
					Settings::LoadLevel_ = true;
				}
				if (CWINGui::Button(L"OceanMap", SDK::FVector2D{ 110, 35 })) {
					Settings::LevelToLoad = L"OceanMap";
					Settings::LoadLevel_ = true;
				}
				if (CWINGui::Button(L"CaveLevel", SDK::FVector2D{ 110, 35 })) {
					Settings::LevelToLoad = L"CaveLevel";
					Settings::LoadLevel_ = true;
				}
				if (CWINGui::Button(L"Level05", SDK::FVector2D{ 110, 35 })) {
					Settings::LevelToLoad = L"Level05";
					Settings::LoadLevel_ = true;
				}
				if (CWINGui::Button(L"Level9", SDK::FVector2D{ 110, 35 })) {
					Settings::LevelToLoad = L"Level9";
					Settings::LoadLevel_ = true;
				}
				if (CWINGui::Button(L"AbandonedBase", SDK::FVector2D{ 110, 35 })) {
					Settings::LevelToLoad = L"AbandonedBase";
					Settings::LoadLevel_ = true;
				}
				if (CWINGui::Button(L"Level10", SDK::FVector2D{ 110, 35 })) {
					Settings::LevelToLoad = L"Level10";
					Settings::LoadLevel_ = true;
				}
				if (CWINGui::Button(L"Level3999", SDK::FVector2D{ 110, 35 })) {
					Settings::LevelToLoad = L"Level3999";
					Settings::LoadLevel_ = true;
				}
				if (CWINGui::Button(L"Level07", SDK::FVector2D{ 110, 35 })) {
					Settings::LevelToLoad = L"Level07";
					Settings::LoadLevel_ = true;
				}
				if (CWINGui::Button(L"Snackrooms", SDK::FVector2D{ 110, 35 })) {
					Settings::LevelToLoad = L"Snackrooms";
					Settings::LoadLevel_ = true;
				}
				CWINGui::NextColumn(500.0f);
				CWINGui::Text(L"");
				CWINGui::Text(L"");
				if (CWINGui::Button(L"Level !!!!2", SDK::FVector2D{ 110, 35 })) {
					Settings::LevelToLoad = L"LevelDash";
					Settings::LoadLevel_ = true;
				}
				if (CWINGui::Button(L"Level188 Exp", SDK::FVector2D{ 110, 35 })) {
					Settings::LevelToLoad = L"Level188_Expanded";
					Settings::LoadLevel_ = true;
				}
				if (CWINGui::Button(L"Poolrooms Exp", SDK::FVector2D{ 110, 35 })) {
					Settings::LevelToLoad = L"Poolrooms_Expanded";
					Settings::LoadLevel_ = true;
				}
				if (CWINGui::Button(L"Poolrooms_Sub 1", SDK::FVector2D{ 110, 35 })) {
					Settings::LevelToLoad = L"WaterPark_Level01_P";
					Settings::LoadLevel_ = true;
				}
				if (CWINGui::Button(L"Poolrooms_Sub 2", SDK::FVector2D{ 110, 35 })) {
					Settings::LevelToLoad = L"WaterPark_Level02_P";
					Settings::LoadLevel_ = true;
				}
				if (CWINGui::Button(L"Poolrooms_Sub 3", SDK::FVector2D{ 110, 35 })) {
					Settings::LevelToLoad = L"WaterPark_Level03_P";
					Settings::LoadLevel_ = true;
				}
				if (CWINGui::Button(L"LevelFun Exp", SDK::FVector2D{ 110, 35 })) {
					Settings::LevelToLoad = L"LevelFun_Expanded";
					Settings::LoadLevel_ = true;
				}
				if (CWINGui::Button(L"LevelFun_Sub 1", SDK::FVector2D{ 110, 35 })) {
					Settings::LevelToLoad = L"Zone1_Modified";
					Settings::LoadLevel_ = true;
				}
				if (CWINGui::Button(L"LevelFun_Sub 2", SDK::FVector2D{ 110, 35 })) {
					Settings::LevelToLoad = L"Zone4";
					Settings::LoadLevel_ = true;
				}
				if (CWINGui::Button(L"LevelFun_Sub 3", SDK::FVector2D{ 110, 35 })) {
					Settings::LevelToLoad = L"Zone3_Baked";
					Settings::LoadLevel_ = true;
				}
				CWINGui::NextColumn(620.0f);
				CWINGui::Text(L"");
				CWINGui::Text(L"");
				if (CWINGui::Button(L"LevelFun_Sub 4", SDK::FVector2D{ 110, 35 })) {
					Settings::LevelToLoad = L"Zone2_Modified";
					Settings::LoadLevel_ = true;
				}
				if (CWINGui::Button(L"School Level", SDK::FVector2D{ 110, 35 })) {
					Settings::LevelToLoad = L"Level52";
					Settings::LoadLevel_ = true;
				}
				if (CWINGui::Button(L"Final Level", SDK::FVector2D{ 110, 35 })) {
					Settings::LevelToLoad = L"TunnelLevel";
					Settings::LoadLevel_ = true;
				}
				break;

			case 8:
				
				for (size_t i = 0; i < PlayerStuff::PlayerList.size(); i++)
				{
					if (i % 10 == 0 && i >= 10) {
						int Row = i / 10;

						CWINGui::NextColumn(140.0f + (220 * Row));
						CWINGui::Text(L"");
					}


					auto player = PlayerStuff::PlayerList[i];

					if (CWINGui::Button(std::wstring(L"Name: " + player.Sanitizedname + L", ID: " + std::to_wstring(player.PlayerID)).c_str(), SDK::FVector2D{ 210, 35 })) {
						Settings::PlayerPicked_S = i;
						tab = 9;

						WindowSize = { 740.0f, 575.0f };
					}
				}

				break;

			case 9:
				if (Settings::PlayerPicked_S != -1)
				{
					auto player = PlayerStuff::PlayerList[Settings::PlayerPicked_S];
					CWINGui::Text(std::format(L"Name: {}, Pos: x {}, z {}, y {}, HasController: {}", player.Sanitizedname, player.Location[0], player.Location[1], player.Location[2], player.hasPlayerController ? L"true" : L"false").c_str());
					CWINGui::Text(std::format(L"Is Alive: {}", player.Alive ? L"true" : L"false").c_str());

					{
						auto size_ = player.Inventory_.size();

						std::wstring output = size_ == 0 ? L"Empty!" : L"";
						

						for (size_t i = 0; i < size_; i++)
						{
							
							output += L"Item: " + Cheat::UsefullFuncs::stringToWideString(player.Inventory_[i].ToString()) + (i != size_ - 1 ? L"," : L"");
						}

						CWINGui::Text(std::wstring(L"Current ItemSlot: " + player.CurrentSlot + L" ").c_str());
						CWINGui::Text(std::wstring(L"Steam ID: " + player.SteamID + ( player.SteamID == Cheat::UsefullFuncs::stringToWideString(Backend::HostSteamID) ? L"(Host SteamID)" : L"") + L" ").c_str());
						CWINGui::Text(std::wstring(L"SpectatorName: " + player.SpectatorName).c_str());
						CWINGui::Text(std::wstring(L"Inventory: {" + output + L" }").c_str());
					}

					if (CWINGui::Button(L"Teleport Player", SDK::FVector2D{ 110, 35 })) {
						Settings::Event_PlayerID = player.PlayerID;
						Settings::TeleportEventPlayer = true;
					}
					if (CWINGui::Button(L"Teleport to Player", SDK::FVector2D{ 110, 35 })) {
						Settings::Event_PlayerID = player.PlayerID;
						Settings::TeleportToEventPlayer = true;
					}
					if (CWINGui::Button(L"Respawn Player", SDK::FVector2D{ 110, 35 })) {
						Settings::Event_PlayerID = player.PlayerID;
						Settings::EventRespawnPlayer = true;
					}

					if (CWINGui::Button(L"Use item as Player", SDK::FVector2D{ 110, 35 })) {
						Settings::Event_PlayerID = player.PlayerID;
						Settings::UseItemEventPlayer = true;
					}

#ifdef Gatekeep
					if (CWINGui::Button(L"Collect Player info", SDK::FVector2D{ 110, 35 })) {
						Settings::Event_PlayerID = player.PlayerID;
						Settings::EventCollectDataPlayer = true;
					}
#endif
				}
				else
				{
					WindowSize = { 600.0f, 555.0f };
					tab = 8;
					break;
				}

				if (CWINGui::Button(std::wstring(L"Go Back").c_str(), SDK::FVector2D{ 110, 35 })) {
					tab = 8;
					WindowSize = { 600.0f, 555.0f };
				}
				break;


			case 10:
				CWINGui::Checkbox(L"Players Noclip through Players", &Settings::Host_CollisionPlayers);
				CWINGui::Checkbox(L"Fun Mode", &Settings::Host_FunMode);

				break;


			default:
				break;
			}
			
		}

		

		CWINGui::Draw_Cursor(Settings::Open); //draw ugly ass cursor
		//CWINGui::DrawHeart(CWINGui::CursorPos(), 10.0f, { 1.0f, 0.0f, 0.0f, 1.0f });
		CWINGui::Render(); //render thing
		
		

		if (GetAsyncKeyState(VK_INSERT) & 1)Settings::Open = !Settings::Open;

		if (GetAsyncKeyState(VK_DELETE) & 1) {
			SDK::UWorld* World = SDK::UWorld::GetWorld();
			auto GameInstance = World->OwningGameInstance;
			auto LocalPlayer = GameInstance->LocalPlayers[0];
			auto ViewportClient = LocalPlayer->ViewportClient;
			auto vTable = *(void***)(ViewportClient);
			auto vTableWorld = *(void***)(World);
			Functions::ChangePointer((uintptr_t)vTable, 100, (uintptr_t)origin_renderer);

			MH_DisableHook(MH_ALL_HOOKS);

			MH_RemoveHook(fnProcessEventTarget);

			Backend::NewLevelEvent.UnregisterHandlers();
			//Functions::ChangePointer((uintptr_t)vTableWorld, Offsets::ProcessEventIdx, (uintptr_t)fnProcessEventOrigin);
			

			MH_Uninitialize();


			std::cout << "[*] Unhooked Renderfunc\n[*] Freeing Console!\n";
			ConsoleExit();
			
		}

	}

	return origin_renderer(object, Canvas);
}

void MainThread() {

	if (!Cheat::Ini()) {
		Cheat::Message("Cheat needs to be Updated. Im up to Updating probly already ;)", FOREGROUND_GREEN);
		return;
	}

	SDK::UWorld* World = SDK::UWorld::GetWorld();
	auto GameInstance = World->OwningGameInstance;
	auto LocalPlayer = GameInstance->LocalPlayers[0];
	auto ViewportClient = LocalPlayer->ViewportClient;

	// swapping table
	auto vTable = *(void***)(ViewportClient);
	auto vTableWorld = *(void***)(World);

	origin_renderer = (PostRender_t)Functions::ChangePointer((uintptr_t)vTable, 100, (uintptr_t)MainRender);
	//fnProcessEventOrigin = (fnProcessEvent)Functions::ChangePointer((uintptr_t)vTableWorld, Offsets::ProcessEventIdx, (uintptr_t)ProcessEventHook);

	MH_Initialize();

	Backend::NewLevelEvent.RegisterHandler(std::bind(FunctionPtrsProcessEvent::NullObjects));
	
	fnProcessEventTarget = (fnProcessEvent)(uintptr_t(GetModuleHandle(0)) + Offsets::ProcessEvent);

	MH_CreateHook(reinterpret_cast<LPVOID*>(fnProcessEventTarget), &ProcessEventHook, reinterpret_cast<LPVOID*>(&fnProcessEventOrigin));

	MH_EnableHook(reinterpret_cast<LPVOID*>(fnProcessEventTarget));


	if (!origin_renderer || !fnProcessEventOrigin) {
		auto renderError = !origin_renderer ? "PostRender" : "";
		std::string spacing = renderError != "" ? "," : "";
		auto processeventError = !fnProcessEventOrigin ? std::string(spacing + "ProcessEvent").c_str() : "";

		std::cout << "Failed to get: " << renderError << processeventError << "" << "!\n";
		ConsoleExit();
	}

	return;
}

BOOL APIENTRY DllMain( HMODULE hModule,
                       DWORD  ul_reason_for_call,
                       LPVOID lpReserved
                     )
{
    switch (ul_reason_for_call)
    {
    case DLL_PROCESS_ATTACH:
		AllocConsole();
		FILE* fileptr;
		freopen_s(&fileptr, "CONOUT$", "w", stdout);
		freopen_s(&fileptr, "CONOUT$", "w", stderr);
		freopen_s(&fileptr, "CONIN$", "r", stdin);
		MainThread();
    case DLL_THREAD_ATTACH:
    case DLL_THREAD_DETACH:
    case DLL_PROCESS_DETACH:
        break;
    }
    return TRUE;
}


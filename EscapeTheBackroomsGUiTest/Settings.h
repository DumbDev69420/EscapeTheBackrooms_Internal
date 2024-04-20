#pragma once
#include "GUI/ZeroGUI.h"
#include <unordered_map>
#include <format>
#include <functional>

namespace Backend {
	using EventHandler = std::function<void()>;

	class EventSource {
	public:
		// Register a function as an event handler
		void RegisterHandler(EventHandler handler) {
			handlers.push_back(handler);
		}

		void UnregisterHandlers() {
			handlers.clear();
		}
		// Trigger the event, invoking all registered handlers
		void TriggerEvent() {
			for (const auto& handler : handlers) {
				handler();
			}
		}

	private:
		std::vector<EventHandler> handlers;
	};


	typedef void(__stdcall* Event_)();

	namespace LevelDatas {

		bool TPActor = false;
		std::string ActorName = "";

	}

	enum Level_ { //Keine zeit dafür bruh
		MainLvl,
		TransitionLvl,
		Level0,
		NotImplemented
	};

	std::string LevelName = "";
	std::string HostSteamID = "";
	std::string HostSteamID_Clean = "";

	Level_ LevelCurrent = Level_::MainLvl;

	void CleanSteamID() {

		HostSteamID_Clean = "";

		if (auto pos = HostSteamID.find("."); pos != std::string::npos) 
		{
			for (size_t i = pos + 1; i < HostSteamID.size(); i++)
			{
				HostSteamID_Clean += HostSteamID[i];
			}
		}
	}

	bool FindLevelEnum() {

		//Map of Levels i added already Functions into
		const std::unordered_map<std::string, Level_> levelCollection_ = {
			{"MainMenuMap", Level_::MainLvl},
			{"TransitionLevel", Level_::TransitionLvl},
			{"Level0", Level_::Level0},
		};

		if (auto result = levelCollection_.find(LevelName); result != levelCollection_.end()) {
			LevelCurrent = result->second;
			return true;
		}
		

		LevelCurrent = Level_::NotImplemented;

		return false;
	}

	void DefineEnum() {

		FindLevelEnum();
		
	}


	void RunLevelBackend() {

		switch (LevelCurrent)
		{
		case Backend::MainLvl:
			CWINGui::Text(L"This da Main Menu, not much to do here bruh");
			break;
		case Backend::TransitionLvl:
			break;
		case Backend::Level0:
			break;

		default:
			break;
		}

	}

	void CallbackNewLevel();
	EventSource NewLevelEvent;
}

namespace PlayerStuff {
	struct Player {
		SDK::APawn* Pawn_;
		std::wstring name = L"";
		std::wstring Sanitizedname = L"";
		int PlayerID = 0;
		bool Alive = false;
		bool hasPlayerController = false;
		bool IsSpectator = false;
		std::wstring Location[3];
		SDK::FVector Position;
		std::wstring CurrentSlot = L"";
		std::wstring SteamID = L"";
		std::wstring SpectatorName = L"";
		std::vector <SDK::FText> Inventory_;

		float CalculateDistance(SDK::FVector Point1, SDK::FVector Point2)
		{
			// Calculate the absolute differences in coordinates
			float DiffX = Point2.X - Point1.X;
			float DiffY = Point2.Y - Point1.Y;
			float DiffZ = Point2.Z - Point1.Z;

			// Calculate the squared distance
			float DistanceSquared = (DiffX * DiffX) + (DiffY * DiffY) + (DiffZ * DiffZ);

			// Calculate the distance by taking the square root of the squared distance
			return std::abs(std::sqrt(DistanceSquared));
		}

		bool IsSpectatingLocalPlayer(SDK::APlayerController* LocalController) {

			if (IsSpectator && LocalController) {

				return CalculateDistance(LocalController->K2_GetActorLocation(), Position) < 1.0f;
			}

			return false;
		}

		Player(std::wstring Name, std::wstring SteamID, std::wstring CurrentSlotItemName, int PlayerID, SDK::APlayerController* Controller, SDK::APawn* pawn, bool isalive, bool hasplayercontroller, SDK::FVector location, SDK::UInventoryComponent* Inventory) {
			this->name = Name;
			this->PlayerID = PlayerID;
			this->Alive = isalive;
			this->hasPlayerController = hasplayercontroller;
			this->CurrentSlot = CurrentSlotItemName;
			this->SteamID = SteamID;
			this->Position = location;
			this->Pawn_ = pawn;

			if (!Alive && pawn && pawn->IsA(SDK::ABP_Spectator_C::StaticClass())) {
				this->IsSpectator = true;
			}

			this->Sanitizedname = SanitizeWString(Name);

			auto LocString = LocToWString(location);

			Location[0] = LocString[0];
			Location[1] = LocString[1];
			Location[2] = LocString[2];



			Inventory_.clear();

			if (Inventory && Inventory->Inventory2.IsValid()) {
				auto inventory = Inventory->Inventory2;

				for (size_t i = 0; i < inventory.Num(); i++)
				{
					if(inventory[i] && inventory[i]->Structure.Name.Data)
					Inventory_.push_back(inventory[i]->Structure.Name);
				}
			}
		}

		static std::wstring SanitizeWString(std::wstring Input) {
			std::wstring output = L"";

			int Sizecc = Input.size();

			for (size_t i = 0; i < 14; i++)
			{
				if (i >= Sizecc) break;

				output += Input[i];
			}

			return output;
		}

		static std::vector<std::wstring> LocToWString(SDK::FVector loc) {
			std::vector<std::wstring> Location;

			Location.push_back( std::to_wstring(loc.X) );
			Location.push_back( std::to_wstring(loc.Z) );
			Location.push_back( std::to_wstring(loc.Y) );

			return Location;
		}
	};

	std::vector<Player> PlayerList;
}

namespace Settings {
	void SetName_NameChanger(std::wstring name);

	enum Items
	{
		Flashlight,
		Flaregun,
		Crowbar,
		Chainsaw,
		Almondwater,
		Bugspray,
		Lidar,
		Jelly,
		Speedwateridk,
		Pain,
		Rope,
		AlmondExtract,
		Firework,
		Ticket,
		DivingHelmet,
		Camera,
		Glowstick,
		Thermometer,
		WalkiTalkie,
		Test
	};

	enum Host_Pawns {
		defaultEmptyPawn,
		SelfPawn
	};

	enum Spawner_Stuff {
		Boat,
		Player,
		BactiriaMonster,
		ExitZone
	};

	bool Open = true;
	bool Esp = false;
	bool EnemyEsp = false;
	bool BoatEsp = false;
	bool PlayerEsp = false;
	bool ItemEsp = false;
	bool ActorEsp = false;
	bool InteractablesEsp = false;
	bool SpectatorList = false;
	

	bool FovChanger = false;
	bool RGBFlashlight = false;
	bool EnviromentRGB = false;

	//Event Player

	bool TeleportEventPlayer = false;
	bool TeleportToEventPlayer = false;
	bool EventRespawnPlayer = false;
	bool UseItemEventPlayer = false;
	bool EventCollectDataPlayer = false;

	int Event_PlayerID = 0;


	//Chat Spoof
	int StateChatSpoof = 0;

	//Hosting Options
	bool Host_CollisionPlayers = false;
	bool Host_FunMode = false;
	bool Host_Event_TeleportPlayers = false;
	bool Host_Event_SetHostPawn = false;

	float Host_PlayersGravityScale = 0.5f;
	Host_Pawns hostPawn = Host_Pawns::defaultEmptyPawn;


	//Misc

	bool ProtectCamServer = true;
	bool UnlockPlayers = false;
	bool UnpossePawns = false;
	bool ChangeNameEvent = false;
	bool SpoofChatEvent = false;
	bool ClientMovement = false;
	bool ShowWatermark = true;
	bool ActorEvent = false;
	bool InteractAll = false;
	bool InteractEvent = false;
	bool NoStumble = false;
	bool LagGame = false;
	bool ClearItems = false;
	bool Noclip = false;
	bool TpToExit = false;
	bool Kys = false;
	bool ForceAdmin = false;
	bool TpEveryone = false;
	bool NameChanger = false;
	bool OwnSelf = false;
	bool RandomName = false;
	bool Rapidfire = false;
	bool BoatFly = false;
	bool VelocityFly = true;
	bool BoatSpeedhack = false;
	bool BringAllItems = false; // Noch nichts
	bool RevivePlayer = false;// Noch nichts
	bool NoCams = false;
	bool HideWalls = false;
	bool PlayerFly = false;
	bool PeacefullMode = false;
	bool Spawner = false;
	bool SilentItemSpawner = false;
	bool LoadLevel_ = false;
	bool Godmode = false;
	bool InfiniteSanity = false;
	bool SpeedHack = false;
	bool InfiniteStamina = false;
	bool AutoRespawnPlayers = true;
	bool wtf_ = false;
	bool IniShitsLevel[6];
	bool IniShitsPlayer[7];

	bool SpawnItem = false;
	Items ItemToSpawn;

	float PlayerFlySpeedY = 100.0f;
	float Fov = 90.0f;
	float Speed = 1000.0f;
	float BoatSpeed = 3000.0f;

	int PlayerCount_SettingServer = 4;
	int PlayerPicked = 0;
	int PlayerPicked_S = 0;



	std::string ActorFilter = "";

	//For Name Changer
	std::wstring LevelToLoad = L"";
	std::wstring NameTo_set = L"Nizi7010"; //GWorld:0x04C67430
	std::wstring OriginalName = L"";
	std::wstring MessageSpoof = L"";
	std::wstring NameOfVictim = L"";

	SDK::FVector2D WindowPos{ 500.0f, 475.0f };

	SDK::FVector LastServerPosition;
}



void Backend::CallbackNewLevel()
{
	Settings::PlayerPicked = -1;
	Settings::PlayerPicked_S = -1;

	NewLevelEvent.TriggerEvent();
}

void Settings::SetName_NameChanger(std::wstring name) {
	NameTo_set = name;
	Settings::IniShitsLevel[3] = false;
}


std::wstring Algorithm_(std::wstring input) {
	std::wstring out = L"";

	for (size_t i = 0; i < input.size(); i++)
	{
		auto letternormal = input[i];
		auto letterLower = (wchar_t)std::tolower(letternormal, std::locale());
		bool hasChangedSize = (letternormal != letterLower);

		switch (letterLower)
		{
		case L'i':
			out += (hasChangedSize) ? L'Í' : L'í';
			break;

		case L'u':
			out += (hasChangedSize) ? L'Ú' : L'ú';
			break;

		default:
			out += letternormal;
			break;
		}
	}

	return out;
}
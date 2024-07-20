#pragma once
#include <Windows.h>
#include <iostream>
#include "SDK/SDK.hpp"
#include <format>
#include <vector>
#include "Settings.h"
#include "CheatDefines.h"


//#define DEBUG
#define Gatekeep

void RunMainHost();

namespace Cheat {

	SDK::UEngine* Engine = 0x0;
	SDK::UWorld* WorldP = 0x0;
	SDK::UKismetMathLibrary* MathLib = 0x0;
	SDK::UKismetSystemLibrary* SystemLib = 0x0;
	SDK::UKismetStringLibrary* StringLib = 0x0;
	SDK::UKismetTextLibrary* TextLib = 0x0;
	SDK::UGameplayStatics* GPStatics = 0x0;
	SDK::UKismetRenderingLibrary* RenderLib = 0x0;
	SDK::AMP_PlayerController_C* PlayerController = 0x0;
	SDK::ULocalPlayer* LocalPlayer = 0x0;
	SDK::ULevel* CurLevel = 0x0;
	SDK::APawn* Pawn = 0x0;

	bool Initialized = false;
	bool LoadObjectValid_ = false;

	void Message(const char* msg, DWORD Color);
	void Message(std::string msg, DWORD Color);

	bool Ini() {

		SDK::InitGObjects();

		if (!Functions::ShouldUsePointer64(SDK::UObject::GObjects) || !Functions::ShouldUsePointer64(SDK::UObject::GObjects->Objects[0])) return false;

		SDK::FName::InitGNames();

		Engine = SDK::UEngine::GetEngine();

		MathLib = (SDK::UKismetMathLibrary*)SDK::UObject::FindClassFast("KismetMathLibrary")->DefaultObject;

		SystemLib = (SDK::UKismetSystemLibrary*)SDK::UObject::FindClassFast("KismetSystemLibrary")->DefaultObject;

		StringLib = (SDK::UKismetStringLibrary*)SDK::UObject::FindClassFast("KismetStringLibrary")->DefaultObject;

		TextLib = (SDK::UKismetTextLibrary*)SDK::UObject::FindClassFast("KismetTextLibrary")->DefaultObject;

		GPStatics = (SDK::UGameplayStatics*)SDK::UObject::FindClassFast("GameplayStatics")->DefaultObject;

		RenderLib = (SDK::UKismetRenderingLibrary*)SDK::UObject::FindClassFast("KismetRenderingLibrary")->DefaultObject;

		CWINGui::Font = SDK::UObject::FindObject<SDK::UFont>("Font Roboto.Roboto");

		StaticConstructObject_Internal = (fStaticConstructObject_Internal)((uintptr_t)GetModuleHandle(0) + Offsets::StaticConstructObject_Internal);
		StaticLoadObject_Internal = (fStaticLoadObject_Internal)((uintptr_t)GetModuleHandle(0) + Offsets::StaticLoadObjectInternal);
		FPlatformFileManager$$Get = (fFPlatformFileManager$$Get)((uintptr_t)GetModuleHandle(0) + Offsets::FPlatformFileManager$$Get);
		FPakPlatformFile$$FindPlatformFile = (fFPakPlatformFile$$FindPlatformFile)((uintptr_t)GetModuleHandle(0) + Offsets::FPakPlatformFile$$FindPlatformFile);
		FPakPlatformFile$$Mount = (fFPakPlatformFile$$Mount)((uintptr_t)GetModuleHandle(0) + Offsets::FPakPlatformFile$$Mount);


		std::vector<unsigned char> FunctionSig_Static{0x4c, 0x89, 0x4c, 0x24, 0x20};

		std::vector<unsigned char> FunctionSig = Functions::GetFunctionSig(StaticLoadObject_Internal, 5);


		if (FunctionSig.size() == 5) {
			LoadObjectValid_ = (Functions::CompareFunctionSigs(FunctionSig, FunctionSig_Static) == 100);

#ifdef DEBUG
			Message(std::format("[DEBUG]: StaticloadObject Valid? {}", LoadObjectValid_ ? "false" : "true"), LoadObjectValid_ ? FOREGROUND_RED : FOREGROUND_GREEN);
#endif
		}

		
		Initialized = true;

		return true;
	}




	bool IniConsoleHook;
	HANDLE hStdout;
	bool IsInput = false;


	struct Message_ {
		enum MsgType {
			None,
			charptr,
			string,
			wcharptr,
			wstring
		};

		void* msg = nullptr;
		DWORD Color = FOREGROUND_RED;
		MsgType msgtype = None;

		void PassMessage();

		Message_(const char* msg_, DWORD Color_ = FOREGROUND_RED) {
			msgtype = MsgType::charptr;

			size_t strlencc = strnlen_s(msg_, 1000);

			char* str = new char[strlencc];

			for (size_t i = 0; i < strlencc; i++)
			{
				str[i] = msg_[i];
			}

			this->msg = (void*)str;
			this->Color = Color_;
		}

		Message_(std::string msg_, DWORD Color_ = FOREGROUND_RED) {
			msgtype = MsgType::string;

			std::string* str = new std::string();

			for (size_t i = 0; i < msg_.length(); i++)
			{
				str[0][i] = msg_[i];
			}


			this->msg = (void*)str;
			this->Color = Color_;
		}

		Message_(std::wstring msg_, DWORD Color_ = FOREGROUND_RED) {
			msgtype = MsgType::wstring;

			std::wstring* str = new std::wstring();

			for (size_t i = 0; i < msg_.length(); i++)
			{
				str[0][i] = msg_[i];
			}


			this->msg = (void*)str;
			this->Color = Color_;
		}

		Message_(const wchar_t* msg_, DWORD Color_ = FOREGROUND_RED) {
			msgtype = MsgType::wcharptr;

			size_t strlencc = wcslen(msg_);

			wchar_t* str = new wchar_t[strlencc];

			for (size_t i = 0; i < strlencc; i++)
			{
				str[i] = msg_[i];
			}

			this->msg = (void*)str;
			this->Color = Color_;
		}
	};

	std::vector<Message_> MessageList;

	void EmptyQueue() {

		for (size_t i = 0; i < MessageList.size(); i++)
		{
			MessageList[i].PassMessage();
		}

		MessageList.clear();
	}

	void Message(const char* msg, DWORD Color = FOREGROUND_RED) {
		if (!IniConsoleHook) {
			IniConsoleHook = true;
			hStdout = GetStdHandle(STD_OUTPUT_HANDLE);
		}

		if (IsInput) {
			MessageList.push_back(Message_(msg, Color));
			return;
		}

		CONSOLE_SCREEN_BUFFER_INFO consoleInfo;
		GetConsoleScreenBufferInfo(hStdout, &consoleInfo);
		WORD originalAttributes = consoleInfo.wAttributes;

		std::cout << "[*] ";

		SetConsoleTextAttribute(hStdout, Color | FOREGROUND_INTENSITY);

		std::cout << msg << "\n";

		SetConsoleTextAttribute(hStdout, originalAttributes);
	}

	void Message(std::string msg, DWORD Color = FOREGROUND_RED) {
		if (!IniConsoleHook) {
			IniConsoleHook = true;
			hStdout = GetStdHandle(STD_OUTPUT_HANDLE);
		}

		if (IsInput) {
			MessageList.push_back(Message_(msg, Color));
			return;
		}

		CONSOLE_SCREEN_BUFFER_INFO consoleInfo;
		GetConsoleScreenBufferInfo(hStdout, &consoleInfo);
		WORD originalAttributes = consoleInfo.wAttributes;

		std::cout << "[*] ";

		SetConsoleTextAttribute(hStdout, Color | FOREGROUND_INTENSITY);

		std::cout << msg.c_str() << "\n";

		SetConsoleTextAttribute(hStdout, originalAttributes);
	}

	void MessageW(std::wstring msg, DWORD Color = FOREGROUND_RED) {
		if (!IniConsoleHook) {
			IniConsoleHook = true;
			hStdout = GetStdHandle(STD_OUTPUT_HANDLE);
		}

		if (IsInput) {
			MessageList.push_back(Message_(msg, Color));
			return;
		}

		CONSOLE_SCREEN_BUFFER_INFO consoleInfo;
		GetConsoleScreenBufferInfo(hStdout, &consoleInfo);
		WORD originalAttributes = consoleInfo.wAttributes;


		SetConsoleTextAttribute(hStdout, Color | FOREGROUND_INTENSITY);

		std::wcout << "[*] ";

		SetConsoleTextAttribute(hStdout, originalAttributes);

		std::wcout << msg.c_str() << "\n";


	}

	void MessageW(const wchar_t* msg, DWORD Color = FOREGROUND_RED) {
		if (!IniConsoleHook) {
			IniConsoleHook = true;
			hStdout = GetStdHandle(STD_OUTPUT_HANDLE);
		}

		if (IsInput) {
			MessageList.push_back(Message_(msg, Color));
			return;
		}

		CONSOLE_SCREEN_BUFFER_INFO consoleInfo;
		GetConsoleScreenBufferInfo(hStdout, &consoleInfo);
		WORD originalAttributes = consoleInfo.wAttributes;


		SetConsoleTextAttribute(hStdout, Color | FOREGROUND_INTENSITY);

		std::wcout << "[*] ";

		SetConsoleTextAttribute(hStdout, originalAttributes);

		std::wcout << msg << "\n";


	}

	void Message_::PassMessage()
	{
		switch (msgtype)
		{

		case charptr:
			Message((const char*)msg, Color);
			delete[](msg);
			break;

		case string:
			Message(*(std::string*)msg, Color);
			delete (std::string*)msg;
			break;

		case wstring:
			MessageW(*(std::wstring*)msg, Color);
			delete (std::wstring*)msg;
			break;

		case wcharptr:
			MessageW((const wchar_t*)msg, Color);
			delete[](msg);
			break;

		default:
			return;
			break;
		}


	}

	void MoveCursorConsole(int x, int y) {

		hStdout = GetStdHandle(STD_OUTPUT_HANDLE);

		CONSOLE_SCREEN_BUFFER_INFO consoleInfo;
		GetConsoleScreenBufferInfo(hStdout, &consoleInfo);


		COORD newPosition;

		newPosition.X = consoleInfo.dwCursorPosition.X + x;


		newPosition.Y = consoleInfo.dwCursorPosition.Y + y;

		SetConsoleCursorPosition(hStdout, newPosition);

	}

	void GetInput(std::string Text, std::string& Output, bool& hasFinished) {
		if (IsInput)return;

		SetForegroundWindow(GetConsoleWindow());

		IsInput = true;

		std::cout.clear();
		std::cin.clear();

		std::fflush(stdin);

		Text = "[Input] " + Text;

		std::cout << Text;


		std::getline(std::cin, Output);

		int lengthLine = Text.length() + Output.length();

		MoveCursorConsole(0, -1);
		MoveCursorConsole(-lengthLine, 0);


		for (size_t i = 0; i < lengthLine; i++)
		{
			std::cout << " ";
		}

		MoveCursorConsole(-lengthLine, 0);

		IsInput = false;

		EmptyQueue();

		hasFinished = true;
	}

	void GetInputW(std::string Text, std::wstring& Output, bool& hasFinished) {
		if (IsInput)return;

		SetForegroundWindow(GetConsoleWindow());

		IsInput = true;

		std::cout.clear();
		std::wcin.clear();

		std::fflush(stdin);

		Text = "[Input] " + Text;

		std::cout << Text;


		std::getline(std::wcin, Output);

		int lengthLine = Text.length() + Output.length();

		MoveCursorConsole(0, -1);
		MoveCursorConsole(-lengthLine, 0);


		for (size_t i = 0; i < lengthLine; i++)
		{
			std::cout << " ";
		}

		MoveCursorConsole(-lengthLine, 0);

		IsInput = false;

		EmptyQueue();

		hasFinished = true;
	}


	void DrawTextRGBWithFString(SDK::UCanvas* canvas, SDK::FString text, SDK::FVector2D Screenpos, SDK::FLinearColor color, bool CenterX, float size);

	int Stages = 0; // Stages is for stuff that im to lazy to explain
	namespace UsefullFuncs {

		DWORD GetMemoryProtection(LPVOID address)
		{
			MEMORY_BASIC_INFORMATION memInfo;
			VirtualQuery(address, &memInfo, sizeof(memInfo));
			return memInfo.Protect;
		}

		bool ShouldUsePtr(void* ptrF) {
			uintptr_t ptr = (uintptr_t)ptrF;
			if (ptr == 0x0 || ptr < 0x10000000 || ptr > 0x7fffffffffff || GetMemoryProtection(reinterpret_cast<LPVOID>(ptr)) == PAGE_NOACCESS) return false;
			return true;
		}

		bool IsKeyPressed(DWORD key, bool Holding = false) {
			return (Holding ? (GetAsyncKeyState(key) & 1) : GetAsyncKeyState(key)) && ZeroGUI::isGameFocussed;
		}

		bool IniObjects() {
			Stages = 0;

			if (!ShouldUsePtr(Engine) && (Engine = SDK::UEngine::GetEngine()) == nullptr) { return false; }
			Stages++;

			if (!Engine->GameViewport) { return false; }
			Stages++;


			WorldP = Engine->GameViewport->World;

			if (!ShouldUsePtr(WorldP)) { return false; }
			Stages++;

			bool Changedlvl = false;


			if (CurLevel != WorldP->PersistentLevel) {
				CurLevel = WorldP->PersistentLevel;

				/*auto Instances = Cheat::FindInstances(SDK::APostProcessVolume::StaticClass());

				for (size_t i = 0; i < Instances.size(); i++)
				{
					auto CurrentProcess = (SDK::APostProcessVolume*)Instances[i];

					auto ProcessComponent = (SDK::UPostProcessComponent*)CurrentProcess->GetComponentByClass(SDK::UPostProcessComponent::StaticClass());

					SDK::UMaterialInstance* blabla;

					SDK::TArray<SDK::FWeightedBlendable> WeightedArray = ProcessComponent->Settings.WeightedBlendables.Array;

					ProcessComponent->Settings.WeightedBlendables.Array = SDK::TArray<SDK::FWeightedBlendable>(ProcessComponent->Settings.WeightedBlendables.Array.Num() + 1);

					for (size_t i = 0; i < WeightedArray.Num(); i++)
					{
						ProcessComponent->Settings.WeightedBlendables.Array[i] = WeightedArray[i];
					}

					ProcessComponent->Settings.WeightedBlendables.Array[ProcessComponent->Settings.WeightedBlendables.Array.Num() - 1].Weight = 1.0f;
					ProcessComponent->Settings.WeightedBlendables.Array[ProcessComponent->Settings.WeightedBlendables.Array.Num() - 1].Object = blabla;
				}*/

				Changedlvl = true;

				for (size_t i = 0; i < sizeof(Settings::IniShitsLevel); i++)
				{
					Settings::IniShitsLevel[i] = false;
				}

				Backend::LevelName = GPStatics->GetCurrentLevelName(WorldP, true).ToString();

				Backend::DefineEnum();

				Backend::CallbackNewLevel();


				Message(std::string("Current Level: " + Backend::LevelName).c_str(), FOREGROUND_BLUE);
				if (WorldP->NetDriver && WorldP->NetDriver->ServerConnection)
				{
					WorldP->NetDriver->ConnectionTimeout = 10.0f;

					Backend::HostID = WorldP->NetDriver->ServerConnection->URL_.Host.ToWString();
					Backend::HostSteamID = WorldP->NetDriver->ServerConnection->URL_.Host.ToString();

					Backend::CleanSteamID();

					Message(std::string("Host SteamID: " + Backend::HostSteamID).c_str(), FOREGROUND_RED);

					if (WorldP->GameState) {
						auto playerArray = WorldP->GameState->PlayerArray;


						if (playerArray.IsValid()) {

							for (size_t i = 0; i < playerArray.Num(); i++)
							{

								auto Owner_ = (SDK::APlayerController*)playerArray[i]->GetOwner();
								if (Owner_) {
									Message(std::string("Connected Clients SteamID: " + Owner_->NetConnection->URL_.Host.ToString()).c_str(), FOREGROUND_RED);
								}

							}
						}
					}
				}
				else
				{
					Backend::HostSteamID = "";
					Backend::HostSteamID_Clean = "";
				}

			}

			if (!WorldP->OwningGameInstance || !ShouldUsePtr(&WorldP->OwningGameInstance->LocalPlayers) || !ShouldUsePtr(WorldP->OwningGameInstance->LocalPlayers[0])) { return false; }
			Stages++;

			LocalPlayer = WorldP->OwningGameInstance->LocalPlayers[0];

			PlayerController = (SDK::AMP_PlayerController_C*)LocalPlayer->PlayerController;
			if (!ShouldUsePtr(PlayerController)) { return false; }
			Stages++;


			if (Changedlvl) {
				if (auto playerState = PlayerController->PlayerState; playerState)
					Settings::OriginalName = playerState->PlayerNamePrivate.ToWString();
			}

			Pawn = LocalPlayer->PlayerController->AcknowledgedPawn;

			if (!ShouldUsePtr(Pawn)) { return false; }
			Stages++;

			static SDK::APawn* pawnPlayer = nullptr;

			if (Pawn != pawnPlayer) {
				pawnPlayer = Pawn;
				for (size_t i = 0; i < sizeof(Settings::IniShitsPlayer); i++)
				{
					Settings::IniShitsPlayer[i] = false;
				}
			}

			return true;
		}


		typedef struct
		{
			DWORD R;
			DWORD G;
			DWORD B;
			DWORD A;
		}RGBA;


		int Rainbowify(RGBA* Color) {

			if (Color->B != 255 && Color->G == 0) {
				Color->B++;
			}

			if (Color->B == 255 && Color->R != 0) {
				Color->R--;

			}


			if (Color->B == 255 && Color->G != 255 && Color->R == 0) {
				Color->G++;

			}


			if (Color->G == 255 && Color->B != 0) {
				Color->B--;

			}

			if (Color->B == 0 && Color->R != 255) {
				Color->R++;

			}

			if (Color->R == 255 && Color->G != 0) {
				Color->G--;

			}

			return 1;
		}

		constexpr SDK::FLinearColor RGBATOFLinear_(DWORD R, DWORD G, DWORD B, DWORD A) {
			SDK::FLinearColor Color;

			Color.R = R / 255.0f;
			Color.G = G / 255.0f;
			Color.B = B / 255.0f;
			Color.A = A / 255.0f;

			return Color;
		}


		SDK::FLinearColor RGBATOFLinear(DWORD R, DWORD G, DWORD B, DWORD A) {
			static SDK::FLinearColor Color;

			Color.R = R / 255.0f;
			Color.G = G / 255.0f;
			Color.B = B / 255.0f;
			Color.A = A / 255.0f;

			return Color;
		}

		std::string wstringToString(const std::wstring& wstr)
		{
			std::string str;
			for (wchar_t c : wstr) {
				str += static_cast<char>(c);
			}
			return str;
		}

		std::wstring stringToWideString(const std::string& str)
		{
			std::wstring wstr(str.length(), L' ');
			std::copy(str.begin(), str.end(), wstr.begin());
			return wstr;
		}



		void DrawLine(SDK::UCanvas* Canvas, SDK::FVector2D position1, SDK::FVector2D position2, SDK::FLinearColor color, int thickness = 1)
		{
			Canvas->K2_DrawLine(position1, position2, thickness, color);
		}

		void DrawCircle(SDK::UCanvas* Canvas, SDK::FVector2D pos, int radius, int numSides, SDK::FLinearColor Color)
		{
			float PI = 3.1415927f;

			float Step = PI * 2.0 / numSides;
			int Count = 0;
			SDK::FVector2D V[128];
			for (float a = 0; a < PI * 2.0; a += Step) {
				float X1 = radius * cos(a) + pos.X;
				float Y1 = radius * sin(a) + pos.Y;
				float X2 = radius * cos(a + Step) + pos.X;
				float Y2 = radius * sin(a + Step) + pos.Y;
				V[Count].X = X1;
				V[Count].Y = Y1;
				V[Count + 1].X = X2;
				V[Count + 1].Y = Y2;
				//Draw_Line(FVector2D{ pos.X, pos.Y }, FVector2D{ X2, Y2 }, 1.0f, Color); // Points from Centre to ends of circle
				DrawLine(Canvas, SDK::FVector2D{ V[Count].X, V[Count].Y }, SDK::FVector2D{ X2, Y2 }, Color, 1.0f);// Circle Around
			}
		}

		void DrawBox(SDK::UCanvas* Canvas, SDK::FVector2D position, SDK::FVector2D size, int thickness, SDK::FLinearColor color) {
			SDK::FVector2D BoxShit1;


			DrawLine(Canvas, (BoxShit1 = { position.X - (size.X / 2), position.Y }), (BoxShit1 = { position.X + (size.X / 2), position.Y }), color);
			DrawLine(Canvas, (BoxShit1 = { position.X - (size.X / 2), position.Y + (size.Y) }), (BoxShit1 = { position.X + (size.X / 2), position.Y + (size.Y) }), color);


			//Left and Right
			DrawLine(Canvas, (BoxShit1 = { position.X - (size.X / 2), position.Y }), (BoxShit1 = { position.X - (size.X / 2), position.Y + (size.Y) }), color);
			DrawLine(Canvas, (BoxShit1 = { position.X + (size.X / 2), position.Y }), (BoxShit1 = { position.X + (size.X / 2), position.Y + (size.Y) }), color);
		}


		void DrawBoxOnActor(SDK::UCanvas* Canvas, SDK::AActor* Actor, SDK::FLinearColor Color, bool Name = false, std::wstring name = L"") {

			SDK::FVector xLocation;
			SDK::FVector xBoxExtent;

			Actor->GetActorBounds(true, &xLocation, &xBoxExtent, false);


			auto Location = Actor->K2_GetActorLocation();


			SDK::FVector HeadLocation = { Location.X, Location.Y, Location.Z + (xBoxExtent.Z) };
			SDK::FVector FootLocation = { Location.X, Location.Y, Location.Z - (xBoxExtent.Z) };


			SDK::FVector2D HeadScreen;
			SDK::FVector2D FootScreen;

			if (!GPStatics->ProjectWorldToScreen(PlayerController, HeadLocation, &HeadScreen, true))return;
			if (!GPStatics->ProjectWorldToScreen(PlayerController, FootLocation, &FootScreen, true))return;

			const float height = abs(HeadScreen.Y - FootScreen.Y);
			const float width = height * 0.6f;


			if (Name) {
				DrawTextRGBWithFString(Canvas, SDK::FString(name.c_str()), { HeadScreen.X - (name.length() * 5), HeadScreen.Y }, Color, false, 1.1f);
			}

			DrawBox(Canvas, SDK::FVector2D(HeadScreen.X, HeadScreen.Y), SDK::FVector2D(width, height), 1, Color);
		}
	}

	std::string strToLower(std::string Text) {
		std::string Output = "";
		for (size_t i = 0; i < Text.length(); i++)
		{
			Output += std::tolower(Text[i]);
		}
		return Output;
	}

	void DrawText_Canvas(SDK::UCanvas* Canvas, SDK::FString RenderText, SDK::FVector2D ScreenPosition, SDK::FVector2D Scale, SDK::FLinearColor RenderColor, float Kerning, SDK::FLinearColor ShadowColor, SDK::FVector2D ShadowOffset, bool bCentreX, bool bCentreY, bool bOutlined, SDK::FLinearColor OutlineColor)
	{
		static SDK::UFunction* fn = NULL;


		if (!fn)
			fn = SDK::UObject::FindObject<SDK::UFunction>("Function Engine.Canvas.K2_DrawText");
		if (!UsefullFuncs::ShouldUsePtr(CWINGui::Font))
			CWINGui::Font = SDK::UObject::FindObject<SDK::UFont>("Font Roboto.Roboto");
		struct {
			SDK::UObject* RenderFont;
			SDK::FString RenderText;
			SDK::FVector2D ScreenPosition;
			SDK::FVector2D Scale;
			SDK::FLinearColor RenderColor;
			float Kerning;
			SDK::FLinearColor ShadowColor;
			SDK::FVector2D ShadowOffset;
			bool bCentreX;
			bool bCentreY;
			bool bOutlined;
			SDK::FLinearColor OutlineColor;
		}Args;

		Args.RenderFont = CWINGui::Font;
		Args.RenderText = RenderText;
		Args.ScreenPosition = ScreenPosition;
		Args.Scale = Scale;
		Args.RenderColor = RenderColor;
		Args.Kerning = Kerning;
		Args.ShadowColor = ShadowColor;
		Args.ShadowOffset = ShadowOffset;
		Args.bCentreX = bCentreX;
		Args.bCentreY = bCentreY;
		Args.bOutlined = bOutlined;
		Args.OutlineColor = OutlineColor;

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x400;

		Canvas->ProcessEvent(fn, &Args);

		fn->FunctionFlags = flags;
	}

	void DrawTextRGBWithFString(SDK::UCanvas* canvas, SDK::FString text, SDK::FVector2D Screenpos, SDK::FLinearColor color, bool CenterX = 0, float size = 1.1f)
	{
		DrawText_Canvas(canvas, text, Screenpos, { size, size }, color, 0.f, { 0, 0, 0, 1 }, { 0, 0 }, 0, 0, 0, { 0, 0, 0, 1 });
	}


	typedef void (*Process_Event_FN)(SDK::UObject* Caller, SDK::UFunction* Func, void* Params);
	Process_Event_FN origin_Process_Event_FN;


	void* ProcEventBefore = 0x0;
	void** VTableBefore = 0x0;

	void HookProcEvent(SDK::UObject* _thiss, void* Funcptr) {
		static SDK::UObject* ObjectBefore = 0x0;
		if (ObjectBefore != _thiss) {
			ObjectBefore = _thiss;

			if (ProcEventBefore != nullptr && VTableBefore != nullptr) {
				Functions::ChangePointer((uintptr_t)VTableBefore, Offsets::ProcessEventIdx, (uintptr_t)ProcEventBefore);
			}

			auto vTable = *(void***)(_thiss);
			VTableBefore = vTable;
			ProcEventBefore = (void*)Functions::ChangePointer((uintptr_t)vTable, Offsets::ProcessEventIdx, (uintptr_t)Funcptr);
			origin_Process_Event_FN = (Process_Event_FN)ProcEventBefore;
		}


	}

	SDK::UObject* FindInstance(SDK::UClass* Class) {
		SDK::UObject* Object = nullptr;

		if (!Object)
		{
			for (int i = 0; i < SDK::UObject::GObjects->Num(); i++)
			{
				SDK::UObject* Obj = SDK::UObject::GObjects->GetByIndex(i);

				if (!Obj)
					continue;

				if (Obj->IsA(Class) && !Obj->IsDefaultObject())
				{
					Object = Obj;
					break;
				}
			}
		}

		return Object;
	}


	std::vector<SDK::UObject*> FindInstances(SDK::UClass* Class) {
		std::vector<SDK::UObject*> Objects;

		for (int i = 0; i < SDK::UObject::GObjects->Num(); i++)
		{
			SDK::UObject* Obj = SDK::UObject::GObjects->GetByIndex(i);

			if (!Obj || (uintptr_t)Obj == 0xffffffffffffffff)
				continue;

			if (Obj->IsA(Class) && !Obj->IsDefaultObject())
			{
				Objects.push_back(Obj);
				continue;
			}
		}

		return Objects;
	}

	SDK::AActor* GetActorOfClass(SDK::UWorld* World, SDK::UClass* Class) {
		SDK::AActor* ActorOut = nullptr;

		auto ActorArray = World->PersistentLevel->Actors;

		if (ActorArray.IsValid()) {
			for (size_t i = 0; i < ActorArray.Num(); i++)
			{
				SDK::AActor* CurrentActor = ActorArray[i];

				if (CurrentActor && CurrentActor->IsA(Class))
				{
					ActorOut = CurrentActor;
					break;
				}
			}
		}

		return ActorOut;
	}

	std::vector<SDK::AActor*> GetAllActorsOfClass(SDK::UWorld* World, SDK::UClass* Class) {
		std::vector<SDK::AActor*> Objects;

	    auto ActorArray = World->PersistentLevel->Actors;

		if (ActorArray.IsValid()) {
			for (size_t i = 0; i < ActorArray.Num(); i++)
			{
				SDK::AActor* CurrentActor = ActorArray[i];

				if (CurrentActor && CurrentActor->IsA(Class))
					Objects.push_back(CurrentActor);
			}
		}

		return Objects;
	}

	bool IsClassOfClass(SDK::UClass* ClassIn, SDK::UClass* ClassToCheck) {
		for (SDK::UStruct* Super = ClassIn; Super; Super = Super->Super)
		{
			if (Super == ClassToCheck)
			{
				return true;
			}
		}

		return false;
	}

	std::vector<std::string> FuncsNames;

	void GodMode(SDK::UObject* Caller, SDK::UFunction* Func, void* Params) {

		//if (Settings::Godmode && Func->Name.ToString().find("Kill") == std::string::npos)return;
		bool Found = false;
		auto NameFunc = Func->Name.ToString();
		for (size_t i = 0; i < FuncsNames.size(); i++)
		{
			if (NameFunc == FuncsNames[i]) Found = true;
		}
		if (Found == false) {
			FuncsNames.push_back(NameFunc);
			std::cout << NameFunc << "\n";
		}

		return origin_Process_Event_FN(Caller, Func, Params);
	}

	namespace defines {
		enum Stages_
		{
			Engine = 1,
			ViewPort = 2,
			World = 3,
			LocalPlayer = 4,
			PlayerController = 5,
			Pawn = 6
		};
	}

	void MainRun(SDK::UCanvas* Canvas) {
		bool Ok = UsefullFuncs::IniObjects();

		if (Stages == 0)return;
		auto TickCount = GetTickCount64();



		if (Stages >= defines::Pawn) {

			{
				if (Settings::Open) {
					Pawn->DisableInput(PlayerController);
				}
				else
				{
					Pawn->EnableInput(PlayerController);
				}
			}
		}

		if (Stages >= defines::PlayerController) {
			

			if (Settings::wtf_) {
				Settings::wtf_ = false;

				if (!Engine->GameViewport->ViewportConsole) {


					auto Console = ConstructConsole(Engine->ConsoleClass, Engine->GameViewport);

					//GPStatics->SpawnObject(classConsole, nullptr);

					if (Console) {
						Message("Console Constructed!. Btw Console Constructs, but wont open yet :( ");

						Engine->GameViewport->ViewportConsole = Console;


						SDK::UInputSettings* inputSettings = SDK::UInputSettings::GetDefaultObj()->GetInputSettings();

						inputSettings->ConsoleKey.KeyName = StringLib->Conv_StringToName(SDK::FString(L"Tab"));

						auto key = inputSettings->ConsoleKey;

						inputSettings->SaveKeyMappings();
						inputSettings->ForceRebuildKeymaps();

						//Message(std::string("Key for Console:" + key.KeyName.ToString()));
					}
					else
					{
						Message("Console Couldn't be Constructed!");
					}
				}
				else
				{
					Message("Console has been already constructed!");
				}

				//PlayerController->ServerExec()
			}

#ifdef Gatekeep
			{
				
				static ULONGLONG TickCountSpoofChat = 0;

				if (Settings::SpoofChatEvent) {
					if (!Settings::IniShitsPlayer[2]) {
						Settings::IniShitsPlayer[2] = true;
						TickCountSpoofChat = TickCount + 300;

						Settings::ChangeNameEvent = true;
					}

					if (TickCount >= TickCountSpoofChat) {
						if (PlayerController->PlayerState && PlayerController->PlayerState->PlayerNamePrivate.ToWString() != PlayerStuff::PlayerList[Settings::PlayerPicked].name) {
						
							Settings::ChangeNameEvent = true;

						}
						else
						{
							Settings::SpoofChatEvent = false;
							Settings::IniShitsPlayer[2] = false;

							if(PlayerController->Chat_Component)
							if (auto chatwb = PlayerController->Chat_Component->WB_ChatRef; chatwb && Settings::PlayerPicked != -1)
							{
								SDK::FBPUniqueNetId netid;
								SDK::FS_ChatMessage msgOut;



								chatwb->Send_Global_Message(SDK::FString(Settings::MessageSpoof.c_str()), PlayerController, PlayerController, netid, SDK::FString(L"Niggichan"), msgOut);


								Settings::PlayerPicked = -1;
								Settings::ChangeNameEvent = true;
							}
						}
					}
				}
			}

			if (Settings::ChangeNameEvent) {
				Settings::ChangeNameEvent = false;

				PlayerController->ServerChangeName(SDK::FString(Settings::PlayerPicked != -1 ? PlayerStuff::PlayerList[Settings::PlayerPicked].name.c_str() : Settings::OriginalName.c_str()));

				Settings::NameOfVictim = L"";
			}


			if (Settings::NameChanger) {

				static void* AddrPlayerController = 0x0;

				if (AddrPlayerController != PlayerController || !Settings::IniShitsLevel[3]) {



					Settings::ChangeNameEvent = false;
					Settings::IniShitsLevel[3] = true;
					Settings::OriginalName = Settings::NameTo_set;
					PlayerController->ServerChangeName(SDK::FString(Settings::NameTo_set.c_str()));
					AddrPlayerController = PlayerController;
				}

			}
#endif

			//static ULONGLONG TickCountGameModeCurrent = 0;

			//if (TickCount >= TickCountGameModeCurrent) {
			//	TickCountGameModeCurrent = TickCount + 1000;

			//	auto OBJ_List = FindInstances(SDK::AMP_::StaticClass());

			//	if (OBJ_List.size() != 0) {
			//		std::cout << "Found GameMode!\n";
			//	}
			//}

			if (Settings::LoadLevel_) {
				static ULONGLONG TickCount_Server = 0;
				if (TickCount >= TickCount_Server) {
					TickCount_Server = TickCount + 800;

					SDK::FName nameptrLevel = StringLib->Conv_StringToName(SDK::FString(Settings::LevelToLoad.c_str()));

					std::string levelName = nameptrLevel.ToString();


					if (levelName != "None") {



						if (auto GameMode = (SDK::ABase_GM_C*)WorldP->AuthorityGameMode; GameMode) {

							//Keep lobby open by Loading level from Lobby (Exploit 5)
							if (GameMode->IsA(SDK::ABase_GM_C::StaticClass())) {
								SDK::FString blabla1, blabla2;
								GameMode->ServerTravel_ToGameplayMap(nameptrLevel, blabla1, blabla2);
								Cheat::Message(std::string("Server Loaded Level: " + levelName));
							}
							else if (GameMode->IsA(SDK::AMP_GameMode_C::StaticClass())) {
								auto GameModeC = (SDK::AMP_GameMode_C*)GameMode;
								GameModeC->LoadLevel(nameptrLevel, false, false);
							}
							else
							{
								Cheat::Message(std::string("Client Loaded Level: " + levelName));
								GPStatics->OpenLevel(WorldP, nameptrLevel, true, SDK::FString(L""));
							}

						}
						else
						{
							Cheat::Message(std::string("Client Loaded Level: " + levelName));
							GPStatics->OpenLevel(WorldP, nameptrLevel, true, SDK::FString(L""));
						}

					}
				}

				Settings::LoadLevel_ = false;
			}



			if (Settings::FovChanger) {
				PlayerController->FOV(Settings::Fov);
			}

			static bool cleared = false;

			if (true) {
				PlayerStuff::PlayerList.clear();


				auto Players = GetAllActorsOfClass(WorldP, SDK::APlayerState::StaticClass());

				if (Players.size() > 0) {
					cleared = false;

					auto bpClass = SDK::ABPCharacter_Demo_C::StaticClass();
					auto AMPGamemodeClass = SDK::AMP_GameMode_C::StaticClass();
					auto SpectatorPawnClass = SDK::ASpectatorPawn::StaticClass();

					for (size_t i = 0; i < Players.size(); i++)
					{
						auto State = (SDK::APlayerState*)Players[i];

						auto contr = (SDK::AMP_PlayerController_C*)State->GetOwner();

						auto StatePR = (SDK::AFancyPlayerState*)nullptr;

						if (State->IsA(SDK::AFancyPlayerState::StaticClass())) {
							StatePR = (SDK::AFancyPlayerState*)State;
						}

						auto Owner_ = State->PawnPrivate;



						if (Owner_ && !contr)contr = (SDK::AMP_PlayerController_C*)Owner_->Controller;

						auto Character_ = (SDK::ABPCharacter_Demo_C*)(Owner_ ? (Owner_->IsA(bpClass) ? (SDK::ABPCharacter_Demo_C*)Owner_ : nullptr) : nullptr);


						bool isAlive = false;
						bool isSpectating = false;
						SDK::FVector pos;



						if (contr) {

							if (!isAlive) {
								if (auto GameMode = (SDK::AMP_GameMode_C*)WorldP->AuthorityGameMode; GameMode) {


									if (GameMode->IsA(AMPGamemodeClass)) {


										auto GameModeC = (SDK::AMP_GameMode_C*)GameMode;

										if (Settings::EventRespawnPlayer && State->PlayerId == Settings::Event_PlayerID)
										{
											Settings::Event_PlayerID = -1;
											Settings::EventRespawnPlayer = false;


											GameModeC->RestartPlayer(contr);
											auto Pawn_ = GameModeC->SpawnDefaultPawnFor(contr, GameModeC->PlayerStarts[0]);
											contr->AcknowledgedPawn = Pawn_;
											State->PawnPrivate = Pawn_;
											GameModeC->HandleStartingNewPlayer(contr);
											GameModeC->RestartPlayer(contr);

										}

									}
								}
							}
						}

						if (Owner_) {

							contr = (SDK::AMP_PlayerController_C*)Owner_->GetController();

							if (!contr)
								contr = (SDK::AMP_PlayerController_C*)Owner_->GetOwner();

							pos = Owner_->K2_GetActorLocation();

							isAlive = (Character_);

							auto chara = (SDK::ABPCharacter_Demo_C*)nullptr;

							//Only for Events
							if (State->PlayerId == Settings::Event_PlayerID) {

								if (Settings::TeleportToEventPlayer && PlayerController->Character) {
									Settings::Event_PlayerID = -1;
									Settings::TeleportToEventPlayer = false;

#ifdef Gatekeep
									auto charc = (SDK::ABPCharacter_Demo_C*)PlayerController->Character;

									if (charc && charc->Class->GetFunction("BPCharacter_Demo_C", "StartPushingActor_SERVER")) {
										charc->StartPushingActor_SERVER((SDK::ABP_Pushable_C*)PlayerController->AcknowledgedPawn, pos, PlayerController->ControlRotation);
									    charc->StopPushingActor_SERVER((SDK::ABP_Pushable_C*)PlayerController->AcknowledgedPawn);
									}
									else
									{
										PlayerController->Pawn->K2_SetActorLocation(pos, false, 0, true);
									}
#else
                                     PlayerController->Pawn->K2_SetActorLocation(pos, false, 0, true);
#endif

									
								}

								if (Settings::SpawnRopeAtEventPlayer) {
									Settings::Event_PlayerID = -1;
									Settings::SpawnRopeAtEventPlayer = false;

									if (auto Char_ = (SDK::ABPCharacter_Demo_C*)PlayerController->Character; Char_ && Char_->IsA(SDK::ABPCharacter_Demo_C::StaticClass())) {

										auto ItemRep = Char_->CurrentItem_Rep;

										if (ItemRep) {
											auto rope = (SDK::ABP_Rope_C*)SDK::ABP_Rope_C::GetDefaultObj();

											if (ItemRep->ID == rope->ID) {
												rope = (SDK::ABP_Rope_C*)ItemRep;


												rope->SRV_TossRope((SDK::ABP_Rope_Floor_C*)Owner_, Owner_->K2_GetActorLocation() + Owner_->GetActorForwardVector() * 2 );
												rope->SRV_ShowRope(Owner_, Owner_->K2_GetActorLocation() + Owner_->GetActorForwardVector() * 2);
											}
										}
									}
								}

								if (Settings::SpectateEventPlayer) {
									Settings::Event_PlayerID = -1;
									Settings::SpectateEventPlayer = false;

									if (Settings::Freecam) {
										if (Settings::IniShitsPlayer[Settings::PIsFreeCam]) {
											PlayerController->K2_GetPawn()->K2_SetActorLocation(Owner_->K2_GetActorLocation(), false, 0, true);
									    }
									}
								}

								if (Settings::UseItemEventPlayer) {
									Settings::Event_PlayerID = -1;
									Settings::UseItemEventPlayer = false;

									if (Character_) {
										auto char_ = (SDK::ABPCharacter_Demo_C*)(PlayerController->Character ? (PlayerController->Character->IsA(bpClass) ? PlayerController->Character : nullptr) : nullptr);

										if (Character_->CurrentItem_Rep) {
											if(char_)
											char_->UseItem_SERVER((SDK::ABP_Item_C*)Character_->CurrentItem_Rep);
											else
												Message("LocalPlayer Character is nullptr");
										}
										else
											Message("Slot is Empty");
									}
									else
									{
										Message("Character is nullptr");
									}
								}


								if (Settings::StealPawnEventPlayer) {
									Settings::StealPawnEventPlayer = false;
									Settings::Event_PlayerID = -1;

									if (Character_) {
										auto char_ = (SDK::ABPCharacter_Demo_C*)(PlayerController->Character ? (PlayerController->Character->IsA(bpClass) ? PlayerController->Character : nullptr) : nullptr);

										if (char_) {
											char_->StartPushingActor_SERVER((SDK::ABP_Pushable_C*)Character_, Pawn->K2_GetActorLocation(), Pawn->GetControlRotation());
										}
									}
								}


								//if (Settings::EventCollectDataPlayer) {
								//	Settings::EventCollectDataPlayer = false;

								//	if (contr) {


								//		if (contr->NetConnection) {
								//			Cheat::Message("[Player Info:] SteamID:" + contr->NetConnection->RemoteAddr.ObjectPointing->ToString(false).ToString());
								//		}
								//		else
								//		{
								//			Cheat::Message("[Player Info:] Connection was nullptr!");
								//		}
								//	}
								//	else
								//	{
								//		Cheat::Message("[Player Info:] PlayerController was nullptr");
								//	}
								//}


								if (Settings::TeleportEventPlayer)
								{
									Settings::Event_PlayerID = -1;
									Settings::TeleportEventPlayer = false;
									{
										Owner_->K2_SetActorLocation(PlayerController->Pawn->K2_GetActorLocation(), false, 0, true);
									}
									
								}



								
							}

						}





						if (State != PlayerController->PlayerState)
							PlayerStuff::PlayerList.push_back(PlayerStuff::Player(State->PlayerNamePrivate.ToWString(),
								(contr ? (contr->NetConnection ? contr->NetConnection->URL_.Host.ToWString() : UsefullFuncs::stringToWideString(Backend::HostSteamID) ) : UsefullFuncs::stringToWideString( Backend::HostSteamID) ),
								(Character_ ? (Character_->CurrentItem_Rep ? Cheat::UsefullFuncs::stringToWideString(Character_->CurrentItem_Rep->GetName()) : L"Empty") : L"Player Dead"), State->PlayerId,
								contr, Owner_, isAlive, contr, pos, StatePR ? StatePR->InventoryComponent : nullptr));


					}

					std::sort(PlayerStuff::PlayerList.begin(), PlayerStuff::PlayerList.end(), [](const PlayerStuff::Player& a, const PlayerStuff::Player& b) {
						return a.PlayerID < b.PlayerID;
						});
				}

			}
			else
			{
				if (!cleared) {
					cleared = true;
					PlayerStuff::PlayerList.clear();
				}
			}
		}

		if (!Canvas)return;

		//Esp shit, World needed obviously else crashes
		if (Ok || Stages >= 6) {

#ifdef DEBUG //Will have to reverse some shit later. For now wont work
			if (Settings::TestEvent_PrintSteamIDS) {
				Settings::TestEvent_PrintSteamIDS = false;

				auto Players = PlayerStuff::PlayerList;

				for (size_t i = 0; i < Players.size(); i++)
				{
					auto Controller = (SDK::APlayerController*)Players[i].Pawn_->Controller;

					if (Controller) {
						auto NetConnection = Controller->NetConnection;

						if (NetConnection) {

						}
					}
				}
			}

#endif


			if (PlayerController->SpectatorPawn) {

			}
			
			RunMainHost();


			static SDK::ABoatPawn* LastBoat = 0x0;

			if (Settings::BoatFly || Settings::BoatSpeedhack || Settings::BoatEsp) {


				auto BoatClass = SDK::ABoatPawn::StaticClass();

				if (BoatClass) {

					auto BoatPawns = GetAllActorsOfClass(WorldP, BoatClass);

					if (BoatPawns.size() > 0) {
						for (size_t i = 0; i < BoatPawns.size(); i++)
						{
							auto BoatPawn = (SDK::ABP_RowBoat_C*)BoatPawns[i];

							if (Settings::BoatEsp) {
								auto Color = UsefullFuncs::RGBATOFLinear(255, 0, 0, 255);

								auto location = BoatPawn->K2_GetActorLocation();

								SDK::FVector2D ScreenPos;

								if (GPStatics->ProjectWorldToScreen(PlayerController, location, &ScreenPos, true))
									UsefullFuncs::DrawCircle(Canvas, ScreenPos, 10.0f, 12, Color);
							}

							if (BoatPawn->Controller == PlayerController) {

								//BoatPawn->LaunchPawn(SDK::FVector(0, 0, 200.5f), false, false);
								if (Settings::BoatFly) {
									auto DeltaTime = GPStatics->GetWorldDeltaSeconds(WorldP);

									BoatPawn->RootComponent->ComponentVelocity = { 0.0f, 0.0f, 0.0f };
									BoatPawn->SceneComponent->ComponentVelocity = { 0.0f, 0.0f, 0.0f };
									BoatPawn->bActorEnableCollision = false; 

									Settings::IniShitsLevel[5] = true;

									if (UsefullFuncs::IsKeyPressed(VK_LEFT)) {
										SDK::FRotator rotation = BoatPawn->K2_GetActorRotation();

										if (rotation.Yaw - 5.0f < -360.0f) {
											rotation.Yaw = 0.0f;
										}
										else
										{
											rotation.Yaw -= 5.0f;
										}


										BoatPawn->K2_SetActorRotation(rotation, false);
									}

									if (UsefullFuncs::IsKeyPressed(VK_RIGHT)) {
										SDK::FRotator rotation = BoatPawn->K2_GetActorRotation();

										if (rotation.Yaw + 5.0f > 360.0f) {
											rotation.Yaw = 0.0f;
										}
										else
										{
											rotation.Yaw += 5.0f;
										}


										BoatPawn->K2_SetActorRotation(rotation, false);
									}

									if (UsefullFuncs::IsKeyPressed(VK_SPACE)) {

										auto BoatLoc = BoatPawn->K2_GetActorLocation();

										auto Cam = PlayerController->PlayerCameraManager;

										SDK::FVector ForwardCam = (Cam->GetActorUpVector() * DeltaTime * 100) * Settings::PlayerFlySpeedY;

										SDK::FVector PositionOut = { BoatLoc.X + ForwardCam.X, BoatLoc.Y + ForwardCam.Y, BoatLoc.Z };

										BoatPawn->GetXShipComponent()->WaterWorldZ += Settings::PlayerFlySpeedY;

										BoatPawn->K2_SetActorLocation(PositionOut, false, 0, true);

									}

									if (UsefullFuncs::IsKeyPressed(VK_SHIFT)) {

										auto BoatLoc = BoatPawn->K2_GetActorLocation();

										auto Cam = PlayerController->PlayerCameraManager;

										SDK::FVector ForwardCam = (Cam->GetActorUpVector() * DeltaTime * 100) * Settings::PlayerFlySpeedY;

										SDK::FVector PositionOut = { BoatLoc.X + ForwardCam.X, BoatLoc.Y + ForwardCam.Y, BoatLoc.Z};

										BoatPawn->GetXShipComponent()->WaterWorldZ -= Settings::PlayerFlySpeedY;

										BoatPawn->K2_SetActorLocation(PositionOut, false, 0, true);

									}

									if (UsefullFuncs::IsKeyPressed('W')) {
										auto BoatLoc = BoatPawn->K2_GetActorLocation();

										auto Cam = PlayerController->PlayerCameraManager;

										SDK::FVector ForwardCam = (Cam->GetActorForwardVector() * DeltaTime * 100) * Settings::PlayerFlySpeedY;

										SDK::FVector PositionOut = { BoatLoc.X + ForwardCam.X, BoatLoc.Y + ForwardCam.Y, BoatLoc.Z };

										BoatPawn->K2_SetActorLocation(PositionOut, false, 0, true);
									}


									if (UsefullFuncs::IsKeyPressed('S')) {
										auto BoatLoc = BoatPawn->K2_GetActorLocation();

										auto Cam = PlayerController->PlayerCameraManager;

										SDK::FVector ForwardCam = (Cam->GetActorForwardVector() * DeltaTime * 100) * Settings::PlayerFlySpeedY;

										SDK::FVector PositionOut = { BoatLoc.X - ForwardCam.X, BoatLoc.Y - ForwardCam.Y, BoatLoc.Z};

										BoatPawn->K2_SetActorLocation(PositionOut, false, 0, true);
									}

									if (UsefullFuncs::IsKeyPressed('A')) {
										auto BoatLoc = BoatPawn->K2_GetActorLocation();

										auto Cam = PlayerController->PlayerCameraManager;

										SDK::FVector ForwardCam = (Cam->GetActorRightVector() * DeltaTime * 100) * Settings::PlayerFlySpeedY;

										SDK::FVector PositionOut = { BoatLoc.X - ForwardCam.X, BoatLoc.Y - ForwardCam.Y, BoatLoc.Z};

										BoatPawn->K2_SetActorLocation(PositionOut, false, 0, true);
									}



									if (UsefullFuncs::IsKeyPressed('D')) {
										auto BoatLoc = BoatPawn->K2_GetActorLocation();

										auto Cam = PlayerController->PlayerCameraManager;

										SDK::FVector ForwardCam = ( Cam->GetActorRightVector() * DeltaTime * 100) * Settings::PlayerFlySpeedY;

										SDK::FVector PositionOut = { BoatLoc.X + ForwardCam.X, BoatLoc.Y + ForwardCam.Y, BoatLoc.Z};

										BoatPawn->K2_SetActorLocation(PositionOut, false, 0, true);
									}
								}


								if (Settings::BoatSpeedhack) {
									auto ShipComponent = BoatPawn->GetXShipComponent();

									for (size_t i1 = 0; i1 < ShipComponent->XShipEngines.Num(); i1++)
									{
										ShipComponent->XShipEngines[i1].EngineForwardForce = Settings::BoatSpeed;
									}

								}




								break;
							}
						}
					}




				}


			}
			else
			{
				if (Settings::IniShitsLevel[5]) {

					if (auto BoatClass = SDK::ABP_RowBoat_C::StaticClass(); BoatClass)
					{

						auto BoatPawns = GetAllActorsOfClass(WorldP, BoatClass);

						if (BoatPawns.size() > 0) {
							for (size_t i = 0; i < BoatPawns.size(); i++)
							{
								auto BoatPawn = (SDK::ABP_RowBoat_C*)BoatPawns[i];

								if (BoatPawn->Controller == PlayerController) {
									BoatPawn->bActorEnableCollision = false;
								}
							}
						}
					}

					Settings::IniShitsLevel[5] = false;
				}
			}

			auto BPCharacter = (SDK::ABPCharacter_Demo_C*)PlayerController->Character;

			if (BPCharacter) {

				if (Settings::ProtectCamServer && !Settings::IniShitsPlayer[0]) {
					Settings::IniShitsPlayer[0] = true;
					BPCharacter->CameraComponent->SetIsReplicated(false);
				}

#ifdef DEBUG
				/*
				{ // Dont wanna pollute the main codeblock with static value, so own codeblock

					static SDK::FGuid MapPackageGuidCurrent = { 0,0,0,0 }; //use guid for whatever the fuck

					if (Settings::RejoinServer_Event) {
						Settings::RejoinServer_Event = false;

						MapPackageGuidCurrent = { 0,0,0,0 };
						PlayerController->ClientTravelInternal(SDK::FString(Backend::HostID.c_str()), SDK::ETravelType::TRAVEL_Absolute, true, MapPackageGuidCurrent);
					}
				}
				*/
#endif

				/*
				BPCharacter->Bob_Buoyancy_C74565444B6ED2300150BBA0C909B04A = 100.0f;
				BPCharacter->OC_UpdateBuoyancy();*/

				if (Settings::OwnSelf) {
					Settings::OwnSelf = false;
					PlayerController->ServerAcknowledgePossession(BPCharacter);
				}

				

				//HookProcEvent(BPCharacter, GodMode);

				//BPCharacter->SRV_OrientMovement();

				if (Settings::InfiniteStamina) {
					BPCharacter->ShouldUseStamina = false;
				}
				else
				{
					BPCharacter->ShouldUseStamina = true;
				}

				static bool WasNocliped = false;
				if (Settings::Noclip) {
					BPCharacter->CanCollide = false;

					WasNocliped = true;
				}
				else
				{
					if (WasNocliped && !BPCharacter->CanCollide) {
						BPCharacter->CanCollide = true;
					}
				}


				//Spawn stuff inside your hand, that wasnt supposed to even Spawn in there (Exploit 1, Dangerous Exploit)
				if (Settings::Spawner_) {
					static ULONGLONG TickFindBoat = 0;

					if (Settings::SpawnerEvent) {
						Settings::SpawnerEvent = false;

						SDK::UClass* SpawningThing = nullptr;
						
						switch (Settings::SpawnerValue)
						{
						case Settings::Spawner::Spawner_Stuff::None:
							break;

						case Settings::Spawner::Spawner_Stuff::Boat:
							SpawningThing = SDK::ABP_RowBoat_C::StaticClass();

							if (SpawningThing) {
								BPCharacter->SpawnEquipItem_SERVER(SpawningThing);

								Settings::IniShitsPlayer[5] = true;
								TickFindBoat = TickCount + 100;
							}
							break;

						case Settings::Spawner::Spawner_Stuff::Rope:
							SpawningThing = SDK::ABP_Rope_C::StaticClass();

							if (Functions::ShouldUsePointer64(SpawningThing)) {
								BPCharacter->SpawnEquipItem_SERVER(SpawningThing);
							}
							else
							{
								Message("Couldnt Spawn Rope. Class Not Found");
							}
							break;


						case Settings::Spawner::Spawner_Stuff::BactiriaMonster:
							SpawningThing = SDK::ABacteria_BP_C::StaticClass();

							if (SpawningThing)
								BPCharacter->SpawnEquipItem_SERVER(SpawningThing);

							break;


						case Settings::Spawner::Spawner_Stuff::ExitZone:
							SpawningThing = SDK::ABP_ExitZone_C::StaticClass();

							if (Functions::ShouldUsePointer64(SpawningThing)) {
								BPCharacter->SpawnEquipItem_SERVER(SpawningThing);
							}
							else
							{
								Message("Couldnt Spawn ExitZone. Class Not Found");
							}
							break;


						case Settings::Spawner::Spawner_Stuff::FireworkProj_Bugged:
							SpawningThing = SDK::ABP_FireworkProjectile_C::StaticClass();

							if (Functions::ShouldUsePointer64(SpawningThing)) {
								BPCharacter->SpawnEquipItem_SERVER(SpawningThing);
								Settings::IniShitsPlayer[3] = true;
								Settings::IniShitsPlayer[4] = true;

							}
							else
							{
								Message("Couldnt Spawn Firework. Class Not Found");
							}
							break;

						case Settings::Spawner::Spawner_Stuff::Firework:
							SpawningThing = SDK::ABP_Item_Firework_C::StaticClass();

							if (Functions::ShouldUsePointer64(SpawningThing)) {
								BPCharacter->SpawnEquipItem_SERVER(SpawningThing);
							}
							else
							{
								Message("Couldnt Spawn Firework. Class Not Found");
							}
							break;

#ifdef DEBUG
						case Settings::Spawner::Spawner_Stuff::ExitZoneEndGame:
							SpawningThing = SDK::UObject::FindClassFast(Settings::SpawningValue);

							if (Functions::ShouldUsePointer64(SpawningThing)) {
								BPCharacter->SpawnEquipItem_SERVER(SpawningThing);
							}
							else
							{
								Message("Couldnt Spawn ExitZoneEndGame. Class Not Found");
							}
							break;

#endif // DEBUG
						}
					}


					if (Settings::IniShitsPlayer[5] && TickCount >= TickFindBoat) {
						TickFindBoat = TickCount + 100;

						auto Boats_2 = GetAllActorsOfClass(WorldP, SDK::ABoatPawn::StaticClass());

						int Numb = Boats_2.size();

						for (size_t i = 0; i < Numb; i++)
						{
							auto Parent = Boats_2[i]->Instigator;

							if ( Parent == BPCharacter) {
								auto boat = (SDK::ABoatPawn*)Boats_2[i];

								BPCharacter->K2_SetActorLocation(boat->K2_GetActorLocation(), false, 0, true);
								BPCharacter->CurrentInteractingPawn = boat;
								BPCharacter->Interact(boat);


								Settings::IniShitsPlayer[5] = false;
							}
						}
					}

				


					if (Settings::IniShitsPlayer[3] && BPCharacter->CurrentItem_Rep) {
						Settings::IniShitsPlayer[3] = false;
						BPCharacter->CurrentItem_Rep->K2_DetachFromActor(SDK::EDetachmentRule::KeepRelative, SDK::EDetachmentRule::KeepRelative, SDK::EDetachmentRule::KeepRelative);
					}

					if (Settings::IniShitsPlayer[4] && BPCharacter->CurrentItem_Rep) 
					{

						static LONGLONG UpdateFireWorkTick = 0;

						if (TickCount >= UpdateFireWorkTick) {
							UpdateFireWorkTick = TickCount + 100;
							if (BPCharacter->CurrentItem_Rep->Class != SDK::ABP_FireworkProjectile_C::StaticClass()) {
								Settings::IniShitsPlayer[4] = false;
							}
						}
						
						if(Settings::IniShitsPlayer[4])
						BPCharacter->CurrentItem_Rep->K2_SetActorLocation(PlayerController->PlayerCameraManager->GetCameraLocation() + (PlayerController->PlayerCameraManager->GetActorForwardVector() * 2), false, 0, true);
					}
				}


				static SDK::FVector LastPos;

				if (Settings::IniShitsPlayer[1]) {
					SDK::FVector2D Pos2d;

					if (GPStatics->ProjectWorldToScreen(PlayerController, LastPos, &Pos2d, true)) {

						auto color = SDK::FLinearColor(0.0f, 0.0f, 1.0f, 1.0f);

						DrawTextRGBWithFString(Canvas, SDK::FString(L"LocalPlayer_LastServerPos"), Pos2d, color, false, 1.1f);

						UsefullFuncs::DrawCircle(Canvas, Pos2d, 1.0f, 12, color);
					}
					
				}

				//FreeCam kinda
				if (Settings::Freecam && UsefullFuncs::IsKeyPressed('J', true))
				{
					//PlayerController->ServerPause();
					//PlayerController->ClientReset();
					//PlayerController->ServerRestartPlayer();


					static bool replicate = true;

					LastPos = BPCharacter->K2_GetActorLocation();

					PlayerController->SetReplicateMovement(replicate);
					BPCharacter->SetReplicateMovement(replicate);


					if (!replicate) {
						Settings::PlayerFly = true;
						Settings::VelocityFly = false;


						Settings::IniShitsPlayer[1] = true;
						
					}
					else
					{
						Settings::PlayerFly = false;
						Settings::VelocityFly = true;

						Settings::IniShitsPlayer[1] = false;
					}


					replicate = !replicate;

					
				}

				//SDK::UWB_Chat_C

				//Become an Omega ultra sigma and live inside your own edit, while floating elegantly through the air 
				if (UsefullFuncs::IsKeyPressed(VK_RSHIFT)) {
					BPCharacter->CustomTimeDilation = 0.02f;
				}
				else
				{
					static bool GetDilation = false;
					static float DilationCopy = 0.0f;

					if (!GetDilation) {
						DilationCopy = BPCharacter->CustomTimeDilation;
						GetDilation = true;
					}

					BPCharacter->CustomTimeDilation = DilationCopy;
				}


				//if (UsefullFuncs::IsKeyPressed('P')) {
				//	BPCharacter->PickUp_SERVER((SDK::ADroppedItem*)BPCharacter);
				//	//Settings::ForceAdmin = true
				//}

				if (UsefullFuncs::IsKeyPressed('Z')) {
					Settings::TpEveryone = true;
				}


				{ // Only works as Host
					

					if (BPCharacter->Climb) { //Fast climb ladder
						BPCharacter->Climb->TheTimeline.Length = 0.0f;
					}

					if (BPCharacter->FallTimeline)
						BPCharacter->FallTimeline->TheTimeline.Length = 0.0f;
				}
				

				//if (BPCharacter->LeanLeft) {
				//	BPCharacter->LeanLeft->TheTimeline.Length = 500.01f;
				//	BPCharacter->LeanLeft_Offset_17DE22D544C8BED35C8F5881C0002D9E = 1000000.0f;
				//	BPCharacter->LeanRight_Offset_C47E33074D47E917512F4F8517EDDA78 = 1000000.0f;
				//	BPCharacter->LeanRight->TheTimeline.Length = 500.01f;


				//}

				//BPCharacter->SetCanCollide(false);



				auto playerState = (SDK::AMP_PS_C*)BPCharacter->PlayerState;
				if (playerState) {


					static bool RGBWasOn = false;
					static SDK::FColor NormalRGB = { 208, 255, 255, 255 };






					if (Settings::RGBFlashlight) {

						if (BPCharacter->CurrentItem_Rep) {
							RGBWasOn = true;

							{
								static SDK::FColor ColorRGB = NormalRGB;

								auto Flashlight = (SDK::ABP_Item_Flashlight_C*)BPCharacter->CurrentItem_Rep;

								if (Flashlight) {

									if (Flashlight->IsFlashlightOn)
									{


										UsefullFuncs::RGBA RedGreenBlueAAAAAAAAAAA = { ColorRGB.R, ColorRGB.G, ColorRGB.B, ColorRGB.A };

										Rainbowify(&RedGreenBlueAAAAAAAAAAA);

										ColorRGB.R = RedGreenBlueAAAAAAAAAAA.R;
										ColorRGB.G = RedGreenBlueAAAAAAAAAAA.G;
										ColorRGB.B = RedGreenBlueAAAAAAAAAAA.B;

										if (Flashlight->Flashlight != nullptr) {
											Flashlight->Flashlight->SetLightColor(UsefullFuncs::RGBATOFLinear(ColorRGB.R, ColorRGB.G, ColorRGB.B, ColorRGB.A), true);
										}

										if (Flashlight->PointLight != nullptr) {
											Flashlight->PointLight->SetLightColor(UsefullFuncs::RGBATOFLinear(ColorRGB.R, ColorRGB.G, ColorRGB.B, ColorRGB.A), true);
										}

									}
								}



							}
						}



					}
					else {
						if (RGBWasOn && BPCharacter->CurrentItem_Rep) {

							if (BPCharacter->CurrentItem_Rep->Class->Name == SDK::ABP_Item_Flashlight_C::StaticClass()->Name) {
								auto Flashlight = (SDK::ABP_Item_Flashlight_C*)BPCharacter->CurrentItem_Rep;
								if (Flashlight) {

									if (Flashlight->Flashlight) {
										Flashlight->Flashlight->LightColor = NormalRGB;
										Flashlight->Flashlight->SetLightColor(UsefullFuncs::RGBATOFLinear(NormalRGB.R, NormalRGB.G, NormalRGB.B, NormalRGB.A), true);
									}

									if (Flashlight->PointLight) {
										Flashlight->PointLight->SetLightColor(UsefullFuncs::RGBATOFLinear(NormalRGB.R, NormalRGB.G, NormalRGB.B, NormalRGB.A), true);
									}
								}




								RGBWasOn = false;

							}
						}
					}


					





					if (Settings::Rapidfire) { // only works as Host
						if (BPCharacter->CurrentItem_Rep) {
							auto Flaregun = (SDK::ABP_FlareGun_C*)SDK::ABP_FlareGun_C::GetDefaultObj();
							if (BPCharacter->CurrentItem_Rep->ID == Flaregun->ID) {
								Flaregun = (SDK::ABP_FlareGun_C*)BPCharacter->CurrentItem_Rep;
								Flaregun->CanUse = true;
							}
						}

						if (BPCharacter->CurrentItem_Rep) {
							auto Flaregun = (SDK::ABP_Item_Firework_C*)SDK::ABP_Item_Firework_C::GetDefaultObj();
							if (BPCharacter->CurrentItem_Rep->ID == Flaregun->ID) {
								Flaregun = (SDK::ABP_Item_Firework_C*)BPCharacter->CurrentItem_Rep;
								Flaregun->ThrowTime = 0.0f;
								Flaregun->ExplodeTimer->TheTimeline.Length = 0.0f;
							}
						}


						
					}

#ifdef DEBUG //Load Chams, not working yet! working on it tho

					if (UsefullFuncs::IsKeyPressed(VK_F6, true))
					{
						auto Materials = FindInstances(SDK::UObject::StaticClass());
						bool isMounted = false;


						for (size_t i = 0; i < Materials.size(); i++)
						{
							if (Materials[i]->GetName().find("Chams_") != std::string::npos) {
								isMounted = true;
								Message(std::format("Found something!: {}", Materials[i]->GetFullName()), FOREGROUND_GREEN);

								auto Outer = Materials[i]->Outer;

								while (Outer)
								{
									Message(std::format("Outer {}!: {}",i, Outer->GetFullName()), FOREGROUND_GREEN);
									Outer = Outer->Outer;
								}



								// Correct path to the material without the .uasset extension
								const wchar_t* AssetName = L"/Game/Materials/Chams_.Chams_";  // Name of the asset

								// Load the material using StaticLoadObject_Internal
								SDK::UObject* OutObject = StaticLoadObject_Internal(
									SDK::UObject::StaticClass(),  // Class
									nullptr,                        // InOuter_Optional
									AssetName,                      // NameOfObject
									nullptr,                      // FileName_Optional
									0,                              // LoadFlags
									nullptr,                        // Sandbox_Needed
									true,                           // AllowObjectReconciliation
									nullptr                         // InstancingContext
								);

								if (OutObject)
									Cheat::Message("Loaded Chams Material!");
								else
									Cheat::Message("Couldn't Loaded Chams Material!");
							}
						}

						if (!isMounted) {


							Cheat::FPlatformFileManager* FileManager = Cheat::FPlatformFileManager$$Get();

							if (FileManager) {



								void* PlatformFile = Cheat::FPakPlatformFile$$FindPlatformFile(FileManager, L"PakFile");

								if (PlatformFile) {




									if (Cheat::FPakPlatformFile$$Mount(PlatformFile, LR"(R:/SteamLibrary/steamapps/common/EscapeTheBackrooms/EscapeTheBackrooms/Content/Paks/TestAsset.pak)", 0, L"/fortnig/Content/Materials", true)) {
										isMounted = true;

										// Correct path to the material without the .uasset extension
										const wchar_t* AssetName = L"/fortnig/Content/Game/Materials/Chams_.Chams_";  // Name of the asset

										// Load the material using StaticLoadObject_Internal
										SDK::UObject* OutObject = StaticLoadObject_Internal(
											SDK::UObject::StaticClass(),  // Class
											nullptr,                        // InOuter_Optional
											AssetName,                      // NameOfObject
											nullptr,                      // FileName_Optional
											0,                              // LoadFlags
											nullptr,                        // Sandbox_Needed
											true,                           // AllowObjectReconciliation
											nullptr                         // InstancingContext
										);

										if (OutObject)
											Cheat::Message("Loaded Chams Material!");
										else
											Cheat::Message("Couldn't Loaded Chams Material!");


										Materials = FindInstances(SDK::UObject::StaticClass());


										for (size_t i = 0; i < Materials.size(); i++)
										{
											if (Materials[i]->GetName().find("Chams_") != std::string::npos) {
												Message(std::format("Found something!: {}", Materials[i]->GetFullName()), FOREGROUND_GREEN);

												auto Outer = Materials[i]->Outer;

												while (Outer)
												{
													Message(std::format("Outer {}!: {}", i, Outer->GetFullName()), FOREGROUND_GREEN);
													Outer = Outer->Outer;
												}



												// Correct path to the material without the .uasset extension
												const wchar_t* AssetName = L"/fortnig/Content/Game/Materials/Chams_.Chams_";  // Name of the asset

												// Load the material using StaticLoadObject_Internal
												SDK::UObject* OutObject = StaticLoadObject_Internal(
													SDK::UObject::StaticClass(),  // Class
													nullptr,                        // InOuter_Optional
													AssetName,                      // NameOfObject
													nullptr,                      // FileName_Optional
													0,                              // LoadFlags
													nullptr,                        // Sandbox_Needed
													true,                           // AllowObjectReconciliation
													nullptr                         // InstancingContext
												);

												if (OutObject)
													Cheat::Message("Loaded Chams Material!");
												else
													Cheat::Message("Couldn't Loaded Chams Material!");

												break;
											}
										}
									}
									else
									{
										Message("Failed to Mount PakFile");
									}

								}
								else
								{
									Message("PakPlatformFile was nullptr");
								}
							}
							else
							{
								Message("FileManager was nullptr");
							}
						}
						
					}
#endif 

					//Spawn ropes anywhere you want, how often you want also. (Exploit 3, severe)
					if (UsefullFuncs::IsKeyPressed(VK_F2)& 1 && BPCharacter->CurrentItem_Rep) {
						auto rope = (SDK::ABP_Rope_C*)SDK::ABP_Rope_C::GetDefaultObj();
						if (BPCharacter->CurrentItem_Rep->ID == rope->ID) {
							rope = (SDK::ABP_Rope_C*)BPCharacter->CurrentItem_Rep;


							rope->SRV_TossRope((SDK::ABP_Rope_Floor_C*)Pawn, Pawn->K2_GetActorLocation());
							rope->SRV_ShowRope(Pawn, Pawn->K2_GetActorLocation());
						}
					}



					//Spam Flareguns
					if (UsefullFuncs::IsKeyPressed(VK_F3, true))
					{
						Settings::IniShitsPlayer[Settings::PlayerDynamic::PFlaregunSpammer] = !Settings::IniShitsPlayer[Settings::PlayerDynamic::PFlaregunSpammer];
					}


					if(Settings::IniShitsPlayer[Settings::PlayerDynamic::PFlaregunSpammer])
				    {
					   auto cam = (SDK::ABP_FlareGun_C*)BPCharacter->CurrentItem_Rep;

					   BPCharacter->SpawnEquipItem_SERVER(SDK::ABP_FlareGun_C::StaticClass());

							if (cam)
							{
								BPCharacter->UseItem_SERVER(cam);
								BPCharacter->DestroyEquipItem_SERVER();
							}

					}

					


					//if (UsefullFuncs::IsKeyPressed(VK_F3) & 1 && BPCharacter->CurrentItem_Rep) { // actual safe item

					//	auto rope = (SDK::ABP_Scanner_C*)SDK::ABP_Scanner_C::GetDefaultObj();
					//	if (BPCharacter->CurrentItem_Rep->ID == rope->ID) {
					//		rope = (SDK::ABP_Scanner_C*)BPCharacter->CurrentItem_Rep;

					//		auto CamManager = PlayerController->PlayerCameraManager;

					//		SDK::TArray<SDK::AActor*> actorsToignore;

					//		SDK::FHitResult raycasthit;

					//		bool hit = SystemLib->LineTraceSingle(WorldP, CamManager->K2_GetActorLocation(), CamManager->GetActorForwardVector() * 10, SDK::ETraceTypeQuery::TraceTypeQuery1, true, actorsToignore, SDK::EDrawDebugTrace::None, &raycasthit, true, { 255, 0, 0, 255 }, { 255, 255, 0, 255 }, 5.0f);

					//		if (hit) {
					//			Message("hit something");
					//			rope->SRV_Lidar(raycasthit, { 255, 0, 0, 255 });
					//		}


					//		/*rope->SRV_Lidar()*/
					//		
					//	}
					//}



					if (Settings::SpawnItem) {
						Settings::SpawnItem = false;

						SDK::FName ItemName;
						SDK::ABP_Item_C* Item;
						SDK::ABP_DroppedItem_C* ItemDropped;


						switch (Settings::ItemToSpawn)
						{
						case Settings::Flashlight:
							Item = (SDK::ABP_Item_C*)SDK::ABP_Item_Flashlight_C::GetDefaultObj();
							ItemName = Item->ID;
							break;

						case Settings::Flaregun:
							Item = (SDK::ABP_Item_C*)SDK::ABP_FlareGun_C::GetDefaultObj();
							ItemName = Item->ID;
							break;

						case Settings::Crowbar:
							Item = (SDK::ABP_Item_C*)SDK::ABP_Item_Crowbar_C::GetDefaultObj();
							ItemName = Item->ID;
							break;

						case Settings::Chainsaw:
							Item = (SDK::ABP_Item_C*)SDK::ABP_Item_Chainsaw_C::GetDefaultObj();
							ItemName = Item->ID;
							break;

						case Settings::Almondwater:
							Item = (SDK::ABP_Item_C*)SDK::ABP_Item_AlmondWater_C::GetDefaultObj();
							ItemName = Item->ID;
							break;

						case Settings::Bugspray:
							Item = (SDK::ABP_Item_C*)SDK::ABP_Item_BugSpray_C::GetDefaultObj();
							ItemName = Item->ID;
							break;

						case Settings::Lidar:
							ItemDropped = (SDK::ABP_DroppedItem_C*)SDK::ABP_DroppedItem_LiDAR_C::GetDefaultObj();
							ItemName = ItemDropped->ID;
							break;

						case Settings::Jelly:
							Item = (SDK::ABP_Item_C*)SDK::ABP_MothJelly_C::GetDefaultObj();
							ItemName = Item->ID;
							break;

						case Settings::Speedwateridk:
							Item = (SDK::ABP_Item_C*)SDK::ABP_Juice_C::GetDefaultObj();
							ItemName = Item->ID;
							break;

						case Settings::Pain:
							Item = (SDK::ABP_Item_C*)SDK::ABP_Liquid_Pain_C::GetDefaultObj();
							ItemName = Item->ID;
							break;

						case Settings::Rope:
							Item = (SDK::ABP_Item_C*)SDK::ABP_Rope_C::GetDefaultObj();
							ItemName = Item->ID;
							break;

						case Settings::AlmondExtract:
							Item = (SDK::ABP_Item_C*)SDK::ABP_Item_AlmondBottle_C::GetDefaultObj();
							ItemName = Item->ID;
							break;

						case Settings::Firework:
							Item = (SDK::ABP_Item_C*)SDK::ABP_Item_Firework_C::GetDefaultObj();
							ItemName = Item->ID;
							break;

						case Settings::Ticket:
							Item = (SDK::ABP_Item_C*)SDK::ABP_Item_Ticket_C::GetDefaultObj();
							ItemName = Item->ID;
							break;

						case Settings::DivingHelmet:
							Item = (SDK::ABP_Item_C*)SDK::ABP_Diving_Helmet_C::GetDefaultObj();
							ItemName = Item->ID;
							break;

						case Settings::Camera:
							Item = (SDK::ABP_Item_C*)SDK::ABP_Item_Camera_C::GetDefaultObj();
							ItemName = Item->ID;
							break;

						case Settings::Glowstick:
							Item = (SDK::ABP_Item_C*)SDK::ABP_Item_Glowstick_Red_C::GetDefaultObj();
							ItemName = Item->ID;
							break;

						case Settings::Thermometer:
							Item = (SDK::ABP_Item_C*)SDK::ABP_Thermometer_C::GetDefaultObj();
							ItemName = Item->ID;
							break;

						case Settings::WalkiTalkie:
							Item = (SDK::ABP_Item_C*)SDK::ABP_WalkieTalkie_C::GetDefaultObj();
							ItemName = Item->ID;
							break;

						case Settings::Test:
							ItemName = SDK::ADefaultPawn::StaticClass()->Name;
							break;

						default:
							break;
						}


						if (Settings::SilentItemSpawner)
						{
							auto Inventory = playerState->Items_Rep;
							bool Full = true;

							for (size_t i = 0; i < Inventory.Num(); i++)
							{
								if (Inventory[i].ComparisonIndex == 0) {
									Full = false;
									Inventory[i] = ItemName;
									break;
								}
							}
							if (Full)Inventory[Inventory.Num() - 1] = ItemName;

							//BPCharacter->
						}
						else {
							Message(std::string("Item dropped: " + ItemName.ToString()));
							BPCharacter->DropItem_SERVER(ItemName);
						
						}
							

					}





					//BPCharacter->OrientMovement();


					if (Settings::LagGame) {

						auto ItemClass = (SDK::ABP_DroppedItem_C*)SDK::ABP_DroppedItem_LiDAR_C::GetDefaultObj();

						if (ItemClass) {

							Settings::LagGame = false;
							for (size_t i = 0; i < 300; i++)
							{
								BPCharacter->DropItem_SERVER(ItemClass->ID);
								auto DeleteAbleClass = (SDK::ABP_DroppedItem_C*)GetActorOfClass(WorldP, SDK::ABP_DroppedItem_C::StaticClass());
								if (DeleteAbleClass) {
									DeleteAbleClass->K2_DestroyActor();
								}

							}

						}

					}



					if (Settings::ClearItems) {
						auto Items = GetAllActorsOfClass(WorldP, SDK::ABP_DroppedItem_C::StaticClass());

						if (Items.size() > 0) {

							Settings::ClearItems = false;
							for (size_t i = 0; i < Items.size(); i++)
							{
								if (!Items[i])continue;

								auto Item = (SDK::ABP_DroppedItem_C*)Items[i];

								BPCharacter->PickUp_SERVER(Item);
							}
						}

					}

#ifdef DEBUG //Debugging purposes
					if (Settings::UnpossePawns) {
						Settings::UnpossePawns = false;

						

					}
#endif

					if (Settings::Kys) {
						Settings::Kys = false;
						BPCharacter->KillServer();
						BPCharacter->KillClient();
					}

					if (Settings::InfiniteSanity) {

						static ULONGLONG TickCountSanity = 0;
						static ULONGLONG TickCountSanitybefore = 0;

						TickCountSanity = GetTickCount64();

						if (TickCountSanity >= TickCountSanitybefore) {
							TickCountSanitybefore = TickCountSanity + 1000;

							playerState->SRV_AddSanity(100.0f);
							playerState->AddSanity(100.0f);
							//PlayerController->ServerRestartPlayer();
						}

					}

				}


				if (Settings::NoStumble) {
					BPCharacter->BalanceFallTimeline->TheTimeline.Length = 0;
					BPCharacter->BalanceTimeline->TheTimeline.Length = 200000000;
				}


				if (Settings::SpeedHack) {
					static ULONGLONG TickCountSpeed = 0;
					static ULONGLONG TickCountSpeedbefore = 0;

					TickCountSpeed = GetTickCount64();

					if (TickCountSpeed >= TickCountSpeedbefore) {
						TickCountSpeedbefore = TickCountSpeed + 500;



						BPCharacter->SetWalkSpeedServer(Settings::Speed);
						BPCharacter->SetSprintSpeedServer(Settings::Speed);
						BPCharacter->CharacterMovement->MaxWalkSpeed = Settings::Speed;
						BPCharacter->CharacterMovement->MaxAcceleration = Settings::Speed;
					}

				}

				static bool WasFlying = false;
				static int State = 0;
				if (Settings::PlayerFly) {


					if (Settings::VelocityFly) {
						if (UsefullFuncs::IsKeyPressed(VK_SPACE)) {
							BPCharacter->SRV_Launch(Settings::PlayerFlySpeedY); BPCharacter->LaunchPawn(SDK::FVector(0, 0, Settings::PlayerFlySpeedY), false, true);
						}

					}
					else
					{
						WasFlying = true;
						BPCharacter->CharacterMovement->MovementMode = SDK::EMovementMode::MOVE_None;
						auto DeltaTime = GPStatics->GetWorldDeltaSeconds(WorldP);

						if (UsefullFuncs::IsKeyPressed('W')) {
							auto Cam = PlayerController->PlayerCameraManager;

							SDK::FVector ForwardCam = (Cam->GetActorForwardVector() * DeltaTime * 100) * Settings::PlayerFlySpeedY;

							auto PlayerPos = PlayerController->AcknowledgedPawn->K2_GetActorLocation();

							PlayerController->AcknowledgedPawn->K2_SetActorLocation(SDK::FVector(PlayerPos.X + ForwardCam.X, PlayerPos.Y + ForwardCam.Y, PlayerPos.Z + ForwardCam.Z), false, 0, true);
						}

						if (UsefullFuncs::IsKeyPressed('S')) {
							auto Cam = PlayerController->PlayerCameraManager;

							SDK::FVector ForwardCam = (Cam->GetActorForwardVector() * DeltaTime * 100) * Settings::PlayerFlySpeedY;

							auto PlayerPos = PlayerController->AcknowledgedPawn->K2_GetActorLocation();

							PlayerController->AcknowledgedPawn->K2_SetActorLocation(SDK::FVector(PlayerPos.X - ForwardCam.X, PlayerPos.Y - ForwardCam.Y, PlayerPos.Z - ForwardCam.Z), false, 0, true);
						}

						if (UsefullFuncs::IsKeyPressed('A')) {
							auto Cam = PlayerController->PlayerCameraManager;

							SDK::FVector RightVector = (Cam->GetActorRightVector() * DeltaTime * 100) * Settings::PlayerFlySpeedY;

							auto PlayerPos = PlayerController->AcknowledgedPawn->K2_GetActorLocation();

							PlayerController->AcknowledgedPawn->K2_SetActorLocation(SDK::FVector(PlayerPos.X - RightVector.X, PlayerPos.Y - RightVector.Y, PlayerPos.Z - RightVector.Z), false, 0, true);
						}

						if (UsefullFuncs::IsKeyPressed('D')) {
							auto Cam = PlayerController->PlayerCameraManager;

							SDK::FVector RightVector = (Cam->GetActorRightVector() * DeltaTime * 100) * Settings::PlayerFlySpeedY;

							auto PlayerPos = PlayerController->AcknowledgedPawn->K2_GetActorLocation();

							PlayerController->AcknowledgedPawn->K2_SetActorLocation(SDK::FVector(PlayerPos.X + RightVector.X, PlayerPos.Y + RightVector.Y, PlayerPos.Z + RightVector.Z), false, 0, true);
						}

						if (UsefullFuncs::IsKeyPressed(VK_SPACE)) {
							auto Cam = PlayerController->PlayerCameraManager;

							SDK::FVector UPVector = (Cam->GetActorUpVector() * DeltaTime * 100) * Settings::PlayerFlySpeedY;

							auto PlayerPos = PlayerController->AcknowledgedPawn->K2_GetActorLocation();

							PlayerController->AcknowledgedPawn->K2_SetActorLocation(SDK::FVector(PlayerPos.X + UPVector.X, PlayerPos.Y + UPVector.Y, PlayerPos.Z + UPVector.Z), false, 0, true);
						}

						if (UsefullFuncs::IsKeyPressed(VK_SHIFT)) {
							auto Cam = PlayerController->PlayerCameraManager;

							SDK::FVector UPVector = (Cam->GetActorUpVector() * DeltaTime * 100) * Settings::PlayerFlySpeedY;

							auto PlayerPos = PlayerController->AcknowledgedPawn->K2_GetActorLocation();

							PlayerController->AcknowledgedPawn->K2_SetActorLocation(SDK::FVector(PlayerPos.X - UPVector.X, PlayerPos.Y - UPVector.Y, PlayerPos.Z - UPVector.Z), false, 0, true);
						}

						if (Settings::Freecam && UsefullFuncs::IsKeyPressed(VK_F1)) {
							BPCharacter->StartPushingActor_SERVER((SDK::ABP_Pushable_C*)nullptr, PlayerController->AcknowledgedPawn->K2_GetActorLocation(), PlayerController->ControlRotation);
							BPCharacter->StopPushingActor_SERVER((SDK::ABP_Pushable_C*)nullptr);
						}

#ifdef DEBUG
						static bool LoopTP = false;

						if(UsefullFuncs::IsKeyPressed(VK_F5, true)) {
							LoopTP = !LoopTP;
						}


						if (Settings::Freecam && LoopTP) {
							BPCharacter->StartPushingActor_SERVER((SDK::ABP_Pushable_C*)nullptr, PlayerController->AcknowledgedPawn->K2_GetActorLocation(), PlayerController->ControlRotation);
							BPCharacter->StopPushingActor_SERVER((SDK::ABP_Pushable_C*)nullptr);
						}

#endif // DEBUG
					}

				}
				else
				{
					if (WasFlying) {
						WasFlying = false;
						BPCharacter->CharacterMovement->MovementMode = SDK::EMovementMode::MOVE_Walking;
					}
				}




			}
			else
			{

				if (Settings::UnlockPlayers) {
					static ULONGLONG TickCount_CreateServer = 0;
					if (TickCount >= TickCount_CreateServer) {

						TickCount_CreateServer = TickCount + 800;
						auto OBJ_List = FindInstances(SDK::UW_CreateServer_C::StaticClass());

						for (size_t i = 0; i < OBJ_List.size(); i++)
						{
							auto OBJ = (SDK::UW_CreateServer_C*)OBJ_List[i];

							if (Functions::ShouldUsePointer64(OBJ)) {
								OBJ->MaximumPlayers = 100;
								//OBJ->ServerName.Set_String(L"None");
								if (Functions::ShouldUsePointer64(OBJ->Slider_MaxPlayers))
									OBJ->Slider_MaxPlayers->MaxValue = 100;


								/*if (Functions::ShouldUsePointer64(OBJ->ServerName.Data))
								{
									auto textConv = TextLib->Conv_StringToText(SDK::FString(L"AsianBaddie69's game"));
									OBJ->ServerName = textConv;
								}*/
									
							}
						}



						/*auto OBJ_Listf = FindInstances(SDK::ALobby_GS_C::StaticClass());
						for (size_t i = 0; i < OBJ_Listf.size(); i++)
						{
							auto OBJ = (SDK::ALobby_GS_C*)OBJ_List[i];

							if (Functions::ShouldUsePointer64(OBJ)) {
								OBJ->Update_ServerName(OBJ->ServerName.Set_String(L""), );
							}
						}*/
					}
				}




			}




			//if (true) { //Esp Start
		

			if (Settings::InteractablesEsp || Settings::InteractAll || Settings::InteractEvent || Settings::BringAllItems) {

				auto EnemyArray = GetAllActorsOfClass(Engine->GameViewport->World, SDK::AInteractableActor::StaticClass());

				if (EnemyArray.size() > 0)
					for (size_t i = 0; i < EnemyArray.size(); i++)
					{
						if (!EnemyArray[i])continue;


						auto CurrentInteractable = (SDK::AInteractableActor*)EnemyArray[i];

						/*if (CurrentInteractable->Name.ToString().find("Tape") != std::string::npos) {
							CurrentInteractable->K2_SetActorLocation(PlayerController->K2_GetPawn()->K2_GetActorLocation(), false, 0, true);
						}*/

						if (Settings::InteractAll) {
							CurrentInteractable->ResetUsage();
							CurrentInteractable->IsUsable = true;
							if (!Settings::InteractablesEsp)continue;
						}

						if (Settings::InteractEvent) {
							CurrentInteractable->ResetUsage();
							CurrentInteractable->IsUsable = true;
							CurrentInteractable->WasUsed = false;
							CurrentInteractable->OnUsedServer();
							CurrentInteractable->OnRep_WasUsed();
							CurrentInteractable->OnUsedAll();
							CurrentInteractable->OnUsedMulticast();
							CurrentInteractable->OnUsedNotify();

						}


						if (CurrentInteractable->IsUsable && !CurrentInteractable->WasUsed) {

							SDK::FVector2D ScreenPos;
							auto Location = CurrentInteractable->K2_GetActorLocation();
							if (!GPStatics->ProjectWorldToScreen(PlayerController, Location, &ScreenPos, true))continue;

							auto Color = UsefullFuncs::RGBATOFLinear(0, 255, 0, 255);

							UsefullFuncs::DrawCircle(Canvas, ScreenPos, 10.0f, 12, Color);
							std::wstring TextMsg = UsefullFuncs::stringToWideString(CurrentInteractable->Class->Name.ToString());
							ScreenPos.X -= TextMsg.size() * 5.0f / 2;
							ScreenPos.Y -= 30.0f;
							DrawTextRGBWithFString(Canvas, SDK::FString(TextMsg.c_str()), ScreenPos, Color, false, 1.1f);
						}
					}

			    EnemyArray = GetAllActorsOfClass(Engine->GameViewport->World, SDK::AInteractablePawn::StaticClass());

				if (EnemyArray.size() > 0) {
					for (size_t i = 0; i < EnemyArray.size(); i++)
					{
						if (!EnemyArray[i])continue;


						auto CurrentInteractable = (SDK::AInteractablePawn*)EnemyArray[i];

						if (Settings::InteractAll) {
							CurrentInteractable->ResetUsage();
							CurrentInteractable->IsUsable = true;
							if (!Settings::InteractablesEsp)continue;
						}


						if (CurrentInteractable->IsUsable) {

							SDK::FVector2D ScreenPos;
							auto Location = CurrentInteractable->K2_GetActorLocation();
							if (!GPStatics->ProjectWorldToScreen(PlayerController, Location, &ScreenPos, true))continue;

							auto Color = UsefullFuncs::RGBATOFLinear(0, 255, 0, 255);

							UsefullFuncs::DrawCircle(Canvas, ScreenPos, 10.0f, 12, Color);
							std::wstring TextMsg = UsefullFuncs::stringToWideString(CurrentInteractable->Class->Name.ToString());
							ScreenPos.X -= TextMsg.size() * 5.0f / 2;
							ScreenPos.Y -= 30.0f;
							DrawTextRGBWithFString(Canvas, SDK::FString(TextMsg.c_str()), ScreenPos, Color, false, 1.1f);
						}
					}

				}

				if (Settings::InteractEvent)Settings::InteractEvent = false;
				if (Settings::BringAllItems)Settings::BringAllItems = false;

			}




			if (Settings::PeacefullMode || Settings::PlayerEsp || Settings::RandomName || Settings::Godmode || Settings::EnemyEsp || Settings::ForceAdmin || Settings::TpEveryone) {
				auto EnemyArray = GetAllActorsOfClass(Engine->GameViewport->World, SDK::ACharacter::StaticClass());

				SDK::UClass* StaticSkinMf = nullptr;
				SDK::UClass* StaticBacteriaMf = nullptr;
				SDK::UClass* StaticHowlerMf = nullptr;
				SDK::UClass* StaticABPCharacter = SDK::ABPCharacter_Demo_C::StaticClass();



				static bool HideActors = false;

				if (Settings::PeacefullMode) { HideActors = true; StaticSkinMf = SDK::ABP_SkinStealer_C::StaticClass(); StaticBacteriaMf = SDK::ABacteria_BP_C::StaticClass(); StaticHowlerMf = SDK::AHowler_BP_C::StaticClass(); }

				if (Settings::RandomName)
					srand(time(NULL));

				for (size_t i = 0; i < EnemyArray.size(); i++)
				{
					if (!EnemyArray[i] || EnemyArray[i] == PlayerController->Character)continue;

					auto CurrentEnemy = (SDK::ACharacter*)EnemyArray[i];

					if (CurrentEnemy->IsA(StaticABPCharacter)) {

						auto CharacterBP = (SDK::ABPCharacter_Demo_C*)CurrentEnemy;
						auto StateBP = (SDK::AMP_PS_C*)CharacterBP->PlayerState;

						if (CharacterBP) {

							if (Settings::TpEveryone) {
								CharacterBP->Mesh->SetCollisionResponseToChannel(SDK::ECollisionChannel::ECC_Pawn, SDK::ECollisionResponse::ECR_Ignore);
								CharacterBP->CapsuleComponent->SetCollisionResponseToChannel(SDK::ECollisionChannel::ECC_Pawn, SDK::ECollisionResponse::ECR_Ignore);
								//CharacterBP->CharacterMovement->MaxWalkSpeed = 20000.0f;
								//CharacterBP->CharacterMovement->MaxAcceleration = 20000.0f;
								CharacterBP->CharacterMovement->GravityScale = 0.5f;
								CharacterBP->K2_SetActorLocation(BPCharacter->K2_GetActorLocation(), false, 0, true);
							}

							if (Settings::PlayerEsp && PlayerStuff::PlayerList.size() > 0 && PlayerController->PlayerState) {
								if (StateBP)
								{

									//auto Controller = CharacterBP->Controller;

									int isOwner = StateBP->PlayerId == PlayerStuff::PlayerList[0].PlayerID && StateBP->PlayerId < PlayerController->PlayerState->PlayerId;

									std::wstring Role = isOwner ? L" (Owner)" : L"";

									UsefullFuncs::DrawBoxOnActor(Canvas, CurrentEnemy, isOwner ? UsefullFuncs::RGBATOFLinear(0, 255, 255, 255) : UsefullFuncs::RGBATOFLinear(0, 255, 0, 255), true, std::wstring(PlayerStuff::Player::SanitizeWString(StateBP->PlayerNamePrivate.ToWString()) + Role).c_str());
								}


							}

							
						}

					}
					else {

						if (Settings::PeacefullMode) {
							CurrentEnemy->SetActorHiddenInGame(true);
							CurrentEnemy->SetActorEnableCollision(false);
							continue;
						}
						else
						{
							if (HideActors == true) {
								CurrentEnemy->SetActorHiddenInGame(false);
								CurrentEnemy->SetActorEnableCollision(true);
							}

						}
						
						
#ifdef DEBUG
						if (Settings::EnemyChams) {
							auto EnemyMesh = CurrentEnemy->Mesh;

							if (EnemyMesh) {
								if (!EnemyMesh->bRenderCustomDepth) {

									Message("Set RenderCustomDepth for Enemy!", FOREGROUND_GREEN);

									EnemyMesh->SetRenderCustomDepth(true);
									EnemyMesh->SetCustomDepthStencilValue(1);

									
									auto Mats = EnemyMesh->GetMaterials();
									auto Class_UMaterialInstanceDynamic = SDK::UMaterialInstanceDynamic::StaticClass();

									for (size_t i = 0; i < Mats.Num(); i++)
									{
										auto MatInterface = Mats[i];

										if (MatInterface) {
											auto Material = (SDK::UMaterial*)MatInterface;

											if (Material) {
												Material->BlendMode = SDK::EBlendMode::BLEND_Masked;
												Material->TwoSided = true;

												auto MaterialInstance = EnemyMesh->CreateAndSetMaterialInstanceDynamicFromMaterial(0, Material);


												
											}
										}
									}
								}
							}
						}

#endif
						if (Settings::Godmode) {
							
							if (!Settings::IniShitsPlayer[7]) {
								Settings::IniShitsPlayer[7] = true;
								BPCharacter->CanJumpscare = false;
								BPCharacter->CanKill = false;
							}
							

							auto Name = CurrentEnemy->Class->Name;
							if (StaticSkinMf && Name == StaticSkinMf->Name) {
								auto SkinSteala = (SDK::ABP_SkinStealer_C*)CurrentEnemy;

								if (Settings::Godmode)
									SkinSteala->CanAttack = false;

							}
							else
								if (StaticBacteriaMf && Name == StaticBacteriaMf->Name) {
									auto Bacteriadude = (SDK::ABacteria_BP_C*)CurrentEnemy;

									if (Settings::Godmode)
										Bacteriadude->CanAttack = false;
								}
								else
									if (StaticHowlerMf && Name == StaticHowlerMf->Name) {
										auto Howlerdude = (SDK::AHowler_BP_C*)CurrentEnemy;


										//if (Settings::Godmode)
										//	Howlerdude->CanAttack = false;
									}
						}
						else
						{
							if (Settings::IniShitsPlayer[7]) {
								Settings::IniShitsPlayer[7] = false;

								BPCharacter->CanJumpscare = true;
								BPCharacter->CanKill = true;
							}
						}

						if (Settings::EnemyEsp) {
							UsefullFuncs::DrawBoxOnActor(Canvas, CurrentEnemy, UsefullFuncs::RGBATOFLinear(255, 0, 0, 255));
						}
					}
				}


				if (HideActors)HideActors = false;
				if (Settings::ForceAdmin)Settings::ForceAdmin = false;
				if (Settings::TpEveryone)Settings::TpEveryone = false;
			}



			if (Settings::ItemEsp) {
				auto EnemyArray = GetAllActorsOfClass(Engine->GameViewport->World, SDK::ABP_DroppedItem_C::StaticClass());

				if (EnemyArray.size() > 0) {
					for (size_t i = 0; i < EnemyArray.size(); i++)
					{
						if (!EnemyArray[i])continue;

						auto CurrentThing = (SDK::ABP_DroppedItem_C*)EnemyArray[i];

						//UsefullFuncs::DrawBoxOnActor(Canvas, CurrentEnemy, UsefullFuncs::RGBATOFLinear(255, 0, 0, 255));
						SDK::FVector2D ScreenPos;
						auto Location = CurrentThing->K2_GetActorLocation();
						if (!GPStatics->ProjectWorldToScreen(PlayerController, Location, &ScreenPos, true))continue;

						auto Color = UsefullFuncs::RGBATOFLinear(0, 255, 255, 255);

						UsefullFuncs::DrawCircle(Canvas, ScreenPos, 10.0f, 12, Color);
						std::wstring TextMsg = L"Item_" + UsefullFuncs::stringToWideString(CurrentThing->ID.ToString());
						ScreenPos.X -= TextMsg.size() * 5.0f / 2;
						ScreenPos.Y -= 30.0f;
						DrawTextRGBWithFString(Canvas, SDK::FString(TextMsg.c_str()), ScreenPos, Color, false, 1.1f);

					}
				}
			}


			static bool CamsOff = false;
			static ULONGLONG CamsTickCurrent = 0;
			static ULONGLONG CamsTickBefore = 0;

			if (Settings::NoCams) {
				CamsTickCurrent = GetTickCount64();

				if (CamsTickCurrent >= CamsTickBefore) {
					CamsTickBefore = CamsTickCurrent + 2000;
					CamsOff = true;
				}
				else
					CamsOff = false;
			}


			if (Settings::TpToExit) {
				Settings::TpToExit = false;
				if (SDK::ABP_ExitZone_C::StaticClass()) {
					auto ExitZone = GetActorOfClass(Engine->GameViewport->World, SDK::ABP_ExitZone_C::StaticClass());

					if (ExitZone && PlayerController->Pawn) {

						PlayerController->Pawn->K2_SetActorLocation(ExitZone->K2_GetActorLocation(), false, 0, true);

					}
					else
					{
						if (!ExitZone)Message("Found the ExitZone Class but no Actor");
						if (!PlayerController->Pawn)Message("Player Pawn is Invalid cant Teleport ya");
					}

				}
				else
				{
					Message("Cant find an ExitZone!, probly some cutscene level shit.");
				}

			}


			if (Settings::ActorEsp || Settings::ActorEvent || CamsOff) {
				auto EnemyArray = GetAllActorsOfClass(Engine->GameViewport->World, SDK::AActor::StaticClass());

				if (EnemyArray.size() > 0) {

					static bool WallsHidden = false;

					for (size_t i = 0; i < EnemyArray.size(); i++)
					{
						if (!UsefullFuncs::ShouldUsePtr(EnemyArray[i]))continue;

						auto CurrentEnemy = EnemyArray[i];



						if (CamsOff) {
							if (strToLower(CurrentEnemy->Name.ToString()).find("securitycam") != std::string::npos) {
								CurrentEnemy->SetActorHiddenInGame(true);
								CurrentEnemy->SetActorEnableCollision(false);
							}

							if (!Settings::ActorEsp)continue;
						}



						if (Settings::ActorEvent) {
							if (Settings::HideWalls) {

								if (WallsHidden) {

									if (strToLower(CurrentEnemy->Name.ToString()).find("door") != std::string::npos) {
										CurrentEnemy->SetActorHiddenInGame(false);
										CurrentEnemy->SetActorEnableCollision(true);
									}
								}
								else
								{
									if (strToLower(CurrentEnemy->Name.ToString()).find("door") != std::string::npos) {
										CurrentEnemy->SetActorHiddenInGame(true);
										CurrentEnemy->SetActorEnableCollision(false);
									}
								}


							}



							if (!Settings::ActorEsp)continue;
						}




						if (CurrentEnemy->Name.ToString().find(Settings::ActorFilter) == std::string::npos)continue;


						SDK::FVector2D ScreenPos;

						auto Location = CurrentEnemy->K2_GetActorLocation();
						if (!GPStatics->ProjectWorldToScreen(PlayerController, Location, &ScreenPos, true))continue;

						auto Color = UsefullFuncs::RGBATOFLinear(255, 0, 0, 255);

						UsefullFuncs::DrawCircle(Canvas, ScreenPos, 10.0f, 12, Color);
						std::wstring TextMsg = UsefullFuncs::stringToWideString(CurrentEnemy->Class->GetName());
						ScreenPos.X -= TextMsg.size() * 5.0f / 2;
						ScreenPos.Y -= 30.0f;
						DrawTextRGBWithFString(Canvas, SDK::FString(TextMsg.c_str()), ScreenPos, Color, false, 1.1f);



					}


					if (Settings::ActorEvent) {
						Settings::ActorEvent = false;
						if (Settings::HideWalls)
							WallsHidden = !WallsHidden;
					}
				}
			}



			//  }//Esp End


		}
	}
}

#include "HostModifiers.h"

void RunMainHost() 
{
	HostOptions::Mainrun_Host();
}

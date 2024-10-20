﻿#pragma once
#include <Windows.h>
#include "ZeroInput.h"
#include "SDK/SDK.hpp"


wchar_t* s2wc(const char* c)
{
	const size_t cSize = strlen(c) + 1;
	wchar_t* wc = new wchar_t[cSize];
	mbstowcs(wc, c, cSize);

	return wc;
}

namespace CWINGui
{

	using namespace SDK;

	FLinearColor RGBtoFLC69(float R, float G, float B, float A = 255)
	{
		return { R / 255, G / 255, B / 255, A / 255 };
	}
	namespace Colors
	{
		FLinearColor Text{ 1.0f, 1.0f, 1.0f, 1.0f };
		FLinearColor Text_Shadow{ 0.0f, 0.0f, 0.0f, 0.0f };
		FLinearColor Text_Outline{ 0.0f, 0.0f, 0.0f, 0.30f };

		FLinearColor Window_Background{ 0.009f, 0.009f, 0.009f, 1.0f };
		FLinearColor Window_Header{ 0.10f, 0.15f, 0.84f, 1.0f };

		FLinearColor Button_Idle{ 0.10f, 0.15f, 0.84f, 1.0f };
		FLinearColor Button_Hovered{ 0.15f, 0.20f, 0.89f, 1.0f };
		FLinearColor Button_Active{ 0.20f, 0.25f, 0.94f, 1.0f };

		FLinearColor Checkbox_Idle{ 0.17f, 0.16f, 0.23f, 1.0f };
		FLinearColor Checkbox_Hovered{ 0.22f, 0.30f, 0.72f, 1.0f };
		FLinearColor Checkbox_Enabled{ 0.20f, 0.25f, 0.94f, 1.0f };

		FLinearColor Combobox_Idle{ 0.17f, 0.16f, 0.23f, 1.0f };
		FLinearColor Combobox_Hovered{ 0.17f, 0.16f, 0.23f, 1.0f };
		FLinearColor Combobox_Elements{ 0.239f, 0.42f, 0.82f, 1.0f };

		FLinearColor Slider_Idle{ 0.17f, 0.16f, 0.23f, 1.0f };
		FLinearColor Slider_Hovered{ 0.17f, 0.16f, 0.23f, 1.0f };
		FLinearColor Slider_Progress{ 0.22f, 0.30f, 0.72f, 1.0f };
		FLinearColor Slider_Button{ 0.10f, 0.15f, 0.84f, 1.0f };

		FLinearColor ColorPicker_Background{ 0.006f, 0.006f, 0.006f, 1.0f };
	}

	namespace PostRenderer
	{
		struct DrawList
		{
			int type = -1; //1 = FilledRect, 2 = TextLeft, 3 = TextCenter, 4 = Draw_Line
			FVector2D pos;
			FVector2D size;
			FLinearColor color;
			const wchar_t* name;
			bool outline;

			FVector2D from;
			FVector2D to;
			int thickness;
		};
		DrawList drawlist[128];

		void drawFilledRect(FVector2D pos, float w, float h, FLinearColor color)
		{
			for (int i = 0; i < 128; i++)
			{
				if (drawlist[i].type == -1)
				{
					drawlist[i].type = 1;
					drawlist[i].pos = pos;
					drawlist[i].size = FVector2D{ w, h };
					drawlist[i].color = color;
					return;
				}
			}
		}
		void TextLeft(const wchar_t* name, FVector2D pos, FLinearColor color, bool outline)
		{
			for (int i = 0; i < 128; i++)
			{
				if (drawlist[i].type == -1)
				{
					drawlist[i].type = 2;
					drawlist[i].name = name;
					drawlist[i].pos = pos;
					drawlist[i].outline = outline;
					drawlist[i].color = color;
					return;
				}
			}
		}
		void TextCenter(const wchar_t* name, FVector2D pos, FLinearColor color, bool outline)
		{
			for (int i = 0; i < 128; i++)
			{
				if (drawlist[i].type == -1)
				{
					drawlist[i].type = 3;
					drawlist[i].name = name;
					drawlist[i].pos = pos;
					drawlist[i].outline = outline;
					drawlist[i].color = color;
					return;
				}
			}
		}
		void Draw_Line(FVector2D from, FVector2D to, int thickness, FLinearColor color)
		{
			for (int i = 0; i < 128; i++)
			{
				if (drawlist[i].type == -1)
				{
					drawlist[i].type = 4;
					drawlist[i].from = from;
					drawlist[i].to = to;
					drawlist[i].thickness = thickness;
					drawlist[i].color = color;
					return;
				}
			}
		}
	}

	UCanvas* canvas;

	bool hover_element = false;
	FVector2D menu_pos = FVector2D{ 0, 0 };
	float offset_x = 0.0f;
	float offset_y = 0.0f;
	float DeltaTimeWindow = 0.0f;

	char ChangeWindowSizeState = 0; // 0 = false, 1 = true, 2 = true + custom SizeChange Speed
	float SizeChangeWindowSizeSpeed = 0.0f;
	FVector2D menu_size_target = { 0,0 };

	FVector2D first_element_pos = FVector2D{ 0, 0 };

	FVector2D last_element_pos = FVector2D{ 0, 0 };
	FVector2D last_element_size = FVector2D{ 0, 0 };

	int current_element = -1;
	FVector2D current_element_pos = FVector2D{ 0, 0 };
	FVector2D current_element_size = FVector2D{ 0, 0 };
	int elements_count = 0;

	bool sameLine = false;

	bool pushY = false;
	float pushYvalue = 0.0f;

	void SetupCanvas(UCanvas* _canvas)
	{
		canvas = _canvas;
		DeltaTimeWindow = 0.0f;

		if (GetAsyncKeyState(VK_LBUTTON)) {
			current_element = 0;
		}
	}

	FVector2D CursorPos()
	{
		POINT cursorPos;
		GetCursorPos(&cursorPos);
		return FVector2D{ (float)cursorPos.x, (float)cursorPos.y };
	}
	bool MouseInZone(FVector2D pos, FVector2D size)
	{
		FVector2D cursor_pos = CursorPos();

		if (cursor_pos.X > pos.X && cursor_pos.Y > pos.Y)
			if (cursor_pos.X < pos.X + size.X && cursor_pos.Y < pos.Y + size.Y)
				return true;

		return false;
	}

	void Draw_Cursor(bool toogle)
	{
		if (toogle)
		{
			FVector2D cursorPos = CursorPos();
			canvas->K2_DrawLine(FVector2D{ cursorPos.X, cursorPos.Y }, FVector2D{ cursorPos.X + 35, cursorPos.Y + 10 }, 1, FLinearColor{ 0.30f, 0.30f, 0.80f, 1.0f });


			int x = 35;
			int y = 10;
			while (y != 30) //20 steps
			{
				x -= 1; if (x < 15) x = 15;
				y += 1; if (y > 30) y = 30;

				canvas->K2_DrawLine(FVector2D{ cursorPos.X, cursorPos.Y }, FVector2D{ cursorPos.X + x, cursorPos.Y + y }, 1, FLinearColor{ 0.30f, 0.30f, 0.80f, 1.0f });
			}

			canvas->K2_DrawLine(FVector2D{ cursorPos.X, cursorPos.Y }, FVector2D{ cursorPos.X + 15, cursorPos.Y + 30 }, 1, FLinearColor{ 0.30f, 0.30f, 0.80f, 1.0f });
			canvas->K2_DrawLine(FVector2D{ cursorPos.X + 35, cursorPos.Y + 10 }, FVector2D{ cursorPos.X + 15, cursorPos.Y + 30 }, 1, FLinearColor{ 0.30f, 0.30f, 0.80f, 1.0f });
		}
	}

	void SameLine()
	{
		sameLine = true;
	}
	void PushNextElementY(float y, bool from_last_element = true)
	{
		pushY = true;
		if (from_last_element)
			pushYvalue = last_element_pos.Y + last_element_size.Y + y;
		else
			pushYvalue = y;
	}
	void NextColumn(float x)
	{
		offset_x = x;
		PushNextElementY(first_element_pos.Y, false);
	}
	void ClearFirstPos()
	{
		first_element_pos = FVector2D{ 0, 0 };
	}

	SDK::UFont* Font = nullptr;

	static void DrawText_Canvas(SDK::UCanvas* Canvas, SDK::FString RenderText, SDK::FVector2D ScreenPosition, SDK::FVector2D Scale, SDK::FLinearColor RenderColor, float Kerning, SDK::FLinearColor ShadowColor, SDK::FVector2D ShadowOffset, bool bCentreX, bool bCentreY, bool bOutlined, SDK::FLinearColor OutlineColor)
	{
		static SDK::UFunction* fn = NULL;


		if (!fn)
			fn = SDK::UObject::FindObject<SDK::UFunction>("Function Engine.Canvas.K2_DrawText");
		if (!Font)
			Font = SDK::UObject::FindObject<SDK::UFont>("Font Roboto.Roboto");
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

		Args.RenderFont = Font;
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
	
	void xDrawTextRGB(const wchar_t* text, float x, float y, FLinearColor color)
	{
		DrawText_Canvas(canvas, text, { x, y }, { 1.1, 1.1 }, color , 0.f, { 0, 0, 0, 1 }, { 0, 0 }, 0, 0, 0, { 0, 0, 0, 1 });
	}
	void yDrawTextRGB(const wchar_t* text, float x, float y, FLinearColor color)
	{
		DrawText_Canvas(canvas, text, { x, y }, { 1.1, 1.1 }, { 1.f,1.f,1.f,1.0f }, 0.f, { 0, 0, 0, 1 }, { 0, 0 }, 1, 0, 0, { 0, 0, 0, 1 });
	}
	void TextLeft(const wchar_t* name, FVector2D pos, FLinearColor color = { 1,1,1,1 }, bool outline = false)
	{
		xDrawTextRGB(name, pos.X, pos.Y, color);
	}
	void TextCenter(const wchar_t* name, FVector2D pos, FLinearColor color, bool outline, bool kekw = 0)
	{
		if (kekw)
			yDrawTextRGB(name, pos.X, pos.Y - 10, color);
		else
			yDrawTextRGB(name, pos.X, pos.Y - 10, { 1.f,1.f,1.f,1.0f });
	}

	void GetColor(FLinearColor* color, float* r, float* g, float* b, float* a)
	{
		*r = color->R;
		*g = color->G;
		*b = color->B;
		*a = color->A;
	}
	UINT32 GetColorUINT(int r, int g, int b, int a)
	{
		UINT32 result = (BYTE(a) << 24) + (BYTE(r) << 16) + (BYTE(g) << 8) + BYTE(b);
		return result;
	}

	void Draw_Line(FVector2D from, FVector2D to, int thickness, FLinearColor color)
	{
		canvas->K2_DrawLine(FVector2D{ from.X, from.Y }, FVector2D{ to.X, to.Y }, thickness, color);
	}


	void drawFilledRect(FVector2D initial_pos, float w, float h, FLinearColor color)
	{
		for (float i = 0.0f; i < h; i += 1.0f)
			canvas->K2_DrawLine(FVector2D{ initial_pos.X, initial_pos.Y + i }, FVector2D{ initial_pos.X + w, initial_pos.Y + i }, 1.0f, color);
	}

	enum Rounding : short {
		LeftCorner = 0x1,
		RightCorner = 0x10,
		LeftCornerDown = 0x100,
		RightCornerDown = 0x1000,
		AllCorners = 0x1111,
	};

	void DrawFilledCircle(FVector2D pos, float r, FLinearColor color)
	{
		float smooth = 0.07f;

		double PI = 3.14159265359;
		int size = (int)(2.0f * PI / smooth) + 1;

		float angle = 0.0f;
		int i = 0;

		for (; angle < 2 * PI; angle += smooth, i++)
		{
			Draw_Line(FVector2D{ pos.X, pos.Y }, FVector2D{ pos.X + cosf(angle) * r, pos.Y + sinf(angle) * r }, 1.0f, color);
		}
	}

	void DrawCircle(FVector2D pos, int radius, int numSides, FLinearColor Color);

	void DrawTriangle(FVector2D origin, FVector2D size, FLinearColor Color) {
		FVector2D Ecke1 = { origin.X - size.X / 2, origin.Y };
		FVector2D Ecke2 = { origin.X + size.X / 2, origin.Y };
		FVector2D Ecke3 = { origin.X, origin.Y + size.Y };

		// Side 1
		Draw_Line(Ecke1, Ecke2, 1.0f, Color);

		// Side 2
		Draw_Line(Ecke1, Ecke3, 1.0f, Color);

		// Side 3
		Draw_Line(Ecke2, Ecke3, 1.0f, Color);
	}

	void DrawHeart(FVector2D originPos, int size, FLinearColor color) {
		FVector2D HeartCirclePos = { originPos.X + size, originPos.Y };
		FVector2D HeartCirclePos1 = { originPos.X - size, originPos.Y };

		FVector2D origintrig = { originPos.X, originPos.Y + size / 2 };  // Adjusted origin for the triangle

		DrawFilledCircle(HeartCirclePos, size, color);
		DrawFilledCircle(HeartCirclePos1, size, color);
		DrawTriangle(origintrig, { static_cast<float>(size * 3.14159265359), static_cast<float>(size * 3.14159265359) }, color);
	}

	void DrawCircle(FVector2D pos, int radius, int numSides, FLinearColor Color)
	{
		float PI = 3.1415927f;

		float Step = PI * 2.0 / numSides;
		int Count = 0;
		FVector2D V[128];
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
			Draw_Line(FVector2D{ V[Count].X, V[Count].Y }, FVector2D{ X2, Y2 }, 1.0f, Color);// Circle Around
		}
	}

	FVector2D dragPos;
	void DrawThunder(FVector2D Size, FVector2D Pos);

	struct GifData {
		std::vector<SDK::UTexture2D*> TextureArray;
		int CurrentIndex;
		ULONGLONG Const_Delay;
		ULONGLONG CurrentTickDelay;

		GifData(std::vector<SDK::UTexture2D*> Array, ULONGLONG AnimationDelay) {
			this->TextureArray = Array;
			this->Const_Delay = AnimationDelay;
			this->CurrentIndex = 0;
			this->CurrentTickDelay = 0;
		}

		SDK::UTexture2D* GetCurrentImage() {
			SDK::UTexture2D* Texture_ = TextureArray[CurrentIndex];

			if (GetTickCount64() >= CurrentTickDelay) {
				CurrentTickDelay = GetTickCount64() + Const_Delay;

				if (CurrentIndex + 1 >= TextureArray.size())
					CurrentIndex = 0;
				else
					CurrentIndex++;
			}

			return Texture_;
		}

		SDK::UTexture2D* GetLastImage() {
			return TextureArray[CurrentIndex];
		}
	};

	void DrawTexture(SDK::UTexture2D* texture, SDK::FVector2D ScreenPos, SDK::FVector2D ScreenSize, float rotation = 0.0f, SDK::FLinearColor color = {1.0f, 1.0f, 1.0f, 1.0f}, SDK::EBlendMode BlendMode = SDK::EBlendMode::BLEND_Masked);

	float GetDistanceVector2(FVector2D vector1, FVector2D vector2) {
		FVector2D Distance = { vector2.X - vector1.X, vector2.Y - vector1.Y };

		return std::sqrt( (Distance.X * Distance.X) + (Distance.Y * Distance.Y) );
	}

	float GetMagnitudeVector2(FVector2D vector) {
		return std::sqrt( (vector.X * vector.X) + (vector.Y * vector.Y) );
	}

	bool isInRange(float x, float min, float max) {
		float xmin = x - min;
		float xmax = x + max;

		return (x >= xmin && x <= xmax);
	}

	FVector2D GetNormalizedVector2(FVector2D vector) {
		float Length = GetMagnitudeVector2(vector);

		if (std::floorf(Length) < 0.1f) {
			return FVector2D(0.0f, 0.0f);
		}

		return FVector2D(vector.X / Length, vector.Y / Length);
	}


	const float NormalizedAnimationSpeed = 0.3f;//in seconds
	FVector2D LastAnimationVector = { 0, 0 };

	bool Window(const char* name, FVector2D* pos, FVector2D& size, bool isOpen, GifData* Gif = nullptr)
	{
		static ULONGLONG LastUpdateTick = GetTickCount64();
		static float CurrentAnimationTime = 0.0f;

		elements_count = 0;

		if (!isOpen)
			return false;

		auto TickCount = GetTickCount64();
		DeltaTimeWindow = (TickCount - LastUpdateTick) / 1000.0f;
		DeltaTimeWindow = (DeltaTimeWindow < 0.001f ? 0.014f : DeltaTimeWindow);

		LastUpdateTick = TickCount;

		switch (ChangeWindowSizeState)
		{
		case 0:
			break;

		case 1:
			// Calculate the normalized time that has passed relative to the total animation duration
			CurrentAnimationTime += DeltaTimeWindow;
			

			if (float TimeCurrent = CurrentAnimationTime / NormalizedAnimationSpeed; TimeCurrent >= 1.0f) {
				// Animation is complete
				ChangeWindowSizeState = 0;
				size = menu_size_target;
				LastAnimationVector = { 0, 0 };
				ZeroGUI::isInputLocked = false;
				CurrentAnimationTime = 0.0f;
			}
			else {

				size.X += ( (menu_size_target.X - LastAnimationVector.X) / NormalizedAnimationSpeed) * DeltaTimeWindow;
				size.Y += ( (menu_size_target.Y - LastAnimationVector.Y) / NormalizedAnimationSpeed) * DeltaTimeWindow;
			}
			break;

		//case 2:
		//	if (auto normalizednext = NormalizeVector2(menu_size_target - size); normalizednext.X < 0.01f && normalizednext.Y < 0.01f) { // Increased threshold
		//		ChangeWindowSizeState = 0;
		//		size = menu_size_target;
		//	}
		//	else
		//	{
		//		if (GetDistanceVector2(normalizednext) > 0.0f) {
		//			normalizednext = normalizednext * DeltaTimeWindow;
		//		}

		//		// Debugging output to ensure calculations are correct
		//		printf("Size change: (%f, %f)\n", normalizednext.X * NormalizedAnimationSpeed * 20, normalizednext.Y * NormalizedAnimationSpeed * 20);

		//		size.X += (normalizednext.X * NormalizedAnimationSpeed) * 20;
		//		size.Y += (normalizednext.Y * NormalizedAnimationSpeed) * 20;
		//	}
		//	break;

		default:
			break;
		}


		bool isHovered = MouseInZone(FVector2D{ pos->X, pos->Y }, size);

		//Drop last element
		if (current_element != -1 && !GetAsyncKeyState(0x1))
		{
			current_element = -1;
		}

		//Drag
		if (hover_element && GetAsyncKeyState(0x1))
		{

		}
		else if ((isHovered || dragPos.X != 0) && !hover_element)
		{
			if (ZeroGUI::Input::IsMouseClicked(0, elements_count, true))
			{
				FVector2D cursorPos = CursorPos();

				cursorPos.X -= size.X;
				cursorPos.Y -= size.Y;

				if (dragPos.X == 0)
				{
					dragPos.X = (cursorPos.X - pos->X);
					dragPos.Y = (cursorPos.Y - pos->Y);
				}
				pos->X = cursorPos.X - dragPos.X;
				pos->Y = cursorPos.Y - dragPos.Y;
			}
			else
			{
				dragPos = FVector2D{ 0, 0 };
			}
		}
		else
		{
			hover_element = false;
		}


		offset_x = 0.0f; offset_y = 0.0f;
		menu_pos = FVector2D{ pos->X, pos->Y };
		first_element_pos = FVector2D{ 0, 0 };
		current_element_pos = FVector2D{ 0, 0 };
		current_element_size = FVector2D{ 0, 0 };


		if (Gif) {
			auto Texture = Gif->GetCurrentImage();

			drawFilledRect(FVector2D{ pos->X, pos->Y }, size.X, 25.0f, { 49 / 255,  49 / 255, 49 / 255, 1.0f});

			DrawTexture(Texture, { pos->X, pos->Y }, { size.X, size.Y });
		}
		else
		{
			//Bg
			drawFilledRect(FVector2D{ pos->X, pos->Y }, size.X, size.Y, Colors::Window_Background);
			//drawFilledRect(FVector2D{ pos->X, pos->Y }, 122, size.Y, FLinearColor{ 0.006f, 0.006f, 0.006f, 1.0f });//My tabs bg
		}
	

		//Header
		drawFilledRect(FVector2D{ pos->X, pos->Y }, size.X, 25.0f, Colors::Window_Header);

		offset_y += 25.0f;

		//Title
		FVector2D titlePos = FVector2D{ pos->X + size.X / 2, pos->Y + 25 / 2 };
		TextCenter(s2wc(name), titlePos, FLinearColor{ 1.0f, 1.0f, 1.0f, 1.0f }, false);

		//DrawThunder(size, *pos);

		return true;
	}

	void ChangeWindowSize(FVector2D lastSize, FVector2D TargetSize, float Speed = 0.0f) {
		ZeroGUI::isInputLocked = true; //Lock buttons so no accidental Click happens
		LastAnimationVector = lastSize;
		SizeChangeWindowSizeSpeed = Speed * NormalizedAnimationSpeed;
		menu_size_target = TargetSize;

		if (Speed > 0.0f) {
			ChangeWindowSizeState = 2;
		}
		else
		{
			ChangeWindowSizeState = 1;
		}
	}

	class Thunder {
	public:
		FVector2D LinesToDraw[14];
		int LinesNum = 0;
		int LineDrawn = 0;

		
		Thunder();
	};

	std::vector<Thunder*> ThunderObjs;
	FVector2D SizeCopy;

	Thunder::Thunder() {
		
			srand(time(NULL));

			int WindowStartPoint = SizeCopy.X - (SizeCopy.X / 10);
			LinesToDraw[0].X = (rand() % WindowStartPoint + 20);
			LinesToDraw[0].Y = 0;

			int LineDir = rand() % 2 + 1;
			int AddY = (LinesToDraw[0].Y + SizeCopy.Y) / 14;


			for (size_t i = 1; i < 14; i++)
			{


				if (LineDir == 1) {
					LinesToDraw[i] = LinesToDraw[i - 1];
					int AddX = (SizeCopy.X - (LinesToDraw[i].X + 15.0f)) / 14;

					LinesToDraw[i].X += AddX;
					LinesToDraw[i].Y += AddY;
				}
				else
				{
					LinesToDraw[i] = LinesToDraw[i - 1];
					int AddX = (0 - (LinesToDraw[i].X + 15.0f)) / 14;

					LinesToDraw[i].X -= AddX;
					LinesToDraw[i].Y += AddY;
				}

				LineDir = rand() % 2 + 1;
			}

			ThunderObjs.push_back(this);
		
	}

	SDK::FLinearColor RGBATOFLinear(DWORD R, DWORD G, DWORD B, DWORD A) {
		static SDK::FLinearColor Color;

		Color.R = R / 255.0f;
		Color.G = G / 255.0f;
		Color.B = B / 255.0f;
		Color.A = A / 255.0f;

		return Color;
	}

	void DrawThunder(FVector2D Size, FVector2D Pos) {
		static ULONGLONG ThunderTick = 0;
		ULONGLONG TickCurrent = GetTickCount64();

		//ThunderAnimation Create ThunderObj
		if (TickCurrent >= ThunderTick) {
			ThunderTick = TickCurrent + 1000;
			static bool FirstThunderTest = false;
			SizeCopy = Size;

			if (!FirstThunderTest) {
				FirstThunderTest = true;
				Thunder* thund = new Thunder();
			}
			
		}

		for (size_t i = 0; i < ThunderObjs.size(); i++)
		{
			auto Thund = ThunderObjs[i];

			for (size_t i = 0; i < Thund->LinesNum; i++)
			{

			}

			for (size_t i = 1; i < 14; i++)
			{
				auto FirstLine = (Thund->LinesToDraw[i - 1]) + Pos;
				auto SecondLine = (Thund->LinesToDraw[i]) + Pos;


				Draw_Line(FirstLine, SecondLine, 4, RGBATOFLinear(22, 101, 233, 50));
				
			}
		}
	}
	

	void DrawRoundedFilledRect(UCanvas* canvas, FVector2D pos, FVector2D size, FLinearColor color, int Sidenumbers = 20, float rounding = 2.0f, Rounding flag = Rounding::AllCorners)
	{
		const float PI = 3.1415927f;

		bool RoundLeftCornerUp = flag & Rounding::LeftCorner;
		bool RoundRightCornerUp = flag & Rounding::RightCorner;
		bool RoundLeftCornerDown = flag & Rounding::LeftCornerDown;
		bool RoundRightCornerDown = flag & Rounding::RightCornerDown;

		for (float y = 0.0f; y < size.Y; y += 1.0f)
		{
			FVector2D StartPos = { pos.X, pos.Y + y };
			FVector2D EndPos = { pos.X + size.X, pos.Y + y };


			if (RoundLeftCornerUp || RoundRightCornerUp && y < rounding)
			{
				if (RoundLeftCornerUp) {
					float angle = (y / rounding) * (PI / 2);

					StartPos.X += rounding * (1 - std::cosf(angle));
					StartPos.Y += rounding * (1 - std::sinf(angle));
				}
				if (RoundRightCornerUp) {
					float angle = (y / rounding) * (PI / 2);

					EndPos.X -= rounding * (1 - std::cosf(angle));
					EndPos.Y += rounding * (1 - std::sinf(angle));
				}
			}

			if (RoundLeftCornerDown || RoundRightCornerDown && y > size.Y - rounding)
			{
				if (RoundLeftCornerDown) {
					float dy = y - (size.Y - rounding);
					float angle = (dy / rounding) * (PI / 2);

					StartPos.X += rounding * (1 - std::cosf(angle));
					StartPos.Y -= rounding * (1 - std::sinf(angle));
				}
				if (RoundRightCornerDown) {
					float dy = y - (size.Y - rounding);
					float angle = (dy / rounding) * (PI / 2);

					EndPos.X -= rounding * (1 - std::cosf(angle));
					EndPos.Y -= rounding * (1 - std::sinf(angle));
				}
			}

			canvas->K2_DrawLine(StartPos, EndPos, 1.0f, color);

		}
	}


	void Text(const wchar_t* text, bool center = false, bool outline = false)
	{
		elements_count++;

		float size = 25;
		FVector2D padding = FVector2D{ 10, 10 };
		FVector2D pos = FVector2D{ menu_pos.X + padding.X + offset_x, menu_pos.Y + padding.Y + offset_y };
		if (sameLine)
		{
			pos.X = last_element_pos.X + last_element_size.X + padding.X;
			pos.Y = last_element_pos.Y;
		}
		if (pushY)
		{
			pos.Y = pushYvalue;
			pushY = false;
			pushYvalue = 0.0f;
			offset_y = pos.Y - menu_pos.Y;
		}

		if (!sameLine)
			offset_y += size + padding.Y;

		//Text
		FVector2D textPos = FVector2D{ pos.X + 5.0f, pos.Y };
		if (center)
			TextCenter(text, textPos, FLinearColor{ 1.0f, 1.0f, 1.0f, 1.0f }, outline);
		else
			TextLeft(text, textPos, FLinearColor{ 1.0f, 1.0f, 1.0f, 1.0f }, outline);

		sameLine = false;
		last_element_pos = pos;
		//last_element_size = size;
		if (first_element_pos.X == 0.0f)
			first_element_pos = pos;
	}
	bool ButtonTab(const wchar_t* name, FVector2D size, bool active)
	{
		elements_count++;

		FVector2D padding = FVector2D{ 5, 10 };
		FVector2D pos = FVector2D{ menu_pos.X + padding.X + offset_x, menu_pos.Y + padding.Y + offset_y };
		if (sameLine)
		{
			pos.X = last_element_pos.X + last_element_size.X;
			pos.Y = last_element_pos.Y;
		}
		if (pushY)
		{
			pos.Y = pushYvalue;
			pushY = false;
			pushYvalue = 0.0f;
			offset_y = pos.Y - menu_pos.Y;
		}
		bool isHovered = MouseInZone(FVector2D{ pos.X, pos.Y }, size);

		//Bg
		if (active)
		{
			drawFilledRect(FVector2D{ pos.X, pos.Y }, size.X, size.Y, Colors::Button_Active);
		}
		else if (isHovered)
		{
			drawFilledRect(FVector2D{ pos.X, pos.Y }, size.X, size.Y, Colors::Button_Hovered);
			hover_element = true;
		}
		else
		{
			drawFilledRect(FVector2D{ pos.X, pos.Y }, size.X, size.Y, Colors::Button_Idle);
		}

		if (!sameLine)
			offset_y += size.Y + padding.Y;

		//Text
		FVector2D textPos = FVector2D{ pos.X + size.X / 2, pos.Y + size.Y / 2 };
		TextCenter(name, textPos, FLinearColor{ 1.0f, 1.0f, 1.0f, 1.0f }, false);


		sameLine = false;
		last_element_pos = pos;
		last_element_size = size;
		if (first_element_pos.X == 0.0f)
			first_element_pos = pos;

		if (isHovered && ChangeWindowSizeState == 0 && ZeroGUI::Input::IsMouseClicked(0, elements_count, false))
			return true;

		return false;
	}


	bool Button(const wchar_t* name, FVector2D size)
	{
		FVector2D padding = FVector2D{ 5, 10 };
		FVector2D pos = FVector2D{ menu_pos.X + padding.X + offset_x, menu_pos.Y + padding.Y + offset_y };
		if (sameLine)
		{
			pos.X = last_element_pos.X + last_element_size.X + padding.X;
			pos.Y = last_element_pos.Y;
		}
		if (pushY)
		{
			pos.Y = pushYvalue;
			pushY = false;
			pushYvalue = 0.0f;
			offset_y = pos.Y - menu_pos.Y;
		}
		bool isHovered = MouseInZone(FVector2D{ pos.X, pos.Y }, size);

		//Bg
		if (isHovered)
		{
			drawFilledRect(FVector2D{ pos.X, pos.Y }, size.X, size.Y, Colors::Button_Hovered);
			hover_element = true;
		}
		else
		{
			drawFilledRect(FVector2D{ pos.X, pos.Y }, size.X, size.Y, Colors::Button_Idle);
		}

		if (!sameLine)
			offset_y += size.Y + padding.Y;

		//Text
		FVector2D textPos = FVector2D{ pos.X + size.X / 2, pos.Y + size.Y / 2 };
		//if (!TextOverlapedFromActiveElement(textPos))
		TextCenter(name, textPos, FLinearColor{ 1.0f, 1.0f, 1.0f, 1.0f }, false);


		sameLine = false;
		last_element_pos = pos;
		last_element_size = size;
		if (first_element_pos.X == 0.0f)
			first_element_pos = pos;

		if (isHovered && ZeroGUI::Input::IsMouseClicked(0, elements_count, false)){ elements_count++;
			return true;
		}

		elements_count++;

		return false;
	}


	auto DrawHealthBar(SDK::FVector2D RootPosition, float Width, float Height, float Height2, float Health) -> void
	{
		if (Health > 100) Health = 100;

		SDK::FLinearColor HealthColor;
		if (Health >= 80) {
			HealthColor = SDK::FLinearColor{ 0, 1, 0, 0.5f };
		}
		else if (Health >= 50) {
			HealthColor = SDK::FLinearColor{ 1, 1, 0, 0.5f };
		}
		else {
			HealthColor = SDK::FLinearColor{ 1, 0, 0, 0.5f };
		}

		drawFilledRect(SDK::FVector2D{ RootPosition.X - (Width / 1.5f), RootPosition.Y - 15 }, Width + (Width / 3), Height, SDK::FLinearColor{ 1, 1, 1, 0.1f });
		drawFilledRect(SDK::FVector2D{ RootPosition.X - (Width / 1.5f), RootPosition.Y - 15 + (Height / 6) }, (Width) * (Health / 100), Height2, HealthColor);
	}

	auto DrawShieldBar(SDK::FVector2D RootPosition, float Width, float Height, float Height2, float Shield) -> void
	{
		if (Shield > 100) Shield = 100;

		SDK::FLinearColor ShieldColor;
		if (Shield >= 80) {
			ShieldColor = SDK::FLinearColor{ 1, 0, 0, 0.5f };
		}
		else if (Shield >= 50) {
			ShieldColor = SDK::FLinearColor{ 0, 1, 0, 0.5f };
		}
		else {
			ShieldColor = SDK::FLinearColor{ 1, 0, 0, 0.5f };
		}

		drawFilledRect(SDK::FVector2D{ RootPosition.X - (Width / 1.5f), RootPosition.Y - 10 }, Width + (Width / 3), Height, SDK::FLinearColor{ 1, 1, 1, 0.1f });
		drawFilledRect(SDK::FVector2D{ RootPosition.X - (Width / 1.5f), RootPosition.Y - 10 + (Height / 6) }, (Width) * (Shield / 100), Height2, ShieldColor);
	}

	SDK::UTexture2D* LoadTexture(const wchar_t* Path) {
		UTexture2D* LoadedTexture = nullptr;

		auto RenderClass = SDK::UKismetRenderingLibrary::StaticClass();

		if (RenderClass) {
			auto RenderingLibrary = (SDK::UKismetRenderingLibrary*)RenderClass->DefaultObject;

			if(RenderingLibrary)
				LoadedTexture = RenderingLibrary->ImportFileAsTexture2D(SDK::UWorld::GetWorld(), SDK::FString(Path));
		}
		

		return LoadedTexture;
	}

	SDK::UTexture2D* LoadTexture(std::vector<byte> Texture) {
		UTexture2D* LoadedTexture = nullptr;

		auto RenderClass = SDK::UKismetRenderingLibrary::StaticClass();

		if (RenderClass) {
			auto RenderingLibrary = (SDK::UKismetRenderingLibrary*)RenderClass->DefaultObject;

			if (RenderingLibrary) {
				SDK::TArray<uint8> BufferArray = SDK::TArray<uint8>(Texture.size());

				void** ptr = (void**)&BufferArray;
				int* Size = (int*)( (uintptr_t)(&BufferArray) + 0x8);

				std::memcpy(ptr[0], Texture.data(), sizeof(uint8) * Texture.size());

				*Size = Texture.size();

				LoadedTexture = RenderingLibrary->ImportBufferAsTexture2D(SDK::UWorld::GetWorld(), BufferArray);

				delete[] ptr[0];
			}
				
		}


		return LoadedTexture;
	}


	void DrawTexture(SDK::UTexture2D* texture, SDK::FVector2D ScreenPos, SDK::FVector2D ScreenSize, float rotation, SDK::FLinearColor color, SDK::EBlendMode BlendMode) {
		if(texture)
		canvas->K2_DrawTexture(texture, ScreenPos, ScreenSize, { 1.0f, 1.0f }, { 1.0f, 1.0f }, color, BlendMode, rotation, { 1.0f, 1.0f });
	}

	void Checkbox(const wchar_t* name, bool* value)
	{
		elements_count++;

		float size = 18;
		FVector2D padding = FVector2D{ 10, 10 };
		FVector2D pos = FVector2D{ menu_pos.X + padding.X + offset_x, menu_pos.Y + padding.Y + offset_y };
		if (sameLine)
		{
			pos.X = last_element_pos.X + last_element_size.X + padding.X;
			pos.Y = last_element_pos.Y;
		}
		if (pushY)
		{
			pos.Y = pushYvalue;
			pushY = false;
			pushYvalue = 0.0f;
			offset_y = pos.Y - menu_pos.Y;
		}
		bool isHovered = MouseInZone(FVector2D{ pos.X, pos.Y }, FVector2D{ size, size });

		//Bg
		if (isHovered)
		{
			drawFilledRect(FVector2D{ pos.X, pos.Y }, size, size, Colors::Checkbox_Hovered);
			hover_element = true;
		}
		else
		{
			drawFilledRect(FVector2D{ pos.X, pos.Y }, size, size, Colors::Checkbox_Idle);
		}

		if (!sameLine)
			offset_y += size + padding.Y;

		if (*value)
		{
			drawFilledRect(FVector2D{ pos.X + 3, pos.Y + 3 }, size - 6, size - 6, Colors::Checkbox_Enabled);
			//drawFilledRect(FVector2D{ pos.X + 9, pos.Y + 9 }, size - 18, size - 18, Colors::Checkbox_Hovered);
		}



		//Text
		FVector2D textPos = FVector2D{ pos.X + size + 5.0f, pos.Y };
		//if (!TextOverlapedFromActiveElement(textPos))
		TextLeft(name, textPos, FLinearColor{ 1.0f, 1.0f, 1.0f, 1.0f }, false);

		sameLine = false;
		last_element_pos = pos;
		//last_element_size = size;
		if (first_element_pos.X == 0.0f)
			first_element_pos = pos;

		if (isHovered && ZeroGUI::Input::IsMouseClicked(0, elements_count, false))
			*value = !*value;
	}
	void Checkbox(const wchar_t* name, FLinearColor TextColor, bool* value)
	{
		elements_count++;

		float size = 18;
		FVector2D padding = FVector2D{ 10, 10 };
		FVector2D pos = FVector2D{ menu_pos.X + padding.X + offset_x, menu_pos.Y + padding.Y + offset_y };
		if (sameLine)
		{
			pos.X = last_element_pos.X + last_element_size.X + padding.X;
			pos.Y = last_element_pos.Y;
		}
		if (pushY)
		{
			pos.Y = pushYvalue;
			pushY = false;
			pushYvalue = 0.0f;
			offset_y = pos.Y - menu_pos.Y;
		}
		bool isHovered = MouseInZone(FVector2D{ pos.X, pos.Y }, FVector2D{ size, size });

		//Bg
		if (isHovered)
		{
			drawFilledRect(FVector2D{ pos.X, pos.Y }, size, size, Colors::Checkbox_Hovered);
			hover_element = true;
		}
		else
		{
			drawFilledRect(FVector2D{ pos.X, pos.Y }, size, size, Colors::Checkbox_Idle);
		}

		if (!sameLine)
			offset_y += size + padding.Y;

		if (*value)
		{
			drawFilledRect(FVector2D{ pos.X + 3, pos.Y + 3 }, size - 6, size - 6, Colors::Checkbox_Enabled);
			//drawFilledRect(FVector2D{ pos.X + 9, pos.Y + 9 }, size - 18, size - 18, Colors::Checkbox_Hovered);
		}



		//Text
		FVector2D textPos = FVector2D{ pos.X + size + 5.0f, pos.Y };
		//if (!TextOverlapedFromActiveElement(textPos))
		TextLeft(name, textPos, TextColor, false);

		sameLine = false;
		last_element_pos = pos;
		//last_element_size = size;
		if (first_element_pos.X == 0.0f)
			first_element_pos = pos;

		if (isHovered && ZeroGUI::Input::IsMouseClicked(0, elements_count, false))
			*value = !*value;
	}
	void SliderInt(char* name, int* value, int min, int max)
	{
		elements_count++;

		FVector2D size = FVector2D{ 240, 50 };
		FVector2D slider_size = FVector2D{ 200, 10 };
		FVector2D padding = FVector2D{ 10, 15 };
		FVector2D pos = FVector2D{ menu_pos.X + padding.X + offset_x, menu_pos.Y + padding.Y + offset_y };
		if (sameLine)
		{
			pos.X = last_element_pos.X + last_element_size.X + padding.X;
			pos.Y = last_element_pos.Y;
		}
		if (pushY)
		{
			pos.Y = pushYvalue;
			pushY = false;
			pushYvalue = 0.0f;
			offset_y = pos.Y - menu_pos.Y;
		}
		bool isHovered = MouseInZone(FVector2D{ pos.X, pos.Y + slider_size.Y + padding.Y }, slider_size);

		if (!sameLine)
			offset_y += size.Y + padding.Y;

		//Bg
		if (isHovered || current_element == elements_count)
		{
			//Drag
			if (ZeroGUI::Input::IsMouseClicked(0, elements_count, true))
			{
				current_element = elements_count;

				FVector2D cursorPos = CursorPos();
				*value = ((cursorPos.X - pos.X) * ((max - min) / slider_size.X)) + min;
				if (*value < min) *value = min;
				if (*value > max) *value = max;
			}

			drawFilledRect(FVector2D{ pos.X, pos.Y + slider_size.Y + padding.Y }, slider_size.X, slider_size.Y, Colors::Slider_Hovered);
			drawFilledRect(FVector2D{ pos.X, pos.Y + slider_size.Y + padding.Y + 5.0f }, 5.0f, 5.0f, Colors::Slider_Progress);

			hover_element = true;
		}
		else
		{
			drawFilledRect(FVector2D{ pos.X, pos.Y + slider_size.Y + padding.Y }, slider_size.X, slider_size.Y, Colors::Slider_Idle);
			drawFilledRect(FVector2D{ pos.X, pos.Y + slider_size.Y + padding.Y + 5.0f }, 5.0f, 5.0f, Colors::Slider_Progress);
		}


		//Value
		float oneP = slider_size.X / (max - min);
		drawFilledRect(FVector2D{ pos.X, pos.Y + slider_size.Y + padding.Y }, oneP * (*value - min), slider_size.Y, Colors::Slider_Progress);
		//drawFilledRect(FVector2D{ pos.X + oneP * (*value - min) - 10.0f, pos.Y + slider_size.Y - 5.0f + padding.Y }, 20.0f, 20.0f, Colors::Slider_Button);
		DrawFilledCircle(FVector2D{ pos.X + oneP * (*value - min), pos.Y + slider_size.Y + 3.3f + padding.Y }, 10.0f, Colors::Slider_Button);
		DrawFilledCircle(FVector2D{ pos.X + oneP * (*value - min), pos.Y + slider_size.Y + 3.3f + padding.Y }, 5.0f, Colors::Slider_Progress);


		sameLine = false;
		last_element_pos = pos;
		last_element_size = size;
		if (first_element_pos.X == 0.0f)
			first_element_pos = pos;
	}


	//void TextBox(const wchar_t* namePtr, FVector2D size)
	//{
	//	elements_count++;

	//	FVector2D pos = FVector2D{ menu_pos.X + offset_x, menu_pos.Y + offset_y };

	//	if (sameLine)
	//	{
	//		pos.X = last_element_pos.X + last_element_size.X;
	//		pos.Y = last_element_pos.Y;
	//	}
	//	if (pushY)
	//	{
	//		pos.Y = pushYvalue;
	//		pushY = false;
	//		pushYvalue = 0.0f;
	//		offset_y = pos.Y - menu_pos.Y;
	//	}

	//	bool isHovered = MouseInZone(FVector2D{ pos.X, pos.Y}, FVector2D{ size.X, size.Y});
	//	if (!sameLine)
	//		offset_y += size.Y;

	//	TextLeft(namePtr, pos, FLinearColor{ 1.0f, 1.0f, 1.0f, 1.0f }, true);

	//	//Bg
	//	if (isHovered || current_element == elements_count)
	//	{
	//		//Drag
	//		if (ZeroGUI::Input::IsMouseClicked(0, elements_count, true))
	//		{
	//			current_element = elements_count;
	//		}

	//		hover_element = true;

	//		if (current_element == elements_count)
	//		{
	//			auto PlayerController = Cheat::PlayerController;

	//			if (PlayerController) {

	//				std::string strd = "";
	//				for (size_t i = '0'; i < 'z'; i++)
	//				{
	//					if (PlayerController->IsInputKeyDown(SDK::FKey::)) {
	//						namePtr += (wchar_t)i;
	//					}
	//				}
	//			}


	//		}
	//	}



	//}

	void SliderFloat(const wchar_t* name, float* value, float min, float max, const char* format = "%.0f")
	{
		elements_count++;

		FVector2D size = FVector2D{ 210, 40 };
		FVector2D slider_size = FVector2D{ 170, 7 };
		FVector2D adjust_zone = FVector2D{ 0, 20 };
		FVector2D padding = FVector2D{ 10, 15 };
		FVector2D pos = FVector2D{ menu_pos.X + padding.X + offset_x, menu_pos.Y + padding.Y + offset_y };
		if (sameLine)
		{
			pos.X = last_element_pos.X + last_element_size.X + padding.X;
			pos.Y = last_element_pos.Y;
		}
		if (pushY)
		{
			pos.Y = pushYvalue;
			pushY = false;
			pushYvalue = 0.0f;
			offset_y = pos.Y - menu_pos.Y;
		}
		bool isHovered = MouseInZone(FVector2D{ pos.X, pos.Y + slider_size.Y + padding.Y - adjust_zone.Y }, FVector2D{ slider_size.X, slider_size.Y + adjust_zone.Y * 1.5f });

		if (!sameLine)
			offset_y += size.Y + padding.Y;

		//Bg
		if (isHovered || current_element == elements_count)
		{
			//Drag
			if (ZeroGUI::Input::IsMouseClicked(0, elements_count, true))
			{
				current_element = elements_count;

				FVector2D cursorPos = CursorPos();
				*value = ((cursorPos.X - pos.X) * ((max - min) / slider_size.X)) + min;
				if (*value < min) *value = min;
				if (*value > max) *value = max;
			}

			drawFilledRect(FVector2D{ pos.X, pos.Y + slider_size.Y + padding.Y }, slider_size.X, slider_size.Y, Colors::Slider_Hovered);
			DrawFilledCircle(FVector2D{ pos.X, pos.Y + padding.Y + 9.3f }, 3.1f, Colors::Slider_Progress);
			DrawFilledCircle(FVector2D{ pos.X + slider_size.X, pos.Y + padding.Y + 9.3f }, 3.1f, Colors::Slider_Hovered);

			hover_element = true;
		}
		else
		{
			drawFilledRect(FVector2D{ pos.X, pos.Y + slider_size.Y + padding.Y }, slider_size.X, slider_size.Y, Colors::Slider_Idle);
			DrawFilledCircle(FVector2D{ pos.X, pos.Y + padding.Y + 9.3f }, 3.1f, Colors::Slider_Progress);
			DrawFilledCircle(FVector2D{ pos.X + slider_size.X, pos.Y + padding.Y + 9.3f }, 3.1f, Colors::Slider_Idle);
		}


		//Text
		FVector2D textPos = FVector2D{ pos.X, pos.Y + 5 };
		TextLeft(name, textPos, Colors::Text, false);

		//Value
		float oneP = slider_size.X / (max - min);
		drawFilledRect(FVector2D{ pos.X, pos.Y + slider_size.Y + padding.Y }, oneP * (*value - min), slider_size.Y, Colors::Slider_Progress);
		DrawFilledCircle(FVector2D{ pos.X + oneP * (*value - min), pos.Y + slider_size.Y + 2.66f + padding.Y }, 8.0f, Colors::Slider_Button);
		DrawFilledCircle(FVector2D{ pos.X + oneP * (*value - min), pos.Y + slider_size.Y + 2.66f + padding.Y }, 4.0f, Colors::Slider_Progress);

		char buffer[32];
		sprintf_s(buffer, format, *value);
		FVector2D valuePos = FVector2D{ pos.X + oneP * (*value - min), pos.Y + slider_size.Y + 20 + padding.Y };
		TextCenter(s2wc(buffer), valuePos, Colors::Text, false);


		sameLine = false;
		last_element_pos = pos;
		last_element_size = size;
		if (first_element_pos.X == 0.0f)
			first_element_pos = pos;
	}



	bool checkbox_enabled[256];
	void Combobox(const wchar_t* name, FVector2D size, int* value, const wchar_t* arg, ...)
	{
		elements_count++;

		FVector2D padding = FVector2D{ 5, 10 };
		FVector2D pos = FVector2D{ menu_pos.X + padding.X + offset_x, menu_pos.Y + padding.Y + offset_y };
		if (sameLine)
		{
			pos.X = last_element_pos.X + last_element_size.X + padding.X;
			pos.Y = last_element_pos.Y;
		}
		if (pushY)
		{
			pos.Y = pushYvalue;
			pushY = false;
			pushYvalue = 0.0f;
			offset_y = pos.Y - menu_pos.Y;
		}
		bool isHovered = MouseInZone(FVector2D{ pos.X, pos.Y }, size);

		//Bg
		if (isHovered || checkbox_enabled[elements_count])
		{
			drawFilledRect(FVector2D{ pos.X, pos.Y }, size.X, size.Y, Colors::Combobox_Hovered);

			hover_element = true;
		}
		else
		{
			drawFilledRect(FVector2D{ pos.X, pos.Y }, size.X, size.Y, Colors::Combobox_Idle);
		}

		if (!sameLine)
			offset_y += size.Y + padding.Y;

		//Text
		FVector2D textPos = FVector2D{ pos.X + size.X + 5.0f, pos.Y + size.Y / 2 };
		TextLeft((name), textPos, FLinearColor{ 1.0f, 1.0f, 1.0f, 1.0f }, false);

		//Elements
		bool isHovered2 = false;
		FVector2D element_pos = pos;
		int num = 0;

		if (checkbox_enabled[elements_count])
		{
			current_element_size.X = element_pos.X - 5.0f;
			current_element_size.Y = element_pos.Y - 5.0f;
		}
		va_list arguments;
		for (va_start(arguments, arg); arg != NULL; arg = va_arg(arguments, const wchar_t*))
		{
			//Selected Element
			if (num == *value)
			{
				FVector2D _textPos = FVector2D{ pos.X + size.X / 2, pos.Y + size.Y / 2 };
				TextCenter(arg, _textPos, FLinearColor{ 1.0f, 1.0f, 1.0f, 1.0f }, false);
			}

			if (checkbox_enabled[elements_count])
			{
				element_pos.Y += 25.0f;

				isHovered2 = MouseInZone(FVector2D{ element_pos.X, element_pos.Y }, FVector2D{ size.X, 25.0f });
				if (isHovered2)
				{
					hover_element = true;
					PostRenderer::drawFilledRect(FVector2D{ element_pos.X, element_pos.Y }, size.X, 25.0f, Colors::Combobox_Hovered);

					//Click
					if (ZeroGUI::Input::IsMouseClicked(0, elements_count, false))
					{
						*value = num;
						checkbox_enabled[elements_count] = false;
					}
				}
				else
				{
					PostRenderer::drawFilledRect(FVector2D{ element_pos.X, element_pos.Y }, size.X, 25.0f, Colors::Combobox_Idle);
				}

				PostRenderer::TextLeft(arg, FVector2D{ element_pos.X + 5.0f, element_pos.Y + 15.0f }, FLinearColor{ 1.0f, 1.0f, 1.0f, 1.0f }, false);
			}
			num++;
		}
		va_end(arguments);
		if (checkbox_enabled[elements_count])
		{
			current_element_size.X = element_pos.X + 5.0f;
			current_element_size.Y = element_pos.Y + 5.0f;
		}


		sameLine = false;
		last_element_pos = pos;
		last_element_size = size;
		if (first_element_pos.X == 0.0f)
			first_element_pos = pos;

		if (isHovered && ZeroGUI::Input::IsMouseClicked(0, elements_count, false))
		{
			checkbox_enabled[elements_count] = !checkbox_enabled[elements_count];
		}
		if (!isHovered && !isHovered2 && ZeroGUI::Input::IsMouseClicked(0, elements_count, false))
		{
			checkbox_enabled[elements_count] = false;
		}
	}

	int active_hotkey = -1;
	bool already_pressed = false;
	std::string VirtualKeyCodeToString(UCHAR virtualKey)
	{
		UINT scanCode = MapVirtualKey(virtualKey, MAPVK_VK_TO_VSC);

		if (virtualKey == VK_LBUTTON)
		{
			return ("MOUSE0");
		}
		if (virtualKey == VK_RBUTTON)
		{
			return ("MOUSE1");
		}
		if (virtualKey == VK_MBUTTON)
		{
			return ("MBUTTON");
		}
		if (virtualKey == VK_XBUTTON1)
		{
			return ("XBUTTON1");
		}
		if (virtualKey == VK_XBUTTON2)
		{
			return ("XBUTTON2");
		}

		CHAR szName[128];
		int result = 0;
		switch (virtualKey)
		{
		case VK_LEFT: case VK_UP: case VK_RIGHT: case VK_DOWN:
		case VK_RCONTROL: case VK_RMENU:
		case VK_LWIN: case VK_RWIN: case VK_APPS:
		case VK_PRIOR: case VK_NEXT:
		case VK_END: case VK_HOME:
		case VK_INSERT: case VK_DELETE:
		case VK_DIVIDE:
		case VK_NUMLOCK:
			scanCode |= KF_EXTENDED;
		default:
			result = GetKeyNameTextA(scanCode << 16, szName, 128);
		}

		return szName;
	}
	void Hotkey(const char* name, FVector2D size, int* key)
	{
		elements_count++;

		FVector2D padding = FVector2D{ 5, 10 };
		FVector2D pos = FVector2D{ menu_pos.X + padding.X + offset_x, menu_pos.Y + padding.Y + offset_y };
		if (sameLine)
		{
			pos.X = last_element_pos.X + last_element_size.X + padding.X;
			pos.Y = last_element_pos.Y + (last_element_size.Y / 2) - size.Y / 2;
		}
		if (pushY)
		{
			pos.Y = pushYvalue;
			pushY = false;
			pushYvalue = 0.0f;
			offset_y = pos.Y - menu_pos.Y;
		}
		bool isHovered = MouseInZone(FVector2D{ pos.X, pos.Y }, size);

		//Bg
		if (isHovered)
		{
			drawFilledRect(FVector2D{ pos.X, pos.Y }, size.X, size.Y, Colors::Button_Hovered);
			hover_element = true;
		}
		else
		{
			drawFilledRect(FVector2D{ pos.X, pos.Y }, size.X, size.Y, Colors::Button_Idle);
		}

		if (!sameLine)
			offset_y += size.Y + padding.Y;

		if (active_hotkey == elements_count)
		{
			//Text
			FVector2D textPos = FVector2D{ pos.X + size.X / 2, pos.Y + size.Y / 2 };
			TextCenter(L"[Press Key]", textPos, FLinearColor{ 1.0f, 1.0f, 1.0f, 1.0f }, false);

			if (!ZeroGUI::Input::IsAnyMouseDown())
			{
				already_pressed = false;
			}

			if (!already_pressed)
			{
				for (int code = 0; code < 255; code++)
				{
					if (GetAsyncKeyState(code))
					{
						*key = code;
						active_hotkey = -1;
					}
				}
			}
		}
		else
		{
			//Text
			FVector2D textPos = FVector2D{ pos.X + size.X / 2, pos.Y + size.Y / 2 };
			TextCenter(s2wc(VirtualKeyCodeToString(*key).c_str()), textPos, FLinearColor{ 1.0f, 1.0f, 1.0f, 1.0f }, false);

			if (isHovered)
			{
				if (ZeroGUI::Input::IsMouseClicked(0, elements_count, false))
				{
					already_pressed = true;
					active_hotkey = elements_count;

					//Queue Fix
					for (int code = 0; code < 255; code++)
						if (GetAsyncKeyState(code)) {}
				}
			}
			else
			{
				if (ZeroGUI::Input::IsMouseClicked(0, elements_count, false))
				{
					active_hotkey = -1;
				}
			}
		}


		sameLine = false;
		last_element_pos = pos;
		last_element_size = size;
		if (first_element_pos.X == 0.0f)
			first_element_pos = pos;
	}

	int active_picker = -1;
	FLinearColor saved_color;
	bool ColorPixel(FVector2D pos, FVector2D size, FLinearColor* original, FLinearColor color)
	{
		PostRenderer::drawFilledRect(FVector2D{ pos.X, pos.Y }, size.X, size.Y, color);

		//Выбранный цвет
		if (original->R == color.R && original->G == color.G && original->B == color.B)
		{
			PostRenderer::Draw_Line(FVector2D{ pos.X, pos.Y }, FVector2D{ pos.X + size.X - 1, pos.Y }, 1.0f, FLinearColor{ 0.0f, 0.0f, 0.0f, 1.0f });
			PostRenderer::Draw_Line(FVector2D{ pos.X, pos.Y + size.Y - 1 }, FVector2D{ pos.X + size.X - 1, pos.Y + size.Y - 1 }, 1.0f, FLinearColor{ 0.0f, 0.0f, 0.0f, 1.0f });
			PostRenderer::Draw_Line(FVector2D{ pos.X, pos.Y }, FVector2D{ pos.X, pos.Y + size.Y - 1 }, 1.0f, FLinearColor{ 0.0f, 0.0f, 0.0f, 1.0f });
			PostRenderer::Draw_Line(FVector2D{ pos.X + size.X - 1, pos.Y }, FVector2D{ pos.X + size.X - 1, pos.Y + size.Y - 1 }, 1.0f, FLinearColor{ 0.0f, 0.0f, 0.0f, 1.0f });
		}

		//Смена цвета
		bool isHovered = MouseInZone(FVector2D{ pos.X, pos.Y }, size);
		if (isHovered)
		{
			if (ZeroGUI::Input::IsMouseClicked(0, elements_count, false))
				*original = color;
		}

		return true;
	}
	void ColorPicker(const wchar_t* name, FLinearColor* color)
	{
		elements_count++;

		float size = 25;
		FVector2D padding = FVector2D{ 10, 10 };
		FVector2D pos = FVector2D{ menu_pos.X + padding.X + offset_x, menu_pos.Y + padding.Y + offset_y };
		if (sameLine)
		{
			pos.X = last_element_pos.X + last_element_size.X + padding.X;
			pos.Y = last_element_pos.Y;
		}
		if (pushY)
		{
			pos.Y = pushYvalue;
			pushY = false;
			pushYvalue = 0.0f;
			offset_y = pos.Y - menu_pos.Y;
		}
		bool isHovered = MouseInZone(FVector2D{ pos.X, pos.Y }, FVector2D{ size, size });

		if (!sameLine)
			offset_y += size + padding.Y;

		if (active_picker == elements_count)
		{
			hover_element = true;

			float sizePickerX = 250;
			float sizePickerY = 250;
			bool isHoveredPicker = MouseInZone(FVector2D{ pos.X, pos.Y }, FVector2D{ sizePickerX, sizePickerY - 60 });

			//Background
			PostRenderer::drawFilledRect(FVector2D{ pos.X, pos.Y }, sizePickerX, sizePickerY - 65, Colors::ColorPicker_Background);

			//float pixedSize = sizePickerY / pixels;
			//FLinearColor temp_color{1.0f, 1.0f, 1.0f, 1.0f};
			//float iterator = 0.0f;
			//
			//for (int y = 0; y < pixels; y++)
			//{
			//	for (int x = 0; x < pixels; x++)
			//	{
			//		ColorPixel(FVector2D{ pos.X + pixedSize * x, pos.Y + pixedSize * y }, pixedSize, color, temp_color);
			//		temp_color.R -= (1.0f - saved_color.R) / pixels;
			//		temp_color.G -= (1.0f - saved_color.G) / pixels;
			//		temp_color.B -= (1.0f - saved_color.B) / pixels;
			//	}
			//	
			//	iterator += 1.0f / pixels;
			//	temp_color = FLinearColor{ 1.0f - iterator, 1.0f - iterator, 1.0f - iterator, 1.0f };
			//}

			FVector2D pixelSize = FVector2D{ sizePickerX / 12, sizePickerY / 12 };

			//0
			{
				ColorPixel(FVector2D{ pos.X + pixelSize.X * 0, pos.Y + pixelSize.Y * 0 }, pixelSize, color, FLinearColor{ 174 / 255.f, 235 / 255.f, 253 / 255.f, 1.0f });
				ColorPixel(FVector2D{ pos.X + pixelSize.X * 0, pos.Y + pixelSize.Y * 1 }, pixelSize, color, FLinearColor{ 136 / 255.f, 225 / 255.f, 251 / 255.f, 1.0f });
				ColorPixel(FVector2D{ pos.X + pixelSize.X * 0, pos.Y + pixelSize.Y * 2 }, pixelSize, color, FLinearColor{ 108 / 255.f, 213 / 255.f, 250 / 255.f, 1.0f });
				ColorPixel(FVector2D{ pos.X + pixelSize.X * 0, pos.Y + pixelSize.Y * 3 }, pixelSize, color, FLinearColor{ 89 / 255.f, 175 / 255.f, 213 / 255.f, 1.0f });
				ColorPixel(FVector2D{ pos.X + pixelSize.X * 0, pos.Y + pixelSize.Y * 4 }, pixelSize, color, FLinearColor{ 76 / 255.f, 151 / 255.f, 177 / 255.f, 1.0f });
				ColorPixel(FVector2D{ pos.X + pixelSize.X * 0, pos.Y + pixelSize.Y * 5 }, pixelSize, color, FLinearColor{ 60 / 255.f, 118 / 255.f, 140 / 255.f, 1.0f });
				ColorPixel(FVector2D{ pos.X + pixelSize.X * 0, pos.Y + pixelSize.Y * 6 }, pixelSize, color, FLinearColor{ 43 / 255.f, 85 / 255.f, 100 / 255.f, 1.0f });
				ColorPixel(FVector2D{ pos.X + pixelSize.X * 0, pos.Y + pixelSize.Y * 7 }, pixelSize, color, FLinearColor{ 32 / 255.f, 62 / 255.f, 74 / 255.f, 1.0f });
				ColorPixel(FVector2D{ pos.X + pixelSize.X * 0, pos.Y + pixelSize.Y * 8 }, pixelSize, color, FLinearColor{ 255 / 255.f, 255 / 255.f, 255 / 255.f, 1.0f });
			}
			//1
			{
				ColorPixel(FVector2D{ pos.X + pixelSize.X * 1, pos.Y + pixelSize.Y * 0 }, pixelSize, color, FLinearColor{ 175 / 255.f, 205 / 255.f, 252 / 255.f, 1.0f });
				ColorPixel(FVector2D{ pos.X + pixelSize.X * 1, pos.Y + pixelSize.Y * 1 }, pixelSize, color, FLinearColor{ 132 / 255.f, 179 / 255.f, 252 / 255.f, 1.0f });
				ColorPixel(FVector2D{ pos.X + pixelSize.X * 1, pos.Y + pixelSize.Y * 2 }, pixelSize, color, FLinearColor{ 90 / 255.f, 152 / 255.f, 250 / 255.f, 1.0f });
				ColorPixel(FVector2D{ pos.X + pixelSize.X * 1, pos.Y + pixelSize.Y * 3 }, pixelSize, color, FLinearColor{ 55 / 255.f, 120 / 255.f, 250 / 255.f, 1.0f });
				ColorPixel(FVector2D{ pos.X + pixelSize.X * 1, pos.Y + pixelSize.Y * 4 }, pixelSize, color, FLinearColor{ 49 / 255.f, 105 / 255.f, 209 / 255.f, 1.0f });
				ColorPixel(FVector2D{ pos.X + pixelSize.X * 1, pos.Y + pixelSize.Y * 5 }, pixelSize, color, FLinearColor{ 38 / 255.f, 83 / 255.f, 165 / 255.f, 1.0f });
				ColorPixel(FVector2D{ pos.X + pixelSize.X * 1, pos.Y + pixelSize.Y * 6 }, pixelSize, color, FLinearColor{ 28 / 255.f, 61 / 255.f, 120 / 255.f, 1.0f });
				ColorPixel(FVector2D{ pos.X + pixelSize.X * 1, pos.Y + pixelSize.Y * 7 }, pixelSize, color, FLinearColor{ 20 / 255.f, 43 / 255.f, 86 / 255.f, 1.0f });
				ColorPixel(FVector2D{ pos.X + pixelSize.X * 1, pos.Y + pixelSize.Y * 8 }, pixelSize, color, FLinearColor{ 247 / 255.f, 247 / 255.f, 247 / 255.f, 1.0f });
			}
			//2
			{
				ColorPixel(FVector2D{ pos.X + pixelSize.X * 2, pos.Y + pixelSize.Y * 0 }, pixelSize, color, FLinearColor{ 153 / 255.f, 139 / 255.f, 250 / 255.f, 1.0f });
				ColorPixel(FVector2D{ pos.X + pixelSize.X * 2, pos.Y + pixelSize.Y * 1 }, pixelSize, color, FLinearColor{ 101 / 255.f, 79 / 255.f, 249 / 255.f, 1.0f });
				ColorPixel(FVector2D{ pos.X + pixelSize.X * 2, pos.Y + pixelSize.Y * 2 }, pixelSize, color, FLinearColor{ 64 / 255.f, 50 / 255.f, 230 / 255.f, 1.0f });
				ColorPixel(FVector2D{ pos.X + pixelSize.X * 2, pos.Y + pixelSize.Y * 3 }, pixelSize, color, FLinearColor{ 54 / 255.f, 38 / 255.f, 175 / 255.f, 1.0f });
				ColorPixel(FVector2D{ pos.X + pixelSize.X * 2, pos.Y + pixelSize.Y * 4 }, pixelSize, color, FLinearColor{ 39 / 255.f, 31 / 255.f, 144 / 255.f, 1.0f });
				ColorPixel(FVector2D{ pos.X + pixelSize.X * 2, pos.Y + pixelSize.Y * 5 }, pixelSize, color, FLinearColor{ 32 / 255.f, 25 / 255.f, 116 / 255.f, 1.0f });
				ColorPixel(FVector2D{ pos.X + pixelSize.X * 2, pos.Y + pixelSize.Y * 6 }, pixelSize, color, FLinearColor{ 21 / 255.f, 18 / 255.f, 82 / 255.f, 1.0f });
				ColorPixel(FVector2D{ pos.X + pixelSize.X * 2, pos.Y + pixelSize.Y * 7 }, pixelSize, color, FLinearColor{ 16 / 255.f, 13 / 255.f, 61 / 255.f, 1.0f });
				ColorPixel(FVector2D{ pos.X + pixelSize.X * 2, pos.Y + pixelSize.Y * 8 }, pixelSize, color, FLinearColor{ 228 / 255.f, 228 / 255.f, 228 / 255.f, 1.0f });
			}
			//3
			{
				ColorPixel(FVector2D{ pos.X + pixelSize.X * 3, pos.Y + pixelSize.Y * 0 }, pixelSize, color, FLinearColor{ 194 / 255.f, 144 / 255.f, 251 / 255.f, 1.0f });
				ColorPixel(FVector2D{ pos.X + pixelSize.X * 3, pos.Y + pixelSize.Y * 1 }, pixelSize, color, FLinearColor{ 165 / 255.f, 87 / 255.f, 249 / 255.f, 1.0f });
				ColorPixel(FVector2D{ pos.X + pixelSize.X * 3, pos.Y + pixelSize.Y * 2 }, pixelSize, color, FLinearColor{ 142 / 255.f, 57 / 255.f, 239 / 255.f, 1.0f });
				ColorPixel(FVector2D{ pos.X + pixelSize.X * 3, pos.Y + pixelSize.Y * 3 }, pixelSize, color, FLinearColor{ 116 / 255.f, 45 / 255.f, 184 / 255.f, 1.0f });
				ColorPixel(FVector2D{ pos.X + pixelSize.X * 3, pos.Y + pixelSize.Y * 4 }, pixelSize, color, FLinearColor{ 92 / 255.f, 37 / 255.f, 154 / 255.f, 1.0f });
				ColorPixel(FVector2D{ pos.X + pixelSize.X * 3, pos.Y + pixelSize.Y * 5 }, pixelSize, color, FLinearColor{ 73 / 255.f, 29 / 255.f, 121 / 255.f, 1.0f });
				ColorPixel(FVector2D{ pos.X + pixelSize.X * 3, pos.Y + pixelSize.Y * 6 }, pixelSize, color, FLinearColor{ 53 / 255.f, 21 / 255.f, 88 / 255.f, 1.0f });
				ColorPixel(FVector2D{ pos.X + pixelSize.X * 3, pos.Y + pixelSize.Y * 7 }, pixelSize, color, FLinearColor{ 37 / 255.f, 15 / 255.f, 63 / 255.f, 1.0f });
				ColorPixel(FVector2D{ pos.X + pixelSize.X * 3, pos.Y + pixelSize.Y * 8 }, pixelSize, color, FLinearColor{ 203 / 255.f, 203 / 255.f, 203 / 255.f, 1.0f });
			}
			//4
			{
				ColorPixel(FVector2D{ pos.X + pixelSize.X * 4, pos.Y + pixelSize.Y * 0 }, pixelSize, color, FLinearColor{ 224 / 255.f, 162 / 255.f, 197 / 255.f, 1.0f });
				ColorPixel(FVector2D{ pos.X + pixelSize.X * 4, pos.Y + pixelSize.Y * 1 }, pixelSize, color, FLinearColor{ 210 / 255.f, 112 / 255.f, 166 / 255.f, 1.0f });
				ColorPixel(FVector2D{ pos.X + pixelSize.X * 4, pos.Y + pixelSize.Y * 2 }, pixelSize, color, FLinearColor{ 199 / 255.f, 62 / 255.f, 135 / 255.f, 1.0f });
				ColorPixel(FVector2D{ pos.X + pixelSize.X * 4, pos.Y + pixelSize.Y * 3 }, pixelSize, color, FLinearColor{ 159 / 255.f, 49 / 255.f, 105 / 255.f, 1.0f });
				ColorPixel(FVector2D{ pos.X + pixelSize.X * 4, pos.Y + pixelSize.Y * 4 }, pixelSize, color, FLinearColor{ 132 / 255.f, 41 / 255.f, 89 / 255.f, 1.0f });
				ColorPixel(FVector2D{ pos.X + pixelSize.X * 4, pos.Y + pixelSize.Y * 5 }, pixelSize, color, FLinearColor{ 104 / 255.f, 32 / 255.f, 71 / 255.f, 1.0f });
				ColorPixel(FVector2D{ pos.X + pixelSize.X * 4, pos.Y + pixelSize.Y * 6 }, pixelSize, color, FLinearColor{ 75 / 255.f, 24 / 255.f, 51 / 255.f, 1.0f });
				ColorPixel(FVector2D{ pos.X + pixelSize.X * 4, pos.Y + pixelSize.Y * 7 }, pixelSize, color, FLinearColor{ 54 / 255.f, 14 / 255.f, 36 / 255.f, 1.0f });
				ColorPixel(FVector2D{ pos.X + pixelSize.X * 4, pos.Y + pixelSize.Y * 8 }, pixelSize, color, FLinearColor{ 175 / 255.f, 175 / 255.f, 175 / 255.f, 1.0f });
			}
			//5
			{
				ColorPixel(FVector2D{ pos.X + pixelSize.X * 5, pos.Y + pixelSize.Y * 0 }, pixelSize, color, FLinearColor{ 235 / 255.f, 175 / 255.f, 176 / 255.f, 1.0f });
				ColorPixel(FVector2D{ pos.X + pixelSize.X * 5, pos.Y + pixelSize.Y * 1 }, pixelSize, color, FLinearColor{ 227 / 255.f, 133 / 255.f, 135 / 255.f, 1.0f });
				ColorPixel(FVector2D{ pos.X + pixelSize.X * 5, pos.Y + pixelSize.Y * 2 }, pixelSize, color, FLinearColor{ 219 / 255.f, 87 / 255.f, 88 / 255.f, 1.0f });
				ColorPixel(FVector2D{ pos.X + pixelSize.X * 5, pos.Y + pixelSize.Y * 3 }, pixelSize, color, FLinearColor{ 215 / 255.f, 50 / 255.f, 36 / 255.f, 1.0f });
				ColorPixel(FVector2D{ pos.X + pixelSize.X * 5, pos.Y + pixelSize.Y * 4 }, pixelSize, color, FLinearColor{ 187 / 255.f, 25 / 255.f, 7 / 255.f, 1.0f });
				ColorPixel(FVector2D{ pos.X + pixelSize.X * 5, pos.Y + pixelSize.Y * 5 }, pixelSize, color, FLinearColor{ 149 / 255.f, 20 / 255.f, 6 / 255.f, 1.0f });
				ColorPixel(FVector2D{ pos.X + pixelSize.X * 5, pos.Y + pixelSize.Y * 6 }, pixelSize, color, FLinearColor{ 107 / 255.f, 14 / 255.f, 4 / 255.f, 1.0f });
				ColorPixel(FVector2D{ pos.X + pixelSize.X * 5, pos.Y + pixelSize.Y * 7 }, pixelSize, color, FLinearColor{ 77 / 255.f, 9 / 255.f, 3 / 255.f, 1.0f });
				ColorPixel(FVector2D{ pos.X + pixelSize.X * 5, pos.Y + pixelSize.Y * 8 }, pixelSize, color, FLinearColor{ 144 / 255.f, 144 / 255.f, 144 / 255.f, 1.0f });
			}
			//6
			{
				ColorPixel(FVector2D{ pos.X + pixelSize.X * 6, pos.Y + pixelSize.Y * 0 }, pixelSize, color, FLinearColor{ 241 / 255.f, 187 / 255.f, 171 / 255.f, 1.0f });
				ColorPixel(FVector2D{ pos.X + pixelSize.X * 6, pos.Y + pixelSize.Y * 1 }, pixelSize, color, FLinearColor{ 234 / 255.f, 151 / 255.f, 126 / 255.f, 1.0f });
				ColorPixel(FVector2D{ pos.X + pixelSize.X * 6, pos.Y + pixelSize.Y * 2 }, pixelSize, color, FLinearColor{ 229 / 255.f, 115 / 255.f, 76 / 255.f, 1.0f });
				ColorPixel(FVector2D{ pos.X + pixelSize.X * 6, pos.Y + pixelSize.Y * 3 }, pixelSize, color, FLinearColor{ 227 / 255.f, 82 / 255.f, 24 / 255.f, 1.0f });
				ColorPixel(FVector2D{ pos.X + pixelSize.X * 6, pos.Y + pixelSize.Y * 4 }, pixelSize, color, FLinearColor{ 190 / 255.f, 61 / 255.f, 15 / 255.f, 1.0f });
				ColorPixel(FVector2D{ pos.X + pixelSize.X * 6, pos.Y + pixelSize.Y * 5 }, pixelSize, color, FLinearColor{ 150 / 255.f, 48 / 255.f, 12 / 255.f, 1.0f });
				ColorPixel(FVector2D{ pos.X + pixelSize.X * 6, pos.Y + pixelSize.Y * 6 }, pixelSize, color, FLinearColor{ 107 / 255.f, 34 / 255.f, 8 / 255.f, 1.0f });
				ColorPixel(FVector2D{ pos.X + pixelSize.X * 6, pos.Y + pixelSize.Y * 7 }, pixelSize, color, FLinearColor{ 79 / 255.f, 25 / 255.f, 6 / 255.f, 1.0f });
				ColorPixel(FVector2D{ pos.X + pixelSize.X * 6, pos.Y + pixelSize.Y * 8 }, pixelSize, color, FLinearColor{ 113 / 255.f, 113 / 255.f, 113 / 255.f, 1.0f });
			}
			//7
			{
				ColorPixel(FVector2D{ pos.X + pixelSize.X * 7, pos.Y + pixelSize.Y * 0 }, pixelSize, color, FLinearColor{ 245 / 255.f, 207 / 255.f, 169 / 255.f, 1.0f });
				ColorPixel(FVector2D{ pos.X + pixelSize.X * 7, pos.Y + pixelSize.Y * 1 }, pixelSize, color, FLinearColor{ 240 / 255.f, 183 / 255.f, 122 / 255.f, 1.0f });
				ColorPixel(FVector2D{ pos.X + pixelSize.X * 7, pos.Y + pixelSize.Y * 2 }, pixelSize, color, FLinearColor{ 236 / 255.f, 159 / 255.f, 74 / 255.f, 1.0f });
				ColorPixel(FVector2D{ pos.X + pixelSize.X * 7, pos.Y + pixelSize.Y * 3 }, pixelSize, color, FLinearColor{ 234 / 255.f, 146 / 255.f, 37 / 255.f, 1.0f });
				ColorPixel(FVector2D{ pos.X + pixelSize.X * 7, pos.Y + pixelSize.Y * 4 }, pixelSize, color, FLinearColor{ 193 / 255.f, 111 / 255.f, 28 / 255.f, 1.0f });
				ColorPixel(FVector2D{ pos.X + pixelSize.X * 7, pos.Y + pixelSize.Y * 5 }, pixelSize, color, FLinearColor{ 152 / 255.f, 89 / 255.f, 22 / 255.f, 1.0f });
				ColorPixel(FVector2D{ pos.X + pixelSize.X * 7, pos.Y + pixelSize.Y * 6 }, pixelSize, color, FLinearColor{ 110 / 255.f, 64 / 255.f, 16 / 255.f, 1.0f });
				ColorPixel(FVector2D{ pos.X + pixelSize.X * 7, pos.Y + pixelSize.Y * 7 }, pixelSize, color, FLinearColor{ 80 / 255.f, 47 / 255.f, 12 / 255.f, 1.0f });
				ColorPixel(FVector2D{ pos.X + pixelSize.X * 7, pos.Y + pixelSize.Y * 8 }, pixelSize, color, FLinearColor{ 82 / 255.f, 82 / 255.f, 82 / 255.f, 1.0f });
			}
			//8
			{
				ColorPixel(FVector2D{ pos.X + pixelSize.X * 8, pos.Y + pixelSize.Y * 0 }, pixelSize, color, FLinearColor{ 247 / 255.f, 218 / 255.f, 170 / 255.f, 1.0f });
				ColorPixel(FVector2D{ pos.X + pixelSize.X * 8, pos.Y + pixelSize.Y * 1 }, pixelSize, color, FLinearColor{ 244 / 255.f, 200 / 255.f, 124 / 255.f, 1.0f });
				ColorPixel(FVector2D{ pos.X + pixelSize.X * 8, pos.Y + pixelSize.Y * 2 }, pixelSize, color, FLinearColor{ 241 / 255.f, 182 / 255.f, 77 / 255.f, 1.0f });
				ColorPixel(FVector2D{ pos.X + pixelSize.X * 8, pos.Y + pixelSize.Y * 3 }, pixelSize, color, FLinearColor{ 239 / 255.f, 174 / 255.f, 44 / 255.f, 1.0f });
				ColorPixel(FVector2D{ pos.X + pixelSize.X * 8, pos.Y + pixelSize.Y * 4 }, pixelSize, color, FLinearColor{ 196 / 255.f, 137 / 255.f, 34 / 255.f, 1.0f });
				ColorPixel(FVector2D{ pos.X + pixelSize.X * 8, pos.Y + pixelSize.Y * 5 }, pixelSize, color, FLinearColor{ 154 / 255.f, 108 / 255.f, 27 / 255.f, 1.0f });
				ColorPixel(FVector2D{ pos.X + pixelSize.X * 8, pos.Y + pixelSize.Y * 6 }, pixelSize, color, FLinearColor{ 111 / 255.f, 77 / 255.f, 19 / 255.f, 1.0f });
				ColorPixel(FVector2D{ pos.X + pixelSize.X * 8, pos.Y + pixelSize.Y * 7 }, pixelSize, color, FLinearColor{ 80 / 255.f, 56 / 255.f, 14 / 255.f, 1.0f });
				ColorPixel(FVector2D{ pos.X + pixelSize.X * 8, pos.Y + pixelSize.Y * 8 }, pixelSize, color, FLinearColor{ 54 / 255.f, 54 / 255.f, 54 / 255.f, 1.0f });
			}
			//9
			{
				ColorPixel(FVector2D{ pos.X + pixelSize.X * 9, pos.Y + pixelSize.Y * 0 }, pixelSize, color, FLinearColor{ 254 / 255.f, 243 / 255.f, 187 / 255.f, 1.0f });
				ColorPixel(FVector2D{ pos.X + pixelSize.X * 9, pos.Y + pixelSize.Y * 1 }, pixelSize, color, FLinearColor{ 253 / 255.f, 237 / 255.f, 153 / 255.f, 1.0f });
				ColorPixel(FVector2D{ pos.X + pixelSize.X * 9, pos.Y + pixelSize.Y * 2 }, pixelSize, color, FLinearColor{ 253 / 255.f, 231 / 255.f, 117 / 255.f, 1.0f });
				ColorPixel(FVector2D{ pos.X + pixelSize.X * 9, pos.Y + pixelSize.Y * 3 }, pixelSize, color, FLinearColor{ 254 / 255.f, 232 / 255.f, 85 / 255.f, 1.0f });
				ColorPixel(FVector2D{ pos.X + pixelSize.X * 9, pos.Y + pixelSize.Y * 4 }, pixelSize, color, FLinearColor{ 242 / 255.f, 212 / 255.f, 53 / 255.f, 1.0f });
				ColorPixel(FVector2D{ pos.X + pixelSize.X * 9, pos.Y + pixelSize.Y * 5 }, pixelSize, color, FLinearColor{ 192 / 255.f, 169 / 255.f, 42 / 255.f, 1.0f });
				ColorPixel(FVector2D{ pos.X + pixelSize.X * 9, pos.Y + pixelSize.Y * 6 }, pixelSize, color, FLinearColor{ 138 / 255.f, 120 / 255.f, 30 / 255.f, 1.0f });
				ColorPixel(FVector2D{ pos.X + pixelSize.X * 9, pos.Y + pixelSize.Y * 7 }, pixelSize, color, FLinearColor{ 101 / 255.f, 87 / 255.f, 22 / 255.f, 1.0f });
				ColorPixel(FVector2D{ pos.X + pixelSize.X * 9, pos.Y + pixelSize.Y * 8 }, pixelSize, color, FLinearColor{ 29 / 255.f, 29 / 255.f, 29 / 255.f, 1.0f });
			}
			//10
			{
				ColorPixel(FVector2D{ pos.X + pixelSize.X * 10, pos.Y + pixelSize.Y * 0 }, pixelSize, color, FLinearColor{ 247 / 255.f, 243 / 255.f, 185 / 255.f, 1.0f });
				ColorPixel(FVector2D{ pos.X + pixelSize.X * 10, pos.Y + pixelSize.Y * 1 }, pixelSize, color, FLinearColor{ 243 / 255.f, 239 / 255.f, 148 / 255.f, 1.0f });
				ColorPixel(FVector2D{ pos.X + pixelSize.X * 10, pos.Y + pixelSize.Y * 2 }, pixelSize, color, FLinearColor{ 239 / 255.f, 232 / 255.f, 111 / 255.f, 1.0f });
				ColorPixel(FVector2D{ pos.X + pixelSize.X * 10, pos.Y + pixelSize.Y * 3 }, pixelSize, color, FLinearColor{ 235 / 255.f, 229 / 255.f, 76 / 255.f, 1.0f });
				ColorPixel(FVector2D{ pos.X + pixelSize.X * 10, pos.Y + pixelSize.Y * 4 }, pixelSize, color, FLinearColor{ 208 / 255.f, 200 / 255.f, 55 / 255.f, 1.0f });
				ColorPixel(FVector2D{ pos.X + pixelSize.X * 10, pos.Y + pixelSize.Y * 5 }, pixelSize, color, FLinearColor{ 164 / 255.f, 157 / 255.f, 43 / 255.f, 1.0f });
				ColorPixel(FVector2D{ pos.X + pixelSize.X * 10, pos.Y + pixelSize.Y * 6 }, pixelSize, color, FLinearColor{ 118 / 255.f, 114 / 255.f, 31 / 255.f, 1.0f });
				ColorPixel(FVector2D{ pos.X + pixelSize.X * 10, pos.Y + pixelSize.Y * 7 }, pixelSize, color, FLinearColor{ 86 / 255.f, 82 / 255.f, 21 / 255.f, 1.0f });
				ColorPixel(FVector2D{ pos.X + pixelSize.X * 10, pos.Y + pixelSize.Y * 8 }, pixelSize, color, FLinearColor{ 9 / 255.f, 9 / 255.f, 9 / 255.f, 1.0f });
			}
			//11
			{
				ColorPixel(FVector2D{ pos.X + pixelSize.X * 11, pos.Y + pixelSize.Y * 0 }, pixelSize, color, FLinearColor{ 218 / 255.f, 232 / 255.f, 182 / 255.f, 1.0f });
				ColorPixel(FVector2D{ pos.X + pixelSize.X * 11, pos.Y + pixelSize.Y * 1 }, pixelSize, color, FLinearColor{ 198 / 255.f, 221 / 255.f, 143 / 255.f, 1.0f });
				ColorPixel(FVector2D{ pos.X + pixelSize.X * 11, pos.Y + pixelSize.Y * 2 }, pixelSize, color, FLinearColor{ 181 / 255.f, 210 / 255.f, 103 / 255.f, 1.0f });
				ColorPixel(FVector2D{ pos.X + pixelSize.X * 11, pos.Y + pixelSize.Y * 3 }, pixelSize, color, FLinearColor{ 154 / 255.f, 186 / 255.f, 76 / 255.f, 1.0f });
				ColorPixel(FVector2D{ pos.X + pixelSize.X * 11, pos.Y + pixelSize.Y * 4 }, pixelSize, color, FLinearColor{ 130 / 255.f, 155 / 255.f, 64 / 255.f, 1.0f });
				ColorPixel(FVector2D{ pos.X + pixelSize.X * 11, pos.Y + pixelSize.Y * 5 }, pixelSize, color, FLinearColor{ 102 / 255.f, 121 / 255.f, 50 / 255.f, 1.0f });
				ColorPixel(FVector2D{ pos.X + pixelSize.X * 11, pos.Y + pixelSize.Y * 6 }, pixelSize, color, FLinearColor{ 74 / 255.f, 88 / 255.f, 36 / 255.f, 1.0f });
				ColorPixel(FVector2D{ pos.X + pixelSize.X * 11, pos.Y + pixelSize.Y * 7 }, pixelSize, color, FLinearColor{ 54 / 255.f, 64 / 255.f, 26 / 255.f, 1.0f });
				ColorPixel(FVector2D{ pos.X + pixelSize.X * 11, pos.Y + pixelSize.Y * 8 }, pixelSize, color, FLinearColor{ 0 / 255.f, 0 / 255.f, 0 / 255.f, 1.0f });
			}



			if (isHoveredPicker)
			{
				if (ZeroGUI::Input::IsMouseClicked(0, elements_count, false))
				{

				}
			}
			else
			{
				if (ZeroGUI::Input::IsMouseClicked(0, elements_count, false))
				{
					active_picker = -1;
					//hover_element = false;
				}
			}
		}
		else
		{
			//Bg
			if (isHovered)
			{
				drawFilledRect(FVector2D{ pos.X, pos.Y }, size, size, Colors::Checkbox_Hovered);
				hover_element = true;
			}
			else
			{
				drawFilledRect(FVector2D{ pos.X, pos.Y }, size, size, Colors::Checkbox_Idle);
			}

			//Color
			drawFilledRect(FVector2D{ pos.X + 4, pos.Y + 4 }, size - 8, size - 8, *color);

			//Text
			FVector2D textPos = FVector2D{ pos.X + size + 5.0f, pos.Y - 5 };
			TextLeft(name, textPos, FLinearColor{ 1.0f, 1.0f, 1.0f, 1.0f }, false);

			if (isHovered && ZeroGUI::Input::IsMouseClicked(0, elements_count, false))
			{
				saved_color = *color;
				active_picker = elements_count;
			}
		}


		sameLine = false;
		last_element_pos = pos;
		//last_element_size = size;
		if (first_element_pos.X == 0.0f)
			first_element_pos = pos;
	}


	void Render()
	{
		for (int i = 0; i < 128; i++)
		{
			if (PostRenderer::drawlist[i].type != -1)
			{
				//Filled Rect
				if (PostRenderer::drawlist[i].type == 1)
				{
					CWINGui::drawFilledRect(PostRenderer::drawlist[i].pos, PostRenderer::drawlist[i].size.X, PostRenderer::drawlist[i].size.Y, PostRenderer::drawlist[i].color);
				}
				//TextLeft
				else if (PostRenderer::drawlist[i].type == 2)
				{
					CWINGui::TextLeft((const wchar_t*)PostRenderer::drawlist[i].name, PostRenderer::drawlist[i].pos, PostRenderer::drawlist[i].color, PostRenderer::drawlist[i].outline);
				}
				//TextCenter
				else if (PostRenderer::drawlist[i].type == 3)
				{
					CWINGui::TextCenter((const wchar_t*)PostRenderer::drawlist[i].name, PostRenderer::drawlist[i].pos, PostRenderer::drawlist[i].color, PostRenderer::drawlist[i].outline);
				}
				//Draw_Line
				else if (PostRenderer::drawlist[i].type == 4)
				{
					Draw_Line(PostRenderer::drawlist[i].from, PostRenderer::drawlist[i].to, PostRenderer::drawlist[i].thickness, PostRenderer::drawlist[i].color);
				}

				PostRenderer::drawlist[i].type = -1;
			}
		}
	}
}
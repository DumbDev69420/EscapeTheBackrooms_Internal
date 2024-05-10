#pragma once

namespace HostOptions {

	void Mainrun_Host() 
	{
		ULONGLONG TickCount = GetTickCount64();

		if (Settings::Host_CollisionPlayers || Settings::Host_FunMode || Settings::Host_Event_TeleportPlayers)
		{
			static ULONGLONG TickCount_Host = 0;

			if (TickCount >= TickCount_Host) {
				TickCount_Host = TickCount + 10;

				for (size_t i = 0; i < PlayerStuff::PlayerList.size(); i++)
				{
					auto pawnCurrent = PlayerStuff::PlayerList[i].Pawn_;

					if (pawnCurrent->IsA(SDK::ABPCharacter_Demo_C::StaticClass())) {

						auto PlayerCharacter = (SDK::ABPCharacter_Demo_C*)pawnCurrent;

						if(Settings::Host_FunMode) 
						{
							static ULONGLONG TickCount_HostSetFun = 0;

							if (TickCount >= TickCount_HostSetFun) {
								TickCount_HostSetFun = TickCount + 600;

								PlayerCharacter->CharacterMovement->GravityScale = Settings::Host_PlayersGravityScale;
							}
						}

						if (Settings::Host_CollisionPlayers) {
							static ULONGLONG TickCount_HostSetCollision = 0;

							if (TickCount >= TickCount_HostSetCollision) {
								TickCount_HostSetCollision = TickCount + 500;
								PlayerCharacter->Mesh->SetCollisionResponseToChannel(SDK::ECollisionChannel::ECC_Pawn, SDK::ECollisionResponse::ECR_Ignore);
								PlayerCharacter->CapsuleComponent->SetCollisionResponseToChannel(SDK::ECollisionChannel::ECC_Pawn, SDK::ECollisionResponse::ECR_Ignore);
							}
							
						}

						if (Settings::Host_Event_TeleportPlayers)
						{
							PlayerCharacter->K2_SetActorLocation(Cheat::PlayerController->K2_GetActorLocation(), false, 0, true);
						}
						
					}
				}

				if (Settings::Host_Event_TeleportPlayers)
					Settings::Host_Event_TeleportPlayers = false;
			}

			
		}

		
	}
}
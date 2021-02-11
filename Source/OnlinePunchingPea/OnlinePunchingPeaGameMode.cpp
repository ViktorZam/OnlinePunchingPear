// Copyright Epic Games, Inc. All Rights Reserved.

#include "OnlinePunchingPeaGameMode.h"
#include "OnlinePunchingPeaHUD.h"
#include "OnlinePunchingPeaCharacter.h"
#include "UObject/ConstructorHelpers.h"

AOnlinePunchingPeaGameMode::AOnlinePunchingPeaGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = AOnlinePunchingPeaHUD::StaticClass();
}

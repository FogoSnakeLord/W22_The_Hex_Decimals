// Copyright Epic Games, Inc. All Rights Reserved.

#include "PostArcanaGameMode.h"
#include "PostArcanaHUD.h"
#include "PostArcanaCharacter.h"
#include "UObject/ConstructorHelpers.h"

APostArcanaGameMode::APostArcanaGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = APostArcanaHUD::StaticClass();
}

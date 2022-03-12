// Copyright Epic Games, Inc. All Rights Reserved.

#include "PostArcanaGameMode.h"
#include "UI/PostArcanaHUD.h"
#include "Player/PostArcanaCharacter.h"
#include "UObject/ConstructorHelpers.h"

APostArcanaGameMode::APostArcanaGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;


	static ConstructorHelpers::FClassFinder<APlayerController> PlayerController(TEXT("/Game/FirstPersonCPP/Blueprints/BP_PostArcanaPlayerController"));

	if (PlayerController.Class != NULL)
	{
		PlayerControllerClass = PlayerController.Class;
	}

	// use our custom HUD class
	HUDClass = APostArcanaHUD::StaticClass();
}

// Fill out your copyright notice in the Description page of Project Settings.



// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
#include "PostArcanaNPCharacter.h"
#include "PostArcana/Player/PostArcanaCharacter.h"
#include "PostArcana/Player/PostArcanaPlayerController.h"
#include "HeadMountedDisplayFunctionLibrary.h"
#include "Camera/CameraComponent.h"
#include "Components/CapsuleComponent.h"
#include "Components/InputComponent.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "GameFramework/Controller.h"
#include "GameFramework/SpringArmComponent.h"
#include "PostArcana/PostArcanaProjectile.h"
#include "Perception/AISense_Sight.h"
#include "Perception/AIPerceptionStimuliSourceComponent.h"
#include "Kismet/GameplayStatics.h"
//////////////////////////////////////////////////////////////////////////
// PostArcanaAICharacter

APostArcanaNPCharacter::APostArcanaNPCharacter()
{
	// Set size for collision capsule
	GetCapsuleComponent()->InitCapsuleSize(42.f, 96.0f);

	// Prevents Janky Twitches
	bUseControllerRotationPitch = false;
	bUseControllerRotationYaw = false;
	bUseControllerRotationRoll = false;

	// Configure character movement
	GetCharacterMovement()->bOrientRotationToMovement = true; // Character moves in the direction of input...	
	GetCharacterMovement()->RotationRate = FRotator(0.0f, 540.0f, 0.0f); // ...at this rotation rate
	GetCharacterMovement()->JumpZVelocity = 600.f;
	GetCharacterMovement()->AirControl = 0.2f;

	//SetUp for On Hit
	GetCapsuleComponent()->OnComponentHit.AddDynamic(this, &Super::OnHit);

	//Can see and be seen
	AIPerceptionStimuliSource = CreateDefaultSubobject<UAIPerceptionStimuliSourceComponent>(TEXT("PercSS"));
	AIPerceptionStimuliSource->RegisterForSense(UAISense_Sight::StaticClass());

	//Set Damage Stat
	Damage = 0;
	//Set to player Team
	GenericTeamId = 0;
	//Set such that this NPC doesn't activate the player's shooting by default
	playerActivate = false;
}

void APostArcanaNPCharacter::OnHit(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit)
{
	//Checks for projectile Damage
	Super::OnHit(HitComp,OtherActor,OtherComp,NormalImpulse,Hit);
	//Makes NPCs Immortal, this is a failsafe
	Health = MaxHealth;
}

void APostArcanaNPCharacter::Use_Implementation()
{
	//Checks for the player
	if (playerCharacter) {
		//Casts that player's controller
		APostArcanaPlayerController* controller = Cast<APostArcanaPlayerController>(playerCharacter->GetPlayerController());
		//Sets the text and name for dialogue
		controller->SetDialogueText(speechText);
		controller->SetDialogueName(name);
		//turns on the dialogue window
		controller->DialogueToggle();
		//If this NPC activates shooting and the player's shooting isn't already active, activate the characters shooting
		//Two separate if statements to cut down on processes
		if (playerActivate) {
			if (!(playerCharacter->activeShooting)) {
				playerCharacter->ActivateShooting();
			}
		}
	}
}

void APostArcanaNPCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	//Checks the distance to the player
	if ((this->GetDistanceTo(playerCharacter)) > 500.0f) {
		//Casts the controller if relevant
		APostArcanaPlayerController* controller = Cast<APostArcanaPlayerController>(playerCharacter->GetPlayerController());
		//Checks to see if this NPC was the last to use the dialogue box
		if (controller->GetDialogueName().EqualTo(name)) {
			//Checks if the box is open or closed
			bool isActive = controller->GetDialogueActive();
			//Closes the box if it was open
			if (isActive) {
				controller->DialogueToggle();
			}
		}
	}
}


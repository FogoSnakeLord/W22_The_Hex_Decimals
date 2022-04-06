// Fill out your copyright notice in the Description page of Project Settings.


#include "PostArcanaAICharacter.h"
// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
#include "PostArcana/Player/PostArcanaCharacter.h"
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
#include "PostArcana/Doors/TriggerDoor.h"
//////////////////////////////////////////////////////////////////////////
// PostArcanaAICharacter

APostArcanaAICharacter::APostArcanaAICharacter()
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
	Damage = 100+(5*Intelligence);
	//Set to Enemy Team
	GenericTeamId = 1;
}

void APostArcanaAICharacter::OnHit(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit)
{
	//Checks for projectile Damage
	Super::OnHit(HitComp,OtherActor,OtherComp,NormalImpulse,Hit);
	//Adds experience to the player and Deletes itself if it's dead 
	if (!CheckAlive()) 
	{
		//Checks for OtherActor
		if (OtherActor != nullptr)
		{
			
			APostArcanaProjectile* spell = Cast<APostArcanaProjectile>(OtherActor); //Make sure the player's spell killed the enemy

			if (spell != nullptr)
			{
				APostArcanaCharacter* character = Cast<APostArcanaCharacter>(UGameplayStatics::GetPlayerCharacter(GetWorld(), 0)); //Get player at index 0 -- for single player games this works to grab the player
				character->ExperiencePoints += 75;//Amount of experience gained

				//If a door is set, the ai will open it on death - This door can not be closed after being opened
				if (DoorToOpen)
				{
					DoorToOpen->DoorToggle();
				}
			}
		}

		this->Destroy();
	}
}

void APostArcanaAICharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	//For Testing
	DisplayStats();
}


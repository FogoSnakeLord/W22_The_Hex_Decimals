// Fill out your copyright notice in the Description page of Project Settings.



// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
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
#include "PostArcanaNPCharacter.h"
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
}

void APostArcanaNPCharacter::OnHit(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit)
{
	//Checks for projectile Damage
	Super::OnHit(HitComp,OtherActor,OtherComp,NormalImpulse,Hit);
	Health = MaxHealth;
}

void APostArcanaNPCharacter::Use_Implementation()
{
	if (playerCharacter) {
		APostArcanaPlayerController* controller = Cast<APostArcanaPlayerController>(playerCharacter->GetPlayerController());
		controller->SetDialogueText(speechText);
		controller->DialogueToggle();
	}
}

void APostArcanaNPCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}


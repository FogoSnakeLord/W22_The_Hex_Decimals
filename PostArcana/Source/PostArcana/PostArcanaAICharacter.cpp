// Fill out your copyright notice in the Description page of Project Settings.


#include "PostArcanaAICharacter.h"
// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
#include "PostArcanaCharacter.h"
#include "HeadMountedDisplayFunctionLibrary.h"
#include "Camera/CameraComponent.h"
#include "Components/CapsuleComponent.h"
#include "Components/InputComponent.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "GameFramework/Controller.h"
#include "GameFramework/SpringArmComponent.h"
#include "PostArcanaProjectile.h"
#include "Perception/AISense_Sight.h"
#include "Perception/AIPerceptionStimuliSourceComponent.h"
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
}

void APostArcanaAICharacter::OnHit(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit)
{
	//Checks for projectile Damage
	Super::OnHit(HitComp,OtherActor,OtherComp,NormalImpulse,Hit);
	//Deletes itself if it's dead
	if (!CheckAlive()) {
		this->Destroy();
	}
}

void APostArcanaAICharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	//For Testing
	DisplayStats();
}


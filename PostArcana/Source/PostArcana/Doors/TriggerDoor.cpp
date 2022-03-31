// Fill out your copyright notice in the Description page of Project Settings.
//Author 1: Sebastian Comette
//Change Log: March 30th 2022
			//Created TriggerDoor class. This is a door that is opened or closed when a player enters a DoorTrigger
			//Does not use the Use Interface


#include "TriggerDoor.h"

// Sets default values
ATriggerDoor::ATriggerDoor()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	//Skeletal mesh creation
	DoorMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("SkeletalMeshComponent"));
	RootComponent = DoorMesh;

	//This ensures the objects do not pass through the door while its closed.
	DoorMesh->SetCollisionProfileName("BlockAll");

	//Door is set to start closed
	bDoorOpen = false;

}

//Plays the correct door animation based on the doors current state (open or closed)
void ATriggerDoor::ToggleAnim()
{
	//If door is open play close animation, if door is closed play open animation
	if (bDoorOpen)
	{
		if (DoorOpenAnim)//Ensures the door actually has an animation
		{
			DoorMesh->PlayAnimation(DoorOpenAnim, false);

			//This gets rid of collision on the door when it is open so the player will not be blocked by the spine of the door
			DoorMesh->SetCollisionProfileName("NoCollision");
		}
	}
	else
	{
		if (DoorCloseAnim)//Ensures the door actually has an animation
		{
			DoorMesh->PlayAnimation(DoorCloseAnim, false);

			//This gets returns collision on the door when its closed
			DoorMesh->SetCollisionProfileName("BlockAll");
		}
	}
}

// Called when the game starts or when spawned
void ATriggerDoor::BeginPlay()
{
	Super::BeginPlay();

}

//Toggles the doors state (open or closed)
void ATriggerDoor::DoorToggle()
{
	bDoorOpen = !bDoorOpen;
	ToggleAnim();
}

// Called every frame
void ATriggerDoor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}


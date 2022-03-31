// Fill out your copyright notice in the Description page of Project Settings.
//Change Log: March 30th 2022
			//Created the button door class. This is a door that is opened and close with a button ONLY. 
			//Set the collision to work like the basic door

#include "ButtonDoor.h"

// Sets default values
AButtonDoor::AButtonDoor()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	//creates the skeletal mesh for the door
	DoorMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("SkeletalMeshComponent"));
	RootComponent = DoorMesh;

	//sets the doors starting collsion state. this is for a door that starts closed. switch to no collision if you change the starting value of bDoorOpen
	DoorMesh->SetCollisionProfileName("BlockAll");

	//Sets the starting state of the door to closed 
	bDoorOpen = false;
}

// Called when the game starts or when spawned
void AButtonDoor::BeginPlay()
{
	Super::BeginPlay();

}

// Plays the propper animation for the doors change in state (open to closed or closed to open)
void AButtonDoor::ToggleAnim()
{
	if (bDoorOpen)
	{
		if (DoorOpenAnim)
		{
			//Open door animation
			DoorMesh->PlayAnimation(DoorOpenAnim, false);
			//Sets to door to have no collision when it is open so the player is not stopped by the spine of the door
			DoorMesh->SetCollisionProfileName("NoCollision");
		}
	}
	else
	{
		if (DoorCloseAnim)
		{
			//Close door animation
			DoorMesh->PlayAnimation(DoorCloseAnim, false);
			//returns collision to the door when it is closed
			DoorMesh->SetCollisionProfileName("BlockAll");
		}
	}
}

// Called every frame
void AButtonDoor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

//Toggles the doors state and plays the animation (closed to open or open to closed)
void AButtonDoor::DoorToggle()
{
	bDoorOpen = !bDoorOpen;
	ToggleAnim();
}


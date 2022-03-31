// Fill out your copyright notice in the Description page of Project Settings.
//Author 1: Sebastian Comette
//Change Log: March 29th 2022
			//Created the basic door class, exectued by a type cast in the player on interact
//Change Log: March 30th 2022
			//Changed the basic door class to use a use interface so that the players interact button could be used on all doors without a bunch of...
			//..type casts.
			//Change collision profiles for when the door is opened and closed so that the door itself would not stop the player when open

#include "BasicDoor.h"

// Sets default values
ABasicDoor::ABasicDoor()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	//Creates the skeletal mesh for the door.
	DoorMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("SkeletalMeshComponent"));
	RootComponent = DoorMesh;

	//Sets the doors collision to block everything - this is for a door that starts closed 
	DoorMesh->SetCollisionProfileName("BlockAll");

	//Starts the door closed
	bDoorOpen = false;
}

//Plays the proper animation rellating to the doors current state (open or closed)
void ABasicDoor::ToggleAnim()
{
	if (bDoorOpen)
	{
		if (DoorOpenAnim)
		{
			//Door open animation 
			DoorMesh->PlayAnimation(DoorOpenAnim, false);

			//This is different than the other doors and very important.
			//This makes the door so that when it is open only the Pawns will not collide with it
			//This difference is needed because the door still needs to collide with the players raycast so the player can still close the door
			DoorMesh->SetCollisionProfileName("IgnoreOnlyPawn");
		}
	}
	else
	{
		if (DoorCloseAnim)
		{
			//Door close animation
			DoorMesh->PlayAnimation(DoorCloseAnim, false);
			//returns the door too have collision on pawns 
			DoorMesh->SetCollisionProfileName("BlockAll");
		}
	}
}

// Called when the game starts or when spawned
void ABasicDoor::BeginPlay()
{
	Super::BeginPlay();

}

// Called every frame
void ABasicDoor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

//Implementation of the use interface class instigated by the player
void ABasicDoor::Use_Implementation()
{
	//toggles the doors active state (open to closed or closed to open)
	bDoorOpen = !bDoorOpen;
	//plays the animation for the door
	ToggleAnim();
}


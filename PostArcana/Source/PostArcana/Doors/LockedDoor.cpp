// Fill out your copyright notice in the Description page of Project Settings.
//Author 1: Sebastian Comette
//Change Log: April 6th 2022
			//Created Locked Door Class

#include "LockedDoor.h"
#include "DoorKey.h"
#include "PostArcana/Player/PostArcanaCharacter.h"
#include "Kismet/GameplayStatics.h"

// Sets default values
ALockedDoor::ALockedDoor()
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

void ALockedDoor::ToggleAnim()
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
void ALockedDoor::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ALockedDoor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

//Implementation of the use interface class instigated by the player
void ALockedDoor::Use_Implementation()
{
	APostArcanaCharacter* pPlayer = Cast<APostArcanaCharacter>(UGameplayStatics::GetPlayerPawn(GetWorld(), 0));

	if (pPlayer)
	{
		if (pPlayer->CheckKeys(KeyNeeded))
		{
			//Checks if the player has the right key to open this door
			if (KeyNeeded == KeyNeeded->m_pPlayer->CheckKeys(KeyNeeded))
			{
				//toggles the doors active state (open to closed or closed to open)
				bDoorOpen = !bDoorOpen;
				//plays the animation for the door
				ToggleAnim();
			}

		}

	}
}


// Fill out your copyright notice in the Description page of Project Settings.


#include "BasicDoor.h"

// Sets default values
ABasicDoor::ABasicDoor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	DoorMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("SkeletalMeshComponent"));
	RootComponent = DoorMesh;

	bDoorOpen = false;
}


void ABasicDoor::ToggleAnim()
{
	if (bDoorOpen)
	{
		if (DoorOpenAnim)
		{
			DoorMesh->PlayAnimation(DoorOpenAnim, false);
		}
	}
	else
	{
		if (DoorCloseAnim)
		{
			DoorMesh->PlayAnimation(DoorCloseAnim, false);
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

void ABasicDoor::Use_Implementation()
{
	bDoorOpen = !bDoorOpen;
	ToggleAnim();
}


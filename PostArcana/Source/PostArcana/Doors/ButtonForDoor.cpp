// Fill out your copyright notice in the Description page of Project Settings.
//Author 1: Sebastian Comette
//Change Log: March 30th 2022
			//Created Button class for ButtonDoors.
			//To set this up you will need to drag a blueprint of the ButtonDoor and ButtonForDoor. Once both are in the level select the button...
			//Go to the drop down menu of ButtonDoors and select the door you would like the button to open. Currently one button opens one door.

#include "ButtonForDoor.h"
#include "ButtonDoor.h"

// Sets default values
AButtonForDoor::AButtonForDoor()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	//Mesh for the button. Set once a button model has been made
	ButtonBase = CreateDefaultSubobject<UStaticMeshComponent>("Button Mesh"); //Need a button model
	RootComponent = ButtonBase;

	//Get the proper door from the blueprint instance
	DoorToOpen = CreateDefaultSubobject<AButtonDoor>("Door");
}

// Called when the game starts or when spawned
void AButtonForDoor::BeginPlay()
{
	Super::BeginPlay();

}

//Toggles the doors state (open or closed)
//Uses the is an implementation for the use interface
void AButtonForDoor::Use_Implementation()
{
	DoorToOpen->DoorToggle();
}

// Called every frame
void AButtonForDoor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}


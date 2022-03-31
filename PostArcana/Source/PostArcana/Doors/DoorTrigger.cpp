// Fill out your copyright notice in the Description page of Project Settings.
//Author 1: Sebastian Comette
//Change Log: March 30th 2022
			//Created DoorTrigger class for TriggerDoors - this does not use the use interface, other wise the player hitting E on the trigger would open the door even if the player was not in the trigger.
			//To set this up you will need to do the same as you would for a button door. See ButtonDoor change log for more information


#include "DoorTrigger.h"
#include "TriggerDoor.h"
#include "Components/BoxComponent.h"

// Sets default values
ADoorTrigger::ADoorTrigger()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	//Setting up the trigger volume
	BoxComponent = CreateDefaultSubobject<UBoxComponent>("Collision Box");
	BoxComponent->SetBoxExtent(FVector(60, 60, 120)); //Set the size of the collision volume 
	BoxComponent->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);
	BoxComponent->SetCollisionProfileName("OverlapAll");
	RootComponent = BoxComponent;
}

// Called when the game starts or when spawned
void ADoorTrigger::BeginPlay()
{
	Super::BeginPlay();

}

//Tells the door to toggle. this one does not use the interface class.
void ADoorTrigger::ToggleDoor()
{
	DoorToOpen->DoorToggle();
}

// Called every frame
void ADoorTrigger::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}


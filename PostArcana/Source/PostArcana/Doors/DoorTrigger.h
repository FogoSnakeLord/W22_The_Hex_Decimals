// Fill out your copyright notice in the Description page of Project Settings.
//Author 1: Sebastian Comette
//Change Log: March 30th 2022
			//Created DoorTrigger class for TriggerDoors.
			//To set this up you will need to do the same as you would for a button door. See ButtonDoor change log for more information

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "DoorTrigger.generated.h"

class ATriggerDoor;
class UBoxComponent;

UCLASS()
class POSTARCANA_API ADoorTrigger : public AActor
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	ADoorTrigger();

	//This is the trigger volume for the trigger
	UPROPERTY(VisibleDefaultsOnly, Category = Collider)
		UBoxComponent* BoxComponent;

	//Tells the trigger which door to open or close, so if there are multiple trigger doors they dont all open.
	//SET IN BLUEPRINT INSTANCE ONCE THE DOOR IS IN THE LEVEL
	UPROPERTY(EditAnywhere, Category = DoorButton)
		ATriggerDoor* DoorToOpen;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:

	//Toggels the doors state(open or closed)
	void ToggleDoor();

	// Called every frame
	virtual void Tick(float DeltaTime) override;

};

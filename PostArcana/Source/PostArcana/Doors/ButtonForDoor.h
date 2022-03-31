// Fill out your copyright notice in the Description page of Project Settings.
//Author 1: Sebastian Comette
//Change Log: March 30th 2022
			//Created Button class for ButtonDoors.
			//To set this up you will need to drag a blueprint of the ButtonDoor and ButtonForDoor. Once both are in the level select the button...
			//Go to the drop down menu of ButtonDoors and select the door you would like the button to open. Currently one button opens one door.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "UseInterface.h"
#include "ButtonForDoor.generated.h"

class AButtonDoor;

UCLASS()
class POSTARCANA_API AButtonForDoor : public AActor, public IUseInterface
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	AButtonForDoor();

	//Static Mesh for the door button
	//Currently this is not used and I have added a Cube in the blueprint to represent the button.
	//When a button mesh has been made remove the cube from the blueprint and set the button mesh in the blueprint 
	UPROPERTY(EditAnywhere, Category = DoorButton)
		UStaticMeshComponent* ButtonBase;

	//Tells the button which door to open. This way it does not open all button doors in the level
	//SET IN THE BLUEPRINT INSTANCE INSIDE THE LEVEL
	UPROPERTY(EditAnywhere, Category = DoorButton)
		AButtonDoor* DoorToOpen;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:

	//override of the interface class's function.
	//Tells the door selected in the blueprint instance to toggle
	virtual void Use_Implementation() override;
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};

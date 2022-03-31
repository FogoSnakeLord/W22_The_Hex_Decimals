// Fill out your copyright notice in the Description page of Project Settings.
//Author 1: Sebastian Comette
//Change Log: March 30th 2022
			//Created the button door class. This is a door that is opened and close with a button ONLY. 
			//Set the collision to work like the basic door

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ButtonDoor.generated.h"

UCLASS()
class POSTARCANA_API AButtonDoor : public AActor
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	AButtonDoor();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	//Skeletal Mesh for the button door
	UPROPERTY(EditAnywhere, Category = "Basic Door")
		class USkeletalMeshComponent* DoorMesh;

	//animation for opening the door
	UPROPERTY(EditAnywhere, Category = "Basic Door")
		UAnimationAsset* DoorOpenAnim;

	//animation for closing the door
	UPROPERTY(EditAnywhere, Category = "Basic Door")
		UAnimationAsset* DoorCloseAnim;

	// holds the door's current state (open or closed)
	bool bDoorOpen;

	//Plays the proper animation for the doors change in state (open to closed or closed to open)
	UFUNCTION()
		void ToggleAnim();

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	//Toggles the doors state (open or closed)
	UFUNCTION()
		void DoorToggle();

};

// Fill out your copyright notice in the Description page of Project Settings.

//Author 1: Sebastian Comette
//Change Log: March 29th 2022
			//Created the basic door class, exectued by a type cast in the player on interact
//Change Log: March 30th 2022
			//Changed the basic door class to use a use interface so that the players interact button could be used on all doors without a bunch of...
			//..type casts
			//Change collision profiles for when the door is opened and closed so that the door itself would not stop the player when open

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "UseInterface.h"
#include "BasicDoor.generated.h"

UCLASS()
class POSTARCANA_API ABasicDoor : public AActor, public IUseInterface
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	ABasicDoor();


protected:

	//Set the skeletal mesh for the door
	UPROPERTY(EditAnywhere, Category = "Basic Door")
		class USkeletalMeshComponent* DoorMesh;

	//Open door animation
	UPROPERTY(EditAnywhere, Category = "Basic Door")
		UAnimationAsset* DoorOpenAnim;

	//Close door animation
	UPROPERTY(EditAnywhere, Category = "Basic Door")
		UAnimationAsset* DoorCloseAnim;

	//hold the state of the door (open or closed)
	bool bDoorOpen;

	//Plays the door open or close animations 
	UFUNCTION()
		void ToggleAnim();

	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	//Implementation of the use interface class instigated by the player
	virtual void Use_Implementation() override;


};

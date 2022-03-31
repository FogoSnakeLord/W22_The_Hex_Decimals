// Fill out your copyright notice in the Description page of Project Settings.
//Change Log: March 30th 2022
			//Created TriggerDoor class. This is a door that is opened or closed when a player enters a DoorTrigger
#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "TriggerDoor.generated.h"


UCLASS()
class POSTARCANA_API ATriggerDoor : public AActor
{
	GENERATED_BODY()

public:

	//Currently this door's code is identical to the code for the button door. 
	//I made this a different class incase we want to made difference to the functionality between the doors. Ie - a slam door sound, or maybe the door breaks when the trigger is hit
	//Also level design will be easier if triggers can only open trigger doors, and buttons can only open button doors.

	// Sets default values for this actor's properties
	ATriggerDoor();

	//Skeletal Mesh for the Door - Skeletal because it has a bone that it uses as a pivot point.
	UPROPERTY(EditAnywhere, Category = "Basic Door")
		class USkeletalMeshComponent* DoorMesh;

	//The animation for the door opening - made using the skeletal mesh
	UPROPERTY(EditAnywhere, Category = "Basic Door")
		UAnimationAsset* DoorOpenAnim;

	//The animation for the door closing - made using the skeletal mesh
	UPROPERTY(EditAnywhere, Category = "Basic Door")
		UAnimationAsset* DoorCloseAnim;

	//Bool used to tell if the door is open or not.
	bool bDoorOpen;

	//Function that triggers the animation of the door to play based on bDoorOpen
	UFUNCTION()
		void ToggleAnim();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:

	//This function is what actually toggles bDoorOpen and calls the animation
	UFUNCTION()
		void DoorToggle();
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};

// Fill out your copyright notice in the Description page of Project Settings.
//Author 1: Sebastian Comette
//Change Log: April 6th 2022
			//Created Locked Door Class
#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "UseInterface.h"
#include "LockedDoor.generated.h"

class ADoorKey;

UCLASS()
class POSTARCANA_API ALockedDoor : public AActor, public IUseInterface
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ALockedDoor();

	//Set the skeletal mesh for the door
	UPROPERTY(EditAnywhere, Category = "Locked Door")
		class USkeletalMeshComponent* DoorMesh;

	//Open door animation
	UPROPERTY(EditAnywhere, Category = "Locked Door")
		UAnimationAsset* DoorOpenAnim;

	//Close door animation
	UPROPERTY(EditAnywhere, Category = "Locked Door")
		UAnimationAsset* DoorCloseAnim;

	//hold the state of the door (open or closed)
	bool bDoorOpen;

	//Plays the door open or close animations 
	UFUNCTION()
		void ToggleAnim();


	//Tells the button which key is needed to open the door. This way it does not create a master key for the level
	//SET IN THE BLUEPRINT INSTANCE INSIDE THE LEVEL
	UPROPERTY(EditAnywhere, Category = DoorButton)
		ADoorKey* KeyNeeded;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	

	//Implementation of the use interface class instigated by the player
	virtual void Use_Implementation() override;

	// Called every frame
	virtual void Tick(float DeltaTime) override;

};

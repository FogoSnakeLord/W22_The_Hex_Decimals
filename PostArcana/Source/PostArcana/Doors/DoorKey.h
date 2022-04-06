// Fill out your copyright notice in the Description page of Project Settings.
//Author 1: Sebastian Comette
//Change Log: April 6th 2022
			//Created Door Key Class
#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "UseInterface.h"
#include "DoorKey.generated.h"

class APostArcanaCharacter;
class UBoxComponent;

UCLASS()
class POSTARCANA_API ADoorKey : public AActor, public IUseInterface
{
	GENERATED_BODY()
	
public:	
	
	// Sets default values for this actor's properties
	ADoorKey();

	//Set the skeletal mesh for the key
	UPROPERTY(EditAnywhere, Category = "Door Key")
		class UStaticMeshComponent* KeyMesh;

	//Gets the player that the key should go to
	//Then this class can call pPlayer->GetKey(); to give the player this key
	void SetPlayerPointer(APostArcanaCharacter* pPlayer);

	//Pointer to the player to allow for the key to call the players functions
	class APostArcanaCharacter* m_pPlayer;

	//a Box collider for the key to make it easier to pick up
	//without this the ray cast needs to hit the Skeletal mesh which is small
	UPROPERTY(EditAnywhere, Category = "Door Key")
		UBoxComponent* BoxCollider;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	

	//Implementation of the use interface class instigated by the player
	virtual void Use_Implementation() override;

	// Called every frame
	virtual void Tick(float DeltaTime) override;

};

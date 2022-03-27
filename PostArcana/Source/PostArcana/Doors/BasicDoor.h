// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "BasicDoor.generated.h"

UCLASS()
class POSTARCANA_API ABasicDoor : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ABasicDoor();

	UFUNCTION()
		void ToggleDoor();


protected:

	UPROPERTY(EditAnywhere, Category = "Basic Door")
		class USkeletalMeshComponent* DoorMesh;

	UPROPERTY(EditAnywhere, Category = "Basic Door")
		UAnimationAsset* DoorOpenAnim;
	
	UPROPERTY(EditAnywhere, Category = "Basic Door")
		UAnimationAsset* DoorCloseAnim;

	bool bDoorOpen;
	
	UFUNCTION()
		void ToggleAnim();

	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	//Questionable


};

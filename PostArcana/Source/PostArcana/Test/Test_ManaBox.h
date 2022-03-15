// Fill out your copyright notice in the Description page of Project Settings.
//Author 1: Sebastian Comette
//Change Log: Feb 2nd 2022
			//Set up Mana box to test Mana replen 
#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Test_ManaBox.generated.h"

class UBoxComponent;

UCLASS()
class POSTARCANA_API ATest_ManaBox : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ATest_ManaBox();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UPROPERTY(VisibleDefaultsOnly, Category = Mesh)
		UBoxComponent* BoxComponent;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;


	UPROPERTY(EditAnywhere, Category = Damage)
		int ManaAmnt = 10;

};

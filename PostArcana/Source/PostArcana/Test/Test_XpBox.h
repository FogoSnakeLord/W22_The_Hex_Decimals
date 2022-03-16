// Fill out your copyright notice in the Description page of Project Settings.
// Author 1: Sebastian Comette
//Change Log: March 9th 2022
			//Set up experience test box so that the player could level up and test stat allocation

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Test_XpBox.generated.h"

class UBoxComponent;

UCLASS()
class POSTARCANA_API ATest_XpBox : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ATest_XpBox();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UPROPERTY(VisibleDefaultsOnly, Category = Mesh)
		UBoxComponent* BoxComponent;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	//Base amount - can be set in the editor for multiple tests at different values 
	UPROPERTY(EditAnywhere, Category = Damage)
		int XpAmnt = 75;

};

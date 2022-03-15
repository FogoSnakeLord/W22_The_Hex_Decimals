// Fill out your copyright notice in the Description page of Project Settings.
//Author 1: Sebastian Comette
//Change Log: Feb 2nd 2022
			//Set up Damage box to test health lowering

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Test_DamageBox.generated.h"

class UBoxComponent;

UCLASS()
class POSTARCANA_API ATest_DamageBox : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ATest_DamageBox();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;


	UPROPERTY(VisibleDefaultsOnly, Category = Mesh)
		UBoxComponent* BoxComponent;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UPROPERTY(EditAnywhere, Category = Damage)
		int DMG = 10;
};

// Fill out your copyright notice in the Description page of Project Settings.

//Author 1: Danylo Cardoso
//Change Log : April 13th 2022
			  //Created item class, which fills inventory slots

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Item.generated.h"

UCLASS()
class POSTARCANA_API AItem : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AItem();

	virtual void Use();


	UPROPERTY(BlueprintReadOnly, meta = (Bindwidget))
		class UImage* Icon;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};

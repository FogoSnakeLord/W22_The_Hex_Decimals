// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "PostArcanaPlayerController.generated.h"

/**
 * 
 */
UCLASS()
class POSTARCANA_API APostArcanaPlayerController : public APlayerController
{
	GENERATED_BODY()
	virtual void BeginPlay() override;

public:
	UPROPERTY()
	class UPostArcanaMenu* MenuWidget;

	UPROPERTY(EditDefaultsOnly)
		TSubclassOf<UPostArcanaMenu> MenuBP;

protected:
	virtual void SetupInputComponent() override;
	//Turns the menu on and off
	void MenuToggle();
	
};

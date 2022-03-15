// Copyright Epic Games, Inc. All Rights Reserved.
//Author 1: Sebastian Comette
//Change Log: Feb 18th 2022
			//Set up hud to show the players health, mana, and defence
//Change Log: Feb 23rd 2022
			  //Added animations to the health and mana bar in blueprints.

#pragma once 

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "PostArcanaHUD.generated.h"

UCLASS()
class APostArcanaHUD : public AHUD
{
	GENERATED_BODY()

public:
	APostArcanaHUD();

	UPROPERTY(EditAnywhere, Category = "Game Hud")
		TSubclassOf<class UUserWidget> PlayerGuiClass;

	UPROPERTY()
		class UUserWidget* PlayerGui;

	/** Primary draw call for the HUD */
	virtual void DrawHUD() override;

	virtual void BeginPlay() override;

private:
	/** Crosshair asset pointer */
	class UTexture2D* CrosshairTex;

};


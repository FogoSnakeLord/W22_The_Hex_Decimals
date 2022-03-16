// Fill out your copyright notice in the Description page of Project Settings.
//Space for Danylo (Author 1)

//Author 2: Sebastian Comette
//Change Log: March 9th 2022
			  //Added a level up system to the menu, including skill points, experience, and removed buttons to allocate skill points.
//Change Log: March 11th 2022
			  //Added Controller input and set focus to the first button on the menu.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "PostArcanaMenu.generated.h"

/**
 * 
 */

class UTextBlock;
class UProgressBar;

UCLASS()
class POSTARCANA_API UPostArcanaMenu : public UUserWidget
{
	GENERATED_BODY()
	
	virtual bool Initialize() override;

	virtual void NativeTick(const FGeometry& MyGeometry, float InDeltaTime) override;

	//Menu sections
	UTextBlock* stats;
	UTextBlock* SPoints;
	UTextBlock* PlayerLevel;
	UTextBlock* ExperienceNumbers;
	UProgressBar* xpBar;

public:
	bool IsActive;

	//Toggles the input while menu is open
	void ToggleInput(bool active);

	//Used to Set up the buttons to allocate skill points
	virtual void NativeConstruct() override;

};

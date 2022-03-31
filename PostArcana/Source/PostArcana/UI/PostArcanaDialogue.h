// Fill out your copyright notice in the Description page of Project Settings.

//Author 1: Danylo Cardoso
//Change Log : Feb 16th 2022
			  //Created menu class, which displays the player's stats when the menu key is pressed
			  
//Author 2: Sebastian Comette
//Change Log: March 9th 2022
			  //Added a level up system to the menu, including skill points, experience, and buttons to allocate skill points.
//Change Log: March 11th 2022
			  //Added Controller input and set focus to the first button on the menu.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "PostArcanaDialogue.generated.h"

/**
 * 
 */

class UTextBlock;
class PostArcanaNPCharacter;

UCLASS()
class POSTARCANA_API UPostArcanaDialogue : public UUserWidget
{
	GENERATED_BODY()
	
	virtual bool Initialize() override;

	virtual void NativeTick(const FGeometry& MyGeometry, float InDeltaTime) override;

	//Menu sections
	UTextBlock* speech;
	UPROPERTY(EditAnywhere, Category = NPC)
		ACharacter* owningNPC;
public:
	bool IsActive;

	//Toggles the input while menu is open
	void ToggleInput(bool active);
	void SetText(FText newText);
	//Used to Set up the buttons to allocate skill points
	virtual void NativeConstruct() override;
	UPROPERTY(EditAnywhere,Category = Speech)
		FText speechText = FText::FromString(FString::Printf(TEXT("TEST DIALOGUE PLEASE CHANGE")));
	
};

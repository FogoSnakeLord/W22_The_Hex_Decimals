// Fill out your copyright notice in the Description page of Project Settings.

//Author: Danylo Cardoso
//Change Log : Feb 16th 2022
              //Hooked menu blueprint to player controller.Input to open and close the menu was added as well.
			  
//Author 2: Sebastian Comette
//Change Log: March 11th 2022
			  //changed menu button to 'k' and added a game pause on menu open/ resume on menu close

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

	UPROPERTY()
		class UPostArcanaDialogue* DialogueWidget;

	UPROPERTY(EditDefaultsOnly)
		TSubclassOf<UPostArcanaMenu> MenuBP;

	UPROPERTY(EditDefaultsOnly)
		TSubclassOf<UPostArcanaDialogue> DialogueBP;
	void SetDialogueText(FText newText);
	void SetDialogueName(FText newName);
	UFUNCTION()
		FText GetDialogueName();
	UFUNCTION()
		bool GetDialogueActive();
	void DialogueToggle();
protected:
	virtual void SetupInputComponent() override;
	//Turns the menu on and off
	void MenuToggle();
	
};

// Fill out your copyright notice in the Description page of Project Settings.

//Author: Danylo Cardoso
//Change Log : Feb 16th 2022
			  //Hooked menu blueprint to player controller.Input to open and close the menu was added as well.

//Author 2: Sebastian Comette
//Change Log: March 11th 2022
			  //changed menu button to 'k' and added a game pause on menu open/ resume on menu close

#include "PostArcanaPlayerController.h"
#include "PostArcana/UI/PostArcanaMenu.h"
#include "PostArcanaCharacter.h"
#include "PostArcana/UI/PostArcanaDialogue.h"

void APostArcanaPlayerController::BeginPlay()
{

	
	Super::BeginPlay();
	if (MenuBP != nullptr)
	{
		MenuWidget = CreateWidget<UPostArcanaMenu>(this, MenuBP);
		MenuWidget->AddToViewport();
		
		//Sets the Stat menu to not be active on start
		EMouseCursor::Default;
		MenuWidget->SetIsEnabled(false);
		MenuWidget->ToggleInput(false);
		MenuWidget->SetVisibility(ESlateVisibility::Hidden);
		
		//Allows for menu input while the game is paused
		SetTickableWhenPaused(true);
		bShouldPerformFullTickWhenPaused = true;
	}
	if (DialogueBP != nullptr)
	{
		DialogueWidget = CreateWidget<UPostArcanaDialogue>(this, DialogueBP);
		DialogueWidget->AddToViewport();

		//Sets the Stat menu to not be active on start
		EMouseCursor::Default;
		DialogueWidget->SetIsEnabled(false);
		DialogueWidget->ToggleInput(false);
		DialogueWidget->SetVisibility(ESlateVisibility::Hidden);

		//Allows for menu input while the game is paused
		SetTickableWhenPaused(true);
		bShouldPerformFullTickWhenPaused = true;
	}
}
//Setter for Dialogue Text
void APostArcanaPlayerController::SetDialogueText(FText newText)
{
	if (DialogueBP) {
		DialogueWidget->SetText(newText);
	}
}
//Setter for Dialogue name
void APostArcanaPlayerController::SetDialogueName(FText newName)
{
	if (DialogueBP) {
		DialogueWidget->SetName(newName);
	}
}

void APostArcanaPlayerController::SetupInputComponent()
{
	Super::SetupInputComponent();

	//Bind 'k' to open the menu
	if (InputComponent != nullptr)
	{
		InputComponent->BindAction("MenuToggle", IE_Pressed, this, &APostArcanaPlayerController::MenuToggle);
	}
}

//Opens and closes the stat menu
void APostArcanaPlayerController::MenuToggle()
{
	MenuWidget->SetIsEnabled(!MenuWidget->bIsEnabled);

	if (MenuWidget->bIsEnabled == false) //Closes the menu
	{
		//Removes the menu from view
		MenuWidget->ToggleInput(false);
		MenuWidget->SetVisibility(ESlateVisibility::Hidden);
		
		//disbale mouse input and unpauses the game
		bEnableMouseOverEvents = false;
		bShowMouseCursor = false;
		bEnableClickEvents = false;
		SetPause(false);
		
		//Allows for game input and not menu input
		FInputModeGameOnly Game;
		SetInputMode(Game);//without this you have to click back into the game after clicking the menu when mouse is active - may be worth doing an UI one for the menus


	}
	else //Opens the menu
	{

		MenuWidget->ToggleInput(true);
	    MenuWidget->SetVisibility(ESlateVisibility::Visible);
		
		//Pauses the game on menu open
		Pause();
		
		//Allows for menu input with the mouse
		bEnableMouseOverEvents = true;
		bShowMouseCursor = true;
		bEnableClickEvents = true;
		FInputModeGameAndUI  Both;
		SetInputMode(Both); //Needed to allow for seemless interaction with the UI but game also needs to be there to allow for input to close the window
	}


}

//Getter for Diaolgue name
FText APostArcanaPlayerController::GetDialogueName()
{
	if (DialogueBP) {
		return DialogueWidget->GetName();
	}
	else{
		return FText();
	}
}

//Getter for isActive
bool APostArcanaPlayerController::GetDialogueActive()
{
	if (DialogueBP) {
		return DialogueWidget->GetActive();
	}
	else {
		return false;
	}
}

void APostArcanaPlayerController::DialogueToggle()
{

	DialogueWidget->SetIsEnabled(!DialogueWidget->bIsEnabled);

	if (DialogueWidget->bIsEnabled == false) //Closes the menu
	{
		//Removes the menu from view
		DialogueWidget->ToggleInput(false);
		DialogueWidget->SetVisibility(ESlateVisibility::Hidden);
		//Denotes the window as inactive
		DialogueWidget->SetActive(false);
		
	}
	else //Opens the menu
	{

		DialogueWidget->ToggleInput(true);
		DialogueWidget->SetVisibility(ESlateVisibility::Visible);
		//Denotes the window as active
		DialogueWidget->SetActive(true);
	}


}

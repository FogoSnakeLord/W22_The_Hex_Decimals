// Fill out your copyright notice in the Description page of Project Settings.


#include "PostArcanaPlayerController.h"
#include "PostArcanaMenu.h"
#include "PostArcanaCharacter.h"

void APostArcanaPlayerController::BeginPlay()
{

	
	Super::BeginPlay();
	if (MenuBP != nullptr)
	{
		MenuWidget = CreateWidget<UPostArcanaMenu>(this, MenuBP);
		MenuWidget->AddToViewport();
		
		//SPRINT 3
		EMouseCursor::Default;
		MenuWidget->SetIsEnabled(false);
		MenuWidget->ToggleInput(false);
		MenuWidget->SetVisibility(ESlateVisibility::Hidden);
	}

}

void APostArcanaPlayerController::SetupInputComponent()
{
	Super::SetupInputComponent();
	if (InputComponent != nullptr)
	{
		InputComponent->BindAction("MenuToggle", IE_Pressed, this, &APostArcanaPlayerController::MenuToggle);
	}
}

//SPRINT 3
void APostArcanaPlayerController::MenuToggle()
{
	MenuWidget->SetIsEnabled(!MenuWidget->bIsEnabled);

	if (MenuWidget->bIsEnabled == false)
	{
		MenuWidget->ToggleInput(false);
		MenuWidget->SetVisibility(ESlateVisibility::Hidden);
		
		//SPRINT 3
		bEnableMouseOverEvents = false;
		bShowMouseCursor = false;
		bEnableClickEvents = false;
		FInputModeGameOnly Game;
		SetInputMode(Game);//without this you have to click back into the game after clicking the menu when mouse is active - may be worth doing an UI one for the menus


	}
	else
	{
		MenuWidget->ToggleInput(true);
	    MenuWidget->SetVisibility(ESlateVisibility::Visible);
		
		//SPRINT 3
		bEnableMouseOverEvents = true;
		bShowMouseCursor = true;
		bEnableClickEvents = true;
		FInputModeGameAndUI  Both;
		SetInputMode(Both); //Needed to allow for seemless interaction with the UI but game also needs to be there to allow for input to close the window
	}


}

// Fill out your copyright notice in the Description page of Project Settings.


#include "PostArcanaPlayerController.h"
#include "PostArcanaMenu.h"

void APostArcanaPlayerController::BeginPlay()
{
	Super::BeginPlay();
	if (MenuBP != nullptr)
	{
		MenuWidget = CreateWidget<UPostArcanaMenu>(this, MenuBP);
		MenuWidget->AddToViewport();
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

void APostArcanaPlayerController::MenuToggle()
{
	MenuWidget->SetIsEnabled(!MenuWidget->bIsEnabled);

	if (MenuWidget->bIsEnabled == false)
	{
		MenuWidget->SetVisibility(ESlateVisibility::Hidden);
	}
	else
	{
	    MenuWidget->SetVisibility(ESlateVisibility::Visible);
	}
}

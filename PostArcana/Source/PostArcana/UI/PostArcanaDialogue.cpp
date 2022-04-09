// Fill out your copyright notice in the Description page of Project Settings.

//Author 1: Danylo Cardoso
//Change Log : Feb 16th 2022
		      //Created menu class, which displays the player's stats when the menu key is pressed
			  
//Author 2: Sebastian Comette
//Change Log: March 9th 2022
			  //Added a level up system to the menu, including skill points, experience, and buttons to allocate skill points.
//Change Log: March 11th 2022
			  //Added Controller input and set focus to the first button on the menu.

#include "PostArcanaDialogue.h"
#include "PostArcana/AI/PostArcanaNPCharacter.h"
#include "PostArcana/Player/PostArcanaCharacter.h"
#include "Components/Image.h"
#include "Components/TextBlock.h"
#include "Components/ProgressBar.h"
#include "Components/Button.h"

bool UPostArcanaDialogue::Initialize()
{
	bool bResult = Super::Initialize();

	if (bResult == false)
	{
		return false;
	}
	speech = Cast<UTextBlock>(GetWidgetFromName("speech"));
	return true;
}

void UPostArcanaDialogue::NativeTick(const FGeometry& MyGeometry, float InDeltaTime)
{
	Super::NativeTick(MyGeometry, InDeltaTime);

	//Ensure there is a player
	APostArcanaCharacter* character = Cast<APostArcanaCharacter>(GetOwningPlayerPawn());
	if (character == nullptr)
	{
		return;
	}
	//Updates the player's stats in a block of text
	speech = Cast<UTextBlock>(GetWidgetFromName("speech"));
	if (speech)
	{
		speech->SetText(speechText);
	}
}


//Used at start to construct the menu
void UPostArcanaDialogue::NativeConstruct()
{
	Super::NativeConstruct();

	//Get the owning player and make sure it is not a nullptr
	APostArcanaCharacter* character = Cast<APostArcanaCharacter>(GetOwningPlayerPawn());
	if (character == nullptr)
	{
		return;
	}

	////Set the background for the menu
	//UImage* texture = Cast<UImage>(GetWidgetFromName("Image_0"));
	//if (texture)
	//{
	//	texture->SetColorAndOpacity(FLinearColor::Gray);
	//}

	//Updates the player's stats in a block of text
	speech = Cast<UTextBlock>(GetWidgetFromName("speech"));
	if (speech)
	{
		speech->SetText(speechText);
	}
}

void UPostArcanaDialogue::SetText(FText newText)
{
	speechText = newText;
}

void UPostArcanaDialogue::SetName(FText newName)
{
	name = newName;
}

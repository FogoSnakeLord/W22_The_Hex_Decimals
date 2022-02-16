// Fill out your copyright notice in the Description page of Project Settings.


#include "PostArcanaMenu.h"
#include "PostArcanaCharacter.h"
#include "Components/Image.h"
#include "Components/TextBlock.h"
#include "Components/ProgressBar.h"

bool UPostArcanaMenu::Initialize()
{
	bool bResult = Super::Initialize();

	if (bResult == false)
	{
		return false;
	}

	return true;
}

void UPostArcanaMenu::NativeTick(const FGeometry& MyGeometry, float InDeltaTime)
{
	Super::NativeTick(MyGeometry, InDeltaTime);

	APostArcanaCharacter* character = Cast<APostArcanaCharacter>(GetOwningPlayerPawn());
	if (character == nullptr)
	{
		return;
	}

	//Set the background for the menu
	UImage* texture = Cast<UImage>(GetWidgetFromName("Image_0"));
	if (texture)
	{
		texture->SetColorAndOpacity(FLinearColor::Gray);
	}

	//Displays the player's stats in a block of text
	UTextBlock* stats = Cast<UTextBlock>(GetWidgetFromName("Stats"));
	if (stats)
	{   
		stats->SetText(FText::FromString(FString::Printf(TEXT("Endurance:         %d\nIntelligence:       %d\nWill:                       %d\nAgility:                  %d\nToughness:        %d"),
		character->GetEndurance(), character->GetIntelligence(), character->GetWill(), character->GetAgility(), character->GetToughness())));
	}
	//Displays the player's xp progress
	UProgressBar* xpBar = Cast<UProgressBar>(GetWidgetFromName("XpBar"));
	if (xpBar)
	{
		//Change the hard-coded value for xp variables once those are implemented
		xpBar->SetPercent(0.2f);
	}
}

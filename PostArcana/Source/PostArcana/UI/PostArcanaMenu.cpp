// Fill out your copyright notice in the Description page of Project Settings.

//Author 2: Sebastian Comette
//Change Log: March 9th 2022
			  //Added a level up system to the menu, including skill points, experience, and buttons to allocate skill points.
//Change Log: March 11th 2022
			  //Added Controller input and set focus to the first button on the menu.

#include "PostArcanaMenu.h"
#include "PostArcana/Player/PostArcanaCharacter.h"
#include "Components/Image.h"
#include "Components/TextBlock.h"
#include "Components/ProgressBar.h"
#include "Components/Button.h"

bool UPostArcanaMenu::Initialize()
{
	bool bResult = Super::Initialize();

	if (bResult == false)
	{
		return false;
	}

	//Set up experince progress bar and stat text block
	xpBar = Cast<UProgressBar>(GetWidgetFromName("XpBar"));
	stats = Cast<UTextBlock>(GetWidgetFromName("Stats"));
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

	//Updates the player's stats in a block of text
	stats = Cast<UTextBlock>(GetWidgetFromName("Stats"));
	if (stats)
	{   
		stats->SetText(FText::FromString(FString::Printf(TEXT("Endurance:         %d\nIntelligence:       %d\nWill:                       %d\nAgility:                  %d\nToughness:        %d"),
		character->GetEndurance(), character->GetIntelligence(), character->GetWill(), character->GetAgility(), character->GetToughness())));
	}

	//Updates the player's xp progress
	xpBar = Cast<UProgressBar>(GetWidgetFromName("XpBar"));
	if (xpBar)
	{
		float xp = character->ExperiencePoints;
		float Maxxp = character->MaxExperiencePoints;
		xpBar->SetPercent(xp / Maxxp);
	}

	//Updates the player's skill points in a block of text
	SPoints = Cast<UTextBlock>(GetWidgetFromName("SkillPoints"));
	if (SPoints)
	{
		SPoints->SetText(FText::FromString(FString::Printf(TEXT("Skill Points: %d"),
			character->SkillPoints)));
	}

	//Updates the amount of experince the player has in a text block
	ExperienceNumbers = Cast<UTextBlock>(GetWidgetFromName("XPBarText"));
	if (ExperienceNumbers)
	{
		ExperienceNumbers->SetText(FText::FromString(FString::Printf(TEXT("%d / %d"),
			character->ExperiencePoints, character->MaxExperiencePoints)));
	}

	//Updates current level
	PlayerLevel = Cast<UTextBlock>(GetWidgetFromName("Level"));
	if (PlayerLevel)
	{
		PlayerLevel->SetText(FText::FromString(FString::Printf(TEXT("Lvl: %d"),
			character->CurrentLevel)));
	}
}


//Used at start to construct the menu
void UPostArcanaMenu::NativeConstruct()
{
	Super::NativeConstruct();

	//Get the owning player and make sure it is not a nullptr
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



	//Buttons used for skill point allocation 
	UButton* EnduranceInc = Cast<UButton>(GetWidgetFromName("EnduranceInc"));
	EnduranceInc->OnClicked.AddDynamic(character, &APostArcanaCharacter::EnduranceUp);

	UButton* IntInc = Cast<UButton>(GetWidgetFromName("IntInc"));
	IntInc->OnClicked.AddDynamic(character, &APostArcanaCharacter::IntelUp);


	UButton* WillInc = Cast<UButton>(GetWidgetFromName("WillInc"));
	WillInc->OnClicked.AddDynamic(character, &APostArcanaCharacter::WillUp);


	UButton* AgilInc = Cast<UButton>(GetWidgetFromName("AgilInc"));
	AgilInc->OnClicked.AddDynamic(character, &APostArcanaCharacter::AgilUp);


	UButton* ToughInc = Cast<UButton>(GetWidgetFromName("ToughInc"));
	ToughInc->OnClicked.AddDynamic(character, &APostArcanaCharacter::ToughUp);

	UButton* Respec = Cast<UButton>(GetWidgetFromName("Respec"));
	Respec->OnClicked.AddDynamic(character, &APostArcanaCharacter::Respec);
	
	
	
	
	//Displays the player's stats in a block of text
	stats = Cast<UTextBlock>(GetWidgetFromName("Stats"));
	if (stats)
	{
		stats->SetText(FText::FromString(FString::Printf(TEXT("Endurance:         %d\nIntelligence:       %d\nWill:                       %d\nAgility:                  %d\nToughness:        %d"),
			character->GetEndurance(), character->GetIntelligence(), character->GetWill(), character->GetAgility(), character->GetToughness())));
	}

	//Displays the player's xp progress
	xpBar = Cast<UProgressBar>(GetWidgetFromName("XpBar"));
	if (xpBar)
	{
		//Change the hard-coded value for xp variables once those are implemented
		float xp = character->ExperiencePoints;
		float Maxxp = character->MaxExperiencePoints;
		xpBar->SetPercent(xp / Maxxp);
	}

	//Displays the player's skill points in a block of text
	SPoints = Cast<UTextBlock>(GetWidgetFromName("SkillPoints"));
	if (SPoints)
	{
		SPoints->SetText(FText::FromString(FString::Printf(TEXT("Skill Points: %d"),
			character->SkillPoints)));
	}

	//Displays current level
	PlayerLevel = Cast<UTextBlock>(GetWidgetFromName("Level"));
	if (PlayerLevel)
	{
		PlayerLevel->SetText(FText::FromString(FString::Printf(TEXT("Lvl: %d"),
			character->CurrentLevel)));
	}
	
	//Displays the amount of experince the player has in a text block
	ExperienceNumbers = Cast<UTextBlock>(GetWidgetFromName("XPBarText"));
	if (ExperienceNumbers)
	{
		ExperienceNumbers->SetText(FText::FromString(FString::Printf(TEXT("%d / %d"),
			character->ExperiencePoints, character->MaxExperiencePoints)));
	}

}

//Removes player input while the menu is open, allowing interaction with the menu
void UPostArcanaMenu::ToggleInput(bool active)
{
	APostArcanaCharacter* character = Cast<APostArcanaCharacter>(GetOwningPlayerPawn());

	if (active)
	{
		GEngine->AddOnScreenDebugMessage(10, 10, FColor::Emerald, "Is Active", true);
		character->DisableInput(Cast<APlayerController>(character->GetController()));
		UButton* EnduranceInc = Cast<UButton>(GetWidgetFromName("EnduranceInc"));
		EnduranceInc->IsFocusable = true;
		EnduranceInc->SetUserFocus(Cast<APlayerController>(character->GetController()));
	}
	else
	{
		character->EnableInput(Cast<APlayerController>(character->GetController()));
		GEngine->AddOnScreenDebugMessage(10, 10, FColor::Red, "Not Active", true);
		bIsFocusable = false;
	}
}

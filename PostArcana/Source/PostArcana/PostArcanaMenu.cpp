// Fill out your copyright notice in the Description page of Project Settings.


#include "PostArcanaMenu.h"
#include "PostArcanaCharacter.h"
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

	ExperienceNumbers = Cast<UTextBlock>(GetWidgetFromName("XPBarText"));
	if (ExperienceNumbers)
	{
		ExperienceNumbers->SetText(FText::FromString(FString::Printf(TEXT("%d / %d"),
			character->ExperiencePoints, character->MaxExperiencePoints)));
	}

	//Displays current level
	PlayerLevel = Cast<UTextBlock>(GetWidgetFromName("Level"));
	if (PlayerLevel)
	{
		PlayerLevel->SetText(FText::FromString(FString::Printf(TEXT("Lvl: %d"),
			character->CurrentLevel)));
	}
}


//SPRINT 3
void UPostArcanaMenu::NativeConstruct()
{
	Super::NativeConstruct();

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



	//SPRINT 3
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
	
	ExperienceNumbers = Cast<UTextBlock>(GetWidgetFromName("XPBarText"));
	if (ExperienceNumbers)
	{
		ExperienceNumbers->SetText(FText::FromString(FString::Printf(TEXT("%d / %d"),
			character->ExperiencePoints, character->MaxExperiencePoints)));
	}

}

//SPRINT 3
void UPostArcanaMenu::ToggleInput(bool active)
{
	APostArcanaCharacter* character = Cast<APostArcanaCharacter>(GetOwningPlayerPawn());

	if (active)
	{
		GEngine->AddOnScreenDebugMessage(10, 10, FColor::Emerald, "Is Active", true);
		character->DisableInput(Cast<APlayerController>(character->GetController()));
	}
	else
	{
		character->EnableInput(Cast<APlayerController>(character->GetController()));
		GEngine->AddOnScreenDebugMessage(10, 10, FColor::Red, "Not Active", true);
	}
}

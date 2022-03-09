// Fill out your copyright notice in the Description page of Project Settings.

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

	UTextBlock* stats;
	UTextBlock* SPoints;
	UTextBlock* PlayerLevel;
	UTextBlock* ExperienceNumbers;
	UProgressBar* xpBar;

public:
	bool IsActive;

	void ToggleInput(bool active);

	virtual void NativeConstruct() override;

};

// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once 

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "PostArcanaHUD.generated.h"

UCLASS()
class APostArcanaHUD : public AHUD
{
	GENERATED_BODY()

public:
	APostArcanaHUD();

	/** Primary draw call for the HUD */
	virtual void DrawHUD() override;

private:
	/** Crosshair asset pointer */
	class UTexture2D* CrosshairTex;

};


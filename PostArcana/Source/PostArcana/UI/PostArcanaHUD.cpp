// Copyright Epic Games, Inc. All Rights Reserved.
// Author 1: Sebatian Comette
//Change Log: Feb 18th 2022
			//Set up hud to show the players health, mana, and defence
//Change Log: Feb 23rd 2022
			  //Added animations to the health and mana bar in blueprints.


#include "PostArcanaHUD.h"
#include "Engine/Canvas.h"
#include "Engine/Texture2D.h"
#include "TextureResource.h"
#include "CanvasItem.h"
#include "UObject/ConstructorHelpers.h"
#include "Blueprint/UserWidget.h"

APostArcanaHUD::APostArcanaHUD()
{
	// Set the crosshair texture
	static ConstructorHelpers::FObjectFinder<UTexture2D> CrosshairTexObj(TEXT("/Game/FirstPerson/Textures/FirstPersonCrosshair"));
	CrosshairTex = CrosshairTexObj.Object;
}


void APostArcanaHUD::DrawHUD()
{
	Super::DrawHUD();

	// Draw very simple crosshair

	// find center of the Canvas
	const FVector2D Center(Canvas->ClipX * 0.5f, Canvas->ClipY * 0.5f);

	// offset by half the texture's dimensions so that the center of the texture aligns with the center of the Canvas
	const FVector2D CrosshairDrawPosition( (Center.X),
										   (Center.Y + 20.0f));

	// draw the crosshair
	FCanvasTileItem TileItem( CrosshairDrawPosition, CrosshairTex->Resource, FLinearColor::White);
	TileItem.BlendMode = SE_BLEND_Translucent;
	Canvas->DrawItem( TileItem );
}

void APostArcanaHUD::BeginPlay()
{
	PlayerGui = CreateWidget<UUserWidget>(GetGameInstance(), PlayerGuiClass);
	PlayerGui->AddToViewport();
}

// Fill out your copyright notice in the Description page of Project Settings.

//Author: Danylo Cardoso
//Change Log : Mar 31st 2022
			  //Created InventoryDraggedItemVisual class, which displays a visual when a drag and drop occurs


#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "InventoryDraggedItemVisual.generated.h"

/**
 * 
 */
UCLASS()
class POSTARCANA_API UInventoryDraggedItemVisual : public UUserWidget
{
	GENERATED_BODY()
public:
	UPROPERTY(BlueprintReadOnly, meta = (Bindwidget))
		class UImage* Icon;
};

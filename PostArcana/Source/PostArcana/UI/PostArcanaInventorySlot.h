// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "PostArcanaInventorySlot.generated.h"

//Author: Danylo Cardoso
//Change Log : Mar 31st 2022
			  //Created PostArcanaInventorySlot, which registers drag and drop operations

//Author: Danylo Cardoso
//Change Log : April 13th 2022
			  //Added more complexity to inventory slot, better simulating the moving of items

class UInventoryDraggedItemVisual;
/**
 * 
 */
UCLASS()
class POSTARCANA_API UPostArcanaInventorySlot : public UUserWidget
{
	GENERATED_BODY()
protected:

	virtual FReply NativeOnMouseButtonDown(const FGeometry& InGeometry, const FPointerEvent& InMouseEvent) override;
	virtual void NativeOnDragDetected(const FGeometry& InGeometry, const FPointerEvent& InMouseEvent, UDragDropOperation*& OutOperation) override;
	virtual bool NativeOnDrop(const FGeometry& InGeometry, const FDragDropEvent& InDragDropEvent, UDragDropOperation* InOperation) override;
	virtual void NativeOnInitialized() override;
	
public:
	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<UInventoryDraggedItemVisual> ItemVisualBP;

	UPROPERTY(EditInstanceOnly)
		TSubclassOf<class AItem> CurrentItemBP;

	class AItem* CurrentItem;

};

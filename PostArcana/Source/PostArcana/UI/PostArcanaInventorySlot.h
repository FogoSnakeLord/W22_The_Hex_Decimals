// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "PostArcanaInventorySlot.generated.h"

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
	
public:
	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<UInventoryDraggedItemVisual> ItemVisualBP;

};

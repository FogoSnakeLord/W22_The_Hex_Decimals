// Fill out your copyright notice in the Description page of Project Settings.

//Author: Danylo Cardoso
//Change Log : Mar 31st 2022
			  //Created PostArcanaInventorySlot, which registers drag and drop operations

//Author: Danylo Cardoso
//Change Log : April 13th 2022
			  //Added more complexity to inventory slot, better simulating the moving of items

#include "../UI/PostArcanaInventorySlot.h"
#include "../UI/InventoryDraggedItemVisual.h"
#include "../UI/InventoryDragDropOperation.h"
#include "../Item.h"
#include "Components/Image.h"


void UPostArcanaInventorySlot::NativeOnInitialized()
{
	if (CurrentItemBP)
	{
		CurrentItem = NewObject<AItem>();
		UInventoryDraggedItemVisual* draggedVisual = CreateWidget<UInventoryDraggedItemVisual>(this, ItemVisualBP);
		UImage* texture = Cast<UImage>(GetWidgetFromName("ItemIcon"));
		if (texture)
		{
			texture->SetBrush(draggedVisual->Icon->Brush);
		}

	}
}

FReply UPostArcanaInventorySlot::NativeOnMouseButtonDown(const FGeometry& InGeometry, const FPointerEvent& InMouseEvent)
{
	FReply reply = Super::NativeOnMouseButtonDown(InGeometry, InMouseEvent);

	if (InMouseEvent.GetEffectingButton() == EKeys::LeftMouseButton)
	{
		reply.DetectDrag(TakeWidget(), EKeys::LeftMouseButton);
	}

	return reply;
}

void UPostArcanaInventorySlot::NativeOnDragDetected(const FGeometry& InGeometry, const FPointerEvent& InMouseEvent, UDragDropOperation*& OutOperation)
{
	if (CurrentItem && ItemVisualBP)
	{
		UInventoryDraggedItemVisual* draggedVisual = CreateWidget<UInventoryDraggedItemVisual>(this, ItemVisualBP);

		UInventoryDragDropOperation* dragAndDrop = NewObject< UInventoryDragDropOperation>();

		dragAndDrop->Payload = CurrentItem;

		dragAndDrop->DefaultDragVisual = draggedVisual;
		dragAndDrop->Pivot = EDragPivot::MouseDown;

		OutOperation = dragAndDrop;

		UImage* texture = Cast<UImage>(GetWidgetFromName("ItemIcon"));
		UImage* blank = Cast<UImage>(GetWidgetFromName("Blank"));
		if (texture && blank)
		{
			texture->SetBrush(blank->Brush);
		}

		CurrentItem = nullptr;

	}
}

bool UPostArcanaInventorySlot::NativeOnDrop(const FGeometry& InGeometry, const FDragDropEvent& InDragDropEvent, UDragDropOperation* InOperation)
{
	if (InOperation && CurrentItem == nullptr)
	{

		CurrentItem = Cast<AItem>(InOperation->Payload);

		UInventoryDraggedItemVisual* draggedVisual = Cast<UInventoryDraggedItemVisual>(InOperation->DefaultDragVisual);
		if (draggedVisual)
		{
			UImage* texture = Cast<UImage>(GetWidgetFromName("ItemIcon"));
			if (texture)
			{
				texture->SetBrush(draggedVisual->Icon->Brush);
			}
		}
	}
	return false;
}

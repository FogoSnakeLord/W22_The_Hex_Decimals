// Fill out your copyright notice in the Description page of Project Settings.


#include "../UI/PostArcanaInventorySlot.h"
#include "../UI/InventoryDraggedItemVisual.h"
#include "../UI/InventoryDragDropOperation.h"
#include "Components/Image.h"

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
	if (ItemVisualBP)
	{
		UInventoryDraggedItemVisual* draggedVisual = CreateWidget<UInventoryDraggedItemVisual>(this, ItemVisualBP);

		UInventoryDragDropOperation* dragAndDrop = NewObject< UInventoryDragDropOperation>();
		//dragAndDrop->Payload();
		dragAndDrop->DefaultDragVisual = draggedVisual;
		dragAndDrop->Pivot = EDragPivot::MouseDown;

		OutOperation = dragAndDrop;
	}
}

bool UPostArcanaInventorySlot::NativeOnDrop(const FGeometry& InGeometry, const FDragDropEvent& InDragDropEvent, UDragDropOperation* InOperation)
{
	if (InOperation)
	{
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

// Fill out your copyright notice in the Description page of Project Settings.


#include "BTDecorator_CheckBool.h"
#include "BehaviorTree/BlackboardComponent.h"


UBTDecorator_CheckBool::UBTDecorator_CheckBool(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
	NodeName = "Check Bool";

	//Add filter so it can only select/accept boolean keys
	BoolToCheck.AddBoolFilter(this, GET_MEMBER_NAME_CHECKED(UBTDecorator_CheckBool, BoolToCheck));
}



bool UBTDecorator_CheckBool::CalculateRawConditionValue(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory) const
{
	const UBlackboardComponent* BlackboardComp = OwnerComp.GetBlackboardComponent();
	if (BlackboardComp == nullptr)
	{
		return false;
	}
	return BlackboardComp->GetValueAsBool(BoolToCheck.SelectedKeyName);
}



FString UBTDecorator_CheckBool::GetStaticDescription() const
{
	return FString::Printf(TEXT("%s: '%s'"), TEXT("Bool Variable to Check"), BoolToCheck.IsSet() ? *BoolToCheck.SelectedKeyName.ToString() : TEXT(""));
}



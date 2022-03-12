// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "BTDecorator_CheckBool.generated.h"

/**
 * 
 */
UCLASS()
class POSTARCANA_API UBTDecorator_CheckBool : public UBTDecorator
{
	GENERATED_BODY()
public:
	UBTDecorator_CheckBool(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
protected:
	UPROPERTY(EditAnywhere, Category = Blackboard)
		FBlackboardKeySelector BoolToCheck;
public:
	/** calculates raw, core value of decorator's condition. Should not include calling IsInversed */
	virtual bool CalculateRawConditionValue(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory) const override;

	virtual FString GetStaticDescription() const override;
};

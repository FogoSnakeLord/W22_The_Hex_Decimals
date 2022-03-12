// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "BTTaskNode_FindRandomLocation.generated.h"

/**
 *
 */
UCLASS()
class POSTARCANA_API UBTTaskNode_FindRandomLocation : public UBTTaskNode
{
	GENERATED_BODY()
public:
	UBTTaskNode_FindRandomLocation(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());

	UPROPERTY(EditAnywhere, Category = Blackboard)
		FBlackboardKeySelector DestinationVector;

	UPROPERTY(EditAnywhere, Category = Parameters)
		float Radius = 300.f;



	virtual EBTNodeResult::Type ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory) override;

	virtual FString GetStaticDescription() const override;



};
// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/BTService.h"
#include "BTService_UpdateChasing.generated.h"

/**
 *
 */
UCLASS()
class POSTARCANA_API UBTService_UpdateChasing : public UBTService
{
	GENERATED_BODY()

public:
	UBTService_UpdateChasing(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());

	//Blackboard Keys
	UPROPERTY(EditAnywhere, Category = Blackboard)
		FBlackboardKeySelector CanSeePlayerKey;
	UPROPERTY(EditAnywhere, Category = Blackboard)
		FBlackboardKeySelector PlayerKey;
	UPROPERTY(EditAnywhere, Category = Blackboard)
		FBlackboardKeySelector LastKnownPositionKey;


	UPROPERTY(EditAnywhere, Category = PlayerClass)
		TSubclassOf<AActor> PlayerClass;

protected:
	//Called when node becomes active
	virtual void OnBecomeRelevant(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory) override;
	virtual void TickNode(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory, float DeltaSeconds) override;


private:

	bool bLastCanSeePlayer;
};

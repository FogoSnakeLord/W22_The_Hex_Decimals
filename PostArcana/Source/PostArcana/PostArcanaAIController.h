// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AIController.h"
#include "Perception/AIPerceptionComponent.h"
#include "Perception/AISense_Sight.h"
#include "Perception/AISenseConfig_Sight.h"
#include "PostArcanaAIController.generated.h"

/**
 * 
 */
UCLASS()
class POSTARCANA_API APostArcanaAIController : public AAIController
{
	GENERATED_BODY()

	APostArcanaAIController();

	UAISenseConfig_Sight* SightConfig;

public:

	FVector LastKnownPlayerPosition;
	bool bCanSeePlayer;

	UPROPERTY(EditAnywhere)
		UBehaviorTree* BehaviorTree;

	virtual void OnPossess(class APawn* InPawn) override;
protected:
	UFUNCTION()
		void OnTargetPerceptionUpdate(AActor* Actor, FAIStimulus Stimulus);


	UFUNCTION()
		void OnPerceptionUpdated(const TArray<AActor*>& UpdatedActors);
};

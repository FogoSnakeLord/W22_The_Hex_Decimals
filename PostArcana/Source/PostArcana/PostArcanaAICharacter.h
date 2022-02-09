// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameObject.h"
#include "GenericTeamAgentInterface.h"
#include "BehaviorTree/BehaviorTree.h"
#include "PostArcanaAICharacter.generated.h"
/**
 * 
 */
UCLASS()
class POSTARCANA_API APostArcanaAICharacter : public AGameObject, public IGenericTeamAgentInterface
{
	GENERATED_BODY()
public:
	APostArcanaAICharacter();
	/** Base turn rate, in deg/sec. Other scaling may affect final turn rate. */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera)
		float BaseTurnRate;

	/** Base look up/down rate, in deg/sec. Other scaling may affect final rate. */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera)
		float BaseLookUpRate;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, category = AI)
		UBehaviorTree* BehaviorTree;

	UPROPERTY(EditAnywhere, Category = "TEAM_ID")
		FGenericTeamId GenericTeamId; // 0 = Stagnant, 1 = chasing character

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Perception")
		class UAIPerceptionStimuliSourceComponent* AIPerceptionStimuliSource;
protected:
	/** Resets HMD orientation in VR. */
	void OnResetVR();
	void MoveForward(float Value);
	void MoveRight(float Value);
	void TurnAtRate(float Rate);

	void LookUpAtRate(float Rate);
	void TouchStarted(ETouchIndex::Type FingerIndex, FVector Location);
	void TouchStopped(ETouchIndex::Type FingerIndex, FVector Location);
private:
	FGenericTeamId GetGenericTeamId() const override;
};

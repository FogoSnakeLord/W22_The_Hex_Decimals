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
class POSTARCANA_API APostArcanaAICharacter : public AGameObject
{
	GENERATED_BODY()
public:
	APostArcanaAICharacter();
	//Needs this to see
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Perception")
		class UAIPerceptionStimuliSourceComponent* AIPerceptionStimuliSource;
	//For taking Damage
	void OnHit(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit) override;\
	//Passes damage to other actors
	int GetDamage() { return Damage; }
protected:
	//To determine damage dealt to player
	UPROPERTY(EditAnywhere, Category = GameStats)
		int Damage;
	//Updates
	virtual void Tick(float DeltaTime) override;
};

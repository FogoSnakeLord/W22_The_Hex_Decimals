// Fill out your copyright notice in the Description page of Project Settings.
//Author 1: Colin Brandow
//Author 2: Sebastian Comette
//Change Log: April 6th 2022
			//Added an Door to open that is opened on AI death. Not all AI needs a door, its an option you set in the blueprint insance 
#pragma once

#include "CoreMinimal.h"
#include "PostArcana/GameObject.h"
#include "GenericTeamAgentInterface.h"
#include "BehaviorTree/BehaviorTree.h"
#include "PostArcanaAICharacter.generated.h"

class ATriggerDoor;
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

	//Give the a specific door to open - not needed for all ai
	UPROPERTY(EditAnywhere, Category = Door)
		ATriggerDoor* DoorToOpen;

protected:
	//To determine damage dealt to player
	UPROPERTY(EditAnywhere, Category = GameStats)
		int Damage;
	//Updates
	virtual void Tick(float DeltaTime) override;
};

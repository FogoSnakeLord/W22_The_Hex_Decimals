// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "PostArcana/GameObject.h"
#include "GameFramework/Actor.h"
#include "PostArcana/Doors/UseInterface.h"
#include "GenericTeamAgentInterface.h"
#include "BehaviorTree/BehaviorTree.h"
#include "PostArcanaNPCharacter.generated.h"

/**
 * 
 */
class APostArcanaCharacter;
UCLASS()
class POSTARCANA_API APostArcanaNPCharacter : public AGameObject, public IUseInterface
{
	GENERATED_BODY()
public:
	APostArcanaNPCharacter();
	//Needs this to see
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Perception")
		class UAIPerceptionStimuliSourceComponent* AIPerceptionStimuliSource;
	//For taking Damage
	void OnHit(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit) override;\
	//Passes damage to other actors
	int GetDamage() { return Damage; }

	virtual void Use_Implementation() override;
	
	UPROPERTY(EditAnywhere, Category = Speech)
		FText speechText = FText::FromString(FString::Printf(TEXT("TEST DIALOGUE PLEASE CHANGE")));

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Player")
		APostArcanaCharacter* playerCharacter;
protected:
	//To determine damage dealt to player
	UPROPERTY(EditAnywhere, Category = GameStats)
		int Damage;
	//Updates
	virtual void Tick(float DeltaTime) override;
};

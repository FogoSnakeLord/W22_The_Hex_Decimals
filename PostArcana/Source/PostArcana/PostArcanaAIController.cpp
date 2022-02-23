// Fill out your copyright notice in the Description page of Project Settings.


#include "PostArcanaAIController.h"

#include "DrawDebugHelpers.h"
#include "BehaviorTree/BehaviorTree.h"
#include "PostArcana.h"
#include "PostArcanaAICharacter.h"
#include "PostArcanaCharacter.h"

APostArcanaAIController::APostArcanaAIController()
{
	//Create Perception Component
	PerceptionComponent = CreateDefaultSubobject<UAIPerceptionComponent>(TEXT("SightPerceptionComponent"));

	SetPerceptionComponent(*PerceptionComponent);

	//Create SightConfig
	SightConfig = CreateDefaultSubobject<UAISenseConfig_Sight>(TEXT("Sight Config"));

	//Set detection by affiliation
    SightConfig->DetectionByAffiliation.bDetectEnemies = true;
	SightConfig->DetectionByAffiliation.bDetectNeutrals = true;
	SightConfig->DetectionByAffiliation.bDetectFriendlies = true;

	//SET Periferal Vision
	SightConfig->PeripheralVisionAngleDegrees = 45;

	//Configure Sight and set it as dominant
	PerceptionComponent->ConfigureSense(*SightConfig);
	PerceptionComponent->SetDominantSense(SightConfig->GetSenseImplementation());

    //Update perception
	PerceptionComponent->OnPerceptionUpdated.AddDynamic(this, &APostArcanaAIController::OnPerceptionUpdated);
	SetGenericTeamId(FGenericTeamId(5));
}

void APostArcanaAIController::OnPossess(APawn* InPawn)
{
	Super::OnPossess(InPawn);

    //Check for Behaviour tree, then Run it
	if (BehaviorTree != nullptr)
	{
		RunBehaviorTree(BehaviorTree);
	}
}

void APostArcanaAIController::OnTargetPerceptionUpdate(AActor* Actor, FAIStimulus Stimulus)
{
    //If you see an actor, set the last known location to the stimulus and note that the player is visible
	if (Actor)
	{
		LastKnownPlayerPosition = Stimulus.StimulusLocation;
		bCanSeePlayer = Stimulus.WasSuccessfullySensed();
	}
}
void APostArcanaAIController::OnPerceptionUpdated(const TArray<AActor*>& UpdatedActors)
{

    if (PerceptionComponent)
    {
        TArray<AActor*> PercievedActors;
        PerceptionComponent->GetCurrentlyPerceivedActors(UAISense_Sight::StaticClass(), PercievedActors);//OR GetKnownPerceivedActors(...) GetCurrentlyPerceivedActors(....)
        bCanSeePlayer = false;

        if (PercievedActors.Num() == 0)
        {
            /*DrawDebugCone(
                GetWorld(),
                GetPawn()->GetActorLocation(),
                -GetPawn()->GetActorForwardVector(),
                SightConfig->LoseSightRadius,
                FMath::DegreesToRadians(SightConfig->PeripheralVisionAngleDegrees),
                10.0f,
                100.0f,
                FColor::Green,
                false,
                2.0f
            );*/
            bCanSeePlayer = false;
        }
        else
        {

            for (auto& Actor : PercievedActors)
            {
                APostArcanaCharacter* CharacterPerceived = Cast<APostArcanaCharacter>(Actor);
                if (CharacterPerceived)
                {
                    if (CharacterPerceived->GenericTeamId == 0)
                    {
                        /*DrawDebugCone(
                            GetWorld(),
                            GetPawn()->GetActorLocation(),
                            -GetPawn()->GetActorForwardVector(),
                            SightConfig->LoseSightRadius,
                            FMath::DegreesToRadians(SightConfig->PeripheralVisionAngleDegrees),
                            10.0f,
                            100.0f,
                            FColor::Red,
                            false,
                            2.0f
                        );*/
                        bCanSeePlayer = true;
                    }
                }

            }
        }
    }

}
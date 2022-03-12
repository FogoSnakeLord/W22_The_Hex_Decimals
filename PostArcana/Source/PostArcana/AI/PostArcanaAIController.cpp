// Fill out your copyright notice in the Description page of Project Settings.


#include "PostArcanaAIController.h"

#include "DrawDebugHelpers.h"
#include "BehaviorTree/BehaviorTree.h"
#include "PostArcana/PostArcana.h"
#include "PostArcanaAICharacter.h"
#include "PostArcana/Player/PostArcanaCharacter.h"

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
    //Set the team
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
    //Check for perception component
    if (PerceptionComponent)
    {
        //make a list for the actors that are seen, and set canSeePlayer to false
        TArray<AActor*> PercievedActors;
        PerceptionComponent->GetCurrentlyPerceivedActors(UAISense_Sight::StaticClass(), PercievedActors);//OR GetKnownPerceivedActors(...) GetCurrentlyPerceivedActors(....)
        bCanSeePlayer = false;

        //If you can't see any actors keep it false
        if (PercievedActors.Num() == 0)
        {
            bCanSeePlayer = false;
        }
        //if you can see actors, move forward
        else
        {
            //cycle through the percieved actors
            for (auto& Actor : PercievedActors)
            {
                //try to cast the actor as a player
                APostArcanaCharacter* CharacterPerceived = Cast<APostArcanaCharacter>(Actor);
                //if it can be cast as a player, and that player is the correct team ID, set CanSeePlayer to true
                if (CharacterPerceived)
                {
                    if (CharacterPerceived->GenericTeamId == 0)
                    {
                        bCanSeePlayer = true;
                    }
                }

            }
        }
    }

}
// Fill out your copyright notice in the Description page of Project Settings.


#include "PostArcanaAIController.h"

#include "DrawDebugHelpers.h"
#include "BehaviorTree/BehaviorTree.h"
#include "PostArcana.h"
#include "PostArcanaAICharacter.h"
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

    //CASE 1:
    for (auto&& Target : UpdatedActors)
    {
        //DECLARE a variable called Info of type FActorPerceptionBlueprintInfo
        FActorPerceptionBlueprintInfo Info;
        //CALL GetActorsPerception() on PerceptionComponent passing in Target, Info
        PerceptionComponent->GetActorsPerception(Target, Info);

        //FOR const auto& Stimulus : Info.LastSensedStimuli
        for (const auto& Stimulus : Info.LastSensedStimuli)
        {
            //IF Stimulus.Type IS UAISense::GetSenseID(UAISense_Sight::StaticClass())
            if (Stimulus.Type == UAISense::GetSenseID(UAISense_Sight::StaticClass()))
            {
                //DECLARE a variable called bSenseResult and Assign it to the return value of Stimulus.WasSuccessfullySensed()
                bool bSenseResult = Stimulus.WasSuccessfullySensed();
                //IF bSenseResult IS true
                if (bSenseResult)
                {
                    //CALL DrawDebugCone() passing in GetWorld(), GetPawn()->GetActorLocation(), -GetPawn()->GetActorForwardVector(), SightConfig->LoseSightRadius, FMath::DegreesToRadians(SightConfig->PeripheralVisionAngleDegrees), 10.0f, 100.0f, FColor::Red, false, 5.0f
                    DrawDebugCone(
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
                    );

                    LastKnownPlayerPosition = Stimulus.StimulusLocation;
                    //SET bCanSeePlayer to return value of Stimulus.WasSuccessfullySensed()
                    bCanSeePlayer = true;
                    // the actor enters the sense range
                    //CALL UE_LOG() passing in LogTemp, Warning, TEXT("the actor enters the SIGHT sense range")
                    UE_LOG(LogTemp, Warning, TEXT("the actor enters the SIGHT sense range"));
                }
                //ELSE
                else
                {

                    DrawDebugCone(
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
                    );
                    bCanSeePlayer = false;
                    // the actor leaves the sense range
                    //CALL UE_LOG() passing in LogTemp, Warning, TEXT("the actor leaves the SIGHT sense range")
                    UE_LOG(LogTemp, Warning, TEXT("the actor leaves the SIGHT sense range"));
                }
                //ENDIF
            }
            //ENDIF
        }
        //ENDFOR
    }

}
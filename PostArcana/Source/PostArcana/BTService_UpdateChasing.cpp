// Fill out your copyright notice in the Description page of Project Settings.


#include "BTService_UpdateChasing.h"
#include "PostArcanaAIController.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "Kismet/GameplayStatics.h"


UBTService_UpdateChasing::UBTService_UpdateChasing(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
	NodeName = "Update Chasing Behavior";

	bNotifyBecomeRelevant = true;
	bNotifyCeaseRelevant = false;

	//Add filter so it can only select/accept Actor keys
	PlayerKey.AddObjectFilter(this, GET_MEMBER_NAME_CHECKED(UBTService_UpdateChasing, PlayerKey), AActor::StaticClass());
	//Add filter so it can only select/accept boolean Keys
	LastKnownPositionKey.AddVectorFilter(this, GET_MEMBER_NAME_CHECKED(UBTService_UpdateChasing, LastKnownPositionKey));
	//Add filter so it can only select/accept FVector Keys 
	CanSeePlayerKey.AddBoolFilter(this, GET_MEMBER_NAME_CHECKED(UBTService_UpdateChasing, CanSeePlayerKey));

}

void UBTService_UpdateChasing::OnBecomeRelevant(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
{
	//Check for blackboard and fail without it
	UBlackboardComponent* BlackboardComp = OwnerComp.GetBlackboardComponent();
	if (BlackboardComp == nullptr)
	{
		return;
	}

	//Check for a player key and set it if it isn't set already
	if (!PlayerKey.IsSet())
	{
		//Find a list of players
		TArray<AActor*> FoundActors;
		UGameplayStatics::GetAllActorsOfClass(GetWorld(), PlayerClass, FoundActors);
		//If there are players
		if (FoundActors[0])
		{
			//Set the player key
			BlackboardComp->SetValueAsObject(PlayerKey.SelectedKeyName, FoundActors[0]);
		}
	}
}

void UBTService_UpdateChasing::TickNode(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory, float DeltaSeconds)
{
	//Check for blackboard and fail without it
	UBlackboardComponent* BlackboardComp = OwnerComp.GetBlackboardComponent();
	if (BlackboardComp == nullptr)
	{
		return;
	}

	//Check for AI controller and fail without one
	AAIController* AIController = OwnerComp.GetAIOwner();
	if (!AIController)
	{
		return;
	}

	//Check if that controller is the correct kind and fail if it isn't
	APostArcanaAIController* PostArcanaAIController = Cast<APostArcanaAIController>(AIController);
	if (!PostArcanaAIController)
	{
		return;
	}

	//sets the CanSeePlayer key on the BlackBoard
	BlackboardComp->SetValueAsBool(CanSeePlayerKey.SelectedKeyName, PostArcanaAIController->bCanSeePlayer);


	//if this player is different from the last one, switch players
	if (PostArcanaAIController->bCanSeePlayer != bLastCanSeePlayer)
	{
		BlackboardComp->SetValueAsVector(LastKnownPositionKey.SelectedKeyName, PostArcanaAIController->LastKnownPlayerPosition);
	}
	//Set can see player in the controller
	bLastCanSeePlayer = PostArcanaAIController->bCanSeePlayer;

	Super::TickNode(OwnerComp, NodeMemory, DeltaSeconds);

}

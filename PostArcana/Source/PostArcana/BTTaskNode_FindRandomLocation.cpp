// Fill out your copyright notice in the Description page of Project Settings.


#include "BTTaskNode_FindRandomLocation.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "NavigationSystem.h"
#include "AIController.h"


UBTTaskNode_FindRandomLocation::UBTTaskNode_FindRandomLocation(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
	NodeName = "Find Random Location";

	/// Add filter so it can only select / accept FVector keys
	DestinationVector.AddVectorFilter(this, GET_MEMBER_NAME_CHECKED(UBTTaskNode_FindRandomLocation, DestinationVector));
}


EBTNodeResult::Type UBTTaskNode_FindRandomLocation::ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
{
	//Check for a Blackboard
	UBlackboardComponent* BlackboardComp = OwnerComp.GetBlackboardComponent();
	if (BlackboardComp == nullptr)
	{
		//Fail if there is no blackboard
		return EBTNodeResult::Failed;
	}

	//Find the AICharacter and fail if there is none
	APawn* ControlledPawn = OwnerComp.GetAIOwner()->GetPawn();
	if (!ControlledPawn)
	{
		return EBTNodeResult::Failed;
	}

	//Check for a Navigation System and fail if there isn't one
	UNavigationSystemV1* NavSys = UNavigationSystemV1::GetCurrent(GetWorld());
	if (!NavSys)
	{
		return EBTNodeResult::Failed;
	}

	FNavLocation Result;
	//Starting point hereafter (0,0,0)
	FVector Origin = ControlledPawn->GetActorLocation();

	//Find a random point on the NavMesh to Go to and fail if you can't
	bool bSuccess = NavSys->GetRandomReachablePointInRadius(Origin, Radius, Result);
	if (!bSuccess)
	{
		return EBTNodeResult::Failed;
	}
	//ENDIF
	//Set the location as the destination and succeed
	BlackboardComp->SetValueAsVector(DestinationVector.SelectedKeyName, Result.Location);
	return EBTNodeResult::Succeeded;

}


FString UBTTaskNode_FindRandomLocation::GetStaticDescription() const
{
	return FString::Printf(TEXT("%s: '%s'"), TEXT("DestinationKey"),
		DestinationVector.IsSet() ? *DestinationVector.SelectedKeyName.ToString() : TEXT(""))
		.Append(FString::Printf(TEXT("\n%s: '%s'"),
			TEXT("Radius"), *FString::SanitizeFloat(Radius)));
}



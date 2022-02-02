// Fill out your copyright notice in the Description page of Project Settings.


#include "Test_ManaBox.h"
#include "Components/BoxComponent.h"

// Sets default values
ATest_ManaBox::ATest_ManaBox()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	BoxComponent = CreateDefaultSubobject<UBoxComponent>("Collision Box");
	BoxComponent->SetBoxExtent(FVector(60, 60, 120));
	BoxComponent->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);
	BoxComponent->SetCollisionProfileName("OverlapAll");
	RootComponent = BoxComponent;

}

// Called when the game starts or when spawned
void ATest_ManaBox::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ATest_ManaBox::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}


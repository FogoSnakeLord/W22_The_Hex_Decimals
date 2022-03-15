// Fill out your copyright notice in the Description page of Project Settings.
// Author 1: Sebastian Comette
//Change Log: March 9th 2022
			//Set up experience test box so that the player could level up and test stat allocation

#include "Test_XpBox.h"
#include "Components/BoxComponent.h"

// Sets default values
ATest_XpBox::ATest_XpBox()
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
void ATest_XpBox::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ATest_XpBox::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}


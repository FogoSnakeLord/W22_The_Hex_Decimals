// Fill out your copyright notice in the Description page of Project Settings.
//Change Log: Feb 2nd 2022
			//Set up Heal box to test healing 

#include "Test_HealBox.h"
#include "Components/BoxComponent.h"

// Sets default values
ATest_HealBox::ATest_HealBox()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;


	//Set up collision box that acts as a trigger 
	//Text boxes are added in the editor
	BoxComponent = CreateDefaultSubobject<UBoxComponent>("Collision Box");
	BoxComponent->SetBoxExtent(FVector(60, 60, 120));
	BoxComponent->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);
	BoxComponent->SetCollisionProfileName("OverlapAll");
	RootComponent = BoxComponent;

}

// Called when the game starts or when spawned
void ATest_HealBox::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ATest_HealBox::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}


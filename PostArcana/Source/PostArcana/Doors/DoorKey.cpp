// Fill out your copyright notice in the Description page of Project Settings.
//Author 1: Sebastian Comette
//Change Log: April 6th 2022
			//Created Door Key Class

#include "DoorKey.h"
#include "PostArcana/Player/PostArcanaCharacter.h"
#include "Components/BoxComponent.h"


// Sets default values
ADoorKey::ADoorKey()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	//Static Mesh for the key model 
	KeyMesh = CreateDefaultSubobject<UStaticMeshComponent>("Key Mesh"); //Need a better key model
	RootComponent = KeyMesh;

	//Box Collider to make the key easier to pick up
	BoxCollider = CreateDefaultSubobject<UBoxComponent>("CollisionBox");
	BoxCollider->SetCollisionProfileName("BlockAll");
	BoxCollider->SetupAttachment(RootComponent);


}

void ADoorKey::SetPlayerPointer(APostArcanaCharacter* pPlayer)
{
	m_pPlayer = pPlayer;
}

// Called when the game starts or when spawned
void ADoorKey::BeginPlay()
{
	Super::BeginPlay();	

}

void ADoorKey::Use_Implementation()
{
	//Give the player and then destory it, its memory is still in use in the player class
	m_pPlayer->GetKey(this);
	this->Destroy(true);

}

// Called every frame
void ADoorKey::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}


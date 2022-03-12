// Copyright Epic Games, Inc. All Rights Reserved.

#include "PostArcanaProjectile.h"
#include "GameFramework/ProjectileMovementComponent.h"
#include "Components/SphereComponent.h"
#include "Kismet/GameplayStatics.h"
#include "Sound/SoundBase.h"

APostArcanaProjectile::APostArcanaProjectile()
{
	Damage = 10;
	// Use a sphere as a simple collision representation
	CollisionComp = CreateDefaultSubobject<USphereComponent>(TEXT("SphereComp"));
	CollisionComp->InitSphereRadius(5.0f);
	CollisionComp->BodyInstance.SetCollisionProfileName("Projectile");
	CollisionComp->OnComponentHit.AddDynamic(this, &APostArcanaProjectile::OnHit);		// set up a notification for when this component hits something blocking

	// Players can't walk on it
	CollisionComp->SetWalkableSlopeOverride(FWalkableSlopeOverride(WalkableSlope_Unwalkable, 0.f));
	CollisionComp->CanCharacterStepUpOn = ECB_No;

	// Set as root component
	RootComponent = CollisionComp;

	// Use a ProjectileMovementComponent to govern this projectile's movement
	ProjectileMovement = CreateDefaultSubobject<UProjectileMovementComponent>(TEXT("ProjectileComp"));
	ProjectileMovement->UpdatedComponent = CollisionComp;
	ProjectileMovement->InitialSpeed = 3000.f;
	ProjectileMovement->MaxSpeed = 3000.f;
	ProjectileMovement->bRotationFollowsVelocity = true;
	ProjectileMovement->bShouldBounce = false;

	// Die after 3 seconds by default
	InitialLifeSpan = 3.0f;
}

void APostArcanaProjectile::BeginPlay()
{
	Super::BeginPlay();

}

void APostArcanaProjectile::OnHit(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit)
{
	// Only add impulse and destroy projectile if we hit a physics
	if ((OtherActor != nullptr) && (OtherActor != this) && (OtherComp != nullptr) && OtherComp->IsSimulatingPhysics())
	{
		OtherComp->AddImpulseAtLocation(GetVelocity() * 100.0f, GetActorLocation());
		//if (ImpactSound)
		//{
		//	UGameplayStatics::PlaySoundAtLocation(this, ImpactSound, GetActorLocation());

		//}
		//if (ProjectileFX)
		//{
		//	UGameplayStatics::SpawnEmitterAtLocation(this, ProjectileFX, GetActorLocation());
		//}
	}
	Destroy();
}

void APostArcanaProjectile::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

float APostArcanaProjectile::GetDamage()
{
	return Damage;
}

void APostArcanaProjectile::SetDamage(int intelligence)
{
	Damage = (2+intelligence) * 50.0f;
}
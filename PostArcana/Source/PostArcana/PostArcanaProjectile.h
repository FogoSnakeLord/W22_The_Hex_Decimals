// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "PostArcanaProjectile.generated.h"

class USphereComponent;
class UProjectileMovementComponent;

UCLASS(config=Game)
class APostArcanaProjectile : public AActor
{
	GENERATED_BODY()
	
// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	/** Sphere collision component */
	UPROPERTY(VisibleDefaultsOnly, Category = Projectile)
	USphereComponent* CollisionComp;

	/** Projectile movement component */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Movement, meta = (AllowPrivateAccess = "true"))
		UProjectileMovementComponent* ProjectileMovement;

	UPROPERTY(EditAnywhere, Category = Mesh)
		UStaticMeshComponent* MeshComponent;

	//UPROPERTY(EditDefaultsOnly, Category = "Effects")
	//	class UParticleSystem* ProjectileFX;

	//UPROPERTY(VisibleAnywhere, Category = "Effects")
	//	class UParticleSystemComponent* ParticleSystemComponent;

	//UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Gameplay)
	//	class USoundBase* ImpactSound;

	UPROPERTY(VisibleAnywhere, Category = "Stats")
		float Damage;

public:
	APostArcanaProjectile();

	// Called every frame
	virtual void Tick(float DeltaTime) override;

	float GetDamage();
	void SetDamage(int intelligence);

	/** called when projectile hits something */
	UFUNCTION()
		void OnHit(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);

	/** Returns CollisionComp subobject **/
	USphereComponent* GetCollisionComp() const { return CollisionComp; }
	/** Returns ProjectileMovement subobject **/
	UProjectileMovementComponent* GetProjectileMovement() const { return ProjectileMovement; }
};


// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "GameObject.generated.h"

UCLASS()
class POSTARCANA_API AGameObject : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AGameObject();



protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	//For Stat Debugging while there is no HUD
	void DisplayStats();
	//Stats - by making these a uproperty with these parameters you can change the stats of a gameobject in the editor. 
		 //You will find the stats under the stat catagory. If you need more info please let me know and i can show you where.
	UPROPERTY(EditAnywhere, Category = Stats)
		int Health;
	UPROPERTY(EditAnywhere, Category = Stats)
		int MaxHealth;
	UPROPERTY(EditAnywhere, Category = Stats)
		int Mana;
	UPROPERTY(EditAnywhere, Category = Stats)
		int MaxMana;
	UPROPERTY(EditAnywhere, Category = Stats)
		int ManaRegen;
	UPROPERTY(EditAnywhere, Category = Stats)
		int BaseMoveSpeed;
	UPROPERTY(EditAnywhere, Category = Stats)
		int BaseSprintSpeed;
	UPROPERTY(EditAnywhere, Category = Stats)
		int Defence;

	bool IsAlive;
	float Timer;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UFUNCTION()
		void OnHit(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);


	// Called to bind functionality to input

	void TakeDamage(int Dmg);
	void Heal(int HealAmnt);
	void UseMana(int Cost);
	void RegenMana(float DeltaTime);
	void GainMana(int ManaAmnt);

	bool CheckAlive();

};

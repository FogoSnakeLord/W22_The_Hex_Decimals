// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GenericTeamAgentInterface.h"
#include "GameFramework/Character.h"
#include "GameObject.generated.h"

UCLASS()
class POSTARCANA_API AGameObject : public ACharacter, public IGenericTeamAgentInterface
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
	UPROPERTY(EditAnywhere, Category = GameStats)
		int Health;
	UPROPERTY(EditAnywhere, Category = GameStats)
		int MaxHealth;
	UPROPERTY(EditAnywhere, Category = GameStats)
		int Mana;
	UPROPERTY(EditAnywhere, Category = GameStats)
		int MaxMana;
	UPROPERTY(EditAnywhere, Category = GameStats)
		int ManaRegen;
	UPROPERTY(EditAnywhere, Category = GameStats)
		int BaseMoveSpeed;
	UPROPERTY(EditAnywhere, Category = GameStats)
		int BaseSprintSpeed;
	UPROPERTY(EditAnywhere, Category = GameStats)
		int Defence;

	//Player level up stats - can be used to make strong enemies as well
	UPROPERTY(EditAnywhere, Category = PlayerStats)
		int Endurance;
	UPROPERTY(EditAnywhere, Category = PlayerStats)
		int Intelligence;
	UPROPERTY(EditAnywhere, Category = PlayerStats)
		int Will;
	UPROPERTY(EditAnywhere, Category = PlayerStats)
		int Agility;
	UPROPERTY(EditAnywhere, Category = PlayerStats)
		int Toughness;

	//Level up bonus
	UPROPERTY(EditAnywhere, Category = LevelBonus)
		int ELevelBonus;
	UPROPERTY(EditAnywhere, Category = LevelBonus)
		int ILevelBonus;
	UPROPERTY(EditAnywhere, Category = LevelBonus)
		int ALevelBonus;
	UPROPERTY(EditAnywhere, Category = LevelBonus)
		int TLevelBonus;

	//Base Stat
	UPROPERTY(EditAnywhere, Category = BaseStat)
		int BaseMaxHealth;
	UPROPERTY(EditAnywhere, Category = BaseStat)
		int BaseMaxMana;
	UPROPERTY(EditAnywhere, Category = BaseStat)
		int BaseMinMoveSpeed;
	UPROPERTY(EditAnywhere, Category = BaseStat)
		int BaseMaxMoveSpeed;
	UPROPERTY(EditAnywhere, Category = BaseStat)
		int BaseDefence;



	
	bool IsAlive;
	float Timer;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	void UpdatePlayerStats();

	UFUNCTION()
		virtual void OnHit(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);

	UPROPERTY(EditAnywhere, Category = "TEAM_ID")
		FGenericTeamId GenericTeamId; // 0 = Player, 1 = chasing character

	// Called to bind functionality to input

	int GetEndurance() const    { return Endurance; }
	int GetIntelligence() const { return Intelligence; }
	int GetWill() const         { return Will; }
	int GetAgility() const      { return Agility; }
	int GetToughness() const    { return Toughness; }

	void TakeDamage(int Dmg);
	void Heal(int HealAmnt);
	void UseMana(int Cost);
	void RegenMana(float DeltaTime);
	void GainMana(int ManaAmnt);

	bool CheckAlive();
private:
	FGenericTeamId GetGenericTeamId() const override;
};

// Fill out your copyright notice in the Description page of Project Settings.
//Author 1: Sebastian Comette
//Change Log: Feb 2nd 2022
            //Game Object Class, and all stats created with a debug message to display them
//Change Log: Feb 12th 2022
			//Adding algortihms for stat calculations and how they would scale with current stat level
			//Made Stats changable inside the editor  
//Change Log: March 9th 2022
			//Set up functionality to lower current health and mana if skill points are reset

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

	//For Stat Debugging things that are not displayed in the HUD. Health is included as a double check
	void DisplayStats();
	
	//Stats - by making these a uproperty with these parameters you can change the stats of a gameobject in the editor. 
	
	//You will find the stats under the GameStats catagory.
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

	//Level up bonus - how much the stat is altered on level up
	UPROPERTY(EditAnywhere, Category = LevelBonus)
		int ELevelBonus;
	UPROPERTY(EditAnywhere, Category = LevelBonus)
		int ILevelBonus;
	UPROPERTY(EditAnywhere, Category = LevelBonus)
		int ALevelBonus;
	UPROPERTY(EditAnywhere, Category = LevelBonus)
		int TLevelBonus;

	//Base/Starting Stats
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
	float Timer; //Mana regen timer

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	//Updates the stats 
	void UpdatePlayerStats();

	//For taking damge 
	UFUNCTION()
		virtual void OnHit(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);

	UPROPERTY(EditAnywhere, Category = "TEAM_ID")
		FGenericTeamId GenericTeamId; // 0 = Player, 1 = chasing character

	// Called to bind functionality to input

	//Stat getters 
	int GetEndurance() const    { return Endurance; }
	int GetIntelligence() const { return Intelligence; }
	int GetWill() const         { return Will; }
	int GetAgility() const      { return Agility; }
	int GetToughness() const    { return Toughness; }

	//Stat use cases 
	void TakeDamage(int Dmg); //Takes away from the players health using true damage
	void Heal(int HealAmnt); //Heals the object
	void UseMana(int Cost);  //decreases current mana 
	void RegenMana(float DeltaTime); //Regens mana every second
	void GainMana(int ManaAmnt); //Refill mana a set amount

	//Check if the object is alive 
	bool CheckAlive();
private:
	FGenericTeamId GetGenericTeamId() const override;
};

// Fill out your copyright notice in the Description page of Project Settings.
//Author 1: Sebastian Comette
//Change Log: Feb 2nd 2022
			//Game Object Class, and all stats created with a debug message to display them
//Change Log: Feb 12th 2022
			//Adding algortihms for stat calculations and how they would scale with current stat level
			//Made Stats changable inside the editor  
//Change Log: March 9th 2022
			//Set up functionality to lower current health and mana if skill points are reset


#include "GameObject.h"
#include "PostArcanaProjectile.h"

// Sets default values
AGameObject::AGameObject()
{
	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	//Starting stats
	Endurance = 0;
	Intelligence = 0;
	Will = 0;
	Agility = 0;
	Toughness = 0;

	//Amount each abstract stat modifies their concrete stat (eg. toughness and defence)
	ELevelBonus = 25;
	ILevelBonus = 25;
	ALevelBonus = 30;
	TLevelBonus = 5;
	WLevelBonus = 2;

	//Sets the base concrete stats
	BaseMaxHealth =  500;
	BaseMaxMana = 250;
	BaseMinMoveSpeed = 500;
	BaseMaxMoveSpeed =  1200;
	BaseDefence = 50;

	//sets the concrete stats using the abstract stats
	MaxHealth = BaseMaxHealth + (ELevelBonus * Endurance);
	MaxMana = BaseMaxMana + ((WLevelBonus*12.5) * Will);
	ManaRegen = 10 + (WLevelBonus * Will);
	BaseMoveSpeed = BaseMinMoveSpeed + (ALevelBonus * Agility);
	BaseSprintSpeed = BaseMaxMoveSpeed + ((ALevelBonus*2) * Agility);
	Defence = BaseDefence + (TLevelBonus * Toughness);

	//Stats - Ints were used for easy math and floating point number can be prone to error. We can switch this if the team wants floats.
	Health = 500;
	Mana = 200;
	
	//Sets the alive boolean
	IsAlive = true;

	//ManaRegenTimer - casues it add the mana regen rate to the mana every second while mana is below max
	Timer = 1.0f;

}

// Called when the game starts or when spawned
void AGameObject::BeginPlay()
{
	Super::BeginPlay();

}

//Used for debuging, comment out data you don't want
void AGameObject::DisplayStats()
{
	//Displays stats that are not reflected by the hud - used for development - REMOVE ON FINAL RELEASE 
	GEngine->AddOnScreenDebugMessage(3, .1, FColor::Purple, "ManaRegen - " + FString::FromInt(ManaRegen), true);
	GEngine->AddOnScreenDebugMessage(4, .1, FColor::Yellow, "BaseMoveSpeed - " + FString::FromInt(BaseMoveSpeed), true);
	GEngine->AddOnScreenDebugMessage(5, .1, FColor::Orange, "BaseSprintSpeed - " + FString::FromInt(BaseSprintSpeed), true);
	GEngine->AddOnScreenDebugMessage(1, .1, FColor::Green, "Health - " + FString::FromInt(Health) + " / " + FString::FromInt(MaxHealth), true);

}

// Called every frame
void AGameObject::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	
	//Timer for mana regen. Regen only happens once a second
	RegenMana(DeltaTime);

	//To update in real time. We will change this to OnLevelUp Eventually;
	UpdatePlayerStats();

	//Clamp health and mana to not go over the max. Helpful for respecing at full health 
	if (Health > MaxHealth)
		Health = MaxHealth;
	if (Mana > MaxMana)
		Mana = MaxMana;
}

void AGameObject::UpdatePlayerStats()
{
	//Player stat alogirthms calculating the weight of each stat
	//Built to allow for stats to start at zero
	if (tempEnd < Endurance) {
		Health += (Endurance - tempEnd) * ELevelBonus;
	}
	if (tempEnd > Endurance) {
		Health -= (tempEnd - Endurance) * ELevelBonus;
	}
	MaxHealth = BaseMaxHealth + (ELevelBonus * Endurance); 
	MaxMana = BaseMaxMana + ((WLevelBonus * 12.5) * Will);
	ManaRegen = 10 + (WLevelBonus * Will);
	BaseMoveSpeed = BaseMinMoveSpeed + (ALevelBonus * Agility);
	BaseSprintSpeed = BaseMaxMoveSpeed + ((ALevelBonus * 2) * Agility);
	Defence = BaseDefence + (TLevelBonus * Toughness);
	tempEnd = Endurance;
}

void AGameObject::OnHit(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit)
{
	if (IsAlive == false)
		return;
	
	//Makes the object take damage based on the power of the projectile it was hit by
	APostArcanaProjectile* projectile = Cast<APostArcanaProjectile>(OtherActor);
	if (projectile != nullptr && (OtherComp != nullptr) && OtherActor != this)
	{
		TakeDamage(projectile->GetDamage());
	}
}

void AGameObject::TakeDamage(int Dmg) 
{
	//Calculates the amount of true damage taken. True damage represents what is left over after subtracting defence from the damge.
	if (IsAlive)
	{
		int TrueDmg = (Dmg - Defence);
		if(TrueDmg > 0)
		Health -= TrueDmg;
		CheckAlive(); //Ensure the player has not died
	}
}

//Heals the object while clamping the health to not go over the current maximum health
void AGameObject::Heal(int HealAmnt) 
{
	if (IsAlive && Health < MaxHealth)
	{
		Health += HealAmnt;
		if (Health > MaxHealth)
		{
			Health = MaxHealth;
		}
	}
}

//Subtracts mana based on the cost of the spell
void AGameObject::UseMana(int Cost) 
{
	if (IsAlive)
	{
		if (Mana >= Cost)
		{
			Mana -= Cost;
		}
	}
}

//Regens Mana every second 
void AGameObject::RegenMana(float DeltaTime) 
{
	Timer += DeltaTime;
	if (IsAlive)
	{
		if (Mana < MaxMana)
		{
			if (Timer >= 1) //Triggered once every second 
			{
				Timer = 0; //Resets the timer
				Mana += ManaRegen;
				if (Mana > MaxMana) //Clamps
				{
					Mana = MaxMana;
				}
			}
		}
	}
}

//Replens the objects mana while clamping it to stay below the current maximum mana 
void AGameObject::GainMana(int ManaAmnt)
{
	if (IsAlive && Mana < MaxMana)
	{
		Mana += ManaAmnt;
		if (Mana > MaxMana)
		{
			Mana = MaxMana;
		}
	}
}

//Check if the player is alive - Still need a death condition 
bool AGameObject::CheckAlive()
{
	if (Health <= 0)
	{
		IsAlive = false;
		return false;
	}
	else
		return true;
}

FGenericTeamId AGameObject::GetGenericTeamId() const
{
	return GenericTeamId;
}




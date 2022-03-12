// Fill out your copyright notice in the Description page of Project Settings.



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
	ALevelBonus = 15;
	TLevelBonus = 5;

	//Sets the base concrete stats
	BaseMaxHealth =  500;
	BaseMaxMana = 250;
	BaseMinMoveSpeed = 500;
	BaseMaxMoveSpeed =  1200;
	BaseDefence = 50;

	//sets the concrete stats using the abstract stats
	MaxHealth = BaseMaxHealth + (ELevelBonus * Endurance);
	MaxMana = BaseMaxMana + (ILevelBonus * Intelligence);
	ManaRegen = 1 + Will;
	BaseMoveSpeed = BaseMinMoveSpeed + (ALevelBonus * Agility);
	BaseSprintSpeed = BaseMaxMoveSpeed + (ALevelBonus * Agility);
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
	GEngine->AddOnScreenDebugMessage(3, .1, FColor::Purple, "ManaRegen - " + FString::FromInt(ManaRegen), true);
	GEngine->AddOnScreenDebugMessage(4, .1, FColor::Yellow, "BaseMoveSpeed - " + FString::FromInt(BaseMoveSpeed), true);
	GEngine->AddOnScreenDebugMessage(5, .1, FColor::Orange, "BaseSprintSpeed - " + FString::FromInt(BaseSprintSpeed), true);
	GEngine->AddOnScreenDebugMessage(1, .1, FColor::Green, "Health - " + FString::FromInt(Health) + " / " + FString::FromInt(MaxHealth), true);
	//GEngine->AddOnScreenDebugMessage(2, .1, FColor::Blue, "Mana - " + FString::FromInt(Mana) + " / " + FString::FromInt(MaxMana), true);
	//GEngine->AddOnScreenDebugMessage(6, .1, FColor::Red, "Defence - " + FString::FromInt(Defence), true);

}

// Called every frame
void AGameObject::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	RegenMana(DeltaTime);

	//To update in real time. We will change this to OnLevelUp Eventually;
	UpdatePlayerStats();

	if (Health > MaxHealth)
		Health = MaxHealth;
	if (Mana > MaxMana)
		Mana = MaxMana;
}

void AGameObject::UpdatePlayerStats()
{
	MaxHealth = BaseMaxHealth + (ELevelBonus * Endurance);
	MaxMana = BaseMaxMana + (ILevelBonus * Intelligence);
	ManaRegen = 1 + Will;
	BaseMoveSpeed = BaseMinMoveSpeed + (ALevelBonus * Agility);
	BaseSprintSpeed = BaseMaxMoveSpeed + (ALevelBonus * Agility);
	Defence = BaseDefence + (TLevelBonus * Toughness);
}

void AGameObject::OnHit(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit)
{
	if (IsAlive == false)
		return;

	APostArcanaProjectile* projectile = Cast<APostArcanaProjectile>(OtherActor);
	if (projectile != nullptr && (OtherComp != nullptr) && OtherActor != this)
	{
		TakeDamage(projectile->GetDamage());
	}
}

void AGameObject::TakeDamage(int Dmg) //TO TEST
{
	if (IsAlive)
	{
		int TrueDmg = (Dmg - Defence);
		if(TrueDmg > 0)
		Health -= TrueDmg;
		CheckAlive();
	}
}

void AGameObject::Heal(int HealAmnt) //TO TEST
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

void AGameObject::UseMana(int Cost) //TO TEST
{
	if (IsAlive)
	{
		if (Mana >= Cost)
		{
			Mana -= Cost;
		}
	}
}

void AGameObject::RegenMana(float DeltaTime) //Test and is Working
{
	Timer += DeltaTime;
	if (IsAlive)
	{
		if (Mana < MaxMana)
		{
			if (Timer >= 1)
			{
				Timer = 0;
				Mana += ManaRegen;
				if (Mana > MaxMana)
				{
					Mana = MaxMana;
				}
			}
		}
	}
}

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

bool AGameObject::CheckAlive() //TO TEST
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




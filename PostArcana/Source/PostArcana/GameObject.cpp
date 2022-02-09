// Fill out your copyright notice in the Description page of Project Settings.



#include "GameObject.h"
#include "PostArcanaProjectile.h"

// Sets default values
AGameObject::AGameObject()
{
	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;


	//Stats - Ints were used for easy math and floating point number can be prone to error. We can switch this if the team wants floats.
	//Max Stats were needed... Totally forgot about that while doing the UML
	Health = 500;
	MaxHealth = 500;
	Mana = 200;
	MaxMana = 250;
	ManaRegen = 1;
	BaseMoveSpeed = 500;
	BaseSprintSpeed = 1200;
	Defence = 50;
	IsAlive = true;

	//ManaRegenTimer - casues it add the mana regen rate to the mana every second while mana is below max
	Timer = 1.0f;

}

// Called when the game starts or when spawned
void AGameObject::BeginPlay()
{
	Super::BeginPlay();

}

void AGameObject::DisplayStats()
{
	GEngine->AddOnScreenDebugMessage(1, .1, FColor::Green, "Health - " + FString::FromInt(Health) + " / " + FString::FromInt(MaxHealth), true);
	GEngine->AddOnScreenDebugMessage(2, .1, FColor::Blue, "Mana - " + FString::FromInt(Mana) + " / " + FString::FromInt(MaxMana), true);
	GEngine->AddOnScreenDebugMessage(3, .1, FColor::Purple, "ManaRegen - " + FString::FromInt(ManaRegen), true);
	GEngine->AddOnScreenDebugMessage(4, .1, FColor::Yellow, "BaseMoveSpeed - " + FString::FromInt(BaseMoveSpeed), true);
	GEngine->AddOnScreenDebugMessage(5, .1, FColor::Orange, "BaseSprintSpeed - " + FString::FromInt(BaseSprintSpeed), true);
	GEngine->AddOnScreenDebugMessage(6, .1, FColor::Red, "Defence - " + FString::FromInt(Defence), true);
}

// Called every frame
void AGameObject::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	RegenMana(DeltaTime);
	DisplayStats();

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
		int TrueDmg = abs(Defence - Dmg);
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



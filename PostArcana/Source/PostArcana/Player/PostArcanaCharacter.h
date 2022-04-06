// Copyright Epic Games, Inc. All Rights Reserved.
//Author 1: Sebastian Comette
//Change Log: Feb 2nd 2022
			//Sprint Functionality set up. Added interaction between test box classes for testing stat changes
//Change Log: Feb 12th 2022
			//Added a tick function
//Change Log: Feb 23rd 2022
			//Added buttons to test raising stats
//Change Log: March 9th 2022
			//Set up level up functionality, experience points, and skill point allocations
//Change Log: March 29th 2022
			//Added the interact function and bound it to the letter E. The interact function does a ray cast for the actor and if it is a basic door it opens the door.
//Change Log: March 30th 2022
			//Changed the players interact function to use the Use interface. This always the function to do many different things. This things is decided by the actor the door interacts with
			//Added an overlap response for DoorTriggers

#pragma once

#include "CoreMinimal.h"
#include "GenericTeamAgentInterface.h"
#include "GameFramework/Character.h"
#include "PostArcana/GameObject.h"
#include "BehaviorTree/BehaviorTree.h"
#include "PostArcanaCharacter.generated.h"

class UInputComponent;
class USkeletalMeshComponent;
class USceneComponent;
class UCameraComponent;
class UMotionControllerComponent;
class UAnimMontage;
class USoundBase;
class ADoorKey;

UCLASS(config=Game)
class APostArcanaCharacter : public AGameObject
{
	GENERATED_BODY()

	/** Pawn mesh: 1st person view (arms; seen only by self) */
	UPROPERTY(VisibleDefaultsOnly, Category=Mesh)
	USkeletalMeshComponent* Mesh1P;

	/** Gun mesh: 1st person view (seen only by self) */
	UPROPERTY(VisibleDefaultsOnly, Category = Mesh)
	USkeletalMeshComponent* FP_Gun;

	/** Location on gun mesh where projectiles should spawn. */
	UPROPERTY(VisibleDefaultsOnly, Category = Mesh)
	USceneComponent* FP_MuzzleLocation;

	/** Gun mesh: VR view (attached to the VR controller directly, no arm, just the actual gun) */
	UPROPERTY(VisibleDefaultsOnly, Category = Mesh)
	USkeletalMeshComponent* VR_Gun;

	/** Location on VR gun mesh where projectiles should spawn. */
	UPROPERTY(VisibleDefaultsOnly, Category = Mesh)
	USceneComponent* VR_MuzzleLocation;

	/** First person camera */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
	UCameraComponent* FirstPersonCameraComponent;

	/** Motion controller (right hand) */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
	UMotionControllerComponent* R_MotionController;

	/** Motion controller (left hand) */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
	UMotionControllerComponent* L_MotionController;


public:
	APostArcanaCharacter();

protected:
	virtual void BeginPlay();

public:
	/** Base turn rate, in deg/sec. Other scaling may affect final turn rate. */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category=Camera)
	float BaseTurnRate;

	/** Base look up/down rate, in deg/sec. Other scaling may affect final rate. */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category=Camera)
	float BaseLookUpRate;

	/** Gun muzzle's offset from the characters location */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category=Gameplay)
	FVector GunOffset;

	/** Projectile class to spawn */
	UPROPERTY(EditDefaultsOnly, Category=Projectile)
	TSubclassOf<class APostArcanaProjectile> ProjectileClass;

	/** Sound to play each time we fire */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category=Gameplay)
	USoundBase* FireSound;

	/** AnimMontage to play each time we fire */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Gameplay)
	UAnimMontage* FireAnimation;

	/** Whether to use motion controller location for aiming. */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Gameplay)
	uint8 bUsingMotionControllers : 1;

	//Allows begining and ending overlap events to be triggered 
	UFUNCTION()
		void OnBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);

	UFUNCTION()
		void OnEndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);


	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Perception")
		class UAIPerceptionStimuliSourceComponent* PlayerPerceptionStimuliSource;

	//Allows on hit events to be triggered
	void OnHit(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit) override;
protected:
	
	/** Fires a projectile. */
	void OnFire();

	/** Resets HMD orientation and position in VR. */
	void OnResetVR();

	/** Handles moving forward/backward */
	void MoveForward(float Val);

	/** Handles stafing movement, left and right */
	void MoveRight(float Val);

	//Interact function - only use currently would be door
	UFUNCTION()
	void Interact();

	/**
	 * Called via input to turn at a given rate.
	 * @param Rate	This is a normalized rate, i.e. 1.0 means 100% of desired turn rate
	 */
	void TurnAtRate(float Rate);

	/**
	 * Called via input to turn look up/down at a given rate.
	 * @param Rate	This is a normalized rate, i.e. 1.0 means 100% of desired turn rate
	 */
	void LookUpAtRate(float Rate);

	struct TouchData
	{
		TouchData() { bIsPressed = false;Location=FVector::ZeroVector;}
		bool bIsPressed;
		ETouchIndex::Type FingerIndex;
		FVector Location;
		bool bMoved;
	};
	void BeginTouch(const ETouchIndex::Type FingerIndex, const FVector Location);
	void EndTouch(const ETouchIndex::Type FingerIndex, const FVector Location);
	void TouchUpdate(const ETouchIndex::Type FingerIndex, const FVector Location);
	TouchData	TouchItem;
	
protected:
	// APawn interface
	virtual void SetupPlayerInputComponent(UInputComponent* InputComponent) override;
	// End of APawn interface

	/* 
	 * Configures input for touchscreen devices if there is a valid touch interface for doing so 
	 *
	 * @param	InputComponent	The input component pointer to bind controls to
	 * @returns true if touch controls were enabled.
	 */
	bool EnableTouchscreenMovement(UInputComponent* InputComponent);
	//To ensure enemies don't instantly kill the player
	float invincibleTimer;
	
public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	/** Returns Mesh1P subobject **/
	USkeletalMeshComponent* GetMesh1P() const { return Mesh1P; }
	/** Returns FirstPersonCameraComponent subobject **/
	UCameraComponent* GetFirstPersonCameraComponent() const { return FirstPersonCameraComponent; }

	//HUD CALLS
	UFUNCTION(BlueprintCallable, Category = "Health")
		int GetHealth() { return Health; }

	UFUNCTION(BlueprintCallable, Category = "Health")
		int GetMaxHealth() { return MaxHealth; }

	UFUNCTION(BlueprintCallable, Category = "Mana")
		int GetMana() { return Mana; }

	UFUNCTION(BlueprintCallable, Category = "Mana")
		int GetMaxMana() { return MaxMana; }
	
	UFUNCTION(BlueprintCallable, Category = "Defence")
		int GetDefence() { return Defence; }
	void SetInvincible();
	bool CheckInvincible();

	APlayerController* GetPlayerController();

	//Get the key the player has picked up
	void GetKey(ADoorKey* pKey);

	//Check the players key ring to see if they have the proper key
	ADoorKey* CheckKeys(ADoorKey* pKey);

	//KeyRing
	TArray<ADoorKey*> DoorKeys;

private:

	//increases the players speed while the shift key is held
	void Sprint();
	void StopSprint();
	
	//Checks to see if the player has enough experience to level up
	void CheckforLevelUp();



//Skill point allocation 
public:
	
	//Level up variables
	int SpentPoints; //Spent Skill points
	int ExperiencePoints; //Current Experience points
	int MaxExperiencePoints; //Experience needed to level up
	int CurrentLevel; //The players current level
	int SkillPoints; //The players unspent skill points obtained on level up

	//Check the number of skill point. Menu call
	UFUNCTION(BlueprintCallable, Category = "Xp")
		int GetSkillPoints() { return SkillPoints; }


	//Functions that increase a stat by allocating a skill point to that stat.
	UFUNCTION()
	void EnduranceUp();

	UFUNCTION()
	void IntelUp();

	UFUNCTION()
	void WillUp();

	UFUNCTION()
	void AgilUp();

	UFUNCTION()
	void ToughUp();

	//Allows the player to reset all stat levels and get back any spent skill points 
	UFUNCTION()
	void Respec();



};


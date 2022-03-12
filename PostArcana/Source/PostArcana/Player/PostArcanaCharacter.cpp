// Copyright Epic Games, Inc. All Rights Reserved.

#include "PostArcanaCharacter.h"
#include "PostArcana/AI/PostArcanaAICharacter.h"
#include "PostArcana/PostArcanaProjectile.h"
#include "PostArcana/Test/Test_DamageBox.h"
#include "PostArcana/Test/Test_HealBox.h"
#include "PostArcana/Test/Test_ManaBox.h"
#include "PostArcana/Test/Test_XpBox.h"
#include "Animation/AnimInstance.h"
#include "Camera/CameraComponent.h"
#include "Components/CapsuleComponent.h"
#include "Components/InputComponent.h"
#include "GameFramework/InputSettings.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "HeadMountedDisplayFunctionLibrary.h"
#include "Kismet/GameplayStatics.h"
#include "Perception/AISense_Sight.h"
#include "Perception/AIPerceptionStimuliSourceComponent.h"
#include "MotionControllerComponent.h"
#include "XRMotionControllerBase.h" // for FXRMotionControllerBase::RightHandSourceId

DEFINE_LOG_CATEGORY_STATIC(LogFPChar, Warning, All);

//////////////////////////////////////////////////////////////////////////
// APostArcanaCharacter

APostArcanaCharacter::APostArcanaCharacter()
{
	// Set size for collision capsule
	GetCapsuleComponent()->InitCapsuleSize(55.f, 96.0f);

	// set our turn rates for input
	BaseTurnRate = 45.f;
	BaseLookUpRate = 45.f;

	// Create a CameraComponent	
	FirstPersonCameraComponent = CreateDefaultSubobject<UCameraComponent>(TEXT("FirstPersonCamera"));
	FirstPersonCameraComponent->SetupAttachment(GetCapsuleComponent());
	FirstPersonCameraComponent->SetRelativeLocation(FVector(-39.56f, 1.75f, 64.f)); // Position the camera
	FirstPersonCameraComponent->bUsePawnControlRotation = true;

	// Create a mesh component that will be used when being viewed from a '1st person' view (when controlling this pawn)
	Mesh1P = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("CharacterMesh1P"));
	Mesh1P->SetOnlyOwnerSee(true);
	Mesh1P->SetupAttachment(FirstPersonCameraComponent);
	Mesh1P->bCastDynamicShadow = false;
	Mesh1P->CastShadow = false;
	Mesh1P->SetRelativeRotation(FRotator(1.9f, -19.19f, 5.2f));
	Mesh1P->SetRelativeLocation(FVector(-0.5f, -4.4f, -155.7f));

	// Create a gun mesh component
	FP_Gun = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("FP_Gun"));
	FP_Gun->SetOnlyOwnerSee(false);			// otherwise won't be visible in the multiplayer
	FP_Gun->bCastDynamicShadow = false;
	FP_Gun->CastShadow = false;
	// FP_Gun->SetupAttachment(Mesh1P, TEXT("GripPoint"));
	FP_Gun->SetupAttachment(RootComponent);

	FP_MuzzleLocation = CreateDefaultSubobject<USceneComponent>(TEXT("MuzzleLocation"));
	FP_MuzzleLocation->SetupAttachment(FP_Gun);
	FP_MuzzleLocation->SetRelativeLocation(FVector(0.2f, 48.4f, -10.6f));

	// Default offset from the character location for projectiles to spawn
	GunOffset = FVector(100.0f, 0.0f, 10.0f);

	// Note: The ProjectileClass and the skeletal mesh/anim blueprints for Mesh1P, FP_Gun, and VR_Gun 
	// are set in the derived blueprint asset named MyCharacter to avoid direct content references in C++.

	// Create VR Controllers.
	R_MotionController = CreateDefaultSubobject<UMotionControllerComponent>(TEXT("R_MotionController"));
	R_MotionController->MotionSource = FXRMotionControllerBase::RightHandSourceId;
	R_MotionController->SetupAttachment(RootComponent);
	L_MotionController = CreateDefaultSubobject<UMotionControllerComponent>(TEXT("L_MotionController"));
	L_MotionController->SetupAttachment(RootComponent);

	// Create a gun and attach it to the right-hand VR controller.
	// Create a gun mesh component
	VR_Gun = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("VR_Gun"));
	VR_Gun->SetOnlyOwnerSee(false);			// otherwise won't be visible in the multiplayer
	VR_Gun->bCastDynamicShadow = false;
	VR_Gun->CastShadow = false;
	VR_Gun->SetupAttachment(R_MotionController);
	VR_Gun->SetRelativeRotation(FRotator(0.0f, -90.0f, 0.0f));

	VR_MuzzleLocation = CreateDefaultSubobject<USceneComponent>(TEXT("VR_MuzzleLocation"));
	VR_MuzzleLocation->SetupAttachment(VR_Gun);
	VR_MuzzleLocation->SetRelativeLocation(FVector(0.000004, 53.999992, 10.000000));
	VR_MuzzleLocation->SetRelativeRotation(FRotator(0.0f, 90.0f, 0.0f));		// Counteract the rotation of the VR gun model.

	// Uncomment the following line to turn motion controllers on by default:
	//bUsingMotionControllers = true;
	GetCapsuleComponent()->OnComponentBeginOverlap.AddDynamic(this, &APostArcanaCharacter::OnBeginOverlap);
	GetCapsuleComponent()->OnComponentEndOverlap.AddDynamic(this, &APostArcanaCharacter::OnEndOverlap);

	//OnHit Settup, for taking Damage
	GetCapsuleComponent()->OnComponentHit.AddDynamic(this, &Super::OnHit);

	GetCharacterMovement()->MaxWalkSpeed = BaseMoveSpeed;
	PlayerPerceptionStimuliSource = CreateDefaultSubobject<UAIPerceptionStimuliSourceComponent>(TEXT("PercSS"));
	PlayerPerceptionStimuliSource->RegisterForSense(UAISense_Sight::StaticClass());

	//test
	//Endurance = 1;
	//Intelligence = 2;
	//Will = 3;
	//Agility = 5;
	//Toughness = 6;
	//SkillPoints = 0;
	//SpentPoints = 17;

	//Set Team to player Team
	GenericTeamId = 0;

	//Set Invinsible Timer
	invincibleTimer = 0.0f;

	//Starting Values - including Test stats

	CurrentLevel = 1;
	ExperiencePoints = 0;
	MaxExperiencePoints =  100 * CurrentLevel;//Make sure lowest level is 1 other wise use -> 100 + (100 * CurrentLevel)

	////Starting Values - not including Test stats
	SkillPoints = 5;
	SpentPoints = 0;
}

void APostArcanaCharacter::BeginPlay()
{
	// Call the base class  
	Super::BeginPlay();

	//Attach gun mesh component to Skeleton, doing it here because the skeleton is not yet created in the constructor
	FP_Gun->AttachToComponent(Mesh1P, FAttachmentTransformRules(EAttachmentRule::SnapToTarget, true), TEXT("GripPoint"));

	// Show or hide the two versions of the gun based on whether or not we're using motion controllers.
	if (bUsingMotionControllers)
	{
		VR_Gun->SetHiddenInGame(false, true);
		Mesh1P->SetHiddenInGame(true, true);
	}
	else
	{
		VR_Gun->SetHiddenInGame(true, true);
		Mesh1P->SetHiddenInGame(false, true);
	}
}

//////////////////////////////////////////////////////////////////////////
// Input

void APostArcanaCharacter::SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent)
{
	// set up gameplay key bindings
	check(PlayerInputComponent);

	// Bind jump events
	PlayerInputComponent->BindAction("Jump", IE_Pressed, this, &ACharacter::Jump);
	PlayerInputComponent->BindAction("Jump", IE_Released, this, &ACharacter::StopJumping);

	// Bind fire event
	PlayerInputComponent->BindAction("Fire", IE_Pressed, this, &APostArcanaCharacter::OnFire);

	// Enable touchscreen input
	EnableTouchscreenMovement(PlayerInputComponent);

	PlayerInputComponent->BindAction("ResetVR", IE_Pressed, this, &APostArcanaCharacter::OnResetVR);

	// Bind movement events
	PlayerInputComponent->BindAxis("MoveForward", this, &APostArcanaCharacter::MoveForward);
	PlayerInputComponent->BindAxis("MoveRight", this, &APostArcanaCharacter::MoveRight);

	// We have 2 versions of the rotation bindings to handle different kinds of devices differently
	// "turn" handles devices that provide an absolute delta, such as a mouse.
	// "turnrate" is for devices that we choose to treat as a rate of change, such as an analog joystick
	PlayerInputComponent->BindAxis("Turn", this, &APawn::AddControllerYawInput);
	PlayerInputComponent->BindAxis("TurnRate", this, &APostArcanaCharacter::TurnAtRate);
	PlayerInputComponent->BindAxis("LookUp", this, &APawn::AddControllerPitchInput);
	PlayerInputComponent->BindAxis("LookUpRate", this, &APostArcanaCharacter::LookUpAtRate);

	PlayerInputComponent->BindAction("Sprint", IE_Pressed, this, &APostArcanaCharacter::Sprint);
	PlayerInputComponent->BindAction("Sprint", IE_Released, this, &APostArcanaCharacter::StopSprint);
	
	//Debugging REMOVE IN ACTUAL GAME 
	//PlayerInputComponent->BindAction("E+", IE_Released, this, &APostArcanaCharacter::EnduranceUp);
	//PlayerInputComponent->BindAction("I+", IE_Released, this, &APostArcanaCharacter::IntelUp);
	//PlayerInputComponent->BindAction("W+", IE_Released, this, &APostArcanaCharacter::WillUp);
	//PlayerInputComponent->BindAction("A+", IE_Released, this, &APostArcanaCharacter::AgilUp);
	//PlayerInputComponent->BindAction("T+", IE_Released, this, &APostArcanaCharacter::ToughUp);
	//PlayerInputComponent->BindAction("E-", IE_Released, this, &APostArcanaCharacter::EnduranceDown);
	//PlayerInputComponent->BindAction("I-", IE_Released, this, &APostArcanaCharacter::IntelDown);
	//PlayerInputComponent->BindAction("W-", IE_Released, this, &APostArcanaCharacter::WillDown);
	//PlayerInputComponent->BindAction("A-", IE_Released, this, &APostArcanaCharacter::AgilDown);
	//PlayerInputComponent->BindAction("T-", IE_Released, this, &APostArcanaCharacter::ToughDown);
}

void APostArcanaCharacter::OnBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	if (CheckAlive())
	{
		if (OtherActor != nullptr)
		{
			ATest_DamageBox* DmgBox = Cast<ATest_DamageBox>(OtherActor);

			if (DmgBox != nullptr)
			{
				TakeDamage(DmgBox->DMG);
			}
		}
		if (OtherActor != nullptr)
		{
			ATest_HealBox* HealBox = Cast<ATest_HealBox>(OtherActor);

			if (HealBox != nullptr)
			{
				Heal(HealBox->HealAmnt);
			}
		}
		if (OtherActor != nullptr)
		{
			ATest_ManaBox* ManaBox = Cast<ATest_ManaBox>(OtherActor);

			if (ManaBox != nullptr)
			{
				GainMana(ManaBox->ManaAmnt);
			}
		}
		//xp box
		if (OtherActor != nullptr)
		{
			ATest_XpBox* XpBox = Cast<ATest_XpBox>(OtherActor);

			if (XpBox != nullptr)
			{
				ExperiencePoints += XpBox->XpAmnt;
			}
		}
	}
}

void APostArcanaCharacter::OnEndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
}

//Allows enemies to damage the player
void APostArcanaCharacter::OnHit(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit)
{
	if (!CheckInvincible()) {
		//store current health
		int currentHealth = Health;
		//checks for enemy and damages player accordingly
		APostArcanaAICharacter* enemy = Cast<APostArcanaAICharacter>(OtherActor);
		if (enemy != nullptr && (OtherComp != nullptr))
		{
			TakeDamage(enemy->GetDamage());
		}
		//Passes back to Gameobject for projectile damage
		Super::OnHit(HitComp, OtherActor, OtherComp, NormalImpulse, Hit);
		//Checks if the player was damaged, and sets invincible timer if they were
		if (Health < currentHealth) {
			SetInvincible();
		}
	}
}

void APostArcanaCharacter::OnFire()
{
	int Cost = 25;
	if (Mana > Cost)
	{
		// try and fire a projectile
		if (ProjectileClass != nullptr)
		{
			UWorld* const World = GetWorld();
			if (World != nullptr)
			{

				const FRotator SpawnRotation = GetControlRotation();
				// MuzzleOffset is in camera space, so transform it to world space before offsetting from the character location to find the final muzzle position
				const FVector SpawnLocation = ((FP_MuzzleLocation != nullptr) ? FP_MuzzleLocation->GetComponentLocation() : GetActorLocation()) + SpawnRotation.RotateVector(GunOffset);

				//Set Spawn Collision Handling Override
				FActorSpawnParameters ActorSpawnParams;
				ActorSpawnParams.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AdjustIfPossibleButDontSpawnIfColliding;

				// spawn the projectile at the muzzle
				APostArcanaProjectile* spawnedProjectile = World->SpawnActor<APostArcanaProjectile>(ProjectileClass, SpawnLocation, SpawnRotation, ActorSpawnParams);
				
				if (spawnedProjectile != nullptr)
				{
					//Replace the hard-coded value w/ intelligence stat variable
					spawnedProjectile->SetDamage(Intelligence);
				}

				UseMana(Cost);

			}
		}

		// try and play the sound if specified
		if (FireSound != nullptr)
		{
			UGameplayStatics::PlaySoundAtLocation(this, FireSound, GetActorLocation());
		}

		// try and play a firing animation if specified
		if (FireAnimation != nullptr)
		{
			// Get the animation object for the arms mesh
			UAnimInstance* AnimInstance = Mesh1P->GetAnimInstance();
			if (AnimInstance != nullptr)
			{
				AnimInstance->Montage_Play(FireAnimation, 1.f);
			}
		}
	}
}

void APostArcanaCharacter::OnResetVR()
{
	UHeadMountedDisplayFunctionLibrary::ResetOrientationAndPosition();
}

void APostArcanaCharacter::BeginTouch(const ETouchIndex::Type FingerIndex, const FVector Location)
{
	if (TouchItem.bIsPressed == true)
	{
		return;
	}
	if ((FingerIndex == TouchItem.FingerIndex) && (TouchItem.bMoved == false))
	{
		OnFire();
	}
	TouchItem.bIsPressed = true;
	TouchItem.FingerIndex = FingerIndex;
	TouchItem.Location = Location;
	TouchItem.bMoved = false;
}

void APostArcanaCharacter::EndTouch(const ETouchIndex::Type FingerIndex, const FVector Location)
{
	if (TouchItem.bIsPressed == false)
	{
		return;
	}
	TouchItem.bIsPressed = false;
}

void APostArcanaCharacter::MoveForward(float Value)
{
	if (Value != 0.0f)
	{
		// add movement in that direction
		AddMovementInput(GetActorForwardVector(), Value);
	}
}

void APostArcanaCharacter::MoveRight(float Value)
{
	if (Value != 0.0f)
	{
		// add movement in that direction
		AddMovementInput(GetActorRightVector(), Value);
	}
}

void APostArcanaCharacter::TurnAtRate(float Rate)
{
	// calculate delta for this frame from the rate information
	AddControllerYawInput(Rate * BaseTurnRate * GetWorld()->GetDeltaSeconds());
}

void APostArcanaCharacter::LookUpAtRate(float Rate)
{
	// calculate delta for this frame from the rate information
	AddControllerPitchInput(Rate * BaseLookUpRate * GetWorld()->GetDeltaSeconds());
}

bool APostArcanaCharacter::EnableTouchscreenMovement(class UInputComponent* PlayerInputComponent)
{
	if (FPlatformMisc::SupportsTouchInput() || GetDefault<UInputSettings>()->bUseMouseForTouch)
	{
		PlayerInputComponent->BindTouch(EInputEvent::IE_Pressed, this, &APostArcanaCharacter::BeginTouch);
		PlayerInputComponent->BindTouch(EInputEvent::IE_Released, this, &APostArcanaCharacter::EndTouch);

		//Commenting this out to be more consistent with FPS BP template.
		//PlayerInputComponent->BindTouch(EInputEvent::IE_Repeat, this, &APostArcanaCharacter::TouchUpdate);
		return true;
	}
	
	return false;
}

void APostArcanaCharacter::SetInvincible()
{
	invincibleTimer = 1.0f;
}

bool APostArcanaCharacter::CheckInvincible()
{
	if (invincibleTimer > 0.0f) {
		return true;
	}
	else {
		return false;
	}
	
}

void APostArcanaCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	//Commented for testing enemies
	//DisplayStats();
	
	//Updates Invincible Timer
	if (invincibleTimer > 0.0f) {
		invincibleTimer -= DeltaTime;
		if (invincibleTimer < 0.0f) {
			invincibleTimer = 0.0f;
		}
	}

	CheckforLevelUp();
}

void APostArcanaCharacter::Sprint()
{
	GetCharacterMovement()->MaxWalkSpeed = BaseSprintSpeed;
}

void APostArcanaCharacter::StopSprint()
{
	GetCharacterMovement()->MaxWalkSpeed = BaseMoveSpeed;
}


void APostArcanaCharacter::CheckforLevelUp()
{
	if (ExperiencePoints >= MaxExperiencePoints)
	{
		int overFlow = ExperiencePoints - MaxExperiencePoints;
		CurrentLevel++;
		MaxExperiencePoints = 100 * CurrentLevel;//Make sure lowest level is 1 other wise use -> 100 + (100 * CurrentLevel)
		SkillPoints++;
		ExperiencePoints = 0;

		if (overFlow > 0)
		{
			ExperiencePoints = overFlow;
		}
	}
}

//SPRINT 3
void APostArcanaCharacter::EnduranceUp()
{
	if (SkillPoints > 0)
	{
		Endurance++;
		SkillPoints--;
		SpentPoints++;
	}
}

void APostArcanaCharacter::IntelUp()
{
	if (SkillPoints > 0)
	{
		Intelligence++;
		SkillPoints--;
		SpentPoints++;
	}
}

void APostArcanaCharacter::WillUp()
{
	if (SkillPoints > 0)
	{
		Will++;
		SkillPoints--;
		SpentPoints++;
	}
}

void APostArcanaCharacter::AgilUp()
{
	if (SkillPoints > 0)
	{
		Agility++;
		SkillPoints--;
		SpentPoints++;
	}
}

void APostArcanaCharacter::ToughUp()
{
	if (SkillPoints > 0)
	{
		Toughness++;
		SkillPoints--;
		SpentPoints++;
	}
}

void APostArcanaCharacter::Respec()
{
	if (SpentPoints > 0)
	{
		SkillPoints = SpentPoints + SkillPoints;
		SpentPoints = 0;
		Endurance = 0;
		Intelligence = 0;
		Will = 0;
		Agility = 0;
		Toughness = 0;

	}
}

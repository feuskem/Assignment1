// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BaseWeapon.h"
#include "Components/CapsuleComponent.h"
#include "Components/SceneComponent.h"
#include "Sound/SoundCue.h"
#include "Particles/ParticleSystem.h"
#include "Engine/EngineTypes.h"
#include "BaseGameInstance.h"
#include "GameFramework/Pawn.h"
#include "BaseGameAgent.generated.h"

UCLASS()
class ABaseGameAgent : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	ABaseGameAgent();

	


protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;


	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BirdOfPrey")
	float MoveSpeed;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BirdOfPrey")
	USkeletalMesh* SkeletalMesh;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BirdOfPrey")
	UCapsuleComponent* Capsule;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BirdOfPrey")
	USceneComponent* WeaponSpawnOffset;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BirdOfPrey")
	UParticleSystem* DeathParticleEffect;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BirdOfPrey")
	UParticleSystem* HitParticleEffect;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BirdOfPrey")
	USoundCue* DeathSoundCue;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BirdOfPrey")
	USoundCue* HitSoundCue;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BirdOfPrey")
	class ABaseWeapon* Weapon;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BirdOfPrey")
	TSubclassOf<ABaseWeapon> DefaultWeaponType;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BirdOfPrey")
	float Health;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BirdOfPrey")
	FSAgentInfo AgentInfo;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BirdOfPrey")
	float Points;


	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BirdOfPrey")
	UStaticMesh* Mesh;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BirdOfPrey")
	bool bCheckForOutOfBounds;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BirdOfPrey")
	float OutOfBoundsCheckTolerance;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BirdOfPrey")
	FName WeaponSocketName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BirdOfPrey")
	EAttachmentRule WeaponAttachRule;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BirdOfPrey")
	FVector TargetLocation;


	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "BirdOfPrey")
	void GetWeaponSpawnTransform(FTransform& SpawnTransform);

	virtual void GetWeaponSpawnTransform_Implementation(FTransform& SpawnTransform);



	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	void ChangeWeaponType(TSubclassOf<ABaseWeapon> NewWeaponType);

	


	

	
	UFUNCTION(BlueprintCallable, CallInEditor, Category = "BirdOfPrey")
	void SpawnDefaultWeapon();


	UFUNCTION(BlueprintCallable, CallInEditor, Category = "BirdOfPrey")
	void StartFire();

	UFUNCTION(BlueprintCallable,  Category = "BirdOfPrey")
	void StopFire();

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	virtual void Take_Damage(float Damage, float& ActualDamage);

	UFUNCTION(BlueprintPure,BlueprintCallable, Category = "BirdOfPrey")
	bool IsAlive(bool Alive);

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = "BirdOfPrey")
	void Died(AController * Killer);

	virtual void Died_Implementation(AController* Killer);

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	void PlayHitEffects();

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	void CleanUp();

	UFUNCTION(BlueprintCallable,BlueprintNativeEvent, Category = "BirdOfPrey")
	void ApplyAgentInfo(FSAgentInfo NewAgentInfo);
    virtual void ApplyAgentInfo_Implementation(const FSAgentInfo& NewAgentInfo);


	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	void AimAt(FVector AimTarget);

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	void PlayDeadEffects();

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	void CheckForOutOfBounds();
	
	



	

	


	

	

	






};

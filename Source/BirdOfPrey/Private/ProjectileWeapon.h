// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BaseProjectile.h"
#include "BaseWeapon.h"
#include "ProjectileWeapon.generated.h"

/**
 * 
 */
UCLASS()
class AProjectileWeapon : public ABaseWeapon
{
	GENERATED_BODY()

public:

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BirdOfPrey")
	TSubclassOf<ABaseProjectile>  ProjectileType;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BirdOfPrey")
	float RefireTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BirdOfPrey")
	float LastFireTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BirdOfPrey")
	int NumShots;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BirdOfPrey")
	bool bIsFiring;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BirdOfPrey")
	float DesiredZ;

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	void SpawnProjectile(FTransform SpawnTransform, TSubclassOf < ABaseProjectile>& ReturnValue);

	UFUNCTION(BlueprintPure,BlueprintCallable, Category = "BirdOfPrey")
	void GetProjectileSpawnTransform(int ShotNumber, FTransform& ReturnValue);

	UFUNCTION(BlueprintPure,BlueprintCallable, Category = "BirdOfPrey")
	bool ReadyToFire();

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "BirdOfPrey")
	void FireProjectile();
	virtual void FireProjectile_Implementation();

	virtual void StartFire_Implementation() override;

	virtual void StopFire_Implementation() override; 

	virtual bool IsFiring() override;
	
};

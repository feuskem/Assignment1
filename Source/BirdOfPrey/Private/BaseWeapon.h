// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "GameFramework/Actor.h"
#include "BaseWeapon.generated.h"

UCLASS()
class ABaseWeapon : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ABaseWeapon();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;


	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BirdOfPrey")
	USceneComponent* DefaultSceneComponent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BirdOfPrey")
	bool bRequiresAimForAI;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BirdOfPrey")
	bool bIsAutomatic;

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = "BirdOfPrey")
	void StartFire();

	virtual void StartFire_Implementation();

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = "BirdOfPrey")
	void StopFire();

	virtual void StopFire_Implementation();

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	void PlayFireEffects();

	UFUNCTION(BlueprintPure,BlueprintCallable, Category = "BirdOfPrey")
	FTransform GetFireEffectSpawnTransform();

	UFUNCTION(BlueprintPure,BlueprintCallable, Category = "BirdOfPrey")
	bool HasFinishedFiring();

	UFUNCTION(BlueprintPure,BlueprintCallable, Category = "BirdOfPrey")
	virtual bool IsFiring();
};

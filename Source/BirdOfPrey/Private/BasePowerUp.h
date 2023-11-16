// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "PlayerShip.h"
#include "Sound/SoundCue.h"
#include "Particles/ParticleSystem.h"
#include "GameFramework/Actor.h"
#include "BasePowerUp.generated.h"

UCLASS()
class ABasePowerUp : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ABasePowerUp();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	void Apply(APlayerShip* PlayerShip);

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BirdOfPrey")
	USoundCue* PickUpSoundCue;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BirdOfPrey")
	UParticleSystem* PickUpParticleSystem;

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	void PlayEffects();
};

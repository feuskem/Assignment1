// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/PointLightComponent.h"
#include "Components/AudioComponent.h"
#include "BaseShip.h"
#include "PlayerShip.generated.h"

/**
 * 
 */
UCLASS()
class APlayerShip : public ABaseShip
{
	GENERATED_BODY()

public: 

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BirdOfPrey")
	class ABasePlayerController* BasePlayerController;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BirdOfPrey")
	float InvulnerabilityTime;


	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BirdOfPrey")
	UPointLightComponent* PointLight;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BirdOfPrey")
	UAudioComponent* HoverAudio;

	UFUNCTION(BlueprintPure,BlueprintCallable, Category = "BirdOfPrey")
	void GetShipConstantVelocity(FVector& Direction, float& Speed);

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	void ClampToCameraBounds();

	UFUNCTION(BlueprintPure,BlueprintCallable, Category = "BirdOfPrey")
	void GetShipAxisAdjustment(float Dist, float Max, float& ReturnValue);

	UFUNCTION(BlueprintPure,BlueprintCallable, Category = "BirdOfPrey")
	void CalcOutOfBoundsAdjustment(FVector& ReturnValue);

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	void GetPlayerAgentInfo(TSubclassOf<APlayerController> Player);


	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	void UpdateHoverPitch();

	UFUNCTION(BlueprintPure,BlueprintCallable, Category = "BirdOfPrey")
	bool HasDiedRecently();

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	void ShouldSpawnAIController();

	virtual void Died_Implementation(AController* Killer) override;

	virtual void Take_Damage(float Damage, float& ActualDamage) override;
		
};

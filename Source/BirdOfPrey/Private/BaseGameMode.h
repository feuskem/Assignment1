// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "WorldCameraActor.h"
#include "BaseGameAgent.h"
#include "Components/SceneComponent.h"
#include "BasePlayerController.h"
#include "BasePowerUp.h"
#include "GameFramework/GameModeBase.h"
#include "BaseGameMode.generated.h"

/**
 * 
 */
UCLASS()
class ABaseGameMode : public AGameModeBase
{
	GENERATED_BODY()

public:


	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BirdOfPrey")
	USceneComponent* DefaultSceneRoot;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BirdOfPrey")
	float WorldScrollSpeed;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BirdOfPrey")
	FVector2D MaxRelativePlayerOffset;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BirdOfPrey")
	class AWorldCameraActor* WorldCameraActor;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BirdOfPrey")
	UDataTable* PlayerAgentInfoTable;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BirdOfPrey")
	float RespawnDelay;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BirdOfPrey")
	float SpawnOffset;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BirdOfPrey")
	FTimerHandle StationarySpawnTimer;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BirdOfPrey")
	FTimerHandle ShipSpawnTimer;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BirdOfPrey")
	TArray<ABasePowerUp*> PowerUpList;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BirdOfPrey")
	float PickUpSpawnPercent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BirdOfPrey")
	bool IsGameOverScreen;

	UFUNCTION(BlueprintPure,BlueprintCallable, Category = "BirdOfPrey")
	void GetWorldScrollVelocity(FTransform& SpawnTransform);

	UFUNCTION(BlueprintPure,BlueprintCallable, Category = "BirdOfPrey")
	AWorldCameraActor* GetWorldCameraActor();

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	void OnPlayerDied(ABasePlayerController* Player);

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	void OnEnemyDied(ABaseGameAgent* Enemy, AController* Killer);

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	void StartGame();

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	bool EndGame(bool Success);

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	void SpawnEnemyFrom(TArray<ABaseGameAgent*> ClassList);

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	void ResetGame();

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	void RespawnPlayer();

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	FVector TrySpawnPowerUp(FVector Location);

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	float GetDistanceTravelled();








	
};

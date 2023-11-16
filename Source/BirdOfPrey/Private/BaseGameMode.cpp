// Fill out your copyright notice in the Description page of Project Settings.


#include "BaseGameMode.h"

void ABaseGameMode::GetWorldScrollVelocity(FTransform& SpawnTransform)
{
}

AWorldCameraActor* ABaseGameMode::GetWorldCameraActor()
{
	return WorldCameraActor;
}

void ABaseGameMode::OnPlayerDied(ABasePlayerController* Player)
{
}

void ABaseGameMode::OnEnemyDied(ABaseGameAgent* Enemy, AController* Killer)
{
}

void ABaseGameMode::StartGame()
{
}

bool ABaseGameMode::EndGame(bool Success)
{
	return false;
}

void ABaseGameMode::SpawnEnemyFrom(TArray<ABaseGameAgent*> ClassList)
{
}

void ABaseGameMode::ResetGame()
{
}

void ABaseGameMode::RespawnPlayer()
{
}

FVector ABaseGameMode::TrySpawnPowerUp(FVector Location)
{
	return FVector();
}

float ABaseGameMode::GetDistanceTravelled()
{
	return 0.0f;
}










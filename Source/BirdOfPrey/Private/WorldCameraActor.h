// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/SpringArmComponent.h"
#include "Components/SceneComponent.h"
#include "Camera/CameraComponent.h"
#include "Components/ArrowComponent.h"
#include "PlayerShip.h"
#include "GameFramework/Actor.h"
#include "WorldCameraActor.generated.h"

UCLASS()
class AWorldCameraActor : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AWorldCameraActor();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BirdOfPrey")
	USpringArmComponent* SpringArm;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BirdOfPrey")
	USceneComponent* CameraOffsetComponent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BirdOfPrey")
	UArrowComponent* Arrow;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BirdOfPrey")
	UCameraComponent* Camera;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BirdOfPrey")
	float ScrollSpeed;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BirdOfPrey")
	float MaxHorizontalOffset;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BirdOfPrey")
	float LastKnowPlayerShipOffset;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BirdOfPrey")
	FVector2D ScreenDimensions;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BirdOfPrey")
	FVector StartLocation;

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	void MoveActor(FVector Amount);

	UFUNCTION(BlueprintPure,BlueprintCallable, Category = "BirdOfPrey")
	void GetMovementVectors(float DeltaTime,FVector& ForwardMovementActor, FVector& HorizontalMovementActor);

	UFUNCTION(BlueprintPure, BlueprintCallable, Category = "BirdOfPrey")
	void CalculateForwardMovement(float DeltaTime, FVector& ForwardMovement);

	UFUNCTION(BlueprintPure, BlueprintCallable, Category = "BirdOfPrey")
	void CalculateHorizontalMovement(float DeltaTime, FVector& ReturnValue);

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	void CalculateAveragePlayerShipOffset(TArray<APlayerShip*> PlayerShips,float& Offset);

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	void MoveCameraOffset(FVector Amount);

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	void SetPlayerViewCamera(TSubclassOf<APlayerController> Target);

	UFUNCTION(BlueprintPure, BlueprintCallable, Category = "BirdOfPrey")
	void GetDistanceTravelled(float& ReturnValue);

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	void SetScreenDimensions(float Height, float Width);

	UFUNCTION(BlueprintPure, BlueprintCallable, Category = "BirdOfPrey")
	void GetScreenDimensions(float& Height, float& Width);
};

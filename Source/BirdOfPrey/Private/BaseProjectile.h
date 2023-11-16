// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BaseGameAgent.h"
#include "Components/CapsuleComponent.h"
#include "GameFramework/ProjectileMovementComponent.h"
#include "GameFramework/Actor.h"
#include "BaseProjectile.generated.h"

UCLASS()
class ABaseProjectile : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ABaseProjectile();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BirdOfPrey")
	UProjectileMovementComponent* ProjectileMovement;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BirdOfPrey")
	UCapsuleComponent* Capsule;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BirdOfPrey")
	UStaticMesh* Mesh;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BirdOfPrey")
	float ProjectileSpeed;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BirdOfPrey")
	float Damage;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BirdOfPrey")
	UParticleSystem* DetonationEmitter;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BirdOfPrey")
	float GroundUnitCheckDistance;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BirdOfPrey")
	float GroundUnitCheckAngle;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BirdOfPrey")
	ABaseGameAgent* GroundTarget;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BirdOfPrey")
	float DesiredZ;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BirdOfPrey")
	USoundBase* ImpactSound;

	UFUNCTION(BlueprintNativeEvent,BlueprintCallable, Category = "BirdOfPrey")
	void CleanUpAndDestroy();

	virtual void CleanUpAndDestroy_Implementation();


	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	void InitialiseProjectile(FVector Direction, float Speed);


	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	void DealDamageTo(AActor* Damaging,float m_Damage );

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	void OnHit(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor);

	UFUNCTION(BlueprintPure,BlueprintCallable, Category = "BirdOfPrey")
	ECollisionChannel GetInstigatorCollisionChannel();

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	void CheckForGroundUnitTarget();

	UFUNCTION(BlueprintPure,BlueprintCallable, Category = "BirdOfPrey")
	bool ShouldCheckForGroundTarget();

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	void AdjustToTarget();

	UFUNCTION(BlueprintPure,BlueprintCallable, Category = "BirdOfPrey")
	bool IsEnemyProjectile();


	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	void AdjustToDesiredZ();





};

// Fill out your copyright notice in the Description page of Project Settings.


#include "BaseGameAgent.h"

// Sets default values
ABaseGameAgent::ABaseGameAgent()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}



// Called when the game starts or when spawned
void ABaseGameAgent::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ABaseGameAgent::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void ABaseGameAgent::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

void ABaseGameAgent::GetWeaponSpawnTransform_Implementation(FTransform& SpawnTransform)
{
	
}

void ABaseGameAgent::ChangeWeaponType(TSubclassOf<ABaseWeapon> NewWeaponType)
{
}

void ABaseGameAgent::SpawnDefaultWeapon()
{
}




void ABaseGameAgent::StartFire()
{
}

void ABaseGameAgent::StopFire()
{
}

void ABaseGameAgent::Take_Damage(float Damage, float& ActualDamage)
{
}




bool ABaseGameAgent::IsAlive(bool Alive)
{
	return false;
}

//void ABaseGameAgent::Died(AController* Killer)

//{
//}

void ABaseGameAgent::Died_Implementation(AController* Killer)
{
}

void ABaseGameAgent::PlayHitEffects()
{
}

void ABaseGameAgent::CleanUp()
{
}









void ABaseGameAgent::ApplyAgentInfo_Implementation(const FSAgentInfo& NewAgentInfo)
{
}

void ABaseGameAgent::AimAt(FVector AimTarget)
{
}

void ABaseGameAgent::PlayDeadEffects()
{
}

void ABaseGameAgent::CheckForOutOfBounds()
{
}




























































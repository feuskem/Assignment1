// Fill out your copyright notice in the Description page of Project Settings.


#include "ProjectileWeapon.h"

void AProjectileWeapon::SpawnProjectile(FTransform SpawnTransform, TSubclassOf<ABaseProjectile>& ReturnValue)
{
}

void AProjectileWeapon::GetProjectileSpawnTransform(int ShotNumber, FTransform& ReturnValue)
{
}

bool AProjectileWeapon::ReadyToFire()
{
	return false;
}

void AProjectileWeapon::FireProjectile_Implementation()
{
}

void AProjectileWeapon::StartFire_Implementation()
{
}

void AProjectileWeapon::StopFire_Implementation()
{
}

bool AProjectileWeapon::IsFiring()
{
	return false;
}

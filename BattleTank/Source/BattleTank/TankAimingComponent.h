// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "TankAimingComponent.generated.h"

// Forward declaration 
class UTankBarrel; 
class UTankTurret;

// Hold barrel's properties and Elevate method
UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class BATTLETANK_API UTankAimingComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	
	// Called every frame

	void AimAt(FVector HitLocation, float LaunchSpeed);

	// Sets default values for this component's properties
	UTankAimingComponent();

	void SetBarrelReference(UTankBarrel* BarrelToSet);

	void SetTurretReference(UTankTurret* TurretToSet);

	
private:
	UTankBarrel* Barrel = nullptr;

	UTankTurret* Turret = nullptr;

	void MoveBarrelTowards(FVector AimDirection);
};
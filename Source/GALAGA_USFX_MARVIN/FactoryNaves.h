// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "NaveEnemiga.h"
#include "FactoryNaves.generated.h"

UCLASS()
class GALAGA_USFX_MARVIN_API AFactoryNaves : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AFactoryNaves();
	static ANaveEnemiga* SpawnNaves(FString TipoNave, UWorld* World, FVector SpawnLocation, FRotator SpawnRotation);//Funcion para fabricar naves

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};

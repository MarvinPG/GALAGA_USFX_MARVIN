// Fill out your copyright notice in the Description page of Project Settings.


#include "FactoryNaves.h"
#include "NaveEnemigaHacker.h"
// Sets default values
AFactoryNaves::AFactoryNaves()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

ANaveEnemiga* AFactoryNaves::SpawnNaves(FString TipoNave, UWorld* World, FVector SpawnLocation, FRotator SpawnRotation)
{
	if (TipoNave == "NaveEnemigaHacker")//Si el tipo de nave es NaveCaza
	{
		ANaveEnemigaHacker* NuevaNaveEnemigaHacker = World->SpawnActor<ANaveEnemigaHacker>(SpawnLocation, SpawnRotation);	//Se crea una nave Caza	
		return NuevaNaveEnemigaHacker;//Se retorna la nave creada
	}
	else {
		return nullptr;

	}
}

// Called when the game starts or when spawned
void AFactoryNaves::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AFactoryNaves::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}


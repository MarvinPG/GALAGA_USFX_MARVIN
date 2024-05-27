// Copyright Epic Games, Inc. All Rights Reserved.

#include "GALAGA_USFX_MARVINGameMode.h"
#include "GALAGA_USFX_MARVINPawn.h"
#include "NaveEnemiga.h"
#include "NaveEnemigaHacker.h"	
#include "FactoryNaves.h"
AGALAGA_USFX_MARVINGameMode::AGALAGA_USFX_MARVINGameMode()
{
	// set default pawn class to our character class
	DefaultPawnClass = AGALAGA_USFX_MARVINPawn::StaticClass();
	
}

void AGALAGA_USFX_MARVINGameMode::BeginPlay()
{
	Super::BeginPlay();
	FVector LocationNaveHacker = FVector(-150, 260, 200);
	FRotator RotationNaveHacker = FRotator(0, 180, 0);


	UWorld* World = GetWorld();
	if (World!=nullptr)
	{
		for (int i = 0; i < 5; i++) 
		{
			ANaveEnemiga* NaveEnemiga = AFactoryNaves::SpawnNaves("NaveEnemigaHacker",World, LocationNaveHacker, RotationNaveHacker);
		}
		
	}

}


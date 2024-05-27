// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "NaveEnemiga.h"
#include "GALAGA_USFX_MARVINGameMode.generated.h"

UCLASS(MinimalAPI)
class AGALAGA_USFX_MARVINGameMode : public AGameModeBase
{
	GENERATED_BODY()

public:
	AGALAGA_USFX_MARVINGameMode();

protected:
	virtual void BeginPlay() override;

};





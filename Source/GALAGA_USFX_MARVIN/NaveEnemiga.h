// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "NaveEnemiga.generated.h"
class UstaticMeshComponent;
UCLASS(Abstract)
class GALAGA_USFX_MARVIN_API ANaveEnemiga : public AActor
{
	GENERATED_BODY()
public:

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category= Projectile, meta=(AllowPrivateAccess = "True"))
	UStaticMeshComponent* mallaNaveEnemiga;


public:	
	// Sets default values for this actor's properties
	ANaveEnemiga();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
protected:
	//void Mover(float DeltaTime) PURE_VIRTUAL(ANaveEnemiga::Mover, );

};

// Fill out your copyright notice in the Description page of Project Settings.


#include "NaveEnemigaHacker.h"

void ANaveEnemigaHacker::BeginPlay()
{
	Super::BeginPlay();

}

ANaveEnemigaHacker::ANaveEnemigaHacker()
{
	static ConstructorHelpers::FObjectFinder<UStaticMesh> malla(TEXT("StaticMesh'/Game/TwinStick/Meshes/TwinStickUFO_2.TwinStickUFO_2'"));
	mallaNaveEnemiga->SetStaticMesh(malla.Object);

	VelocidadYHacker = 100.0f;
}

void ANaveEnemigaHacker::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	//Mover(DeltaTime);


}

void ANaveEnemigaHacker::Mover(float DeltaTime)
{
    //Obtenemos la posición actual del actor
    FVector PosicionActual = GetActorLocation();

    // Generamos nuevas coordenadas X e Y aleatorias
    float NuevaX = 0.0f; // No se mueve en el eje X

    // Calculamos la nueva posición en el eje Y
    float NuevaPosicionY = PosicionActual.Y + (VelocidadYHacker * DeltaTime);

    // Verificamos si la nave ha alcanzado el límite superior o inferior
    if (NuevaPosicionY <= -1000.0f || NuevaPosicionY >= 1000.0f)
    {
        // Cambiamos la dirección multiplicando por -1
        VelocidadYHacker *= -1.0f;
    }
    // Establecemos la nueva posición del actor
    SetActorLocation(FVector(PosicionActual.X + NuevaX, NuevaPosicionY, PosicionActual.Z));

}

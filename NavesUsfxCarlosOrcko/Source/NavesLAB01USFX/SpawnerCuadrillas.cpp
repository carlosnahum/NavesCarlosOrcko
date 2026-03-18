#include "SpawnerCuadrillas.h"
#include "TimerManager.h"
#include "EAAvion.h"
#include "EAHelicoptero.h"
#include "ETTanque.h"
#include "EALancha.h"
#include "Kismet/GameplayStatics.h" // Para buscar al jugador
#include "GameFramework/PlayerController.h"
ASpawnerCuadrillas::ASpawnerCuadrillas()
{
	PrimaryActorTick.bCanEverTick = false;
}

void ASpawnerCuadrillas::BeginPlay()
{
	Super::BeginPlay();

	// Paso 1: Aparece la primera cuadrilla
	SpawnCuadrilla1();

	// Paso 2: Iniciamos el timer para que empiecen a desaparecer
	GetWorldTimerManager().SetTimer(TimerHandle_Desaparicion, this, &ASpawnerCuadrillas::EliminarMiembroCuadrilla1, TiempoEntreDesapariciones, true);
}

void ASpawnerCuadrillas::SpawnCuadrilla1()
{
	// 1. Obtener la referencia al Pawn del jugador
	APawn* PlayerPawn = UGameplayStatics::GetPlayerPawn(GetWorld(), 0);

	if (PlayerPawn)
	{
		// 2. Calcular un punto frente al jugador (ej. 1000 unidades adelante)
		FVector PlayerLocation = PlayerPawn->GetActorLocation();
		FVector PlayerForward = PlayerPawn->GetActorForwardVector();

		// Punto central frente al jugador
		FVector PuntoFrente = PlayerLocation + (PlayerForward * 1000.0f);

		for (int32 i = 0; i < 3; i++)
		{
			// Espaciar a los enemigos lateralmente para que no se solapen
			FVector OffsetLateral = PlayerPawn->GetActorRightVector() * (i - 1) * 400.0f;
			FVector SpawnLocation = PuntoFrente + OffsetLateral;

			// Spawn de los enemigos (usando la lógica previa)
			AEnemigo* NuevoEnemigo = nullptr;
			if (i == 0) NuevoEnemigo = GetWorld()->SpawnActor<AEAAvion>(AEAAvion::StaticClass(), SpawnLocation, FRotator::ZeroRotator);
			else if (i == 1) NuevoEnemigo = GetWorld()->SpawnActor<AETTanque>(AETTanque::StaticClass(), SpawnLocation, FRotator::ZeroRotator);
			else NuevoEnemigo = GetWorld()->SpawnActor<AEAHelicoptero>(AEAHelicoptero::StaticClass(), SpawnLocation, FRotator::ZeroRotator);

			if (NuevoEnemigo)
			{
				NuevoEnemigo->bMovimientoAutonomo = true;
				Cuadrilla1.Add(NuevoEnemigo);
			}
		}
	}
}

void ASpawnerCuadrillas::EliminarMiembroCuadrilla1()
{
	if (Cuadrilla1.Num() > 0)
	{
		// Tomamos el último, lo destruimos y lo sacamos del array
		AEnemigo* EnemigoAEliminar = Cuadrilla1.Last();
		if (EnemigoAEliminar)
		{
			EnemigoAEliminar->Destroy();
		}
		Cuadrilla1.RemoveAt(Cuadrilla1.Num() - 1);
	}
	else
	{
		// Si ya no quedan miembros y no hemos spawneado la 2da cuadrilla
		GetWorldTimerManager().ClearTimer(TimerHandle_Desaparicion);
		if (!bCuadrilla1Eliminada)
		{
			bCuadrilla1Eliminada = true;
			SpawnCuadrilla2();
		}
	}
}

void ASpawnerCuadrillas::SpawnCuadrilla2()
{
	APawn* PlayerPawn = UGameplayStatics::GetPlayerPawn(GetWorld(), 0);

	if (PlayerPawn)
	{
		FVector PlayerLocation = PlayerPawn->GetActorLocation();
		FVector PlayerForward = PlayerPawn->GetActorForwardVector();

		// La segunda cuadrilla aparece un poco más lejos (1500 unidades)
		FVector PuntoFrente = PlayerLocation + (PlayerForward * 1500.0f);

		for (int32 i = 0; i < 2; i++)
		{
			FVector OffsetLateral = PlayerPawn->GetActorRightVector() * (i - 0.5f) * 500.0f;
			FVector SpawnLocation = PuntoFrente + OffsetLateral;

			AEALancha* NuevaLancha = GetWorld()->SpawnActor<AEALancha>(AEALancha::StaticClass(), SpawnLocation, FRotator::ZeroRotator);

			if (NuevaLancha)
			{
				NuevaLancha->bMovimientoAutonomo = true;
				Cuadrilla2.Add(NuevaLancha);
			}
		}
	}
}
#include "NavesLAB01USFXGameMode.h"
#include "Enemigo.h"
#include "Kismet/GameplayStatics.h"

ANavesLAB01USFXGameMode::ANavesLAB01USFXGameMode()
{
	PrimaryActorTick.bCanEverTick = true;
	EstadoActual = EEstadoFormacion::Libre;
}

void ANavesLAB01USFXGameMode::BeginPlay()
{
	Super::BeginPlay();

	UWorld* World = GetWorld();
	if (!World) return;

	// 1. Spawneamos al menos 20 naves (Requisito)
	for (int32 i = 0; i < CantidadNaves; i++)
	{
		FVector UbicacionSpawn(FMath::RandRange(-500, 500), FMath::RandRange(-500, 500), 200.0f);
		AEnemigo* NuevaNave = World->SpawnActor<AEnemigo>(AEnemigo::StaticClass(), UbicacionSpawn, FRotator::ZeroRotator);

		if (NuevaNave)
		{
			NuevaNave->bMovimientoAutonomo = true; // Inician moviéndose solas
			AEnemigos.Add(NuevaNave);
		}
	}

	// 2. Timer que alterna cada 5 segundos (Requisito)
	GetWorldTimerManager().SetTimer(TimerCambioEstado, this, &ANavesLAB01USFXGameMode::AlternarEstado, 5.0f, true);
}

void ANavesLAB01USFXGameMode::AlternarEstado()
{
	if (EstadoActual == EEstadoFormacion::Libre)
	{
		EstadoActual = EEstadoFormacion::FormandoInfinito;
		UE_LOG(LogTemp, Warning, TEXT("Estado: Formación Infinito"));
	}
	else
	{
		EstadoActual = EEstadoFormacion::Libre;
		// Al volver a libre, reactivamos su comportamiento original
		for (AEnemigo* Nave : AEnemigos) {
			if (Nave) Nave->bMovimientoAutonomo = true;
		}
		UE_LOG(LogTemp, Warning, TEXT("Estado: Movimiento Independiente"));
	}
}

void ANavesLAB01USFXGameMode::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (EstadoActual == EEstadoFormacion::FormandoInfinito)
	{
		ActualizarPosicionesNaves();
	}
}

void ANavesLAB01USFXGameMode::ActualizarPosicionesNaves()
{
    APawn* PlayerPawn = UGameplayStatics::GetPlayerPawn(this, 0);
    if (!PlayerPawn || AEnemigos.Num() == 0) return;

    // Centro de la formación frente al jugador
    FVector CentroFormacion = PlayerPawn->GetActorLocation() + (PlayerPawn->GetActorForwardVector() * 1000.0f);

    // Tiempo transcurrido para animar el movimiento
    float TiempoGlobal = GetWorld()->GetTimeSeconds();
    float VelocidadRecorrido = 1.5f; // Ajusta qué tan rápido giran
    float AmplitudZ = 50.0f;        // Qué tanto suben y bajan

    for (int32 i = 0; i < AEnemigos.Num(); i++)
    {
        if (AEnemigo* Nave = AEnemigos[i])
        {
            // 't' define la posición en la curva. 
            // Sumamos el tiempo para que la posición avance, 
            // y un offset basado en 'i' para que se sigan una a otra.
            float OffsetNave = ((float)i / AEnemigos.Num()) * 2.0f * PI;
            float t = (TiempoGlobal * VelocidadRecorrido) + OffsetNave;

            // --- Ecuación de la Lemniscata de Bernoulli (Infinito) ---
            float Denominador = 1 + FMath::Square(FMath::Sin(t));
            float OffsetX = (RadioInfinito * FMath::Cos(t)) / Denominador;
            float OffsetY = (RadioInfinito * FMath::Sin(t) * FMath::Cos(t)) / Denominador;

            // --- Efecto de subir y bajar (Oscilación en Z) ---
            // Usamos Sin(t * 2) para que el ciclo de subida/bajada coordine con los lazos
            float OffsetZ = FMath::Sin(t * 2.0f) * AmplitudZ;

            FVector PosicionObjetivo = CentroFormacion + FVector(OffsetX, OffsetY, OffsetZ);

            // Desactivar IA propia
            Nave->bMovimientoAutonomo = false;

            // Movimiento suave hacia la posición de la curva
            FVector NuevaPos = FMath::VInterpTo(Nave->GetActorLocation(), PosicionObjetivo, GetWorld()->GetDeltaSeconds(), 5.0f);
            Nave->SetActorLocation(NuevaPos);

            // Rotación: Que la nave mire hacia la dirección en la que se mueve
            FVector DireccionMovimiento = PosicionObjetivo - Nave->GetActorLocation();
            if (!DireccionMovimiento.IsNearlyZero())
            {
                FRotator NuevaRot = DireccionMovimiento.Rotation();
                Nave->SetActorRotation(FMath::RInterpTo(Nave->GetActorRotation(), NuevaRot, GetWorld()->GetDeltaSeconds(), 3.0f));
            }
        }
    }
}


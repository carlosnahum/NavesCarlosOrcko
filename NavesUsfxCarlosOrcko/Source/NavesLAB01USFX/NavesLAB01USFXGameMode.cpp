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
    // --- COORDENADAS BASE ---
    FVector UbicacionBase = FVector(-990.0f, -90.0f, 214.0f); // Ajusta según tu nivel


    // ==========================================
    // DISEÑO GRUPO 1 (Forma de O de la imagen)
    // ==========================================
    // 3. Negro (Estatico) - Derecha
    AMuro* ME1 = GetWorld()->SpawnActor<AMuroEstatico>(AMuroEstatico::StaticClass(), UbicacionBase + FVector(0, 100, 0), FRotator(0, 0, 0));
    Grupo1.AgregarMuro(ME1);
    AMuro* ME2 = GetWorld()->SpawnActor<AMuroEstatico>(AMuroEstatico::StaticClass(), UbicacionBase + FVector(100, -100, 0), FRotator(0, 90, 0));
    Grupo1.AgregarMuro(ME1);
    AMuro* ME3 = GetWorld()->SpawnActor<AMuroEstatico>(AMuroEstatico::StaticClass(), UbicacionBase + FVector(400, -100, 0), FRotator(0, 90, 0));
    Grupo1.AgregarMuro(ME1);
    AMuro* ME4 = GetWorld()->SpawnActor<AMuroEstatico>(AMuroEstatico::StaticClass(), UbicacionBase + FVector(100, 300, 0), FRotator(0, 90, 0));
    Grupo1.AgregarMuro(ME1);
    AMuro* ME5 = GetWorld()->SpawnActor<AMuroEstatico>(AMuroEstatico::StaticClass(), UbicacionBase + FVector(400, 300, 0), FRotator(0, 90, 0));
    Grupo1.AgregarMuro(ME1);
    AMuro* ME6 = GetWorld()->SpawnActor<AMuroEstatico>(AMuroEstatico::StaticClass(), UbicacionBase + FVector(600, -200, 0), FRotator(0, 0, 0));
    Grupo1.AgregarMuro(ME1);
    AMuro* ME7 = GetWorld()->SpawnActor<AMuroEstatico>(AMuroEstatico::StaticClass(), UbicacionBase + FVector(700, -300, 0), FRotator(0, 90, 0));
    Grupo1.AgregarMuro(ME1);
    AMuro* ME8 = GetWorld()->SpawnActor<AMuroEstatico>(AMuroEstatico::StaticClass(), UbicacionBase + FVector(1000, -300, 0), FRotator(0, 90, 0));
    Grupo1.AgregarMuro(ME1);
    AMuro* ME9 = GetWorld()->SpawnActor<AMuroEstatico>(AMuroEstatico::StaticClass(), UbicacionBase + FVector(1300, -300, 0), FRotator(0, 90, 0));
    Grupo1.AgregarMuro(ME1);
    AMuro* ME10 = GetWorld()->SpawnActor<AMuroEstatico>(AMuroEstatico::StaticClass(), UbicacionBase + FVector(600, 400, 0), FRotator(0, 0, 0));
    Grupo1.AgregarMuro(ME1);
    AMuro* ME11 = GetWorld()->SpawnActor<AMuroEstatico>(AMuroEstatico::StaticClass(), UbicacionBase + FVector(700, 600, 0), FRotator(0, 90, 0));
    Grupo1.AgregarMuro(ME1);
    AMuro* ME12 = GetWorld()->SpawnActor<AMuroEstatico>(AMuroEstatico::StaticClass(), UbicacionBase + FVector(1000, 600, 0), FRotator(0, 90, 0));
    Grupo1.AgregarMuro(ME1);
    AMuro* ME13 = GetWorld()->SpawnActor<AMuroEstatico>(AMuroEstatico::StaticClass(), UbicacionBase + FVector(1300, 600, 0), FRotator(0, 90, 0));
    Grupo1.AgregarMuro(ME1);

    // 1. Azul (Fantasma) - Superior
    AMuroFantasma* MF1 = GetWorld()->SpawnActor<AMuroFantasma>(AMuroFantasma::StaticClass(), UbicacionBase + FVector(400, 100, 0), FRotator::ZeroRotator);
    if (MF1)
    {
        // 2. CONFIGURAR EL TIEMPO DESDE EL GAME MODE (ejemplo: cada 0.5 segundos)
        MF1->IniciarCicloFantasma(1.0f);

        // 3. Agregar al grupo del Template
        Grupo1.AgregarMuro(MF1);
    }
    /*AMuroFantasma* MF2 = GetWorld()->SpawnActor<AMuroFantasma>(AMuroFantasma::StaticClass(), UbicacionBase + FVector(500, 100, 0), FRotator::ZeroRotator);
    if (MF2)
    {
        MF2->IniciarCicloFantasma(4.f);
        Grupo1.AgregarMuro(MF2);
    }*/
    AMuroFantasma* MF3 = GetWorld()->SpawnActor<AMuroFantasma>(AMuroFantasma::StaticClass(), UbicacionBase + FVector(600, 100, 0), FRotator::ZeroRotator);
    if (MF3)
    {
        MF3->IniciarCicloFantasma(3.0f);
        Grupo1.AgregarMuro(MF3);
    }
    AMuroFantasma* MF4 = GetWorld()->SpawnActor<AMuroFantasma>(AMuroFantasma::StaticClass(), UbicacionBase + FVector(1300, -200, 0), FRotator::ZeroRotator);
    if (MF4)
    {
        MF4->IniciarCicloFantasma(0.5f);
        Grupo1.AgregarMuro(MF4);
    }
    AMuroFantasma* MF5 = GetWorld()->SpawnActor<AMuroFantasma>(AMuroFantasma::StaticClass(), UbicacionBase + FVector(1300, 100, 0), FRotator::ZeroRotator);
    if (MF5)
    {
        MF5->IniciarCicloFantasma(1.0f);
        Grupo1.AgregarMuro(MF5);
    }
    AMuroFantasma* MF6 = GetWorld()->SpawnActor<AMuroFantasma>(AMuroFantasma::StaticClass(), UbicacionBase + FVector(1300, 400, 0), FRotator::ZeroRotator);
    if (MF6)
    {
        MF6->IniciarCicloFantasma(1.5f);
        Grupo1.AgregarMuro(MF6);
    }
    // 2. Rojo (Trampa) - Izquierda
    AMuroTrampa* MT1 = GetWorld()->SpawnActor<AMuroTrampa>(AMuroTrampa::StaticClass(), UbicacionBase + FVector(800, 100, 0), FRotator::ZeroRotator);
    if (MT1)
    {
        // AQUÍ DEFINES EL EJE DIRECTAMENTE
        // Puedes elegir: EEjeMovimiento::Movimiento_X o EEjeMovimiento::Movimiento_Y
        MT1->ConfigurarMovimiento(EEjeMovimiento::Movimiento_Y, 250.0f, 2.0f);

        // Lo agregamos al grupo del Template
        Grupo1.AgregarMuro(MT1);
    }
    AMuroTrampa* MT2 = (GetWorld()->SpawnActor<AMuroTrampa>(AMuroTrampa::StaticClass(), UbicacionBase + FVector(900, -200, 0), FRotator::ZeroRotator));
    if (MT2)
    {
        MT2->ConfigurarMovimiento(EEjeMovimiento::Movimiento_Y, 900.0f, 4.0f);
        Grupo1.AgregarMuro(MT2);
    }
    AMuroTrampa* MT3 = (GetWorld()->SpawnActor<AMuroTrampa>(AMuroTrampa::StaticClass(), UbicacionBase + FVector(1000, -200, 0), FRotator::ZeroRotator));
    if (MT3)
    {
        MT3->ConfigurarMovimiento(EEjeMovimiento::Movimiento_Y, 900.0f, 6.0f);
        Grupo1.AgregarMuro(MT3);
    }
    AMuroTrampa* MT4 = (GetWorld()->SpawnActor<AMuroTrampa>(AMuroTrampa::StaticClass(), UbicacionBase  + FVector(1400, -200, 0), FRotator::ZeroRotator));
    if (MT4)
    {
        MT4->ConfigurarMovimiento(EEjeMovimiento::Movimiento_Y, 900.0f, 6.0f);
        Grupo1.AgregarMuro(MT4);
    }
    
   
    UE_LOG(LogTemp, Warning, TEXT("Nivel generado: Grupos de muros creados exitosamente."));

	// 1. Spawneamos al menos 20 naves (Requisito) Naves que hacen forma de infinito
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

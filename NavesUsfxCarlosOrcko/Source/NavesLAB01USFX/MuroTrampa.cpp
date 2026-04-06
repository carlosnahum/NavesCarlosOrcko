#include "MuroTrampa.h"

AMuroTrampa::AMuroTrampa()
{
	// Activamos el Tick, ya que el movimiento es continuo
	PrimaryActorTick.bCanEverTick = true;

	// Forma rectangular heredada, configurada desde código
	if (MallaMuro)
	{
		static ConstructorHelpers::FObjectFinder<UStaticMesh> CuboMesh(TEXT("/Engine/BasicShapes/Cube"));
		if (CuboMesh.Succeeded())
		{
			MallaMuro->SetStaticMesh(CuboMesh.Object);
		}

		// Escala solicitada (Prisma vertical alto): X=100cm, Y=100cm, Z=300cm
		MallaMuro->SetRelativeScale3D(FVector(1.0f, 3.0f, 1.0f));
	}

	// Valores por defecto de la trampa
	DistanciaMovimiento = 250.0f; // Se moverá 250cm a cada lado (total 5m)
	VelocidadMovimiento = 2.0f;   // Frecuencia del ciclo (un ciclo completo cada ~3s)
	TipoDeMovimiento = EEjeMovimiento::Movimiento_X; // Por defecto movimiento horizontal
	Resistencia = 300.0f;
}

void AMuroTrampa::BeginPlay()
{
	Super::BeginPlay();

	// Guardamos la posición inicial para que oscile alrededor de este punto
	PosicionInicial = GetActorLocation();
	TiempoTranscurrido = 0.0f;
}

void AMuroTrampa::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	TiempoTranscurrido += DeltaTime;

	// 1. Calcular el desplazamiento sinusoidal (oscilación ida y vuelta)
	// La función Sin devuelve valores entre -1 y 1
	float DesplazamientoSinusoidal = DistanciaMovimiento * FMath::Sin(TiempoTranscurrido * VelocidadMovimiento);

	// 2. Aplicar el desplazamiento según el eje seleccionado
	FVector NuevaUbicacion = PosicionInicial;

	if (TipoDeMovimiento == EEjeMovimiento::Movimiento_X)
	{
		NuevaUbicacion.X += DesplazamientoSinusoidal;
	}
	else // Movimiento_Y
	{
		NuevaUbicacion.Y += DesplazamientoSinusoidal;
	}

	// 3. Actualizar la posición del Actor
	SetActorLocation(NuevaUbicacion);
}
void AMuroTrampa::ConfigurarMovimiento(EEjeMovimiento NuevoEje, float NuevaDistancia, float NuevaVelocidad)
{
	TipoDeMovimiento = NuevoEje;
	DistanciaMovimiento = NuevaDistancia;
	VelocidadMovimiento = NuevaVelocidad;
}
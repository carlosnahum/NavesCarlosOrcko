#include "MuroTrampa.h"

AMuroTrampa::AMuroTrampa()
{
	
	PrimaryActorTick.bCanEverTick = true;


	if (MallaMuro)
	{
		static ConstructorHelpers::FObjectFinder<UStaticMesh> CuboMesh(TEXT("/Engine/BasicShapes/Cube"));
		if (CuboMesh.Succeeded())
		{
			MallaMuro->SetStaticMesh(CuboMesh.Object);
		}

		
		MallaMuro->SetRelativeScale3D(FVector(1.0f, 3.0f, 1.0f));
	}

	
	DistanciaMovimiento = 250.0f; 
	VelocidadMovimiento = 2.0f;  
	TipoDeMovimiento = EEjeMovimiento::Movimiento_X; 
	Resistencia = 300.0f;
}

void AMuroTrampa::BeginPlay()
{
	Super::BeginPlay();

	PosicionInicial = GetActorLocation();
	TiempoTranscurrido = 0.0f;
}

void AMuroTrampa::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	TiempoTranscurrido += DeltaTime;

	
	float DesplazamientoSinusoidal = DistanciaMovimiento * FMath::Sin(TiempoTranscurrido * VelocidadMovimiento);

	
	FVector NuevaUbicacion = PosicionInicial;

	if (TipoDeMovimiento == EEjeMovimiento::Movimiento_X)
	{
		NuevaUbicacion.X += DesplazamientoSinusoidal;
	}
	else 
	{
		NuevaUbicacion.Y += DesplazamientoSinusoidal;
	}

	
	SetActorLocation(NuevaUbicacion);
}
void AMuroTrampa::ConfigurarMovimiento(EEjeMovimiento NuevoEje, float NuevaDistancia, float NuevaVelocidad)
{
	TipoDeMovimiento = NuevoEje;
	DistanciaMovimiento = NuevaDistancia;
	VelocidadMovimiento = NuevaVelocidad;
}
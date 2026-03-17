#include "EnemigoAereo.h"
#include "Components/StaticMeshComponent.h"

AEnemigoAereo::AEnemigoAereo()
{
	// Los enemigos aéreos suelen ser más rápidos
	VelocidadMovimiento = 300.0f;
	bMovimientoAutonomo = true;
}

void AEnemigoAereo::BeginPlay()
{
	Super::BeginPlay();

	// Ajustamos la posición inicial a la altura de vuelo
	FVector PosActual = GetActorLocation();
	SetActorLocation(FVector(PosActual.X, PosActual.Y, AlturaVuelo));
}

void AEnemigoAereo::Tick(float DeltaTime)
{
	// Ejecutamos el movimiento base (X e Y) definido en el padre
	Super::Tick(DeltaTime);

	FVector NuevaPosicion = GetActorLocation();

	// Lógica de Flotación: Usamos el tiempo para crear un movimiento suave en Z
	// Esto hace que el enemigo suba y baje levemente mientras se desplaza
	float DesplazamientoZ = FMath::Sin(GetWorld()->GetTimeSeconds() * VelocidadFlotacion) * AmplitudFlotacion;

	NuevaPosicion.Z = AlturaVuelo + DesplazamientoZ;

	SetActorLocation(NuevaPosicion);

	// Inclinación visual (opcional): se inclina un poco hacia adelante al avanzar
	FRotator RotacionActual = GetActorRotation();
	RotacionActual.Pitch = FMath::Lerp(RotacionActual.Pitch, -10.0f, DeltaTime * 2.0f);
	SetActorRotation(RotacionActual);
}

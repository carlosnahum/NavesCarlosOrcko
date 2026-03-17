#include "EnemigoAcuatico.h"
#include "Components/StaticMeshComponent.h"

AEnemigoAcuatico::AEnemigoAcuatico()
{
	// Los acuáticos suelen ser más lentos debido a la fricción del agua
	VelocidadMovimiento = 80.0f;
	bMovimientoAutonomo = true;
}

void AEnemigoAcuatico::BeginPlay()
{
	Super::BeginPlay();

	// Posicionamos en el nivel del agua
	FVector PosActual = GetActorLocation();
	SetActorLocation(FVector(PosActual.X, PosActual.Y, NivelAgua));
}

void AEnemigoAcuatico::Tick(float DeltaTime)
{
	// Guardamos la dirección hacia la que nos movemos antes de aplicar el seno
	FVector UbicacionAnterior = GetActorLocation();

	// Ejecuta el movimiento base del padre
	Super::Tick(DeltaTime);

	FVector UbicacionActual = GetActorLocation();

	// Lógica de "Nado": Desplazamiento lateral (Zig-Zag)
	// Calculamos el vector derecha del actor para moverlo perpendicularmente a su ruta
	float DesfaseLateral = FMath::Sin(GetWorld()->GetTimeSeconds() * FrecuenciaNado) * AmplitudNado;

	FVector DireccionMovimiento = (UbicacionActual - UbicacionAnterior).GetSafeNormal();
	FVector Derecha = FVector::CrossProduct(DireccionMovimiento, FVector::UpVector);

	FVector NuevaUbicacion = UbicacionActual + (Derecha * DesfaseLateral * DeltaTime * 10.0f);

	// Asegurar que se mantiene en el nivel del agua
	NuevaUbicacion.Z = NivelAgua;

	SetActorLocation(NuevaUbicacion);

	// Rotación: Mirar hacia la dirección del nado
	if (!DireccionMovimiento.IsNearlyZero())
	{
		FRotator NuevaRotacion = DireccionMovimiento.Rotation();
		// Añadimos un pequeño "meneo" en el Yaw para simular el nado
		NuevaRotacion.Yaw += (DesfaseLateral * 0.5f);
		SetActorRotation(NuevaRotacion);
	}
}
#include "EnemigoTerrestre.h"

AEnemigoTerrestre::AEnemigoTerrestre()
{
    // Podemos ajustar una velocidad distinta por defecto para los terrestres
    VelocidadMovimiento = 150.0f;
    bMovimientoAutonomo = true; // Por defecto que patrulle
}

void AEnemigoTerrestre::BeginPlay()
{
    Super::BeginPlay();

    // Forzamos la posición inicial a la altura del suelo definida
    FVector PosActual = GetActorLocation();
    SetActorLocation(FVector(PosActual.X, PosActual.Y, AlturaSuelo));
}

void AEnemigoTerrestre::Tick(float DeltaTime)
{
    // Guardamos la posición antes del movimiento para calcular la rotación
    FVector UbicacionAnterior = GetActorLocation();

    // Ejecuta la lógica de patrulla o movimiento hacia destino definida en el padre
    Super::Tick(DeltaTime);

    FVector UbicacionActual = GetActorLocation();

    // Lógica específica: Asegurar que no "vuele" si el padre cambia el Z
    if (UbicacionActual.Z != AlturaSuelo)
    {
        SetActorLocation(FVector(UbicacionActual.X, UbicacionActual.Y, AlturaSuelo));
    }

    // Lógica visual: Rotar hacia la dirección del movimiento
    if (!UbicacionActual.Equals(UbicacionAnterior, 1.0f))
    {
        FVector Direccion = (UbicacionActual - UbicacionAnterior).GetSafeNormal();
        FRotator NuevaRotacion = Direccion.Rotation();
        SetActorRotation(NuevaRotacion);
    }
}
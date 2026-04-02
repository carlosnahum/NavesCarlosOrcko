#include "GeneradorEscenario.h"
#include "BloqueEscenario.h"
#include "Engine/World.h"


AGeneradorEscenario::AGeneradorEscenario()
{
    PrimaryActorTick.bCanEverTick = true;
}


void AGeneradorEscenario::BeginPlay()
{
    Super::BeginPlay();

    
    GenerarCamino(10);
}

void AGeneradorEscenario::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);
}


void AGeneradorEscenario::GenerarCamino(int32 numeroBloques)
{
    FVector ubicacionActual = GetActorLocation();

    for (int i = 0; i < numeroBloques; i++)
    {
        
        ABloqueEscenario* nuevoBloque = GetWorld()->SpawnActor<ABloqueEscenario>(
            ABloqueEscenario::StaticClass(),
            ubicacionActual,
            FRotator::ZeroRotator
            );

        if (nuevoBloque)
        {
            
            listaBloques.insertarAlFinal(nuevoBloque);

            
            ubicacionActual.X += 200.0f;
        }
    }
}
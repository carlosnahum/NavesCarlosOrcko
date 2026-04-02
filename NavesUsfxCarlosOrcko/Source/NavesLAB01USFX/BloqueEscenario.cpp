#include "BloqueEscenario.h"

ABloqueEscenario::ABloqueEscenario()
{
	
	PrimaryActorTick.bCanEverTick = false;

	
	MallaBloque = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MallaBloque"));
	RootComponent = MallaBloque;

	
	MallaBloque->SetCollisionProfileName(UCollisionProfile::BlockAllDynamic_ProfileName);
}

void ABloqueEscenario::BeginPlay()
{
	Super::BeginPlay();
}

void ABloqueEscenario::ConfigurarBloque(FString Tipo)
{
	
	if (Tipo == "Obstaculo") {
		SetActorScale3D(FVector(1.0f, 1.0f, 2.0f));
	}
}

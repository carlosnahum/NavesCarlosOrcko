#include "Muro.h"

AMuro::AMuro()
{
	PrimaryActorTick.bCanEverTick = true;

	// Inicialización de la malla
	MallaMuro = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MallaMuro"));
	RootComponent = MallaMuro;

	// Valores por defecto para la clase padre
	Resistencia = 100.0f;
	bEsDestructible = false;
}

void AMuro::BeginPlay()
{
	Super::BeginPlay();
}

void AMuro::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void AMuro::ReaccionarAlImpacto()
{
	// Lógica base (puede estar vacía o imprimir un log)
	UE_LOG(LogTemp, Warning, TEXT("Impacto detectado en el muro base"));
}
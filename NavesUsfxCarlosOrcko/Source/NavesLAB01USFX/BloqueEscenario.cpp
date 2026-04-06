#include "BloqueEscenario.h"
#include "UObject/ConstructorHelpers.h" // Necesario para buscar assets
#include "Components/StaticMeshComponent.h"

ABloqueEscenario::ABloqueEscenario()
{
	PrimaryActorTick.bCanEverTick = false;

	// 1. Crear el componente de malla
	MallaBloque = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MallaBloque"));
	RootComponent = MallaBloque;

	// 2. BUSCAR Y ASIGNAR LA MALLA (FORMA)
	// Usamos un cubo básico que viene por defecto en Unreal Engine
	static ConstructorHelpers::FObjectFinder<UStaticMesh> MeshAsset(TEXT("/Engine/BasicShapes/Cube.Cube"));

	if (MeshAsset.Succeeded())
	{
		MallaBloque->SetStaticMesh(MeshAsset.Object);
	}

	// 3. Configurar colisiones
	MallaBloque->SetCollisionProfileName(UCollisionProfile::BlockAllDynamic_ProfileName);
}

void ABloqueEscenario::BeginPlay()
{
	Super::BeginPlay();
}

void ABloqueEscenario::ConfigurarBloque(FString Tipo)
{
	if (Tipo == "Obstaculo") {
		// Escalamos el bloque para que sea más alto si es un obstáculo
		SetActorScale3D(FVector(1.0f, 1.0f, 2.0f));
	}
	else if (Tipo == "Camino") {
		// Forma plana para el suelo
		SetActorScale3D(FVector(1.0f, 1.0f, 0.1f));
	}
}
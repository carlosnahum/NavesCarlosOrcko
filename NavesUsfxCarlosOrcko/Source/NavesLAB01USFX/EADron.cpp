#include "EADron.h"
#include "UObject/ConstructorHelpers.h"
#include "Components/StaticMeshComponent.h"

AEADron::AEADron()
{
	VelocidadMovimiento = 400.0f;
	AlturaVuelo = 300.0f;
	VelocidadFlotacion = 8.0f; // Flota muy rápido

	MallaEnemigo->SetRelativeScale3D(FVector(0.5f, 0.5f, 0.5f)); // Más pequeño

	static ConstructorHelpers::FObjectFinder<UStaticMesh> MeshAsset(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Sphere.Shape_Sphere'"));
	if (MeshAsset.Succeeded())
	{
		MallaEnemigo->SetStaticMesh(MeshAsset.Object);
	}
}
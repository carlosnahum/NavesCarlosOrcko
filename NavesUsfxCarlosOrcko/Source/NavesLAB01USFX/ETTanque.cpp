#include "ETTanque.h"
#include "UObject/ConstructorHelpers.h"
#include "Components/StaticMeshComponent.h"

AETTanque::AETTanque()
{
	VelocidadMovimiento = 80.0f;
	AlturaSuelo = 60.0f;
	MallaEnemigo->SetRelativeScale3D(FVector(2.0f, 1.5f, 1.0f));

	static ConstructorHelpers::FObjectFinder<UStaticMesh> MeshAsset(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Cube.Shape_Cube'"));
	if (MeshAsset.Succeeded())
	{
		MallaEnemigo->SetStaticMesh(MeshAsset.Object);
	}
}


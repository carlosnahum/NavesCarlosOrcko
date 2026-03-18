#include "ETSoldado.h"
#include "UObject/ConstructorHelpers.h"
#include "Components/StaticMeshComponent.h"

AETSoldado::AETSoldado()
{
	VelocidadMovimiento = 200.0f;
	AlturaSuelo = 40.0f;
	MallaEnemigo->SetRelativeScale3D(FVector(0.5f, 0.5f, 1.0f));

	static ConstructorHelpers::FObjectFinder<UStaticMesh> MeshAsset(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_NarrowCapsule.Shape_NarrowCapsule'"));
	if (MeshAsset.Succeeded())
	{
		MallaEnemigo->SetStaticMesh(MeshAsset.Object);
	}
}


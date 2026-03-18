#include "ETCamion.h"
#include "UObject/ConstructorHelpers.h"
#include "Components/StaticMeshComponent.h"

AETCamion::AETCamion()
{
	VelocidadMovimiento = 150.0f;
	AlturaSuelo = 70.0f;
	MallaEnemigo->SetRelativeScale3D(FVector(2.5f, 1.2f, 1.2f));

	static ConstructorHelpers::FObjectFinder<UStaticMesh> MeshAsset(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Pipe.Shape_Pipe'"));
	if (MeshAsset.Succeeded())
	{
		MallaEnemigo->SetStaticMesh(MeshAsset.Object);
	}
}


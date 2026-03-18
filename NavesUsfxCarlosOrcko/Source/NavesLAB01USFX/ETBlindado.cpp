#include "ETBlindado.h"
#include "UObject/ConstructorHelpers.h"
#include "Components/StaticMeshComponent.h"

AETBlindado::AETBlindado()
{
	VelocidadMovimiento = 120.0f;
	AlturaSuelo = 55.0f;
	MallaEnemigo->SetRelativeScale3D(FVector(1.8f, 1.8f, 0.8f));

	static ConstructorHelpers::FObjectFinder<UStaticMesh> MeshAsset(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Wedge_B.Shape_Wedge_B'"));
	if (MeshAsset.Succeeded())
	{
		MallaEnemigo->SetStaticMesh(MeshAsset.Object);
	}
}
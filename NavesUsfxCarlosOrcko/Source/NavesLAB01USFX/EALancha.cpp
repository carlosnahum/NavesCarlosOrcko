#include "EALancha.h"
#include "UObject/ConstructorHelpers.h"
#include "Components/StaticMeshComponent.h"

AEALancha::AEALancha()
{
	VelocidadMovimiento = 250.0f;
	AmplitudNado = 50.0f;
	FrecuenciaNado = 4.0f;
	MallaEnemigo->SetRelativeScale3D(FVector(1.5f, 0.6f, 0.4f));

	static ConstructorHelpers::FObjectFinder<UStaticMesh> MeshAsset(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Wedge_A.Shape_Wedge_A'"));
	if (MeshAsset.Succeeded())
	{
		MallaEnemigo->SetStaticMesh(MeshAsset.Object);
	}
}

#include "EAMotoAcuatica.h"
#include "UObject/ConstructorHelpers.h"
#include "Components/StaticMeshComponent.h"

AEAMotoAcuatica::AEAMotoAcuatica()
{
	VelocidadMovimiento = 350.0f;
	AmplitudNado = 30.0f;
	FrecuenciaNado = 6.0f; // Bamboleo muy rápido
	MallaEnemigo->SetRelativeScale3D(FVector(0.7f, 0.4f, 0.3f));

	static ConstructorHelpers::FObjectFinder<UStaticMesh> MeshAsset(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_NarrowCapsule.Shape_NarrowCapsule'"));
	if (MeshAsset.Succeeded())
	{
		MallaEnemigo->SetStaticMesh(MeshAsset.Object);
	}
}

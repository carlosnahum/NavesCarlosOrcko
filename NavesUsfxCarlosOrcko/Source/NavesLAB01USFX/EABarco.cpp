#include "EABarco.h"
#include "UObject/ConstructorHelpers.h"
#include "Components/StaticMeshComponent.h"

AEABarco::AEABarco()
{
	VelocidadMovimiento = 60.0f;
	AmplitudNado = 15.0f; // Movimiento lateral mínimo
	FrecuenciaNado = 1.0f; // Muy lento el bamboleo
	MallaEnemigo->SetRelativeScale3D(FVector(3.0f, 1.5f, 1.2f));

	static ConstructorHelpers::FObjectFinder<UStaticMesh> MeshAsset(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Trim_90_Out.Shape_Trim_90_Out'"));
	if (MeshAsset.Succeeded())
	{
		MallaEnemigo->SetStaticMesh(MeshAsset.Object);
	}
}


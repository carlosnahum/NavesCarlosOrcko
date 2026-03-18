#include "EAHelicoptero.h"
#include "UObject/ConstructorHelpers.h"
#include "Components/StaticMeshComponent.h"

AEAHelicoptero::AEAHelicoptero()
{
	VelocidadMovimiento = 180.0f;
	AlturaVuelo = 400.0f;
	AmplitudFlotacion = 40.0f; // Se mueve más arriba y abajo

	static ConstructorHelpers::FObjectFinder<UStaticMesh> MeshAsset(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Cone.Shape_Cone'"));
	if (MeshAsset.Succeeded())
	{
		MallaEnemigo->SetStaticMesh(MeshAsset.Object);
	}
}

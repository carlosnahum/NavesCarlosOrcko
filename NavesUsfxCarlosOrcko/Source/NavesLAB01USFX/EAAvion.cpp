#include "EAAvion.h"
#include "UObject/ConstructorHelpers.h"
#include "Components/StaticMeshComponent.h"

AEAAvion::AEAAvion()
{
	VelocidadMovimiento = 600.0f; // Muy rápido
	AlturaVuelo = 800.0f;
	AmplitudFlotacion = 5.0f; // Vuelo muy estable

	static ConstructorHelpers::FObjectFinder<UStaticMesh> MeshAsset(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_WideCapsule.Shape_WideCapsule'"));
	if (MeshAsset.Succeeded())
	{
		MallaEnemigo->SetStaticMesh(MeshAsset.Object);
	}
}

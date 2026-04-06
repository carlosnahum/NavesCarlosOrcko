#include "MuroFantasma.h"
#include "TimerManager.h"

AMuroFantasma::AMuroFantasma()
{
	PrimaryActorTick.bCanEverTick = false;
	bEstaVisible = true;
	IntervaloFlash = 1.0f;
	if (MallaMuro)
	{
		static ConstructorHelpers::FObjectFinder<UStaticMesh> CuboMesh(TEXT("/Engine/BasicShapes/Cube"));
		if (CuboMesh.Succeeded())
		{
			MallaMuro->SetStaticMesh(CuboMesh.Object);
		}

		// Escala solicitada: 3f en X (Largo), 1f en Y (Ancho), 1f en Z (Grosor)
		MallaMuro->SetRelativeScale3D(FVector(1.0f, 3.0f, 1.0f));
	}
}

void AMuroFantasma::BeginPlay()
{
	Super::BeginPlay();

	
}
void AMuroFantasma::IniciarCicloFantasma(float NuevoIntervalo)
{
	IntervaloFlash = NuevoIntervalo;

	// Iniciamos el timer con el valor recibido
	GetWorldTimerManager().SetTimer(TimerHandle_Visibilidad, this, &AMuroFantasma::AlternarEstado, IntervaloFlash, true);
}
void AMuroFantasma::AlternarEstado()
{
	bEstaVisible = !bEstaVisible;

	// Encapsulación de lógica de visibilidad y colisión
	if (MallaMuro)
	{
		MallaMuro->SetHiddenInGame(!bEstaVisible);

		// Si no está visible, desactivamos colisiones para que no bloquee a la nave
		if (bEstaVisible) {
			MallaMuro->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);
		}
		else {
			MallaMuro->SetCollisionEnabled(ECollisionEnabled::NoCollision);
		}
	}
}


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

	
	GetWorldTimerManager().SetTimer(TimerHandle_Visibilidad, this, &AMuroFantasma::AlternarEstado, IntervaloFlash, true);
}
void AMuroFantasma::AlternarEstado()
{
	bEstaVisible = !bEstaVisible;

	if (MallaMuro)
	{
		MallaMuro->SetHiddenInGame(!bEstaVisible);

		
		if (bEstaVisible) {
			MallaMuro->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);
		}
		else {
			MallaMuro->SetCollisionEnabled(ECollisionEnabled::NoCollision);
		}
	}
}


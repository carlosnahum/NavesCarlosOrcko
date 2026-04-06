#include "MuroEstatico.h"

AMuroEstatico::AMuroEstatico()
{
	// Desactivamos el Tick para optimizar, ya que es estático
	PrimaryActorTick.bCanEverTick = false;

	
	if (MallaMuro)
	{
		
		static ConstructorHelpers::FObjectFinder<UStaticMesh> CuboMesh(TEXT("/Engine/BasicShapes/Cube"));

		if (CuboMesh.Succeeded())
		{
			MallaMuro->SetStaticMesh(CuboMesh.Object);
		}

		
		MallaMuro->SetRelativeScale3D(FVector(1.0f, 3.0f, 1.0f));
	}

	
	Resistencia = 500.0f; 
	bEsDestructible = false;
}

void AMuroEstatico::BeginPlay()
{
	Super::BeginPlay();

	
	MallaMuro->SetMobility(EComponentMobility::Static);
}
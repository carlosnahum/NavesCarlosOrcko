#include "MuroEstatico.h"

AMuroEstatico::AMuroEstatico()
{
	// Desactivamos el Tick para optimizar, ya que es estático
	PrimaryActorTick.bCanEverTick = false;

	// Encapsulación: Accedemos a la malla heredada (asegúrate de que sea 'protected' en Muro.h)
	if (MallaMuro)
	{
		// 1. Asignar una forma básica de cubo (usualmente de 100x100x100 unidades de Unreal)
		static ConstructorHelpers::FObjectFinder<UStaticMesh> CuboMesh(TEXT("/Engine/BasicShapes/Cube"));

		if (CuboMesh.Succeeded())
		{
			MallaMuro->SetStaticMesh(CuboMesh.Object);
		}

		/** * Definir dimensiones:
		 * X (Grosor) = 100cm -> Escala 1.0
		 * Y (Ancho)  = 100cm -> Escala 1.0
		 * Z (Largo)  = 300cm -> Escala 3.0
		 */
		MallaMuro->SetRelativeScale3D(FVector(1.0f, 3.0f, 1.0f));
	}

	// Atributos específicos
	Resistencia = 500.0f; // Un muro estático suele ser más resistente
	bEsDestructible = false;
}

void AMuroEstatico::BeginPlay()
{
	Super::BeginPlay();

	// Aseguramos que no se mueva por físicas si no es necesario
	MallaMuro->SetMobility(EComponentMobility::Static);
}
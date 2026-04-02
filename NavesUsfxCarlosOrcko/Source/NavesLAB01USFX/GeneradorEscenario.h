#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ListaGenerica.h" 
#include "BloqueEscenario.h"
#include "GeneradorEscenario.generated.h"

UCLASS()
class NAVESLAB01USFX_API AGeneradorEscenario : public AActor {
    GENERATED_BODY()

public:

	AGeneradorEscenario();

protected:
	
	virtual void BeginPlay() override;

public:
	
	virtual void Tick(float DeltaTime) override;

	
	Lista<ABloqueEscenario*> listaBloques;
	void GenerarCamino(int32 numeroBloques);
};
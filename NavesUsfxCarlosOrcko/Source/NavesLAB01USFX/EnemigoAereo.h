#pragma once

#include "CoreMinimal.h"
#include "Enemigo.h"
#include "EnemigoAereo.generated.h"

UCLASS()
class NAVESLAB01USFX_API AEnemigoAereo : public AEnemigo
{
	GENERATED_BODY()

public:
	AEnemigoAereo();

protected:
	virtual void BeginPlay() override;

public:
	virtual void Tick(float DeltaTime) override;

	// Altura base de vuelo
	UPROPERTY(EditAnywhere, Category = "Movimiento Aereo")
		float AlturaVuelo = 500.0f;

	// Amplitud del balanceo (para que no sea estático)
	UPROPERTY(EditAnywhere, Category = "Movimiento Aereo")
		float AmplitudFlotacion = 20.0f;

	UPROPERTY(EditAnywhere, Category = "Movimiento Aereo")
		float VelocidadFlotacion = 2.0f;
};
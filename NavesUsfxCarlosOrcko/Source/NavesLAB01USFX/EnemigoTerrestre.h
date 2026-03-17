#pragma once

#include "CoreMinimal.h"
#include "Enemigo.h"
#include "EnemigoTerrestre.generated.h"

UCLASS()
class NAVESLAB01USFX_API AEnemigoTerrestre : public AEnemigo
{
	GENERATED_BODY()

public:
	AEnemigoTerrestre();

protected:
	virtual void BeginPlay() override;

public:
	virtual void Tick(float DeltaTime) override;

	// Propiedad específica para ajustar la altura respecto al suelo
	UPROPERTY(EditAnywhere, Category = "Movimiento Terrestre")
		float AlturaSuelo = 50.0f;
};
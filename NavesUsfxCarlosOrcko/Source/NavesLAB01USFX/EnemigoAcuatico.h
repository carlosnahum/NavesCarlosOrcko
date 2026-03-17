#pragma once

#include "CoreMinimal.h"
#include "Enemigo.h"
#include "EnemigoAcuatico.generated.h"

UCLASS()
class NAVESLAB01USFX_API AEnemigoAcuatico : public AEnemigo
{
	GENERATED_BODY()

public:
	AEnemigoAcuatico();

protected:
	virtual void BeginPlay() override;

public:
	virtual void Tick(float DeltaTime) override;

	// Nivel del mar o superficie del agua
	UPROPERTY(EditAnywhere, Category = "Movimiento Acuatico")
		float NivelAgua = 0.0f;

	// Fuerza del oleaje/nado lateral
	UPROPERTY(EditAnywhere, Category = "Movimiento Acuatico")
		float AmplitudNado = 40.0f;

	UPROPERTY(EditAnywhere, Category = "Movimiento Acuatico")
		float FrecuenciaNado = 3.0f;
};
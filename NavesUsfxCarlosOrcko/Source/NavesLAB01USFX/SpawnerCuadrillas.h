#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Enemigo.h"
#include "SpawnerCuadrillas.generated.h"

UCLASS()
class NAVESLAB01USFX_API ASpawnerCuadrillas : public AActor
{
	GENERATED_BODY()

public:
	ASpawnerCuadrillas();

protected:
	virtual void BeginPlay() override;

private:
	// Contenedores para las cuadrillas
	TArray<AEnemigo*> Cuadrilla1;
	TArray<AEnemigo*> Cuadrilla2;

	// Timer para controlar la desaparición
	FTimerHandle TimerHandle_Desaparicion;

	// Funciones de control
	void SpawnCuadrilla1();
	void SpawnCuadrilla2();
	void IniciarLimpieza();
	void EliminarMiembroCuadrilla1();

	bool bCuadrilla1Eliminada = false;

public:
	// Configuración desde el editor
	UPROPERTY(EditAnywhere, Category = "Configuracion")
		float TiempoEntreDesapariciones = 2.0f;
};

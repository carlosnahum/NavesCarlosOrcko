// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "TContenedorMuros.h" // Asegúrate de incluir el template que creamos
#include "MuroEstatico.h"
#include "MuroFantasma.h"
#include "MuroTrampa.h"
#include "NavesLAB01USFXGameMode.generated.h"

class AEnemigo;

// Estados para la máquina de estados del GameMode
UENUM(BlueprintType)
enum class EEstadoFormacion : uint8
{
	Libre,
	FormandoInfinito
};

UCLASS(MinimalAPI)
class ANavesLAB01USFXGameMode : public AGameModeBase
{
	GENERATED_BODY()

public:
	ANavesLAB01USFXGameMode();

protected:
	virtual void BeginPlay() override;
	TContenedorMuros<AMuro> Grupo1;
	TContenedorMuros<AMuro> Grupo2;

public:
	// Contenedor de naves
	UPROPERTY()
		TArray<AEnemigo*> AEnemigos;

	FTimerHandle TimerCambioEstado;
	EEstadoFormacion EstadoActual;

	void AlternarEstado();
	void ActualizarPosicionesNaves();

	// Configuración de la formación
	float RadioInfinito = 400.0f;
	int32 CantidadNaves = 20; // Requisito del enunciado

	virtual void Tick(float DeltaTime) override;
};




#pragma once

#include "CoreMinimal.h"
#include "Muro.h"
#include "MuroFantasma.generated.h"

UCLASS()
class NAVESLAB01USFX_API AMuroFantasma : public AMuro
{
	GENERATED_BODY()

public:
	AMuroFantasma();
	// Variable configurable desde el GameMode
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Configuracion")
		float IntervaloFlash;

	// Función para arrancar el comportamiento después de ser configurado
	void IniciarCicloFantasma(float NuevoIntervalo);

protected:
	virtual void BeginPlay() override;

	// Manejador del tiempo para el parpadeo
	FTimerHandle TimerHandle_Visibilidad;

	// Función para alternar visibilidad y colisión
	void AlternarEstado();

private:
	bool bEstaVisible;
};
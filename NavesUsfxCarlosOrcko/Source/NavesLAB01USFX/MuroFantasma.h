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
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Configuracion")
		float IntervaloFlash;

	
	void IniciarCicloFantasma(float NuevoIntervalo);

protected:
	virtual void BeginPlay() override;

	
	FTimerHandle TimerHandle_Visibilidad;

	
	void AlternarEstado();

private:
	bool bEstaVisible;
};
#pragma once

#include "CoreMinimal.h"
#include "Muro.h"
#include "MuroTrampa.generated.h"

UENUM(BlueprintType)
enum class EEjeMovimiento : uint8
{
	Movimiento_X	UMETA(DisplayName = "Eje X (Horizontal)"),
	Movimiento_Y	UMETA(DisplayName = "Eje Y (Lateral/Vertical)")
};

UCLASS()
class NAVESLAB01USFX_API AMuroTrampa : public AMuro
{
	GENERATED_BODY()

public:
	AMuroTrampa();

protected:
	virtual void BeginPlay() override;

	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Configuracion Trap", meta = (ClampMin = "0.0"))
		float DistanciaMovimiento;

	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Configuracion Trap", meta = (ClampMin = "0.1"))
		float VelocidadMovimiento;

	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Configuracion Trap")
		EEjeMovimiento TipoDeMovimiento;

public:
	virtual void Tick(float DeltaTime) override;
	
	void ConfigurarMovimiento(EEjeMovimiento NuevoEje, float NuevaDistancia, float NuevaVelocidad);

	
	void SetEjeMovimiento(EEjeMovimiento NuevoEje) { TipoDeMovimiento = NuevoEje; }
	void Configurar(EEjeMovimiento NuevoEje, float Distancia, float Velocidad) {
		TipoDeMovimiento = NuevoEje;
		DistanciaMovimiento = Distancia;
		VelocidadMovimiento = Velocidad;
	}

private:
	
	FVector PosicionInicial;
	float TiempoTranscurrido;
};
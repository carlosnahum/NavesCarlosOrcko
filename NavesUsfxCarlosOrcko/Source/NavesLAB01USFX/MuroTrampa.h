#pragma once

#include "CoreMinimal.h"
#include "Muro.h"
#include "MuroTrampa.generated.h"

// Enumeración para elegir el eje de movimiento desde el editor
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

	// Encapsulación de variables de configuración del movimiento
	// 'DistanciaMovimiento' es la amplitud de la oscilación (ej. 200cm a cada lado)
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Configuracion Trap", meta = (ClampMin = "0.0"))
		float DistanciaMovimiento;

	// 'VelocidadMovimiento' es la frecuencia del movimiento (ciclos por segundo)
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Configuracion Trap", meta = (ClampMin = "0.1"))
		float VelocidadMovimiento;

	// Selector del eje de movimiento según el diseño del nivel
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Configuracion Trap")
		EEjeMovimiento TipoDeMovimiento;

public:
	virtual void Tick(float DeltaTime) override;
	// Función pública para que el GameMode configure el movimiento
	void ConfigurarMovimiento(EEjeMovimiento NuevoEje, float NuevaDistancia, float NuevaVelocidad);

	// Setters individuales por si solo quieres cambiar una cosa
	void SetEjeMovimiento(EEjeMovimiento NuevoEje) { TipoDeMovimiento = NuevoEje; }
	void Configurar(EEjeMovimiento NuevoEje, float Distancia, float Velocidad) {
		TipoDeMovimiento = NuevoEje;
		DistanciaMovimiento = Distancia;
		VelocidadMovimiento = Velocidad;
	}

private:
	// Variables de estado interno (privadas para mayor seguridad)
	FVector PosicionInicial;
	float TiempoTranscurrido;
};
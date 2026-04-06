#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Muro.generated.h"

UCLASS()
class  NAVESLAB01USFX_API AMuro : public AActor
{
	GENERATED_BODY()

public:
	AMuro();

protected:
	virtual void BeginPlay() override;

	// Componente visual y físico
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Componentes")
		UStaticMeshComponent* MallaMuro;

	// Atributos base que heredarán los hijos
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Atributos")
		float Resistencia;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Atributos")
		bool bEsDestructible;

public:
	virtual void Tick(float DeltaTime) override;

	// Función virtual pura o básica para ser sobreescrita por los hijos
	virtual void ReaccionarAlImpacto();

	// Getters necesarios para la gestión externa
	FORCEINLINE UStaticMeshComponent* GetMallaMuro() const { return MallaMuro; }
};
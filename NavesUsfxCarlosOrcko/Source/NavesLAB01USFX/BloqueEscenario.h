#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "BloqueEscenario.generated.h"

UCLASS()
class NAVESLAB01USFX_API ABloqueEscenario : public AActor
{
	GENERATED_BODY()

public:
	ABloqueEscenario();

protected:
	virtual void BeginPlay() override;

public:
	
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Escenario")
		UStaticMeshComponent* MallaBloque;

	
	void ConfigurarBloque(FString Tipo);
};
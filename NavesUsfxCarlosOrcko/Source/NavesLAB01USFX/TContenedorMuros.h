#pragma once

#include "CoreMinimal.h"
#include "Muro.h"

/**
 * Template para gestionar grupos de muros de cualquier tipo.
 * T debe ser una clase que derive de AMuro.
 */
template <typename T>
class TContenedorMuros
{
private:
    // Vector que almacena los punteros a los muros del grupo
    TArray<T*> MurosDelGrupo;

public:
    // Añadir un muro al grupo
    void AgregarMuro(T* NuevoMuro) {
        if (NuevoMuro) {
            MurosDelGrupo.Add(NuevoMuro);
        }
    }

    // Obtener todos los muros (para iteraciones externas)
    TArray<T*>& GetMuros() {
        return MurosDelGrupo;
    }

    // Limpiar el grupo (útil para cambio de niveles)
    void VaciarGrupo() {
        MurosDelGrupo.Empty();
    }

    // Ejemplo de operación polimórfica masiva
    void EjecutarReaccionEnGrupo() {
        for (T* Muro : MurosDelGrupo) {
            if (Muro) {
                Muro->ReaccionarAlImpacto();
            }
        }
    }
};
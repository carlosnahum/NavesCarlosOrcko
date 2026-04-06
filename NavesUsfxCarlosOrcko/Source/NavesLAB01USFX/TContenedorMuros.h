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
    
    TArray<T*> MurosDelGrupo;

public:
    
    void AgregarMuro(T* NuevoMuro) {
        if (NuevoMuro) {
            MurosDelGrupo.Add(NuevoMuro);
        }
    }

    
    TArray<T*>& GetMuros() {
        return MurosDelGrupo;
    }

    
    void VaciarGrupo() {
        MurosDelGrupo.Empty();
    }

   
    void EjecutarReaccionEnGrupo() {
        for (T* Muro : MurosDelGrupo) {
            if (Muro) {
                Muro->ReaccionarAlImpacto();
            }
        }
    }
};
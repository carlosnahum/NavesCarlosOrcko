#pragma once
#include "CoreMinimal.h"

template <typename T>
class Nodo {
public:
    T dato;
    Nodo<T>* siguiente;

    Nodo(T _dato) {
        dato = _dato;
        siguiente = nullptr;
    }
};

template <typename T>
class Lista {
private:
    Nodo<T>* frente;
    int cantidad;

public:
    Lista() : frente(nullptr), cantidad(0) {}

    ~Lista() {
        while (frente != nullptr) {
            Nodo<T>* aux = frente;
            frente = frente->siguiente;
            delete aux;
        }
    }

    void insertarAlFinal(T _dato) {
        Nodo<T>* nuevoNodo = new Nodo<T>(_dato);
        if (frente == nullptr) {
            frente = nuevoNodo;
        }
        else {
            Nodo<T>* aux = frente;
            while (aux->siguiente != nullptr) {
                aux = aux->siguiente;
            }
            aux->siguiente = nuevoNodo;
        }
        cantidad++;
    }

    Nodo<T>* getFrente() const { return frente; }
    int getCantidad() const { return cantidad; }
};

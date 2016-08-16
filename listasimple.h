#ifndef LISTASIMPLE_H
#define LISTASIMPLE_H
#include <stdio.h>
#include <stdlib.h>
using namespace std;

/* creando estructuras */
struct NODO{
    char* nombre;
    struct NODO* siguiente;
};


/* declarando metodos */
void insertar(NODO **cima, char* dato);

void insertar(NODO **cima, char *dato){
    NODO *nuevo = new NODO;
    nuevo->nombre = dato;
    nuevo->siguiente = NULL;
    if(*cima == NULL){
        *cima = nuevo;
    }else{
        NODO *aux = *cima;
        while(aux->siguiente != NULL){
            aux = aux->siguiente;
        }
        aux->siguiente = nuevo;
    }
}

#endif // LISTASIMPLE_H

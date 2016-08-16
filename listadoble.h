#ifndef LISTADOBLE_H
#define LISTADOBLE_H
#include <stdio.h>
#include <stdlib.h>
using namespace std;

/* creando estructuras */
struct NODOD{
    char* nombre;
    struct NODOD* siguiente;
    struct NODOD* anterior;
};

/* declarando metodos*/
void insertardoble(NODOD **cima, char* dato);

void insertardoble(NODOD **cima, char *dato){
    /*inicializando el nuevo nodo*/
    NODOD *nuevo = new NODOD;
    nuevo->nombre = dato;
    nuevo->siguiente = NULL;

    if(*cima == NULL){
        nuevo->anterior = NULL;
        *cima = nuevo;
    }else{
        NODOD *aux = *cima;
        while(aux->siguiente != NULL){
            aux = aux->siguiente;
        }
        aux->siguiente = nuevo;
        nuevo->anterior = aux;
    }

}

#endif // LISTADOBLE_H

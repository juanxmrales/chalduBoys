#ifndef PILASCONLISTAS_H_INCLUDED
#define PILASCONLISTAS_H_INCLUDED
#include <malloc.h>

typedef struct
{
    int num;
    struct nodoP *siguiente;
}Pila;


Pila *crearNodoPila(int dato);
Pila * ultimoNodoPila(Pila *lista);

void apilarL(Pila **lista, int dato);
void inicpilaL(Pila ** pila);
void mostrarL (Pila **lista);
void leerL (Pila ** lista);

int topeL (Pila **lista);
int pilavaciaL (Pila **lista);
int desapilarL (Pila **lista);


#endif // PILASCONLISTAS_H_INCLUDED

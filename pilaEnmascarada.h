#ifndef PILA_H_INCLUDED
#define PILA_H_INCLUDED

typedef struct nodo
{
    int dato;
    struct nodo *sig;
} nodo;

typedef nodo *pila;



void inicpila(pila *p);
void agrego(pila *p, int d);
int pilavacia(pila *p);
int desapilar(pila *p);
void leer(pila *p);
int tope(pila p);
void muestrop(pila p);

#endif // PILA_H_INCLUDED

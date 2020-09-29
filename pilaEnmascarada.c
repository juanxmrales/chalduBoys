#include "libreria de lista.h"
#include "pila.h"
#include <stdio.h>
#include <stdlib.h>



void inicpila(pila *p)
{
    (*p)=NULL;
}

void agrego(pila *p, int d)
{
    pila nuevo;

    nuevo=(pila)malloc(sizeof(nodo));

    nuevo->dato=d;
    nuevo->sig=(*p);
    (*p)=nuevo;
}

int pilavacia(pila *p)
{
    int resp;

    if((*p)==NULL)
        resp=1;
    else
        resp=0;

    return resp;
}

int desapilar(pila *p)
{
    int resp;

    resp=(*p)->dato;
    (*p)=(*p)->sig;

    return resp;
}

void leer(pila *p)
{
    int dato;
    printf("Ingrese dato: ");
    fflush(stdin);
    scanf("%d",&dato);
    agrego(p,dato);
}

int tope(pila p)
{
    return p->dato;
}

void muestrop(pila p)
{
    int resp;

    printf("Tope|-------------------->Base \n");
    while(!pilavacia(&p))
    {
        resp=desapilar(&p);
        printf("%d ",resp);
    }
    printf("\nTope|-------------------->Base ");
}

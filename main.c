#include <stdio.h>
#include <stdlib.h>
#include "PilasConListas.h"
#include <string.h>

int main()
{

    Pila *pilita;
    inicpilaL(&pilita);


    printf("\nFUNCION DE APILAR: ");
    apilarL(&pilita, 2);
    apilarL(&pilita, 4);
    apilarL(&pilita, 6);
    mostrarL(&pilita);
    system("pause");

    printf("\nFUNCION DE LEER: ");
    leerL(&pilita);
    leerL(&pilita);
    mostrarL(&pilita);
    system("pause");

    printf("\nFUNCION DE DESAPILAR: ");
    desapilarL(&pilita);
    mostrarL(&pilita);
    system("pause");

    printf("\nFUNCION DE TOPE DE PILA: ");
    printf("\n\nEste es el tope de la pila: %d\n", topeL(&pilita));

    system("pause");

    printf("\nFUNCION PILAVACIA: ");
    if (!pilavaciaL(&pilita))
        printf("\nLa pila tiene datos");
    else
        printf("\nLa pila no tiene datos");

    return 0;

}

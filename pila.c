/// -------------------- INICIALIZAR LA PILA --------------------- ///

void inicpilaL(Pila ** pila)
{
    *pila = NULL;
}

/// -------------------- APILAR ---------------------------------- ///

void apilarL(Pila **lista, int dato)
{
    Pila *nuevo = crearNodoPila(dato);

    if (*lista == NULL)
        *lista = nuevo;
    else
    {
        Pila *ultimo = ultimoNodoPila(*lista);
        ultimo->siguiente = nuevo;
    }
}

Pila * ultimoNodoPila(Pila *lista)
{
    Pila *aux = lista;

    while (aux->siguiente)
    {
        aux = aux->siguiente;
    }
    return aux;
}

Pila *crearNodoPila(int dato)
{
    Pila *aux = (Pila*) malloc (sizeof(Pila));
    aux->num = dato;
    aux->siguiente = NULL;

    return aux;
}

/// -------------------- MOSTRAR ---------------------------------- ///

void mostrarL (Pila **lista) /// con puntero doble solo para mantener la sintaxis que ya conocemos (mostrar(&pilita) pero en realidad se puede hacewr con un puntero simple (mostrar(pilita)
{
    Pila *aux = *lista;

    while (aux)
    {
        printf("%d |", aux->num);
        aux = aux->siguiente;
    }
    printf("\n\n");

}

/// -------------------- LEER ---------------------------------- ///

void leerL (Pila ** lista)
{
    int aux = 0;
    printf("\n\nIngrese un numero entero: ");
    scanf("%d", &aux);
    apilarL(lista, aux);
}

/// -------------------- TOPE ---------------------------------- ///

int topeL (Pila **lista)
{
    Pila *ultimo = ultimoNodoPila(*lista);
    int num = ultimo->num;
    return num;
}

/// -------------------- PILAVACIA ---------------------------------- ///

int pilavaciaL (Pila **lista)
{
    return (*lista == NULL);
}

/// -------------------- DESAPILAR ---------------------------------- ///

int desapilarL (Pila **lista)
{
    Pila *seg = *lista;
    Pila *ultimo = ultimoNodoPila(*lista);
    int dato = ultimo->num;
    if (seg != NULL)
    {
        if (seg == ultimo)
        {
            *lista = NULL;
        }
        else
        {
            while (seg->siguiente != ultimo)
            {
                seg = seg->siguiente;
            }
            seg->siguiente = NULL;
            if(*lista == ultimo)
            {
                *lista = NULL;
            }
            else
            {
                free(ultimo);
            }
        }
    }
    else
    {
        printf("Pila vacia!");
    }
    return dato;
}

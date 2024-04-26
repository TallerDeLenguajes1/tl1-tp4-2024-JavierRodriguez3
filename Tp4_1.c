#include <stdio.h>
#include <math.h>
#include <stdlib.h>

typedef struct{
    int tareaId; //empieza en 1000
    char *descripcion;
    int duracion; //entre 10 - 100
}Tarea;

typedef struct{
    Tarea tarea; //dato
    Nodo *sig; //puntero al siguiente
}Nodo;

Nodo *crearNodo(int valor, int *ID, char descripcion, int duracion);
Nodo *crearListaVacia();
void insertarNodo(Nodo **start, Nodo *NNodo);
Nodo *buscarNodo(Nodo *start, int buscarID);

int main(){
    int ID = 1000;
    Nodo *startPendiente, *starRealizado;
    startPendiente = crearListaVacia();
    starRealizado = crearListaVacia();
    // Paso la direccion de memotia de id (&id)

    return 0;
}

Nodo *crearNodo(int valor, int * ID, char descripcion, int duracion){
    Nodo * NNodo = (Nodo *) malloc(sizeof(Nodo));
    NNodo->tarea.tareaId = *ID;
    (*ID)++;
    NNodo->tarea.descripcion = malloc(sizeof(char) * (descripcion + 1));
    strcpy(NNodo->tarea.descripcion, descripcion);
    NNodo->tarea.duracion = duracion;
    NNodo->sig = NULL;
    return NNodo; 
}

Nodo *crearListaVacia(){
    return NULL;
}


void insertarNodo(Nodo **start, Nodo *NNodo){
    NNodo->sig = *start;
    *start = NNodo;
}
Nodo *buscarNodo(Nodo *start, int buscarID){
    Nodo *Aux = start;
    while (Aux && Aux->tarea.tareaId != buscarID)
    {
        Aux = Aux->sig;
    }
    return Aux;
}
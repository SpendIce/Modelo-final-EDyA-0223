//
// Created by spendice on 2/14/24.
//

#ifndef FINAL0223_LISTA_H
#define FINAL0223_LISTA_H
typedef struct Nodo {
    int valor;
    struct Nodo *siguiente;
} Nodo;
typedef struct Lista {
    Nodo *head;
} Lista;
void add(Lista *lista, int valor);
void removeNode(Lista *lista, int pos);
int get(Lista *lista, int posicion);
int size(Lista *lista);
void print(Lista *lista);

#endif //FINAL0223_LISTA_H

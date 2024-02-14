//
// Created by spendice on 2/14/24.
//
#include <stdio.h>
#include "Lista.h"
#include <stdlib.h>
void add(Lista *lista, int valor)
{
    Nodo *nuevo = malloc(sizeof(Nodo));
    nuevo->valor = valor;
    nuevo->siguiente = NULL;
    if (lista->head == NULL)
    {
        lista->head = nuevo;
    }
    else
    {
        Nodo *aux = lista->head;
        while (aux->siguiente != NULL)
        {
            aux = aux->siguiente;
        }
        aux->siguiente = nuevo;
    }
}
void removeNode(Lista *lista, int pos)
{
    if (pos == 0)
    {
        Nodo *aux = lista->head;
        lista->head = lista->head->siguiente;
        free(aux);
    }
    else
    {
        Nodo *aux = lista->head;
        for (int i = 0; i < pos - 1; i++)
        {
            aux = aux->siguiente;
        }
        Nodo *aux2 = aux->siguiente;
        aux->siguiente = aux2->siguiente;
        free(aux2);
    }
}

int get(Lista *lista, int pos)
{
    if(lista->head == NULL)
    {
        return 0;
    }
    Nodo *aux = lista->head;
    for (int i = 0; i < pos; i++)
    {
        aux = aux->siguiente;
    }
    return aux->valor;
}
int size(Lista *lista)
{
    Nodo *aux = lista->head;
    int tam = 0;
    while(aux != NULL)
    {
        tam++;
        aux = aux->siguiente;
    }
    return tam;
}
void print(Lista *lista)
{
    Nodo *aux = lista->head;
    while(aux!=NULL)
    {
        printf("-4%d", aux->valor);
        aux = aux->siguiente;
    }
}
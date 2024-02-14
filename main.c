/*Ejercicio 2
Implementar una lista simplemente enlazada que permita almacenar valores de tipo entero. La lista deberá tener las siguientes operaciones:
Añadir un elemento al final de la lista.
Eliminar un elemento de la lista en una posición dada.
Obtener el elemento de la lista en una posición dada.
Obtener el tamaño de la lista.
Imprimir todos los elementos de la lista.

La lista simplemente enlazada deberá estar implementada utilizando una estructura Nodo, que tendrá dos atributos: un valor entero y un puntero al siguiente nodo.Para la implementación de las operaciones de la lista, se recomienda utilizar punteros a nodo.

*/

#include <stdio.h>
#include <assert.h>
#include "Lista.h"

void addNodeToListAndCheckSize() {
    Lista lista;
    lista.head = NULL;
    add(&lista, 5);
    assert(size(&lista) == 1);
}

void addMultipleNodesToListAndCheckSize() {
    Lista lista;
    lista.head = NULL;
    add(&lista, 5);
    add(&lista, 10);
    add(&lista, 15);
    assert(size(&lista) == 3);
}

void removeNodeFromListAndCheckSize() {
    Lista lista;
    lista.head = NULL;
    add(&lista, 5);
    add(&lista, 10);
    removeNode(&lista, 0);
    assert(size(&lista) == 1);
}

void removeNodeFromMiddleOfListAndCheckSize() {
    Lista lista;
    lista.head = NULL;
    add(&lista, 5);
    add(&lista, 10);
    add(&lista, 15);
    removeNode(&lista, 1);
    assert(size(&lista) == 2);
}

void getNodeValueFromList() {
    Lista lista;
    lista.head = NULL;
    add(&lista, 5);
    add(&lista, 10);
    assert(get(&lista, 1) == 10);
}

void getNodeValueFromEmptyList() {
    Lista lista;
    lista.head = NULL;
    assert(get(&lista, 0) == 0);
}

int main() {
    addNodeToListAndCheckSize();
    addMultipleNodesToListAndCheckSize();
    removeNodeFromListAndCheckSize();
    removeNodeFromMiddleOfListAndCheckSize();
    getNodeValueFromList();
    getNodeValueFromEmptyList();
    return 0;
}
#include <stdlib.h>
#include <stdbool.h>
#include <stdio.h>

struct Node
{
    int info;          // armazena a informação do nó
    struct Node *next; // armazena o ponteiro para o próximo elemento da lista encadeada
};

typedef struct Node node_t;

void concat(node_t **l1, node_t *l2)
{
}

void main()
{
}

node_t *concat(node_t **l1, node_t *l2)
{
    // declarações
    node_t *auxL1;
    node_t *auxL2;
    node_t *aux;

    // incializando var auxiliares
    auxL1 = *l1;
    auxL2 = l2;

    // fico loop até encontra o ultimo elemento da lista1, quando encontrar: pulo pro prox. while

    while (auxL1->next != NULL)
    {
        auxL1 = auxL1->next;
    }

    // enquanto eu tiver elementos na lista dois, vou dando "add" de elementos da lista2 na lista1
    while (auxL2 != NULL)
    {
        aux = (node_t *)malloc(sizeof(node_t));
        aux->info = auxL2->info; // esse novo elemento criado recebe informação de um elemento da lista 2
        aux->next = NULL;
        auxL1->next = aux;
        auxL1 = aux;
        auxL2 = auxL2->next;
    }

    // por retorno a lista1 contento elementos dele mesmo e da lista2
    return l1;
}

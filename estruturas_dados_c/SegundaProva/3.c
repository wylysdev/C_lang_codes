#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

struct Node
{
    int info;          // armazena a informação do nó
    struct Node *next; // armazena o ponteiro para o próximo elemento da lista encadeada
};
typedef struct Node node_t;

node_t nodes[100]; // armazena o nós livres para a lista
node_t *free_nodes = NULL;

node_t *alloc_node()
{
    int *aux = free_nodes;

    free_nodes = &(free_nodes->next); //free_nodes agora referencia para o proximo indice que válido, pois o primeiro não é mais, pois eu irei retorna ele no passo seguinte
    return aux;                       // retorna o primeiro elemento que estar em nodes[], pois se está lá, é um nó livre
}

void free_node(node_t *n)
{
    for (int i = 0; i < 99; i++) // rodar a lista toda procurando o index onde o free_nodes estar referenciando
    {

        // para entrar no if, "i" != 1, pois senão dará erro no acesso aos indexes abaixo
        if (&nodes[i] == free_nodes && i != 1) // descobrindo o index onde o free_nodes estar no vetor nodes[]
        {
            // invalidando o espaço node_t *n
            n->info = 0;
            n->next = NULL;
            //adicionando "n" na lista de nós livres
            nodes[i - 1] = *n;

            // fazendo free_nodes refeência para o primeiro nó livre que estar dentro de nodes[]
            free_nodes = &(nodes[i - 1]);
        }
    }
}

int main()
{

    // inicializa a lista encadeada de nós livres
    for (int i = 0; i < 99; i++)
    {
        // inicializa o campo de informação
        nodes[i].info = 0;
        // inicializa o campo ponteiro, apontando para o próximo nó da lista
        nodes[i].next = &(nodes[i + 1]);
    }

    // inicializa o campo de informação do último nó da lista
    nodes[99].info = 0;

    // inicializa o campo ponteiro do último nó da lista, apontando para NULL
    nodes[99].next = NULL;

    // inicializa o ponteiro para a lista de nós livres
    free_nodes = &(nodes[0]);

    return 0;
}
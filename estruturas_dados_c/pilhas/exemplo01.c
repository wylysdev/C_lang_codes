/* 

    usando exemplos encontrados em um livro alternativo à recomendação do professor. 

 */

// gcc nomeArquivo -o nomeArquivoCompilado
// .\nomeArquivoCompilado
#include <stdio.h>

// void push(int valor);
// int pop(void);
// int size(void);
// int stackpop(void);

int pop(int *vetor, int *pos)
{
    *pos = --*pos;
    return *vetor;
}

void push(int valor, int *vetor, int *pos)
{
    *vetor = valor;
    *pos = *pos + 1;
}

int main()
{
    // definicoes
    int pilha[10];
    int posicao = 0;
    int show_pop;
    printf("\n push 10x");
    push(20, &pilha[posicao], &posicao);
    push(45, &pilha[posicao], &posicao);
    push(50, &pilha[posicao], &posicao);
    push(10, &pilha[posicao], &posicao);
    push(15, &pilha[posicao], &posicao);
    push(10, &pilha[posicao], &posicao);
    push(90, &pilha[posicao], &posicao);
    push(177, &pilha[posicao], &posicao);
    push(17, &pilha[posicao], &posicao);
    push(12, &pilha[posicao], &posicao);

    // mostrando pilha
    for (int i = 0; i < posicao; i++)
    {
        printf("\n%d -> %d", i, pilha[i]);
    }

    printf("\n");

    // pop
    printf("\n pop");
    show_pop = pop(&pilha[posicao], &posicao);
    for (int i = 0; i < posicao; i++)
        printf("\n%d -> %d", i, pilha[i]);
    printf("\n item pop: %d", show_pop);

    // pop
    printf("\n");
    printf("\n pop");
    show_pop = pop(&pilha[posicao], &posicao);
    for (int i = 0; i < posicao; i++)
        printf("\n%d -> %d", i, pilha[i]);
    printf("\n item pop: %d", show_pop);

    // pop
    printf("\n");
    printf("\n pop");
    show_pop = pop(&pilha[posicao], &posicao);
    for (int i = 0; i < posicao; i++)
        printf("\n%d -> %d", i, pilha[i]);
    printf("\n item pop: %d", show_pop);

    return 0;
}
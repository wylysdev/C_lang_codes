#include <stdio.h>
#include <stdlib.h>

/* 
    abordagem usando struct
*/

#define STACK_SIZE 3 // maximo

typedef struct stack Stack;

void show_stack(Stack *ps);
void building_stack(Stack *ps);
int pop(Stack *ps);
void push(Stack *ps, int item);
int is_empty(Stack *ps);
int stacktop(Stack *ps);
int size(Stack *ps);
int is_full(Stack *ps);

struct stack
{ // representa a pilha. Deve ser declarada no main
    int top;

    int items[STACK_SIZE];
};

int main()
{
    // declaracoes
    Stack s;
    s.top = -1; // 10 elementos
    Stack *ps = &s;
    int while_controll = 1;
    int while_number = 0;

    /* 
    0 - sair
    1 - pop
    2 - push
    3 - stackpop
    4 - size
    5 - mostrar pilha
     */

    while (while_controll)
    {
        printf("\n");
        printf("\n 0 - sair ");
        printf("\n 1 - pop ");
        printf("\n 2 - push ");
        printf("\n 3 - stacktop ");
        printf("\n 4 - size ");
        printf("\n 5 - mostrar pilha ");
        printf("\n digite numero para operacao: ");
        printf("\n");

        int value_type;             // valor operacao
        scanf("%d", &while_number); // lendo valor operacao

        switch (while_number)
        {
        case 0:
            exit(0);
            break;
        case 1:
            if (!is_empty(ps))
            {
                int aux;
                aux = pop(ps);
                printf("\n aux -> %d", aux);
                show_stack(ps);
            }
            else
            {
                printf("\n stack underflow");
            }
            break;
        case 2:
            if (!is_full(ps))
            {

                printf("\n digite numero para empilhar: ");
                scanf("%d", &value_type); // ler valor
                push(ps, value_type);     // empilha
                show_stack(ps);           // mostra
            }
            else
            {
                printf("\n stack overflow");
            }
            break;
        case 3:
            printf("\n o stacktop eh: %d", stacktop(ps));
            break;
        case 4:
            printf("\n o size eh: %d", size(ps));
            break;
        case 5:
            show_stack(ps);
            break;
        default:
            printf("\n numero de operacao invalido!");
            break;
        }
    }

    return 0;
}

int pop(Stack *ps)
{
    /*
    1. Se a pilha estiver vazia, imprime uma mensagem de advertência
    e interrompe a execução.

    2. Remove o primeiro elemento da pilha.
    
    3. Retorna esse elemento para o programa de chamada.
    */

    printf("\n\n pop");
    int aux = ps->items[ps->top];
    --ps->top;
    return aux;
}

void push(Stack *ps, int item)
{
    /* 
    Empilha um novo elemento. 
    Pode ser verificada a capacidade 
    máxima da pilha.
    */

    printf("\n\n push");
    ++ps->top;
    ps->items[ps->top] = item;
}

void show_stack(Stack *ps)
{

    printf("\n");
    for (int i = 0; i <= (ps->top); i++)
    {
        printf("\n %d -> %d", i, ps->items[i]);
    }
    printf("\n top -> %d ", ps->items[ps->top]);
}

int is_full(Stack *ps)
{
    return ps->top == STACK_SIZE - 1;
}

int is_empty(Stack *ps)
{
    /* return true -> pop == -1 return false -> pop >= 1 */

    if (ps->top == -1)
    {
        return 1;
        // 1 = true
        // 0 = false
    }
    else
    {
        return 0;
    }
}

void building_stack(Stack *ps)
{
    for (int i = 0; i < 0; i++)
    {
        ps->items[i] = 10 + i;
        ++ps->top;
    }
}

int size(Stack *ps)
{
    return ps->top + 1;
}

int stacktop(Stack *ps)
{
    return ps->items[ps->top];
}
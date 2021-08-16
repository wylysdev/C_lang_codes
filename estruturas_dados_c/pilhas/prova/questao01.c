#include <stdio.h>

// questão 1

/* 
    Implemente, em C, o corpo da operação top(), utilizando apenas as 
    operações push() e pop() declaradas acima. Dê um exemplo da utilização
    da operação top() em uma pilha qualquer, mostrando a estrutura da pilha 
    antes e depois da sua execução.
 */

#define STACKSIZE 10
struct Stack
{
    int top;
    int items[20];
};

int pop(struct Stack *s);
void push(struct Stack *s, int item);

int main()
{
    struct Stack s;
    s.top = -1;

    building_stack(&s);

}

int top(struct Stack *s){
    int ultimo_elem = pop(&s);
    push(&s, ultimo_elem);
    return ultimo_elem;
}

// int top(struct Stack *s){
//     struct Stack * ponteiro_s = &s;
//     int mostrar_na_volta;
//     mostrar_na_volta = pop(ponteiro_s);
//     push(&s, mostrar_na_volta);
//     return mostrar_na_volta;
// }

void building_stack(struct Stack *ps)
{
    for (int i = 0; i < 0; i++)
    {
        ps->items[i] = 10 + i;
        ++ps->top;
    }
}

int pop(struct Stack *s)
{
    int aux = s->items[s->top];
    --(s->top);
    return aux;
}

void push(struct Stack *s, int item)
{
    ++(s->top);
    s->items[s->top] = item;
    return;
}


#include <stdio.h>

// questão 1

/* 
    Implemente, em C, o corpo da operação top(), utilizando apenas as 
    operações push() e pop() declaradas acima. Dê um exemplo da utilização
    da operação top() em uma pilha qualquer, mostrando a estrutura da pilha 
    antes e depois da sua execução.
 */
typedef struct stack Stack;

#define STACKSIZE 10
struct stack
{
    int top;
    int items[20];
};

int pop(Stack *s);
void push(Stack *s, int item);

int main()
{
    Stack s;
    s.top = -1;

    building_stack(&s);

}

void dup(struct Stack *s){
    int ultimo_elem = pop(&s);
    push(&s, ultimo_elem);
    push(&s, ultimo_elem);
    return;
}



void building_stack(Stack *ps)
{
    for (int i = 0; i < 0; i++)
    {
        ps->items[i] = 10 + i;
        ++ps->top;
    }
}

int pop(Stack *s)
{
    int aux = s->items[s->top];
    --(s->top);
    return aux;
}

void push(Stack *s, int item)
{
    ++(s->top);
    s->items[s->top] = item;
    return;
}


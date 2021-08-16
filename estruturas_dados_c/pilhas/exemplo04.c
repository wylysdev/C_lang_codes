#include <stdio.h>

#define STACKSIZE 10
struct stack
{
    int top;
    int items[20];
};

// prototypes
typedef struct stack Stack;
void show_stack(Stack *s);
int pop(Stack *s);
void push(Stack *s, int item);
int is_full(Stack *s);
int is_empty(Stack *s);
int stacktop(Stack *s);

int main()
{

    Stack s;
    s.top = -1;

    if (!is_full(&s))
    {
        push(&s, 10);
        push(&s, 12);
        push(&s, 15);
        show_stack(&s);
    }

    if (!is_empty(&s))
    {
        int show = pop(&s);
        printf("\n (pop) --> %d ", show);
        show_stack(&s);
    }

    return 0;
}

void show_stack(Stack *s)
{
    int count_max = s->top;
    for (int i = 0; i <= count_max; i++)
    {
        printf("\n  [%d] -> %d", i, s->items[i]);
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

int is_full(Stack *s)
{
    return s->top == STACKSIZE - 1;
}

int is_empty(Stack *s)
{
    return s->top == -1;
}

int stacktop(Stack *s)
{
    return s->items[s->top];
}
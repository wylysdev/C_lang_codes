#include <stdio.h>

#define STACKSIZE 100

struct Stack
{
    int items[STACKSIZE];
};

int pop(struct Stack *s);
void push(struct Stack *s, int item);
int empty(struct Stack *s);
int top(struct Stack *s);



int main()
{
    struct Stack s;
    s.items[0] = 0;
    return 0;
}

void building_stack(struct Stack *ps)
{
    for (int i = 1; i < 10; i++)
    {
        ps->items[i++] = 10 + i;
        ++(ps->items[0]);
    }
}

int pop(struct Stack *s)
{
    int aux = s->items[s->items[0]];
    --(s->items[0]);
    return aux;
}

void push(struct Stack *s, int item)
{
    ++(s->items[0]);
    s->items[s->items[0]] = item;
    return;
}

void show_stack(struct Stack *s)
{
    int top = s->items[0];
    for (int i = 1; i <= top; i++)
    {
        printf("\n  [%d] -> %d", i, s->items[i]);
    }
}

int top(struct Stack *s)
{
    return s->items[s->items[0]];
}

int empty(struct Stack *s)
{
    return s->items[0] == 0;
}

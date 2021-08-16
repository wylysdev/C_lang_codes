/* 

(https://github.com/wilder/C-Exercises/tree/master/Exerc%C3%ADcios%20de%20pilha)
   Implemente uma pilha em C na qual cada item seja um número
variável de inteiros. Escolha uma estrutura de dados em C para essa
pilha e elabore rotinas push e pop para ela.
 */

#include <stdio.h>

#define STACKSIZE 5

typedef struct pilha Pilha;

struct pilha
{
   int top;
   int items[STACKSIZE];
};

int main()
{

   Pilha p;
   p.top = -1;

   for (int i = 0; i < STACKSIZE; i++)
   {
      p.items[i] = 10 + i;
   }

   show_stack(&p);
   
}

void show_stack(Pilha *s)
{
    int count_max = s->top;
    for (int i = 0; i <= count_max; i++)
    {
        printf("\n  [%d] -> %d", i, s->items[i]);
    }
}


void push(Pilha *s, int item)
{
   ++(s->top);
   s->items[s->top] = item;
   return;
}
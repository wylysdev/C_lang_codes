

/* 

   Elabore um método para manter duas pilhas dentro de um único vetor
    linear $[spacesize] de modo que nenhuma das pilhas incorra em estouro
    até que toda a memória seja usada, e uma pilha inteira nunca seja
    deslocada para outro local dentro do vetor. Escreva rotinas em C,
    push1, push2, pop1 e pop2, para manipular as duas pilhas. (Dica: as
    duas pilhas crescem na direção da outra.)

 */

#include <stdio.h>
// [ ][ ][ ][ ][ ][ ][ ][ ][ ][ ]
// [0][1][2][3][4][5][6][7][8][9]

struct Pilha
{
    int topo1;
    int topo2;
    int linear[10];
};

int main()
{
    int linear[10];
}

void push1()
{
}
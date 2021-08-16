#include <stdio.h>
// gcc .\exemplo_01.c -o compiled

struct Reg
{
    int i;
    float f;
};

void swap(int *a, int *b)
{
    int aux;
    // quando usamos o modificador *a preciso do VALOR que estar no endereço especificado
    aux = *a;
    *a = *b;
    *b = aux;
}
void swapSimples(struct Reg *a, struct Reg *b)
{
    struct Reg aux;
    // quando usamos o modificador *a preciso do VALOR que estar no endereço especificado
    aux = *a;
    *a = *b;
    *b = aux;
}

void swapReg(struct Reg *a, struct Reg *b)
{
    struct Reg aux;
    // quando usamos o modificador *a preciso do VALOR que estar no endereço especificado

    aux.i = a->i;
    aux.f = a->f;

    a->i = b->i;
    a->f = b->f;

    (*b).i = aux.i;
    (*b).f = aux.f;
}

void exemplo_um()
{
    //PRIMEIRO EXE
    int x = 10;
    int y = 20;
    int *px = &x;
    int *py = &y;
    printf("a: %d b: %d\n", x, y);
    swap(&x, &y);
    printf("Atualizado a: %d b: %d \n", x, y);
    printf("MOSTRANDO ENDERECOS: a: %d b: %d\n", px, py);
}

void exemplo_dois()
{

    struct Reg x;
    struct Reg y;

    x.i = 15;
    x.f = 15.0;

    y.i = 30;
    y.f = 30.0;
    swapSimples(&x, &y);
    printf("MOSTRANDO ENDERECOS: x.i: %d ===== x.f: %f \n", x.i, x.f);
    printf("MOSTRANDO ENDERECOS: y.i: %d ===== y.i: %f \n", y.i, y.f);
    return;
}

int main()
{
    //exmaplo01();
    exemplo_dois();
    return 0;
}
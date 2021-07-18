#include <stdio.h>

int main()
{
    int a = 10;

    //modificador de tipo
    int *pa = NULL;

    // endereço-de
    pa = &a;

    //objeto-de
    // int x = pa; // mostra endereço
    int x = *pa; // mostra valor
    // %p uso para ponteiro
    printf("Valor de a %d", x);

    // whats nil?
    int *pi = NULL;

    if (1)
    {
        int i = 0;
        pi = &i;
    }
    *pi = 100;

    return 0;
}
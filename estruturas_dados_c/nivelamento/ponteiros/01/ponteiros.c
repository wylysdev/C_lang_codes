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

void calcular_media()
{
    int numero_mult, aux, result;
    printf("Digite numero mult, aux");
    scanf("%d", &numero_mult);
    printf("Digite numero aux");
    scanf("%d", &aux);
    for (int i = 0; i <= 10; i++)
    {
    }
}
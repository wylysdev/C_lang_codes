#include <stdio.h>

// commom

void spaceView2()
{
    printf("\n");
    printf("\n");
    return;
}
void spaceView1()
{
    printf("\n");
    return;
}

/* 

    ( http://www.facom.ufu.br/~backes/wordpress/ListaC09.pdf )
    Sintaxe do ponteiro:
    
        [ int * ponteiro; ]

    Passando valor ao ponteiro 
        - o endereço => sem uso do "*"
        - valor que estar no endereço 


 */

void exe01()
{

    /*
    Escreva um programa que declare um inteiro, um real e um char, e ponteiros para in-
    teiro, real, e char. Associe as vari  ́aveis aos ponteiros (use &). Modifique os valores de
    cada vari  ́avel usando os ponteiros. Imprima os valores das vari  ́aveis antes e ap  ́os a
    modificac ̧  ̃ao
    */

    // DECLARAÇÃO DA VAR'S
    int inteiro = 10;
    float real = 20.0;
    char caracter = 'w'; // usa-se aspas simples
    printf("VALORES SEM MUDAR\n");
    printf("int: %d \nfloat: %f \nchar: %c \n", inteiro, real, caracter);

    // usa-se * para declarar var do tipo inteiro
    // usa-se '&' para passar o endereço de uma var

    // Associe as var's aos ponteiro
    int *p_inteiro = &inteiro;
    float *p_real = &real;
    char *p_caracter = &caracter;

    //Modifique os valores usando os ponteiros.
    *p_inteiro = 20;
    *p_real = 40.0;
    *p_caracter = 'y';

    printf("\n");
    printf("VALORES MODIFICADOS\n");
    printf("int: %d \nfloat: %f \nchar: %c \n", inteiro, real, caracter);

    return;
}

void exe02()
{

    /* 
        Escreva um programa que contenha duas vari  ́aveis inteiras. Compare seus enderec ̧os e
        exiba o maior enderec ̧ o
     */

    int primeira, segunda;
    printf("Digite dois numeros: \n");
    scanf("%d %d", &primeira, &primeira);
    if (&primeira > &segunda)
    {
        printf("O end da primeira var eh maior \n");
    }
    else
    {
        printf("O end da segunda var eh maior \n");
    }

    int *p1, *p2;

    p1 = &primeira;
    p2 = &segunda;

    printf("end var 1: %p \n", p1);
    printf("end var 2: %p \n", p2);
    printf("end var 1 int: %d \n", p1);
    printf("end var 2 int : %d \n", p2);
    return;
}

void exe03()
{

    /* 
    Escreva um programa que contenha duas vari  ́aveis inteiras. Leia essas vari  ́aveis do
teclado. Em seguida, compare seus enderec ̧ os e exiba o conte  ́udo do maior enderec ̧ o
     */
    spaceView2();
    int a, b;

    printf("digite dois numeros: \n");
    scanf("%d %d", &a, &b);
    spaceView1();
    int *pa, *pb;
    pa = &a;
    pb = &b;

    if (pa > pb)
    {
        printf("exibindo valor do maior endereco: %d \n", *pa);
    }
    else
    {
        printf("exibindo valor do maior endereco: %d \n", *pb);
    }

    printf("end de 1 numero: %d\n", pa);
    printf("end de 2 numero: %d\n", pb);
    spaceView2();
    return;
}

void exe04_swap(int *x, int *y)
{
    int aux;
    if (*x < *y)
    {
        aux = *x;
        *x = *y;
        *y = aux;
    }
    return;
}

void exe04()
{
    /* 
       Fac ̧a um programa que leia dois valores inteiros e chame uma func ̧  ̃ao que receba estes
    2 valores de entrada e retorne o maior valor na primeira vari  ́avel e o menor valor na
    segunda vari  ́avel. Escreva o conte  ́udo das 2 vari  ́aveis na t
     */
    spaceView2();
    int a, b;
    printf("digite dois valores: \n");
    scanf("%d %d", &a, &b);
    spaceView1();
    printf("antes de mudar\n");
    printf("valor de a: %d \nvalor de b: %d \n", a, b);
    spaceView1();
    exe04_swap(&a, &b);
    spaceView1();
    printf("depois de mudar\n");
    printf("valor de a: %d \nvalor de b: %d \n", a, b);

    spaceView2();
    return;
}

void exe05_soma(int *x, int *y)
{
    int soma = *x + *y;
    *x = soma;
    return;
}

void exe05()
{

    /* 
    Crie um programa que contenha uma func ̧  ̃ao que permita passar por par ˆametro dois
    n  ́umeros inteiros A e B. A func ̧  ̃ao dever  ́a calcular a soma entre estes dois n  ́umeros e
    armazenar o resultado na vari  ́avel A. Esta func ̧  ̃ao n  ̃ao dever  ́a possuir retorno, mas dever  ́a
    modificar o valor do primeiro par  ̃ametro. Imprima os valores de A e B na func ̧  ̃ao principa
     */

    spaceView2();
    int a, b;
    printf("digite dois numeros: ");
    scanf("%d %d", &a, &b);
    printf("a: %d, b: %d \n", a, b);
    exe05_soma(&a, &b);
    printf("a: %d, b: %d \n", a, b);
    spaceView2();
    return;
}

int main()
{
    //exe04();
    exe05();
    return 0;
}
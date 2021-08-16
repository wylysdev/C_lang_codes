#include <stdio.h>

// declaracao 1
struct Funcionario
{
    int idade;
    char nome[10];
    float salario;
};

// declaracao 2
struct FuncMercado
{
    int idade;
    char nome[10];
    float salario;
} funM1, funM2, somaFunM;

int main()
{

    int controller = 0;

    if (controller == 0)
    {
        // setando valores
        struct Funcionario funcionario = {20, "Willys", 1.200};
        printf("controller 0\n");
        printf("=====INFORMACOES DO FUNCIONARIO SAO=====\n");
        printf("- idade eh %d\n", funcionario.idade);
        printf("- nome eh: %s\n", funcionario.nome);
        printf("- salario eh: %f\n", funcionario.salario);
    }
    else if (controller == 1)
    {
        printf("controller 1\n");
        struct Funcionario fun1, fun2, funTwo[20];
    }
    else if (controller == 2)
    {
        printf("controller 3\n");
    }

    return 0;
}
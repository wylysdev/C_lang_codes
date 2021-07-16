#include <stdio.h>
#include <string.h>

/* 


 */
int main()
{
	printf("digie sua idade: ");
	int idade;
	scanf("%i", &idade);

	printf("digite 10 numeros: ");
	int numeros[10];
	for (int i = 0; i < 10; i++)
	{
		scanf("\n%i", &numeros[i]);
	}
	printf("Agora digite seu nome: ");
	char nome[10];
	scanf("\n%s", &nome);

	// MOSTRANDO INFORMAÇÕES
	printf("Seu nome eh: %s.\n", nome);
	printf("Seu nome eh: %d.\n", idade);
	for (int i = 0; i < 10; i++)
	{
		printf("Esses sãos os números que você digitou: %d.\n", numeros[i]);
	}

	return 0;
}
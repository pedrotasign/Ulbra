#include <iostream>;
#include <stdio.h>;
#include <locale.h>; // biblioteca para acentua��o.

//1. Fa�a um algoritmo para ler um n�mero e informar se ele est� na faixa de 
//n�meros entre 100(inclusive) e 1000(inclusive).


int main ()
{
	setlocale(LC_ALL, "Portuguese");
	int numero;
	printf ("informe um numero: ");
	scanf ("%i",&numero);
	if (numero>=100 && numero<=1000)
		printf ("verdadeiro");
	else 
		printf ("falso");
	return 0;
}

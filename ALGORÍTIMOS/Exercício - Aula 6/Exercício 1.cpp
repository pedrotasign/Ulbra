#include <iostream>;
#include <stdio.h>;
#include <locale.h>; // biblioteca para acentuação.

//1. Faça um algoritmo para ler um número e informar se ele está na faixa de 
//números entre 100(inclusive) e 1000(inclusive).


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

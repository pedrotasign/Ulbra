/* 2. ESCREVA UM ALGORITMO PARA LER UM N�MERO INTEIRO E ESCREV�-LO NA TELA
10 VEZES UTILIZANDO UMA REPETI��O.*/

#include <iostream>
#include <stdio.h>

int main ()
{
	int x, num;
	printf ("digite um numero: ");
	scanf ("%i", &num);
	for (x=1; x<=10; x++){
		printf ("\n %i", num);
	}
}

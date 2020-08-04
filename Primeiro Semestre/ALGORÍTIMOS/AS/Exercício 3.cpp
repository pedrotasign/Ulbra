/*3 - Escreva um programa para fazer a leitura de um número indeterminado de valores. 
Todos os valores pares devem ser armazenados em um vetor de 20 posições. 
O programa deve ser encerrado quando o vetor estiver totalmente preenchido.*/

#include <stdio.h>
#include <locale.h>


int main( )
{
	setlocale(LC_ALL, "Portuguese");
	int  par[20], numero, x=0;
	
	do {
		printf ("digite um número: ");
		scanf ("%i", &numero);
		if (numero%2==0);{
			par[x]= numero;
			x++;
		}
	}
	while (x!=20);
	
}



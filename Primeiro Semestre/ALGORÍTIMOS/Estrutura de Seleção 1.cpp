/* 1.  Preencher um vetor A de 10 elementos com os n�meros inteiros 10,20,30,40,50,...,
100. Deve ser preenchido durante a execu��o, n�o inicializado. Escrever o vetor A ap�s o 
seu total preenchimento.*/

#include <stdio.h>
#include <locale.h> // biblioteca para acentua��o.


int main( )
{
	setlocale(LC_ALL, "Portuguese");
	int numero;
	
	printf ("digite um n�mero: ");
	scanf ("%i", &numero);
	if (numero>=1000)
		printf("VERDADEIRO");
		
	else
		printf ("FALSO");
		
return 0;
	

}

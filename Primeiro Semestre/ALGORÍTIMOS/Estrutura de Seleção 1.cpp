/* 1.  Preencher um vetor A de 10 elementos com os números inteiros 10,20,30,40,50,...,
100. Deve ser preenchido durante a execução, não inicializado. Escrever o vetor A após o 
seu total preenchimento.*/

#include <stdio.h>
#include <locale.h> // biblioteca para acentuação.


int main( )
{
	setlocale(LC_ALL, "Portuguese");
	int numero;
	
	printf ("digite um número: ");
	scanf ("%i", &numero);
	if (numero>=1000)
		printf("VERDADEIRO");
		
	else
		printf ("FALSO");
		
return 0;
	

}

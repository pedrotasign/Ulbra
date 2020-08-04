#include <iostream>;
#include <stdio.h>;
#include <locale.h>; // biblioteca para acentuação.

//2.Faça um algoritmo para ler um número e se ele for maior do que 30, então
//  exibir metade do número, caso contrário, imprimir o dobro do número.


int main ()
{
	setlocale(LC_ALL, "Portuguese");
	float numero, final;
	
	printf ("digite um número qualquer: ");
	scanf ("%f", &numero);
	if (numero>=30)
		final= numero/2;
	
	else 
		final=numero*2;		
	printf("resultado é = %f\n", final);
		
	return 0;	
}

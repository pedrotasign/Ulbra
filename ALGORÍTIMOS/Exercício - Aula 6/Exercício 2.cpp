#include <iostream>;
#include <stdio.h>;
#include <locale.h>; // biblioteca para acentua��o.

//2.Fa�a um algoritmo para ler um n�mero e se ele for maior do que 30, ent�o
//  exibir metade do n�mero, caso contr�rio, imprimir o dobro do n�mero.


int main ()
{
	setlocale(LC_ALL, "Portuguese");
	float numero, final;
	
	printf ("digite um n�mero qualquer: ");
	scanf ("%f", &numero);
	if (numero>=30)
		final= numero/2;
	
	else 
		final=numero*2;		
	printf("resultado � = %f\n", final);
		
	return 0;	
}

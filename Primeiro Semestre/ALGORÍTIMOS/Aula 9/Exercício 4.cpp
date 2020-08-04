/*4. ESCREVA UM ALGORITMO QUE IMPRIMA OS NÚMEROS ÍMPARES EXISTENTES DE
ENTRE 1(INCLUSIVE) E 9(INCLUSIVE).*/

#include <iostream>
#include <stdio.h>

int main ()
{
	int cont, num;
	num=1;
	for (cont=1; cont<=10; cont++){
		if ( num%2==1)
		printf ("\n %i", num);
		num++;
	}	
}

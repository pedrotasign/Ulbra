/*3. ESCREVA UM ALGORITMO QUE IMPRIMA NA TELA OS 10 PRIMEIROS N�MEROS
INTEIROS MAIORES QUE 100 UTILIZANDO UMA ESTRUTURA DE REPETI��O.*/

#include <iostream>
#include <stdio.h>

int main ()
{
	int cont, num;
	num=100;
	for (cont=1; cont<=10; cont++){
		num++;
		printf ("\n%i", num);
	}	
}

#include <iostream>
#include <stdio.h>

//4 - Construa um algoritmo que leia dois números e efetue a adição. Caso o valor
//somado seja maior que 20, este deverá ser apresentado somando e a ele mais
//8; caso o valor somado seja menor ou igual a 20, este deverá ser apresentado
//subtraindo-se 5


int main()
{
	float A, B, Final;
	
	printf("Digite o primeiro numero: ");
	scanf("%f", &A);
	printf("Digite o segundo numero: ");
	scanf("%f", &B);
	
	Final= A+B;
	if(Final>20)
		Final= Final+8;
	else
		Final= Final-5;
		
	printf("O resultado e: %f\n", Final);
return 0;
}

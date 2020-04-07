#include <iostream>
#include <stdio.h>

//3 - Faça um algoritmo para ler três números e verificar se a soma deles é maior
//que 50. Se for, escrever uma mensagem informando.

int main ()
{
	float A, B, C, Final;
	
	printf("Digite o primeiro numero: ");
	scanf("%f", &A);
	printf("Digite o segundo numero: ");
	scanf("%f", &B);
	printf("Digite o terceiro numero: ");
	scanf("%f", &C);
	
	Final=A+B+C;
	
	if(Final>50)
		printf("O resultado e maior que 50");
return 0;
}


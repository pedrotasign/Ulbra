#include <iostream>
#include <stdio.h>

//6 - Fazer um algoritmo que leia o percurso em quilômetros, o tipo do carro e
//informe o consumo estimado de combustível, sabendo-se que um carro tipo C
//faz 12 Km com um litro de gasolina, um tipo B faz 9 Km e o tipo A, 8 Km por
//litro.

int main()
{
	float KM,  Consumo;
	int ModeloCarro;
	
	printf("Digite o valor do percurso em KM: ");
	scanf("%f", &KM);
	printf("Digite o modelo do carro sabendo que: A= 1 | B= 2 | C= 3 :");
	scanf("%i", &ModeloCarro);
			
	printf("O consumo previsto foi: ");
	Consumo=KM/8;
	printf("Modelo A: %f\n", Consumo);
	Consumo=KM/9;
	printf("Modelo B: %f\n", Consumo);
	Consumo=KM/12;
	printf("Modelo C: %f\n", Consumo);
return 0;
}

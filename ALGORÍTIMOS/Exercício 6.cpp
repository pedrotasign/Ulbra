#include <iostream> 
#include <stdio.h>;
#include <locale.h>
int main ()
{
	setlocale(LC_ALL, "Portuguese");
	int Variavelx; //refere-se a valor inteiro
	float A, B; //refere-se a valores reais
	printf ("qual � o primeiro valor? "); 
	scanf ("%f",&A); //%f porque � float
	printf ("qual � o valor B? ");
	scanf ("%f",&B); 
	Variavelx=A*B;
	printf ("resultado de x �= %i\n", Variavelx); //%i porque refere-se ao int
	return 0; 
	
}

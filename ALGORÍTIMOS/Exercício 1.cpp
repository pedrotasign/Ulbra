#include <iostream>; 
#include <stdio.h>;
#include <locale.h>;
int main ()
{
	setlocale(LC_ALL, "Portuguese");
	int n_funcionario;
	float valor, horas, salario;
	
	printf ("Informe o codigo do funcionario? ");	
	scanf("%i",& n_funcionario);
	printf("qual o valor de hora trabalhada? ");
	scanf("%f",& valor);
	printf("qual a quantia de horas trabalhadas? ");
	scanf("%f",& horas);
	salario= valor*horas;
	
	
	
	printf("codigo do funcionario é = %i\n", n_funcionario);
		
	printf("o valor do salario e= %.2f",salario);
	
	
}

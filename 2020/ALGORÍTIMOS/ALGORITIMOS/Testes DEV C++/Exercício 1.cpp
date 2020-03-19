#include <iostream> 
#include <stdio.h>;
int main ()
{
	int codigofuncionario, quantidadehora, valorhora, Salario;
	printf ("Informe o codigo do funcionario? ");	
	scanf("%d",&codigofuncionario);
	printf("qual o valor de hora trabalhada? ");
	scanf("%d",&valorhora);
	printf("qual a quantia de horas trabalhads? ");
	scanf("%d",&quantidadehora);
	Salario= (quantidadehora*valorhora);
	
	
	
	printf("Funcionario e= %d\n",codigofuncionario);
		
	printf("o valor do salario e= %d\n",Salario);
	
	
}

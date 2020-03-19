#include <iostream> 
#include <stdio.h>;
#include <locale.h> // biblioteca para acentuação.


int main ()
{
	setlocale(LC_ALL, "Portuguese"); // código para acentução.
	int Codigo1,Quantidade1,Valor1,Codigo2,Quantidade2,Valor2,Resultado1,Resultado2,Ipi,Total;
	printf("qual é o codigo do produto 1? ");
	scanf("%d",&Codigo1);
	printf("qual a quantidade vendida do produto 1? ");
	scanf("%d",&Quantidade1);
	printf("qual o valor do produto 1?");
	scanf("%d",&Valor1);
	printf("qual é o codigo do produto 2? ");
	scanf("%d",&Codigo2);
	printf("qual a quantidade vendida do produto 2? ");
	scanf("%d",&Quantidade2);
	printf("qual é o valor do produto 2? ");
	scanf("%d",&Valor2);
	Resultado1=(Quantidade1*Valor1);
	Resultado2=(Quantidade2*Valor2);
	printf("resultado do produto 1 é = %d\n",Resultado1);
	printf("resultado do produto 2 é = %d\n",Resultado2);
	Ipi=(((Resultado1+Resultado2)*10)/100);	
	printf("resultado do IPI é = %d\n",Ipi);
	Total=Resultado1+Resultado2+Ipi;
	printf("resultado final é= %d\n",Total);
	
	
}

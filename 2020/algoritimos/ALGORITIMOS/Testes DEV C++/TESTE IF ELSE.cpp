#include <iostream> 
#include <stdio.h>;
#include <locale.h> // biblioteca para acentua��o.




int main ()
{
	setlocale(LC_ALL, "Portuguese"); // c�digo para acentu��o.
	int a,b,result,mult;
	
	printf("Ol� :) \n Informe um n�mero:");
	scanf("%d",&a);
	printf("Informe outro n�mero:");
	scanf("%d",&b);
	
	result =(a+b);
	if (result<5){
		printf("OI");
	}
	else if (result=7){
		mult=(a*b);
		printf("resultado da multiplica��o �= %d\n",mult);
	}
	else{
	result*10;
	printf("resultado final � %d\n",result);
	}
	
	
}


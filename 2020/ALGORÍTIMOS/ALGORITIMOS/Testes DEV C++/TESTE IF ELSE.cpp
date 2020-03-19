#include <iostream> 
#include <stdio.h>;
#include <locale.h> // biblioteca para acentuação.




int main ()
{
	setlocale(LC_ALL, "Portuguese"); // código para acentução.
	int a,b,result,mult;
	
	printf("Olá :) \n Informe um número:");
	scanf("%d",&a);
	printf("Informe outro número:");
	scanf("%d",&b);
	
	result =(a+b);
	if (result<5){
		printf("OI");
	}
	else if (result=7){
		mult=(a*b);
		printf("resultado da multiplicação é= %d\n",mult);
	}
	else{
	result*10;
	printf("resultado final é %d\n",result);
	}
	
	
}


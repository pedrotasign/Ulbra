/*2. Escreva um programa que leia a altura de um número indeterminado de pessoas. 
Calcule e exiba a média das alturas das pessoas. O algoritmo deve ler uma altura e 
perguntar se a pessoa deseja continuar (S-sim ou N-não). 
Quando a resposta for 'N', deve parar a leitura. Utilizar a estrutura 
de repetição faça-enquanto (do while). 
*/

#include <iostream>
#include <stdio.h>
#include <locale.h> // biblioteca para acentuação.
#include <conio.h>


int main ()
{
	setlocale(LC_ALL, "Portuguese");
	float Altura, Total, MediaAltura;
	int cont=0;
	char x;
	
	do{
		printf ("Informe a altura: ");
		scanf ("%f", &Altura);
		Total+=Altura;
		printf ("gostaria de informar uma nova altura? s = Sim | n = Não : ");
		scanf ("%s", &x);
		getchar();
		cont++;	
	}
	while (x=='s' || x=='S');
	MediaAltura= Total/cont;
	printf ("A média das altura é : \n%f", MediaAltura);
		
}


/*2. Escreva um programa que leia a altura de um n�mero indeterminado de pessoas. 
Calcule e exiba a m�dia das alturas das pessoas. O algoritmo deve ler uma altura e 
perguntar se a pessoa deseja continuar (S-sim ou N-n�o). 
Quando a resposta for 'N', deve parar a leitura. Utilizar a estrutura 
de repeti��o fa�a-enquanto (do while). 
*/

#include <iostream>
#include <stdio.h>
#include <locale.h> // biblioteca para acentua��o.
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
		printf ("gostaria de informar uma nova altura? s = Sim | n = N�o : ");
		scanf ("%s", &x);
		getchar();
		cont++;	
	}
	while (x=='s' || x=='S');
	MediaAltura= Total/cont;
	printf ("A m�dia das altura � : \n%f", MediaAltura);
		
}


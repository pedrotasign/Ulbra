/*1 .  Em uma eleição presidencial, existem quatro candidatos. Os votos são informados através de código. Os códigos utilizados são:
·   	1,2,3,4 votos para os respectivos candidatos;
·   	5 voto em branco;
·   	Escreva uma Programa que calcule e imprima:
•   	total de votos para cada candidato;
•   	total de votos em branco;
Para finalizar o conjunto de votos, tem-se o valor zero. */

#include <stdio.h>
#include <iostream>
#include <locale.h> // biblioteca para acentuação.


int main( )
{
	setlocale(LC_ALL, "Portuguese");
	int Candidato, votar, cont1=0, cont2=0, cont3=0, cont4=0, cont5=0;
	
	do {	
		printf ("Escolha o seu candidato: ");
		scanf ("%i",&Candidato);
		do{ 
			printf ("Gostaria de informar outro voto: s = Sim | n = Nao ");
			scanf ("%s", &votar);
			getchar ();
		}
		while (votar!='s' && votar!='S');
		
		
	}
		while (Candidato!=1 && Candidato!=2 && Candidato!=3 && Candidato!=4 && Candidato!=5);
	
		switch (Candidato) {
		case 1: cont1++;
		break;
		case 2: cont2++;
		break;
		case 3: cont3++;
		break;
		case 4: cont4++;
		break;
		case 5: cont5++;
		break;
		}
	
	
		
	

}

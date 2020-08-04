#include <stdio.h>
#include <iostream>
#include <locale.h> // biblioteca para acentuação.


int main( )
{
	setlocale(LC_ALL, "Portuguese");
	int Tipo, cont, cont1=0, cont2=0, cont3=0;
	float Lucro;
	char x, Cliente;
	
	do {
		printf ("Informe um paciente: "); 
		scanf ("%s", &Cliente);
		do {
			printf ("Digite o tipo de atendimento: ");
			scanf ("%i", &Tipo);
		}
		while (Tipo!=1 && Tipo!=2 && Tipo!=3); 
		switch (Tipo) {
		
		case 1: Lucro+=10.00; cont1++;
		break;
		case 2: Lucro+=80.00; cont2++;
		break;
		case 3: Lucro+=150.00; cont3++;
		break;
		
		}
		cont++;
		do{
			printf ("Gostaria de realizar um novo atendimento: s = Sim | n = Nao: ");
			scanf ("%s", &x);
			getchar ();
		}
		while (x!='s' && x!='S' && x!='n' && x!='N');
	}
	while (x=='s' || x=='S'); 
	printf ("A quantidade total de atendimentos realizados foi: %i\n", cont); 
	printf ("\nO total arrecadado em um dia de atendimento clínico foi: %.2f\n\n", Lucro); 
	
	if (cont1>=cont2 && cont1>=cont3); //
	{
		printf ("\nO procedimento mais realizado foi Limpeza de Pele\n");
	}
	if (cont2>=cont1 && cont>=cont3);
	{
		printf ("\nO procedimento mais realizado foi Hidratação Capilar\n");
	}
	if (cont3>=cont1 && cont3>=cont2)
	{
		printf ("\nO procedimento mais realizado foi Massagem terapêutica\n");
	}
	
}

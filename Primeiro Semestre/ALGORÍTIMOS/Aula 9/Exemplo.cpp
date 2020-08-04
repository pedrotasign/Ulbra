#include <iostream> 
#include <stdio.h>;
#include <locale.h> // biblioteca para acentuação.


int main ()
{
	setlocale(LC_ALL, "Portuguese");
	int x, aluno, cont=0;
	float ap1, ap2, as, notaF, notaT, somaN=0;
	
	printf ("DIGITE O NUMERO DO ALUNO: \n\n");
	for (x=1; x<=3; x++)
	{
		printf (" =>ALUNO: ");
		scanf ("%i", & aluno);
		printf ("\n Digite a nota da AP1: ");
		scanf ("%f", &ap1);
		printf ("\n Digite a nota da AP2: ");
		scanf ("%f", &ap2);
		printf ("\n Digite a nota da AS: ");
		scanf ("%f", &as);
		notaF=ap1+ap2+as;
		somaN=somaN+notaF;
				
		if (notaF>=7)
		{
			printf ("\n PARABENS APROVADO. \n");
			printf ("\n\n===============\n");
			cont=cont+1;
		}
		else
		{
			printf ("\n REPROVADO, AZEDOU. ");
			printf ("\n\n================\n");
		}
	
	}
	notaT= somaN/3;
	printf ("\n A Média da turma é: %.2f", notaT);
	printf ("\n Os alunos aprovados foram: %i", cont);
return 0;
}

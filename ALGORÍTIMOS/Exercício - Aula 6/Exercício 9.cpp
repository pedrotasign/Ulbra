#include <iostream> 
#include <stdio.h>;
#include <locale.h>

/* 9 - Fa�a um algoritmo para ler o codigo de 2 times e o n�mero de gols marcados
na partida (para cada time). Escrever o codigo do vencedor. Caso n�o haja
vencedor dever� ser impressa a palavra EMPATE.*/

int main ()
{
	setlocale(LC_ALL, "Portuguese");
	int GolsA, GolsB;
	float TimeA, TimeB;
	printf ("Qual � o primeiro time? ");
	scanf ("%f", &TimeA);
	getchar();
	printf ("Qual � o segundo time? ");
	scanf ("%f", &TimeB);
	getchar();
	printf ("O primeiro time fez quantos gols? ");
	scanf ("%i", &GolsA);
	printf ("O segundo time fez quantos gols? ");
	scanf ("%i", &GolsB);
	
	if (GolsA>GolsB)
		printf ("Codigo do vencedor: %f", TimeA);
		
	else (GolsA==GolsB);
		printf ("EMPATE");
		
		
		
			if (num==10)
        {
        	printf ("\n\nVoce acertou!\n");
        	printf ("O numero e igual a 10.\n");
        }
	else
        {
        	if (num>10)
                {
                	printf ("O numero e maior que 10.");
                }
        	else
                {
                	printf ("O numero e menor que 10.");
                }
        }
	


}

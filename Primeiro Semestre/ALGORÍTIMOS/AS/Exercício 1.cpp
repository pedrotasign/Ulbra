/*1 - Uma pesquisa sobre a pandemia precisa informar o munic�pio com mais casos de 
COVID19 e o munic�pio com menos casos. Para apoio a esta pesquisa voc� deve desenvolver
um programa que leia o c�digo do munic�pio e o n�mero de casos confirmados da doen�a. 
A leitura deve ser repetida at� que o c�digo de munic�pio zero seja informado. 
Ap�s encerrada a leitura  escreva: 

o n�mero total de munic�pios pesquisados;
o c�digo do munic�pio que teve o maior n�mero de casos confirmados, juntamente com o n�mero de casos;
o c�digo do munic�pio que teve o menor n�mero de casos confirmados, juntamente com o n�mero de casos.
OBS: quando o c�digo zero for informado, o programa deve encerrar imediatamente sem ler o n�mero de casos COVID19.*/

#include <stdio.h>
#include <locale.h>


int main( )
{
	setlocale(LC_ALL, "Portuguese");
	int codMunicipio, numConfirmados, cont, maxCasos=0, minCasos=0, maxMunicipio, minMunicipio;
	
	do {
		printf ("informe o c�digo do m�nicipio: ");
		scanf ("%i", &codMunicipio);
		if (codMunicipio!=0) {
			printf("n�mero de casos: ");
			scanf ("%i",&numConfirmados);
			cont++;			
		}
		if (maxCasos < numConfirmados){
			maxCasos = numConfirmados;
			maxMunicipio = codMunicipio;
		}
		if (minCasos == 0){
			minCasos = numConfirmados;
			minMunicipio = codMunicipio;
		}
		if (minCasos > numConfirmados){
			minCasos = numConfirmados;
			minMunicipio = codMunicipio;
		}
	}
	while (codMunicipio != 0);
	printf ("\n Foram pesquisados: %i munic�pios", cont);
	printf ("\n O munic�pio com mais casos � o: %i ,com %i casos de COVID19: ", maxMunicipio, maxCasos);
	printf ("\n O munic�pio com menos casos � o: %i ,com %i casos de COVID19 ", minMunicipio, minCasos);

}
	
	



/*1 - Uma pesquisa sobre a pandemia precisa informar o município com mais casos de 
COVID19 e o município com menos casos. Para apoio a esta pesquisa você deve desenvolver
um programa que leia o código do município e o número de casos confirmados da doença. 
A leitura deve ser repetida até que o código de município zero seja informado. 
Após encerrada a leitura  escreva: 

o número total de municípios pesquisados;
o código do município que teve o maior número de casos confirmados, juntamente com o número de casos;
o código do município que teve o menor número de casos confirmados, juntamente com o número de casos.
OBS: quando o código zero for informado, o programa deve encerrar imediatamente sem ler o número de casos COVID19.*/

#include <stdio.h>
#include <locale.h>


int main( )
{
	setlocale(LC_ALL, "Portuguese");
	int codMunicipio, numConfirmados, cont, maxCasos=0, minCasos=0, maxMunicipio, minMunicipio;
	
	do {
		printf ("informe o código do múnicipio: ");
		scanf ("%i", &codMunicipio);
		if (codMunicipio!=0) {
			printf("número de casos: ");
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
	printf ("\n Foram pesquisados: %i municípios", cont);
	printf ("\n O município com mais casos é o: %i ,com %i casos de COVID19: ", maxMunicipio, maxCasos);
	printf ("\n O município com menos casos é o: %i ,com %i casos de COVID19 ", minMunicipio, minCasos);

}
	
	



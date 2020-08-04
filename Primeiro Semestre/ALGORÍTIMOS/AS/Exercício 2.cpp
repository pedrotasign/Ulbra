/*2 - No ambiente Aula, nas avaliações realizadas pelo aluno, são exibidas:  
a média das notas dos alunos, a maior nota e a menor nota. Faça um programa 
que leia as notas de uma turma de 30 alunos. As notas devem ser armazenadas 
em um vetor de 30 elementos. Calcule e exiba:
a média de notas da turma; 
a nota mais alta;
a nota mais baixa;
o número de aprovados(alunos que tiraram nota maior ou igual a 7).*/



#include <stdio.h>
#include <locale.h>


int main( )
{
	setlocale(LC_ALL, "Portuguese");
	float  nota [30], media, notaMaior=0, notaMenor=0, mediaFinal;
	int aprovados=0, x;
	
	for (x=0; x<30; x++){
		printf("Digite a nota do aluno: ");
		scanf ("%f", &nota[x]);
		media += nota[x];
		if (nota[x] >= 7){
			aprovados++;	
		}
		if (notaMenor == 0){
			notaMenor = nota[x];
		}
		
		if (nota[x] < notaMenor){
			notaMenor = nota[x];
		}
		
		if (nota[x]>notaMaior){
			notaMaior = nota[x];
		}		
	}
	
	mediaFinal=media/30;
	printf ("A medida de notas da turma é: %.2f \n", mediaFinal);
	printf ("O numero de aprovados foi: %i \n", aprovados);
	printf ("A maior nota da turma foi: %.2f \n", notaMaior);
	printf ("A menor nota da turma foi: %.2f \n", notaMenor);
	
}

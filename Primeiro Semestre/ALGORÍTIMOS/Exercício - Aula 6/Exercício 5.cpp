#include <stdio.h>;
#include <locale.h>; // biblioteca para acentua��o.


//5.Fa�a um algoritmo para entrar com c�digo, sexo e idade de uma pessoa. Se a
//pessoa for do sexo feminino e tiver menos que 25 anos, imprimir c�digo e
//mensagem: ACEITA. Caso contr�rio, imprimir c�digo e a mensagem: N�O
//ACEITA.


int main ()
{
	setlocale(LC_ALL, "Portuguese");
	int codigo, idade;
	char sexo ;
	
	printf ("digite o codigo:");
	scanf ("%i", &codigo);
	printf ("digite o sexo (F-feminino ou M-masculino):");
	getchar();
	scanf ("%c",&sexo);
	printf ("idade:");
	scanf ("%i", &idade);
	
	if ((sexo=='f' || sexo=='F') && idade<25)
		printf ("Codigo: %i ACEITA ", codigo);
	else
		printf ("Codigo: %i - N�O ACEITA", codigo);
		
	return 0;
}

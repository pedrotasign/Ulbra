#include <stdio.h>;
#include <locale.h>; // biblioteca para acentuação.


//5.Faça um algoritmo para entrar com código, sexo e idade de uma pessoa. Se a
//pessoa for do sexo feminino e tiver menos que 25 anos, imprimir código e
//mensagem: ACEITA. Caso contrário, imprimir código e a mensagem: NÃO
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
		printf ("Codigo: %i - NÃO ACEITA", codigo);
		
	return 0;
}

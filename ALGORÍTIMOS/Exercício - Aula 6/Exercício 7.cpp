#include <iostream>;
#include <stdio.h>;
#include <locale.h>; // biblioteca para acentuação.
#include <string.h>

//7 - Faça um algoritmo que verifique a validade de uma senha fornecida pelo
//usuário. A senha válida é o número 1234. OBS: Se a senha informada
//pelo usuário for inválida, a mensagem &quot;ACESSO NEGADO&quot; deve ser exibida.
//Se for a correta, a mensagem &quot;ACESSO PERMITIDO&quot; deverá ser exibida.

int main ()
{
	setlocale(LC_ALL, "Portuguese");
	int senha;
	printf ("informe a senha: ");
	scanf ("%i",&senha);
	if (senha==1234)
		printf("ACESSO PERMITIDO");
	else 
		printf ("ACESSO NEGADO");
return 0;	
}

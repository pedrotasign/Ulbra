#include <iostream>;
#include <stdio.h>;
#include <locale.h>; // biblioteca para acentua��o.
#include <string.h>

//7 - Fa�a um algoritmo que verifique a validade de uma senha fornecida pelo
//usu�rio. A senha v�lida � o n�mero 1234. OBS: Se a senha informada
//pelo usu�rio for inv�lida, a mensagem &quot;ACESSO NEGADO&quot; deve ser exibida.
//Se for a correta, a mensagem &quot;ACESSO PERMITIDO&quot; dever� ser exibida.

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

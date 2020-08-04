#include <stdio.h>
#include <iostream>
#include <locale.h> // biblioteca para acentuação.


int main( )
{
	setlocale(LC_ALL, "Portuguese");
	int Placa, Tipo, cont, cont1=0, cont2=0, cont3=0;
	float Lucro;
	char x;
	
	do { // função de repetição que realiza determinados comandos enquanto o while for verdadeiro
		printf ("Qual a placa do do veículo? "); 
		scanf ("%i", &Placa);
		do {
			printf ("Digite o tipo do veículo: ");
			scanf ("%i", &Tipo);
		}
		while (Tipo!=1 && Tipo!=2 && Tipo!=3); // validação para que sejam aceitos apenas os números 1 , 2 e 3
		switch (Tipo) { // função para multiplas escolhas de acordo com o valor da variavel Tipo
		
		case 1: Lucro+=12.80; cont1++; // caso o valor de Tipo seja igual a 1, esse valor estará atrelado ao Valor ($) correnspondente, e o Cont1++ irá somar quantas vezes essa opção for escolhida
		break; // encerrar a lista de comandos do caso1
		case 2: Lucro+=8.20; cont2++;
		break;
		case 3: Lucro+=22.20; cont3++;
		break;
		
		}
		cont++;	// soma de quantas vezes esse loop foi realizado
		do{ // função de repetição que realiza determinado comando enquanto o while for verdadeiro
			printf ("Gostaria de informar outro veiculo: s = Sim | n = Nao ");
			scanf ("%s", &x);
			getchar ();
		}
		while (x!='s' && x!='S' && x!='n' && x!='N');	//valida para que enquanto a resposta for diferente de s S ou n N o loop sera repetido
	}
	while (x=='s' || x=='S'); // encerra o primeiro DO validando que enquanto a resposta for igual a s ou S o loop continua
	printf ("A quantidade total de veículos que transitaram pelo pedágio foi %i\n", cont); // vai informar o número total de veículos que passaram
	printf ("\n O total arrecadado em um dia de operacao no pedagio foi %.2f\n\n", Lucro); // ai informar o valor total arrecadado
	
	if (cont1>=cont2 && cont1>=cont3); //
	{
		printf ("\nO automovel foi o veiculo que mais passou\n");
	}
	if (cont2>=cont1 && cont>=3);
	{
		printf ("\nA moto foi o veículo que mais passou\n");
	}
	if (cont3>=cont1 && cont3>=cont2)
	{
		printf ("\nA caminhao foi o veiculo que mais passou\n");
	}
	
}
	

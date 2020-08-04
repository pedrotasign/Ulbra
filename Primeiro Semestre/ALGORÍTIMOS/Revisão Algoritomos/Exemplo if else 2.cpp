#include <stdio.h>
#include <locale.h> // biblioteca para acentuação.


int main( )
{
	setlocale(LC_ALL, "Portuguese");
	int numero;
	
	printf ("digite um número: ");
	scanf ("%i", &numero);
	if (numero>=1000)
		printf("VERDADEIRO");
		
	else (numero <=999)
		
		if (numero>=5000)
			printf ("TRETA");
		else
			printf ("Arrowbad");	
		
		
return 0;
	

}

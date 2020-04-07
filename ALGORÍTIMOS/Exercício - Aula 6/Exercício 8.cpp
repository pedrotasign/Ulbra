#include <stdio.h>;
#include <locale.h>; // biblioteca para acentuação.


/*As maçãs custam R$ 1,30 cada se forem compradas menos de uma dúzia, e
R$ 1,00 se forem compradas pelo menos 12. Escreva um algoritmo que leia o
número de maçãs compradas, calcule e escreva o custo total da compra.*/


int main ()
{
	setlocale(LC_ALL, "Portuguese");
    float custo_total, quant_macas;
    printf ("quantidade de maçãs vendidas: ");
    scanf ("%f", &quant_macas);
    
    if (quant_macas<12)
        custo_total= quant_macas * 1.30;
       
    else
        custo_total= quant_macas * 1.00;
        printf ("Custo das maçãs: %f\n", custo_total);
return 0;
}

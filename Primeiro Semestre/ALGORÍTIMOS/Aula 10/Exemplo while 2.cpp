#include <stdio.h>

int main()
{
    int idade, maioridade=0;
    
    do{
        printf ("digite a idade ");
        scanf ("%i", &idade);
        if (idade>maioridade)
            maioridade=idade;
    }while (idade !=0);
    printf ("Maior idade: %i", maioridade);
    
return 0;
}

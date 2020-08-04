#include <stdio.h>
int main( )
{
int senha;
printf ("Informe a senha:");
scanf ("%d", &senha);
while (senha != 123)
    {
    printf ("Senha Incorreta. Informe novamente:");
    scanf ("%d", &senha);
    }
printf ("Senha correta!!");
return 0;
}

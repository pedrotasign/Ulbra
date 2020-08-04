/*2. (1,0)  Em um brinquedo de um parque de divers�es existe um limite de peso para os participantes. 
O limite de peso admitido � de 80,00kg. Fa�a um algoritmo ou programa na linguagem C, 
que leia o peso do participante e verifique se ele est� acima do limite. Se estiver, 
o sistema deve escrever a mensagem "Peso acima do limite permitido, voc� n�o pode ingressar neste brinquedo!". 
Seu sistema deve ler um n�mero indeterminado de pesos de pessoas at� que o peso zero seja digitado. 
Informar o maior e menor peso de pessoas que tentaram ingressar no brinquedo. */


#include <stdio.h>
#include <iostream>
#include <locale.h> // biblioteca para acentua��o.


int main( )
{
	setlocale(LC_ALL, "Portuguese");
	float Peso, minpeso=0, maxpeso; 
	
	do{ // fun��o para iniciar o loop, neste caso � o peso, enquanto o peso informado for valido
		printf ("Informe o peso: ");
		scanf ("%f", &Peso);
		if (Peso>80){ // limita��o do peso requisitado
			printf ("Peso acima do limite permitido, voc� n�o pode ingressar neste brinquedo!\n ");
		}
		if (minpeso==0){ 
			minpeso=Peso;
		}
		if (Peso<minpeso && Peso!=0){
			minpeso=Peso;
		}
		if (Peso>maxpeso){
			maxpeso=Peso;
		}
	}
	while (Peso!=0); // verifica��o se o peso informado esta dentro do que � requisitado. 0 encerra o loop
	printf ("O maior peso do participante do brinquedo foi: %.2f\n",maxpeso);
	printf ("O menor peso do participante do brinquedo foi: %.2f\n",minpeso);
}
	


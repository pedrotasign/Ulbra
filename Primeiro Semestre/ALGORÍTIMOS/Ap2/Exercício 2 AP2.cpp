/*2. (1,0)  Em um brinquedo de um parque de diversões existe um limite de peso para os participantes. 
O limite de peso admitido é de 80,00kg. Faça um algoritmo ou programa na linguagem C, 
que leia o peso do participante e verifique se ele está acima do limite. Se estiver, 
o sistema deve escrever a mensagem "Peso acima do limite permitido, você não pode ingressar neste brinquedo!". 
Seu sistema deve ler um número indeterminado de pesos de pessoas até que o peso zero seja digitado. 
Informar o maior e menor peso de pessoas que tentaram ingressar no brinquedo. */


#include <stdio.h>
#include <iostream>
#include <locale.h> // biblioteca para acentuação.


int main( )
{
	setlocale(LC_ALL, "Portuguese");
	float Peso, minpeso=0, maxpeso; 
	
	do{ // função para iniciar o loop, neste caso é o peso, enquanto o peso informado for valido
		printf ("Informe o peso: ");
		scanf ("%f", &Peso);
		if (Peso>80){ // limitação do peso requisitado
			printf ("Peso acima do limite permitido, você não pode ingressar neste brinquedo!\n ");
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
	while (Peso!=0); // verificação se o peso informado esta dentro do que é requisitado. 0 encerra o loop
	printf ("O maior peso do participante do brinquedo foi: %.2f\n",maxpeso);
	printf ("O menor peso do participante do brinquedo foi: %.2f\n",minpeso);
}
	


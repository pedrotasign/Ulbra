/* 3. (Uma livraria est� realizando uma promo��o de seus produtos. Foi criada uma tabela de desconto :
Tipo =======> % desconto
1 � ouro =====> 30%
2 � prata ====> 25%
3 � bronze ====> 20%
4 - papel ====> 15%
Fa�a um algoritmo que leia o valor do produto e o seu tipo e exiba na tela o desconto realizado e o total a ser pago por ele.*/

Algoritmo �Promo��o livraria�

var
ValorProd, ValorFin: Real
Desconto: inteiro

In�cio
escreva(�Digite o valor do produto�)
leia(ValorProd) 
escreva(�Digite o tipo de Desconto�)
leia(Desconto)
escolha (Desconto)
	caso 1
		ValorFin<- ValorProd - (ValorProd*0,3)
		escreva(�O total a ser pago �, ValorFin)
	caso 2
		ValorFin<- ValorProd - (ValorProd*0,25)
		escreva(�O total a ser pago �, ValorFin)
	caso 3
		ValorFin<- ValorProd - (ValorProd*0,2)
		escreva(�O total a ser pago �, ValorFin)
	caso 4
		ValorFin<- ValorProd - (ValorProd*0,15)
		escreva(�O total a ser pago �, ValorFin)
		
	outrocaso
		escreva(�Desconto inv�lido�)
fimescolha
fimalgoritmo


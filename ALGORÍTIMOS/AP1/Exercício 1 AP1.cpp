/* 1. Fa�a um algoritmo que leia um m�s em numero (1- janeiro, 2 -fevereiro,...) 
e diga qual a esta��o do ano correspondente (Primavera, Ver�o, Outono, Inverno).

Considere: outono - abril, maio e junho
Inverno - julho, agosto e setembro
Primavera � outubro, novembro e dezembro
Ver�o � janeiro, fevereiro e mar�o 

Algoritmo �Esta��o do ano

var 
mes: inteiro
In�cio
escreva (�Em qual m�s estamos?�)
leia (mes)
se(mes = 1 ou mes = 2 ou mes = 3) ent�o
	escreva(�Estamos no ver�o")
sen�o
	se(mes = 4 ou mes = 5 ou mes = 6) ent�o
		escreva(�Estamos no outono�)
	sen�o
		se(mes = 7 ou mes = 8 ou mes = 9) ent�o
			escreva(�Estamos no inverno�)
		sen�o
			se(mes = 10 ou mes = 11 ou mes = 12) ent�o
				escreva(�Estamos na primavera�)
			sen�o
				se(mes>12 ou <1) ent�o
					escreva(�M�s invalido")
				Fimse
			Fimse
		Fimse		
	Fimse						
Fimse
fimalgoritmo */




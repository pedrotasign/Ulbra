/* 2. Para participar da categoria OURO do 1o. Campeonato Mundial de bolinha de Gude o jogador deve pesar entre 
70 Kg (inclusive) e 80 Kg (inclusive) e medir de 1,75 m (inclusive) a 1,90 m (inclusive). 
Escreva um programa para ler a altura e o peso de um jogador e determine se o jogador est� apto a participar
do campeonato escrevendo uma das seguintes mensagens conforme cada situa��o.

�RECUSADO POR ALTURA� - (se somente a altura do jogador for inv�lida)

�RECUSADO POR PESO� - (se somente o peso do jogador for inv�lido)

�TOTALMENTE RECUSADO�-(se a altura e o peso do jogador for inv�lido)

�ACEITO' - (se a altura e o peso do jogador estiverem dentro da faixa especificada) */


Algoritmo �Campeonato Mundial de Bolinha de Gude�

var 
Peso, Altura, RequisitoPeso, RequisitoAltura;

In�cio
	escreve (� Qual o peso do jogador?�)
	leia (Peso)
	escreve (�Qual a altura do jogador?�)

	se (peso>=70 & peso<=80) ent�o
		RequisitoPeso<- 1
	sen�o
		RequisitoPeso<-2
	
	se(altura>=175 & altura <=185) ent�o
		RequisitoAltura<- 1
	sen�o
		RequisitoAltura<- 2

		Se(RequisitoAltura=1 & RequisitoPeso=1) ent�o
		escreve(�Aceito�)
		Sen�o
			Se (RequisitoPeso=2 & RequisitoAltura=1) ent�o
				escreve (�RECUSADO POR PESO�)
			Sen�o
				Se (RequisitoPeso=1 & RequisitoAltura=2) ent�o
					escreva(�RECUSADO POR ALTURA�)
				Sen�o
					Se (RequisitoPeso=2 & RequisitoAltura=2) Ent�o
						escreva(�TOTALMENTE RECUSADO�)
					Fimse
				Fimse
			Fimse
		Fimse
	Fimse
fimalgoritmo



/* 2. Para participar da categoria OURO do 1o. Campeonato Mundial de bolinha de Gude o jogador deve pesar entre 
70 Kg (inclusive) e 80 Kg (inclusive) e medir de 1,75 m (inclusive) a 1,90 m (inclusive). 
Escreva um programa para ler a altura e o peso de um jogador e determine se o jogador está apto a participar
do campeonato escrevendo uma das seguintes mensagens conforme cada situação.

‘RECUSADO POR ALTURA’ - (se somente a altura do jogador for inválida)

‘RECUSADO POR PESO’ - (se somente o peso do jogador for inválido)

‘TOTALMENTE RECUSADO’-(se a altura e o peso do jogador for inválido)

‘ACEITO' - (se a altura e o peso do jogador estiverem dentro da faixa especificada) */


Algoritmo “Campeonato Mundial de Bolinha de Gude”

var 
Peso, Altura, RequisitoPeso, RequisitoAltura;

Início
	escreve (“ Qual o peso do jogador?”)
	leia (Peso)
	escreve (“Qual a altura do jogador?”)

	se (peso>=70 & peso<=80) então
		RequisitoPeso<- 1
	senão
		RequisitoPeso<-2
	
	se(altura>=175 & altura <=185) então
		RequisitoAltura<- 1
	senão
		RequisitoAltura<- 2

		Se(RequisitoAltura=1 & RequisitoPeso=1) então
		escreve(“Aceito”)
		Senão
			Se (RequisitoPeso=2 & RequisitoAltura=1) então
				escreve (“RECUSADO POR PESO”)
			Senão
				Se (RequisitoPeso=1 & RequisitoAltura=2) então
					escreva(“RECUSADO POR ALTURA”)
				Senão
					Se (RequisitoPeso=2 & RequisitoAltura=2) Então
						escreva(“TOTALMENTE RECUSADO”)
					Fimse
				Fimse
			Fimse
		Fimse
	Fimse
fimalgoritmo



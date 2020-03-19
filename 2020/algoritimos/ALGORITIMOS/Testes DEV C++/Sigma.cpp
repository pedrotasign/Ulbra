/*
  Name: Luís Henrique Ignacio
  Author: Luís Henrique Ignacio
  Date: 24/06/10 17:47
*/


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>

typedef struct NODO {     
    int opcao, totvenda, totcompra;                
    float estoque, preco, precomedio;
    char codigo[10], nome[40], categoria[12];                
    struct NODO *proximo, *anterior; 
}  PRODUTO;                

typedef struct lista{                       
        PRODUTO *primeiro, *ultimo; 
        PRODUTO *maiscaro, *maisbarato;
        int tam;
        } LISTA;

 void insere_produto_inicio (LISTA *L)
{
    PRODUTO *noatual, *novono, *aux;
    float estoque, preco; 
    int opcao;               
    char codigo[10], nome[40], categoria[12];
    printf ("\n Digite o codigo do produto: ");
    gets(codigo);
    fflush(stdin);
    printf ("\n Digite o nome do produto: ");
    gets(nome);
    fflush(stdin);
    printf ("\n Digite a categoria a qual pertence o produto 1- Alimentacao 2- Vestuario 3- Higiene ");
    scanf ("%d",&opcao);
    if ((opcao <1)||(opcao>3))
       do
          {
          printf ("\n Opcao invalida! Digite 1- Alimentacao 2- Vestuario 3- Higiene ");
          scanf ("%d",&opcao);
          fflush(stdin);
          }while ((opcao <1)||(opcao>3));     
    switch (opcao)
          {
          case 1: strcpy (categoria,"alimentacao"); break;   
          case 2: strcpy (categoria,"vestuario"); break;
          case 3: strcpy (categoria,"higiene"); break;
          }
    if (L->primeiro == NULL)
       {
       novono = (PRODUTO *) malloc(sizeof(PRODUTO));
       strcpy(novono->codigo,codigo);
       strcpy(novono->nome,nome);
       strcpy (novono->categoria,categoria);
       novono->estoque = 0;
       novono->preco = 0;
       novono->proximo = NULL;
       novono->anterior = NULL;
       L->primeiro = novono;
       L->ultimo = novono;
       L->tam++;
       }
    else
       {
       noatual = L->primeiro;
       novono = (PRODUTO *) malloc(sizeof(PRODUTO));
       strcpy(novono->codigo,codigo);
       strcpy(novono->nome,nome);
       strcpy (novono->categoria,categoria);
       novono->estoque = 0;
       novono->preco = 0;
       novono->proximo = noatual;
       novono->anterior = NULL;
       noatual->anterior = novono;
       L->primeiro = novono; 
       L->tam++;
       }    
    system("cls");  
}

void insere_produto_final (LISTA *L)
{
    PRODUTO *noatual, *novono, *aux;
    float estoque, preco;
    int opcao;
    char codigo[10], nome[40], categoria[12];
    printf ("\n Digite o codigo do produto: ");
    gets(codigo);
    fflush(stdin);
    printf ("\n Digite o nome do produto: ");
    gets(nome);
    fflush(stdin);
    printf ("\n Digite a categoria a qual pertence o produto 1- Alimentacao 2- Vestuario 3- Higiene ");
    scanf ("%d",&opcao);
    fflush(stdin);
    if ((opcao <1)||(opcao>3))
       do
          {
          printf ("\n Opcao invalida! Digite 1- Alimentacao 2- Vestuario 3- Higiene ");
          scanf ("%d",&opcao);
          fflush(stdin);
          }while ((opcao <1)||(opcao>3));      
    switch (opcao)
       {
       case 1: strcpy (categoria,"alimentacao"); break;   
       case 2: strcpy (categoria,"vestuario"); break;
       case 3: strcpy (categoria,"higiene"); break;
       }
    if (L->primeiro == NULL)
       {
       novono = (PRODUTO *) malloc(sizeof(PRODUTO));
       strcpy(novono->codigo,codigo);
       strcpy(novono->nome,nome);
       strcpy (novono->categoria,categoria);
       novono->estoque = 0;
       novono->preco = 0;
       novono->proximo = NULL;
       novono->anterior = NULL;
       L->primeiro = novono;
       L->ultimo = novono;
       L->tam++;
       }
    else
       {
       noatual = L->primeiro;
       aux = noatual;
       while(noatual->proximo != NULL)
          {
          aux = noatual;
          noatual = noatual->proximo;  
          }
       novono = (PRODUTO *) malloc(sizeof(PRODUTO));
       strcpy(novono->codigo,codigo);
       strcpy(novono->nome,nome);
       strcpy (novono->categoria,categoria);
       novono->estoque = 0;
       novono->preco = 0;
       novono->proximo = NULL;
       novono->anterior = noatual;
       noatual->proximo = novono;
       L->ultimo = novono;
       L->tam++;    
       }
    system("cls");   
}

void exclui_produto_inicio(LISTA *L)
{
    PRODUTO *noatual, *aux;
    int resp;
    noatual = L->primeiro;
    printf ("\n Deseja realmente excluir o cadastro? 1-SIM e 2-NAO ");
    scanf ("%d",&resp);
    if (resp == 1)
       {
       if (noatual == NULL)
          {
          printf ("\n Nenhum elemento cadastrado");
          printf ("\n Pressione qualquer tecla para retornar ao menu principal ");
          getche();
          }
       else
          if (noatual->proximo == NULL)
             {
             L->primeiro = NULL;
             L->ultimo = NULL;
             free (noatual);
             L->tam--;
             printf ("\n Elemento removido!");
             printf ("\n Pressione qualquer tecla para retornar ao menu principal ");
             getche();
             }
          else
             {
             noatual = L->primeiro;
             L->primeiro = noatual->proximo;
             aux = noatual->proximo;
             aux->anterior = NULL;
             free (noatual);
             L->tam--;
             printf ("\n Elemento removido!");
             printf ("\n Pressione qualquer tecla para retornar ao menu principal ");
             getche();
             } 
       }         
    else
       {
       printf ("\n Pressione qualquer tecla para retornar ao menu principal ");
       getche();          
       }
    system("cls");    
}

void listar (LISTA  *L)
{
    PRODUTO *noatual, *aux;
    noatual = L->primeiro;
    aux = L->ultimo;
    printf ("\n\n Numero de cadastros: %d ", L->tam);
    while( noatual != NULL)   
    {
        printf ("\n\n Codigo:  %s\n Nome: %s\n Categoria: %s ", noatual->codigo, noatual->nome, noatual->categoria);
        printf ("\n Quantidade em estoque: %.3f\n Preco: %.2f ", noatual->estoque, noatual->preco);
        noatual = noatual->proximo;   
    }
    printf ("\n\n Pressione qualquer tecla para retornar ao menu principal ");   
    getche();
    system("cls");
}

void lista_categoria(LISTA *L)
{
 PRODUTO *noatual;
 char catdigitada[12];
 noatual = L->primeiro;
 printf ("\n\t\t CONSULTA POR CATEGORIA ");
 printf ("\n Digite a categoria que deseja listar (alimentacao, vestuario e higiene): ");
 fflush(stdin);
 gets (catdigitada);
 fflush(stdin);
 while( noatual != NULL) 
    {
    if (strcmp(noatual->categoria,catdigitada)==0)       
       {
       printf ("\n\n Codigo:  %s\n Nome: %s\n Categoria: %s ", noatual->codigo, noatual->nome, noatual->categoria);
       printf ("\n Quantidade em estoque: %.3f\n Preco: %.2f ", noatual->estoque, noatual->preco);
       }
    noatual = noatual->proximo;       
    }
    printf ("\n\n Pressione qualquer tecla para retornar ao menu principal ");   
    getche();
    system("cls");
}

 void lista_caro_barato(LISTA *L)
{
 PRODUTO *noatual, *aux, *inicial;
 noatual = L->maiscaro;
 aux = L->maisbarato;
 inicial= L->primeiro;
 if (aux == NULL)
    printf ("\n Nenhum produto comprado ");
 else
    {   
    if (inicial->proximo==NULL)
       {
       printf ("\n Unico produto: ");                                                        
       printf ("\n\n Codigo:  %s\n Nome: %s\n Categoria: %s ", inicial->codigo, inicial->nome, inicial->categoria);
       printf ("\n Quantidade em estoque: %.3f\n Preco: %.2f ", inicial->estoque, inicial->preco);
       }
    else      
       {
       printf ("\n Produto mais caro: ");
       printf ("\n\n Codigo:  %s\n Nome: %s\n Categoria: %s ", noatual->codigo, noatual->nome, noatual->categoria);
       printf ("\n Quantidade em estoque: %.3f\n Preco: %.2f ", noatual->estoque, noatual->preco);
       printf ("\n\n Produto mais barato: ");  
       printf ("\n\n Codigo:  %s\n Nome: %s\n Categoria: %s ", aux->codigo, aux->nome, aux->categoria);
       printf ("\n Quantidade em estoque: %.3f\n Preco: %.2f ", aux->estoque, aux->preco);
       }
    }
 printf ("\n\n Pressione qualquer tecla para retornar ao menu principal ");      
 getche();
 system("cls");
}

 void consulta_codigo(LISTA *L)
{
 PRODUTO *noatual;
 char coddigitado[10];
 noatual = L->primeiro;
 printf ("\n\t\t CONSULTA DE PRODUTO ");
 printf ("\n Digite o codigo do produto: ");
 fflush(stdin);
 gets (coddigitado);
 fflush(stdin);
 while( noatual != NULL) 
    {
    if (strcmp(noatual->codigo,coddigitado)==0)       
       {
       printf ("\n\n Codigo:  %s\n Nome: %s\n Categoria: %s ", noatual->codigo, noatual->nome, noatual->categoria);
       printf ("\n Quantidade em estoque: %.3f\n Preco: %.2f ", noatual->estoque, noatual->preco);
       }
    noatual = noatual->proximo;         
    }
    printf ("\n\n Pressione qualquer tecla para retornar ao menu principal ");   
    getche();
    system("cls");
}

 void modulo_compra(LISTA *L)
{
 PRODUTO *noatual, *aux, *maior, *menor;
 int op;
 float precodigitado=0, precobruto=0, precovenda=0, qtdedigitada=0, ipi=0, margvenda=0, icms=0, frete=0, juroestoque=0;
 char coddigitado[10];
 system ("cls");
 printf ("\n\t\t\t\t MODULO DE COMPRA ");
 printf ("\n\t\t\t\tPedido de produtos ");    
 printf ("\n________________________________________________________________________________");
 printf ("\n*******************************************************************************");
 printf ("\n*******************************************************************************");
 printf ("\n    Codigo do produto:  ");
 printf ("\n    Nome do produto:  ");
 printf ("\n    Quantidade comprada: %.2f ",qtdedigitada);
 printf ("\n    Preco de custo: %.2f ",precodigitado);
 printf ("\n    Valor do IPI: %.2f ",ipi);
 printf ("\n    Valor do ICMS: %.2f ",icms);
 printf ("\n    Valor do frete: %.2f ",frete);
 printf ("\n    Valor da margem de venda: %.2f ",margvenda);
 printf ("\n    Valor de juro de estoque: %.2f ",juroestoque);
 printf ("\n*******************************************************************************");
 printf ("\n*******************************************************************************");
 printf ("\n*******************************************************************************");
 printf ("\n*******************************************************************************");
 printf ("\n*******************************************************************************");
 printf ("\n*******************************************************************************");
 printf ("\n Digite o codigo do produto: ");
 gets (coddigitado);
 fflush(stdin);
 noatual = L->primeiro;
 aux= NULL;
 if (noatual==NULL)
    printf ("\n Nenhum produto cadastrado ");
 else
    {   
    while( noatual != NULL) 
       {
       if (strcmp(noatual->codigo,coddigitado)==0)       
          {
          aux = noatual;
          }
       noatual = noatual->proximo;         
       }
   if (aux != NULL)
       {
	   system("cls");
       printf ("\n\t\t\t\t MODULO DE COMPRA ");
       printf ("\n\t\t\t\tPedido de produtos ");    
       printf ("\n________________________________________________________________________________");
       printf ("\n*******************************************************************************");
       printf ("\n*******************************************************************************");
       printf ("\n    Codigo do produto: %s ",coddigitado);
       printf ("\n    Nome do produto: %s ", aux->nome);
       printf ("\n    Quantidade comprada: %.2f ",qtdedigitada);
       printf ("\n    Preco de custo: %.2f ",precodigitado);
       printf ("\n    Valor do IPI: %.2f ",ipi);
       printf ("\n    Valor do ICMS: %.2f ",icms);
       printf ("\n    Valor do frete: %.2f ",frete);
	   printf ("\n    Valor da margem de venda: %.2f ",margvenda);
	   printf ("\n    Valor de juro de estoque: %.2f ",juroestoque);
	   printf ("\n*******************************************************************************");
	   printf ("\n*******************************************************************************");
	   printf ("\n*******************************************************************************");
	   printf ("\n*******************************************************************************");
	   printf ("\n*******************************************************************************");
	   printf ("\n*******************************************************************************");
	   printf ("\n Digite a quantidade comprada: ");
	   scanf ("%f",&qtdedigitada);
	   fflush(stdin);
	   system("cls");
	   printf ("\n\t\t\t\t MODULO DE COMPRA ");
	   printf ("\n\t\t\t\tPedido de produtos ");    
	   printf ("\n________________________________________________________________________________");
	   printf ("\n*******************************************************************************");
	   printf ("\n*******************************************************************************");
	   printf ("\n    Codigo do produto: %s ",coddigitado);
	   printf ("\n    Nome do produto: %s ", aux->nome);
	   printf ("\n    Quantidade comprada: %.2f ",qtdedigitada);
	   printf ("\n    Preco de custo: %.2f ",precodigitado);
	   printf ("\n    Valor do IPI: %.2f ",ipi);
	   printf ("\n    Valor do ICMS: %.2f ",icms);
	   printf ("\n    Valor do frete: %.2f ",frete);
	   printf ("\n    Valor da margem de venda: %.2f ",margvenda);
	   printf ("\n    Valor de juro de estoque: %.2f ",juroestoque);
	   printf ("\n*******************************************************************************");
	   printf ("\n*******************************************************************************");
	   printf ("\n*******************************************************************************");
	   printf ("\n*******************************************************************************");
	   printf ("\n*******************************************************************************");
	   printf ("\n*******************************************************************************");
	   printf ("\n Digite o preco de custo: ");
	   scanf ("%f",&precodigitado);
	   fflush(stdin);
	   system("cls");
	   printf ("\n\t\t\t\t MODULO DE COMPRA ");
	   printf ("\n\t\t\t\tPedido de produtos ");    
	   printf ("\n________________________________________________________________________________");
	   printf ("\n*******************************************************************************");
	   printf ("\n*******************************************************************************");
	   printf ("\n    Codigo do produto: %s ",coddigitado);
	   printf ("\n    Nome do produto: %s ", aux->nome);
	   printf ("\n    Quantidade comprada: %.2f ",qtdedigitada);
	   printf ("\n    Preco de custo: %.2f ",precodigitado);
	   printf ("\n    Valor do IPI: %.2f ",ipi);
	   printf ("\n    Valor do ICMS: %.2f ",icms);
	   printf ("\n    Valor do frete: %.2f ",frete);
	   printf ("\n    Valor da margem de venda: %.2f ",margvenda);
	   printf ("\n    Valor de juro de estoque: %.2f ",juroestoque);
	   printf ("\n*******************************************************************************");
	   printf ("\n*******************************************************************************");
	   printf ("\n*******************************************************************************");
	   printf ("\n*******************************************************************************");
	   printf ("\n*******************************************************************************");
	   printf ("\n*******************************************************************************");
	   printf ("\n TODOS OS VALORES A SEGUIR EM PERCENTUAL");
	   printf ("\n Digite o valor do IPI: ");
	   scanf ("%f",&ipi);
	   fflush(stdin);
	   system("cls");
	   printf ("\n\t\t\t\t MODULO DE COMPRA ");
	   printf ("\n\t\t\t\tPedido de produtos ");    
	   printf ("\n________________________________________________________________________________");
	   printf ("\n*******************************************************************************");
	   printf ("\n*******************************************************************************");
	   printf ("\n    Codigo do produto: %s ",coddigitado);
	   printf ("\n    Nome do produto: %s ", aux->nome);
	   printf ("\n    Quantidade comprada: %.2f ",qtdedigitada);
	   printf ("\n    Preco de custo: %.2f ",precodigitado);
	   printf ("\n    Valor do IPI: %.2f ",ipi);
	   printf ("\n    Valor do ICMS: %.2f ",icms);
	   printf ("\n    Valor do frete: %.2f ",frete);
	   printf ("\n    Valor da margem de venda: %.2f ",margvenda);
	   printf ("\n    Valor de juro de estoque: %.2f ",juroestoque);
	   printf ("\n*******************************************************************************");
	   printf ("\n*******************************************************************************");
	   printf ("\n*******************************************************************************");
	   printf ("\n*******************************************************************************");
	   printf ("\n*******************************************************************************");
	   printf ("\n*******************************************************************************");
	   printf ("\n VALOR A SEGUIR EM PERCENTUAL");
       printf ("\n Digite o valor do ICMS: ");
	   scanf ("%f",&icms);
	   fflush(stdin);
	   system("cls");
	   printf ("\n\t\t\t\t MODULO DE COMPRA ");
	   printf ("\n\t\t\t\tPedido de produtos ");    
	   printf ("\n________________________________________________________________________________");
	   printf ("\n*******************************************************************************");
	   printf ("\n*******************************************************************************");
	   printf ("\n    Codigo do produto: %s ",coddigitado);
	   printf ("\n    Nome do produto: %s ", aux->nome);
	   printf ("\n    Quantidade comprada: %.2f ",qtdedigitada);
	   printf ("\n    Preco de custo: %.2f ",precodigitado);
	   printf ("\n    Valor do IPI: %.2f ",ipi);
	   printf ("\n    Valor do ICMS: %.2f ",icms);
	   printf ("\n    Valor do frete: %.2f ",frete);
	   printf ("\n    Valor da margem de venda: %.2f ",margvenda);
	   printf ("\n    Valor de juro de estoque: %.2f ",juroestoque);
	   printf ("\n*******************************************************************************");
	   printf ("\n*******************************************************************************");
	   printf ("\n*******************************************************************************");
	   printf ("\n*******************************************************************************");
	   printf ("\n*******************************************************************************");
	   printf ("\n*******************************************************************************"); 
	   printf ("\n VALOR A SEGUIR EM PERCENTUAL");	
       printf ("\n Digite o valor do frete: ");
	   scanf ("%f",&frete);
	   fflush(stdin);
	   system("cls");
	   printf ("\n\t\t\t\t MODULO DE COMPRA ");
	   printf ("\n\t\t\t\tPedido de produtos ");    
	   printf ("\n________________________________________________________________________________");
	   printf ("\n*******************************************************************************");
	   printf ("\n*******************************************************************************");
	   printf ("\n    Codigo do produto: %s ",coddigitado);
	   printf ("\n    Nome do produto: %s ", aux->nome);
	   printf ("\n    Quantidade comprada: %.2f ",qtdedigitada);
	   printf ("\n    Preco de custo: %.2f ",precodigitado);
	   printf ("\n    Valor do IPI: %.2f ",ipi);
	   printf ("\n    Valor do ICMS: %.2f ",icms);
	   printf ("\n    Valor do frete: %.2f ",frete);
	   printf ("\n    Valor da margem de venda: %.2f ",margvenda);
	   printf ("\n    Valor de juro de estoque: %.2f ",juroestoque);
	   printf ("\n*******************************************************************************");
	   printf ("\n*******************************************************************************");
	   printf ("\n*******************************************************************************");
	   printf ("\n*******************************************************************************");
	   printf ("\n*******************************************************************************");
	   printf ("\n*******************************************************************************"); 
	   printf ("\n VALOR A SEGUIR EM PERCENTUAL");	
       printf ("\n Digite o valor da margem de venda: ");
	   scanf ("%f",&margvenda);
	   fflush(stdin);
	   system("cls");
	   printf ("\n\t\t\t\t MODULO DE COMPRA ");
	   printf ("\n\t\t\t\tPedido de produtos ");    
	   printf ("\n________________________________________________________________________________");
	   printf ("\n*******************************************************************************");
	   printf ("\n*******************************************************************************");
	   printf ("\n    Codigo do produto: %s ",coddigitado);
	   printf ("\n    Nome do produto: %s ", aux->nome);
	   printf ("\n    Quantidade comprada: %.2f ",qtdedigitada);
	   printf ("\n    Preco de custo: %.2f ",precodigitado);
	   printf ("\n    Valor do IPI: %.2f ",ipi);
	   printf ("\n    Valor do ICMS: %.2f ",icms);
	   printf ("\n    Valor do frete: %.2f ",frete);
	   printf ("\n    Valor da margem de venda: %.2f ",margvenda);
	   printf ("\n    Valor de juro de estoque: %.2f ",juroestoque);
	   printf ("\n*******************************************************************************");
	   printf ("\n*******************************************************************************");
	   printf ("\n*******************************************************************************");
	   printf ("\n*******************************************************************************");
	   printf ("\n*******************************************************************************");
	   printf ("\n*******************************************************************************"); 
	   printf ("\n VALOR A SEGUIR EM PERCENTUAL");	
       printf ("\n Digite o valor do juro de estoque: ");
	   scanf ("%f",&juroestoque);
	   fflush(stdin);
	   precobruto=precodigitado+((precodigitado*icms)/100)+((precodigitado*ipi)/100)+((precodigitado*frete)/100);
	   precovenda=precobruto+((precobruto*margvenda)/100)+((precobruto*juroestoque)/100);
	   printf ("\n Preco de venda: %.2f",precovenda);
	   aux->preco=precovenda;
	   aux->precomedio=(aux->preco+precovenda)/2;
	   aux->estoque=(aux->estoque+qtdedigitada);
	   noatual = L->primeiro;
	   maior = L->maiscaro;
	   menor = L->maisbarato; 
       if ((maior == NULL)&&(noatual->proximo == NULL))
          {
          L->maiscaro = noatual;
          L->maisbarato = noatual;                        
          }
       else
          {
          if ((maior == NULL)&&(noatual->proximo != NULL))
             {
             L->maiscaro=aux;
             L->maisbarato=aux;
             }
          else
             if ((maior != NULL)&&(aux->preco<maior->preco))          
                {
                if (maior->preco<aux->preco)
                   L->maiscaro=aux;
                if (menor->preco>aux->preco)
                   L->maisbarato=aux;
                }
             else
                if ((maior != NULL)&&(aux->preco>maior->preco))
                   {
                   noatual=L->primeiro;
                   while (noatual != NULL)
                      {
                      if (noatual->preco<aux->preco)
                         L->maiscaro=aux;
                      if (noatual->preco>aux->preco)
                         L->maisbarato=aux;    
                      noatual=noatual->proximo;   
                      }
                   }       
          }
       }    
    else       
       printf ("\n Nenhum cadastro encontrado! ");  
    }
    printf ("\n Pressione qualquer tecla para retornar ao menu principal ");
    getche();
    system("cls");
}

 void modulo_venda (LISTA *L)
{
 system("cls");     
 PRODUTO *noatual, *aux;
 char coddigitado[10];
 float quantdigitada;
 int a;
 aux = NULL;
 noatual = L->primeiro;
 printf ("\n\t\t\t\t MODULO DE VENDA ");
 printf ("\n________________________________________________________________________________");
 printf ("\n*******************************************************************************");
 printf ("\n*******************************************************************************");
 printf ("\n*** Codigo do Produto:                                                         ");
 printf ("\n*** Nome do Produto:                                                           ");
 printf ("\n*******************************************************************************");
 printf ("\n*******************************************************************************\n");
 gets (coddigitado);
 if (noatual == NULL)
    printf ("\n Nenhum produto cadastrado");
 else
    {   
    while( noatual != NULL) 
       {
       if (strcmp(noatual->codigo,coddigitado)==0)       
          {
          aux = noatual;
          }
       noatual = noatual->proximo;         
       }
       if (aux == NULL)
          {   
          printf ("\n Nenhum produto encontrado! ");
          }    
       else
          {
          system("cls");    
          printf ("\n\t\t\t\t MODULO DE VENDA ");
          printf ("\n________________________________________________________________________________");
          printf ("\n*******************************************************************************");
          printf ("\n*******************************************************************************");
          printf ("\n*** Codigo do Produto: %s ",aux->codigo);
          printf ("\n*** Nome do Produto: %s ",aux->nome);
          printf ("\n*******************************************************************************");
          printf ("\n*******************************************************************************");     
          printf ("\n Informe a quantidade do produto :");
          scanf ("%f", &quantdigitada);
          fflush(stdin);
          aux->estoque = aux->estoque-quantdigitada;
          }
    }      
  printf ("\n Pressione qualquer tecla para retornar ao menu principal ");
  getche();
  system("cls");
}        

int main()
{
    system("color 1f");
    LISTA  P;
    PRODUTO *noatual;    
    char resp;           
    P.primeiro = NULL;
    P.ultimo = NULL;
    P.maiscaro = NULL;
    P.maisbarato = NULL;
    P.tam=0;   
    printf ("\n\n\t\t SISTEMA DE GESTAO DE MERCADORIAS AUTOMATIZADO ");
    printf ("\n\n\n\n");
    printf ("\n\t ********       ****      ********      **********      ********     ");
    printf ("\n\t**********      ****     **********     **********     **********    ");
    printf ("\n\t***    ***      ****     ***    ***     *** ** ***     ***    ***    ");
    printf ("\n\t***             ****     ***            *** ** ***     ***    ***    ");
    printf ("\n\t**********      ****     ***            *** ** ***     **********    ");
    printf ("\n\t**********      ****     ***  ****      *** ** ***     **********    ");
    printf ("\n\t       ***      ****     ***  *****     *** ** ***     ***    ***    ");
    printf ("\n\t***    ***      ****     ***    ***     *** ** ***     ***    ***    ");
    printf ("\n\t**********      ****     **********     *** ** ***     ***    ***    ");
    printf ("\n\t ********       ****      ********      *** ** ***     ***    ***    ");
    printf ("\n\n\n");
    printf ("\n\t\t      Pressione qualquer tecla para iniciar ");
    printf ("\n________________________________________________________________________________");
    printf ("\t\t Desenvolvedor: Luis Henrique Tassinari Ignacio ");
    printf ("\n\t\t\t Algoritmos e Programacao III ");
    getche();
    system ("cls");
    do {
       printf ("\n\n\t Opcoes: ");
       printf ("\n\t ____________________________________________________ ");
       printf ("\n\t| 1 -> Inserir Novo Produto no Inicio                |\\");
       printf ("\n\t| 2 -> Inserir Novo Produto no Final da Lista        |*\\");
       printf ("\n\t| 3 -> Excluir do Inicio                             |**|");
       printf ("\n\t| 4 -> Listar Todos os Produtos                      |**|");
       printf ("\n\t| 5 -> Listar os Produtos por Categoria              |**|");
       printf ("\n\t| 6 -> Listar o Produto Mais Caro e o Mais Barato    |**|");
       printf ("\n\t| 7 -> Modulo de Compra                              |**|");
       printf ("\n\t| 8 -> Modulo de Venda                               |**|");
       printf ("\n\t| 9 -> Consultar Produto pelo Codigo                 |**|");
       printf ("\n\t| 10 -> para Sair                                    |**|");
       printf ("\n\t ---------------------------------------------------- \\*|");
       printf ("\n\t \\*****************************************************\\|");
       printf ("\n\t  \\*****************************************************|");
       printf ("\n\t : ");
       scanf("%d", &resp);
       fflush(stdin);    
       switch(resp) 
          {
          case 1: insere_produto_inicio(&P); break;
          case 2: insere_produto_final(&P); break;
          case 3: exclui_produto_inicio(&P); break;
          case 4: listar(&P); break;
          case 5: lista_categoria(&P); break;
          case 6: lista_caro_barato(&P); break;
          case 7: modulo_compra(&P); break;
          case 8: modulo_venda(&P); break;
          case 9: consulta_codigo(&P); break;
          case 10: printf ("\n\t\t\t Fim do Programa!"); break;
          default: printf("\n\n Opcao nao valida! ");
          }
        fflush(stdin);   
    } while (resp != 10);


    noatual = P.primeiro;
    while (noatual != NULL)
    {
        P.primeiro = noatual->proximo;
        free(noatual);
        noatual = P.primeiro;
    }
}

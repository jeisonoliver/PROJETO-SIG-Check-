#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "relatorios.h"

typedef struct recebido Recebido;


void telaRealtorio1(void) {
	int Vcheque1;
	int Vcheque2;
	int Vcheque3;
	int Vcheque4;
	int Vcheque5;
	int montante;
	Vcheque1 = 10000;
	Vcheque2 = 50000;
	Vcheque3 = 15000;
	Vcheque4 = 14500;
	Vcheque5 = 9000;
	montante = Vcheque1 + Vcheque2 + Vcheque3 + Vcheque4 + Vcheque5;
    system("clear");
	printf("\n"); 
	printf("/////////////////////////////////////////////////////////////////////////////\n");
	printf("///                                                                       ///\n");
	printf("///             ||||||||||||||||||||||||||||||||||||||||||||              ///\n");
	printf("///             | Sistema de Controle de Cheques Recebidos |              ///\n");
	printf("///             |            SISTEMA SIG-CHECK             |              ///\n");
	printf("///             ||||||||||||||||||||||||||||||||||||||||||||              ///\n");
	printf("///                                                                       ///\n");
	printf("///                Developed by  @jeisonoliver - Jan, 2021                ///\n");
	printf("///                                                                       ///\n");
	printf("/////////////////////////////////////////////////////////////////////////////\n");
	printf("///                                                                       ///\n");
	printf("///            ||||||||||||||||||||||||||||||||||||||||||||               ///\n");
	printf("///            |         PROPOSTA DE RELATORIO 1          |               ///\n");
	printf("///            ||||||||||||||||||||||||||||||||||||||||||||               ///\n");
	printf("///                                                                       ///\n");
	printf("///                 Proposta de Reatorio numero 1:                        ///\n");
	printf("///                                                                       ///\n");
	printf("///              A EMPRESA SIG-INFO DEPOSITOU O MONTANTE DE:              ///\n");
	printf("///                             %d R$                                     ///\n", montante);
	printf("///                                                                       ///\n");
	printf("///                                                                       ///\n");
	printf("///                                                                       ///\n");
	printf("///                                                                       ///\n");
	printf("///                                                                       ///\n");
	printf("/////////////////////////////////////////////////////////////////////////////\n");
	printf("\n");
	printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
	getchar();
}



void telaRealtorio2(void) {
	int Vcheque1;
	int Vcheque2;
	int Vcheque3;
	int Vcheque4;
	int Vcheque5;
	int montante;
	Vcheque1 = 30000;
	Vcheque2 = 20000;
	Vcheque3 = 12000;
	Vcheque4 = 14550;
	Vcheque5 = 9500;
	montante = Vcheque1 + Vcheque2 + Vcheque3 + Vcheque4 + Vcheque5;
    system("clear");
	printf("\n");
	printf("/////////////////////////////////////////////////////////////////////////////\n");
	printf("///                                                                       ///\n");
	printf("///             ||||||||||||||||||||||||||||||||||||||||||||              ///\n");
	printf("///             | Sistema de Controle de Cheques Recebidos |              ///\n");
	printf("///             |            SISTEMA SIG-CHECK             |              ///\n");
	printf("///             ||||||||||||||||||||||||||||||||||||||||||||              ///\n");
	printf("///                                                                       ///\n");
	printf("///                Developed by  @jeisonoliver - Jan, 2021                ///\n");
	printf("///                                                                       ///\n");
	printf("/////////////////////////////////////////////////////////////////////////////\n");
	printf("///                                                                       ///\n");
	printf("///            ||||||||||||||||||||||||||||||||||||||||||||               ///\n");
	printf("///            |         PROPOSTA DE RELATORIO 2          |               ///\n");
	printf("///            ||||||||||||||||||||||||||||||||||||||||||||               ///\n");
	printf("///                                                                       ///\n");
	printf("///                  Proposta de Reatorio numero 2:                       ///\n");
	printf("///                                                                       ///\n");
	printf("///              A EMPRESA SIG-INFO RECEBEU O MONTANTE DE:                ///\n");
	printf("///                             %d R$                                     ///\n",montante);
	printf("///                                                                       ///\n");
	printf("///                                                                       ///\n");
	printf("///                                                                       ///\n");
	printf("///                                                                       ///\n");
	printf("///                                                                       ///\n");
	printf("/////////////////////////////////////////////////////////////////////////////\n");
	printf("\n");
	printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
	getchar();
}


void telaRealtorio3(void) {
	Recebido *listaRec;
	listaRec = NULL;
	gerarRelatorio(&listaRec);
	exibirLista(listaRec);
}


void telaRealtorio4(void) {
    system("clear");
	printf("\n");
	printf("/////////////////////////////////////////////////////////////////////////////\n");
	printf("///                                                                       ///\n");
	printf("///             ||||||||||||||||||||||||||||||||||||||||||||              ///\n");
	printf("///             | Sistema de Controle de Cheques Recebidos |              ///\n");
	printf("///             |            SISTEMA SIG-CHECK             |              ///\n");
	printf("///             ||||||||||||||||||||||||||||||||||||||||||||              ///\n");
	printf("///                                                                       ///\n");
	printf("///                Developed by  @jeisonoliver - Jan, 2021                ///\n");
	printf("///                                                                       ///\n");
	printf("/////////////////////////////////////////////////////////////////////////////\n");
	printf("///                                                                       ///\n");
	printf("///            ||||||||||||||||||||||||||||||||||||||||||||               ///\n");
	printf("///            |         PROPOSTA DE RELATORIO 4          |               ///\n");
	printf("///            ||||||||||||||||||||||||||||||||||||||||||||               ///\n");
	printf("///                                                                       ///\n");
	printf("///                  Proposta de Reatorio numero 4:                       ///\n");
	printf("///                                                                       ///\n");
	printf("///           lista de cheques enviados para uma empresa ou para          ///\n");
	printf("///           um cliente a partir do nome do numero da conta do mesmo(a). ///\n");
	printf("///                                                                       ///\n");
	printf("///                                                                       ///\n");
	printf("///                                                                       ///\n");
	printf("///                                                                       ///\n");
	printf("///                                                                       ///\n");
	printf("/////////////////////////////////////////////////////////////////////////////\n");
	printf("\n");
	printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
	getchar();
}

void apagarLista(Recebido **listaRec)
{
    Recebido *rec;
    
    while (*listaRec != NULL)
    {
   	 rec = *listaRec;
   	 *listaRec = (*listaRec)->prox;
   	 free(rec);
    }
    printf("Lista excluida com sucesso! \n");    
}

void gerarRelatorio(Recebido **listaRec)
{
    FILE *fp;
    Recebido *rec;
    
    apagarLista(&(*listaRec));
    *listaRec = NULL;
    fp = fopen("recebidos.dat","rb");
    if (fp == NULL){
   		printf("Erro na abertura do arquivo... \n");
   		exit(1);
    }
    else{
   	rec = (Recebido *) malloc(sizeof(Recebido));
   		while (fread(rec, sizeof(Recebido), 1, fp)){
        	if ((*listaRec == NULL) || (strcmp(rec->numero, (*listaRec)->numero) < 0)) {
        	rec->prox = *listaRec;
        	*listaRec = rec;
        	} else  {
          	Recebido* ant = *listaRec;
          	Recebido* atu = (*listaRec)->prox;
          		while ((atu != NULL) && (strcmp(atu->numero, rec->numero) < 0)) {
            	ant = atu;
            	atu = atu->prox;
          		}
          	ant->prox = rec;
          	rec->prox = atu;
        	}
        rec = (Recebido *) malloc(sizeof(Recebido));
   	 }
   	 free(rec);
   	 printf("Arquivo recuperado com sucesso! \n");
   	 fclose(fp);
    }    
}

void exibirLista(Recebido *aux)
{
printf("\n\n");
printf("****************************************\n");
printf("*** Relatorio dos Alunos Cadastrados ***\n");
printf("****************************************\n");
printf("| Numero |\t| Nome do banco |\t| Agencia |\t| Conta |\t| valor |\t| Data Recebimento |\t| Data Vencimento|\n");
printf("\n");
	while (aux != NULL)
	{
    	printf("  %s\t\t",aux->numero);
    	printf("%s\t\t",aux->nomeBanco);
    	printf("%s-%s\t\t",aux->agencia, aux->digitoA);
		printf("%s-%s\t\t",aux->numeroConta, aux->digitoC);
		printf("%d,%d\t\t\t",aux->valorReal, aux->valorCentavos);
		printf("%s\t\t",aux->dataR);
		printf("%s\n",aux->dataV);
    	aux = aux->prox;
	}
	printf("\nFim da Lista! \n\n");
	printf("\n");
	printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
	getchar();
}
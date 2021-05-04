#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "relatorios.h"

/////////////////////  RELATORIO DE CHEQUES ENVIADOS A PARTIR DA DATA DE SEU VENCIMENTO ///////////////
typedef struct recebido Recebido;
typedef struct enviado Enviado;
typedef struct clientes Clientes;

void chequesEnviadosPorVencimento (void){
	char* data;
	data = TelaListaChequesEnviadosPorVencimento();
	listaChequesEnviadosPorVencimento(data);
}


char* TelaListaChequesEnviadosPorVencimento(void) {
	char* data;

	data = (char*) malloc(11*sizeof(char));

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
	printf("///            | LISTAGEM DE CHEQUES ENVIADOS POR VENCER  |               ///\n");
	printf("///            ||||||||||||||||||||||||||||||||||||||||||||               ///\n");
	printf("///                                                                       ///\n");
	printf("///                                                                       ///\n");
	printf("///                                                                       ///\n");
	printf("///            Informe a data: (DD/MM/AAAA)                               ///\n");
	scanf("%[0-9 /]", data);
	printf("///                                                                       ///\n");
	printf("///                                                                       ///\n");
	printf("/////////////////////////////////////////////////////////////////////////////\n");
	printf("\n");
	printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
	getchar();
	return data;
}
void listaChequesEnviadosPorVencimento(char* data) {
    FILE* arq;
    Enviado* env;

    env = (Enviado*) malloc(sizeof(Enviado));
    arq = fopen("enviados.dat", "rb");
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
		printf("///            | LISTAGEM DE CHEQUES ENVIADOS POR VENCER  |               ///\n");
		printf("///            ||||||||||||||||||||||||||||||||||||||||||||               ///\n");
		printf("///                                                                       ///\n");
		printf("///                                                                       ///\n");
		printf("///            numero: ||  conta: ||  valor: || nome:                     ///\n");
    		while (fread(env, sizeof(Enviado), 1, arq)) {
        		if (strcmp(env->dataCobrir, data) == 0) {
            	printf("///             %s   ||  %s-%s  ||  %d,%d  ||  %s                     ///\n", env->numero, env->nConta, env->digitoC, env->Real, env->Centavos, env->nomeDoBanco );
        	}
    	}
		printf("/////////////////////////////////////////////////////////////////////////////\n");
		printf("\n");
		printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
		getchar();
    fclose(arq);
    free(env);
}



/////////////////////  RELATORIO DE CHEQUES RECEBIDOS A PARTIR DA DATA DE SEU VENCIMENTO ///////////////



void chequesRecebidosPorVencimento (void){
	char* data;
	data = TelaListaChequesRecebidosPorVencimento();
	listaChequesRecebidosPorVencimento(data);
}


char* TelaListaChequesRecebidosPorVencimento(void) {
	char* data;

	data = (char*) malloc(11*sizeof(char));

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
	printf("///            | LISTAGEM DE CHEQUES RECEBIDOS POR VENCER |               ///\n");
	printf("///            ||||||||||||||||||||||||||||||||||||||||||||               ///\n");
	printf("///                                                                       ///\n");
	printf("///                                                                       ///\n");
	printf("///                                                                       ///\n");
	printf("///            Informe a data: (DD/MM/AAAA)                               ///\n");
	scanf("%[0-9 /]", data);
	printf("///                                                                       ///\n");
	printf("///                                                                       ///\n");
	printf("/////////////////////////////////////////////////////////////////////////////\n");
	printf("\n");
	printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
	getchar();
	return data;
}
void listaChequesRecebidosPorVencimento(char* data) {
    FILE* arq;
    Recebido *rec;

    rec = (Recebido*) malloc(sizeof(Recebido));
    arq = fopen("recebidos.dat", "rb");
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
		printf("///            | LISTAGEM DE CHEQUES RECEBIDOS POR VENCER |               ///\n");
		printf("///            ||||||||||||||||||||||||||||||||||||||||||||               ///\n");
		printf("///                                                                       ///\n");
		printf("///                                                                       ///\n");
		printf("///            numero: ||  conta: ||  valor: || nome:                     ///\n");
    		while (fread(rec, sizeof(Recebido), 1, arq)) {
        		if (strcmp(rec->dataV, data) == 0) {
            	printf("///             %s   ||  %s-%s  ||  %d,%d  ||  %s                     ///\n", rec->numero, rec->numeroConta, rec->digitoC, rec->valorReal, rec->valorCentavos, rec->nomeBanco );
        	}
    	}
		printf("/////////////////////////////////////////////////////////////////////////////\n");
		printf("\n");
		printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
		getchar();
    fclose(arq);
    free(rec);
}

/////////////////////  RELATORIO LISTAGEM DE CLIENTES CADASTRADOS ///////////////


void criarListaDeClientes(void) {
    FILE* arq;
    Clientes *clt;

    clt = (Clientes*) malloc(sizeof(Clientes));
    arq = fopen("clientes.dat", "rb");
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
		printf("///            |    LISTAGEM DE CLIENTES CADASTRADOS      |               ///\n");
		printf("///            ||||||||||||||||||||||||||||||||||||||||||||               ///\n");
		printf("///                                                                       ///\n");
		printf("///                                                                       ///\n");
		printf("///         CPF: ||  nome: ||  e-mail: || nascimento: || contato:         ///\n");
    		while (fread(clt, sizeof(Clientes), 1, arq)) {
            	printf("///         %s  ||  %s  ||  %s  ||  %s  ||  %s                   ///\n", clt->CPF, clt->nome, clt->email, clt->dataNascimento, clt->celular );
    	}
		printf("/////////////////////////////////////////////////////////////////////////////\n");
		printf("\n");
		printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
		getchar();
    fclose(arq);
    free(clt);
}


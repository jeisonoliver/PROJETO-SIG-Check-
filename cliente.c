#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "validacoesUteis.h"
#include "cliente.h"

typedef struct cliente Cliente;


Cliente* telaCadastrarCliente(void) {
	Cliente *clt;
	clt = (Cliente*) malloc(sizeof(Cliente));
    system("clear");
	printf("\n");
	printf("/////////////////////////////////////////////////////////////////////////////\n");
	printf("///                                                                       ///\n");
	printf("///                ||||||||||||||||||||||||||||||||||||||||||||           ///\n");
	printf("///                | Sistema de Controle de Cheques Recebidos |           ///\n");
	printf("///                |            SISTEMA SIG-CHECK             |           ///\n");
	printf("///                ||||||||||||||||||||||||||||||||||||||||||||           ///\n");
	printf("///                                                                       ///\n");
	printf("///                Developed by  @jeisonoliver - Jan, 2021                ///\n");
	printf("///                                                                       ///\n");
	printf("/////////////////////////////////////////////////////////////////////////////\n");
	printf("///                                                                       ///\n");
	printf("///               ||||||||||||||||||||||||||||||||||||||||||||            ///\n");
	printf("///               |           CADASTRAR CLIENTE              |            ///\n");
	printf("///               ||||||||||||||||||||||||||||||||||||||||||||            ///\n");
	printf("///                                                                       ///\n");
	
	printf("///               CPF (APENAS NUMEROS): ");
	scanf("%[^\n]", clt->CPF);
	getchar();

    	while (!valCPF(clt->CPF)) {
    		printf ("///               Ocorreu um erro\n");
    		printf ("///               O CPF Digitado é invalido \n");
    		printf ("///               Insira o CPF novamente:\n");
    		scanf("%[^\n]", clt->CPF);
			getchar();
    	}

    	printf("///               O CPF: %s está correto!\n" , clt->CPF);

	printf("///               Nome: (SEM ACENTOS) ");
	scanf("%[A-Z a-z]", clt->nome);
    getchar();

    	while (!valNome(clt->nome)){
			printf ("///               Ocorreu um erro\n");
			printf ("///               O nome Digitado é invalido \n");
			printf ("///               Insira o seu nome novamente (SEM ACENTOS):\n");
			scanf("%[^\n]", clt->nome);
			getchar();
		}

    	printf("///               O nome %s está correto\n", clt->nome);

	printf("///               E-mail: ");
	scanf("%[A-Z a-z . @]", clt->email);
	getchar();

    	while (!valEmail(clt->email)){
			printf ("///               Ocorreu um erro\n");
    		printf ("///               O email Digitado é invalido \n");
    		printf ("///               Insira seu email novamente:\n");	
			scanf("%[^\n]", clt->email);
			getchar();
		}

    	printf("///               O email: %s está correto!\n" , clt->email);

	printf("///               Data de Nascimento (DD / MM / AAAA): ");
	scanf("%[0-9 /]", clt->dataNascimento);
	getchar();

	printf("///               Celular (APENAS NUMEROS): ");
	scanf("%[0-9]", clt->celular);
	getchar();

    	while (!ntelefone(clt->celular)) {
    		printf("///               O numero informado é inválido!\n");
    		printf("///               Tente novamente...\n");
    		printf("///               Digite seu numero de celular novamente: ");
    		scanf("%[^\n]", clt->celular);
    		getchar();
    	}

    	printf("///               O numero de telefone %s está correto \n", clt->celular);

	clt->status = 1;

	printf("///                                                                       ///\n");
	printf("///                                                                       ///\n");
	printf("/////////////////////////////////////////////////////////////////////////////\n");
	printf("\n");
	printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
	getchar();
	return clt;
}

void cadastrarCliente (void){
Cliente *clt;

clt = telaCadastrarCliente();

gravarDadosCliente(clt);

free(clt);
}

void gravarDadosCliente (Cliente* clt){
FILE* arq;

arq = fopen("clientes.dat", "ab");
	if (arq == NULL) {
		printf("///            NÃO FOI POSSIVEL ABRIR O ARQUIVO");
		printf("///            NÃO É POSSIVEL SEGUIR COM O PROGRAMA");
	exit(1);
	}
fwrite(clt, sizeof(Cliente), 1, arq);
fclose(arq);
}




char* telaPesquisarCliente(void){
	char* CPF;
	CPF = (char*) malloc(12*sizeof(char));
    system("clear");
	printf("\n");
	printf("/////////////////////////////////////////////////////////////////////////////\n");
	printf("///                                                                       ///\n");
	printf("///                ||||||||||||||||||||||||||||||||||||||||||||           ///\n");
	printf("///                | Sistema de Controle de Cheques Recebidos |           ///\n");
	printf("///                |            SISTEMA SIG-CHECK             |           ///\n");
	printf("///                ||||||||||||||||||||||||||||||||||||||||||||           ///\n");
	printf("///                                                                       ///\n");
	printf("///                Developed by  @jeisonoliver - Jan, 2021                ///\n");
	printf("///                                                                       ///\n");
	printf("/////////////////////////////////////////////////////////////////////////////\n");
	printf("///                                                                       ///\n");
	printf("///               ||||||||||||||||||||||||||||||||||||||||||||            ///\n");
	printf("///               |     PESQUISAR DADOS DE UM CLIENTE        |            ///\n");
	printf("///               ||||||||||||||||||||||||||||||||||||||||||||            ///\n");
	printf("///               INFORME O CPF DO CLIENTE A CONSULTAR:                   ///\n");
	printf("///               CPF (APENAS NUMEROS): ");
	scanf("%[0-9]", CPF);
	getchar();

		while (!valCPF(CPF)) {
    		printf ("///               Ocorreu um erro\n");
    		printf ("///               O CPF Digitado é invalido \n");
    		printf ("///               Insira o CPF novamente:\n");
    		scanf("%[^\n]", CPF);
			getchar();
    	}

    printf("///               O CPF: %s está correto!\n" , CPF);
	printf("///                                                                       ///\n");
	printf("///                                                                       ///\n");
	printf("/////////////////////////////////////////////////////////////////////////////\n");
	printf("\n");
	printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
	getchar();
	return CPF;
}

void consultarCliente (void) {
	Cliente* clt;
	char* CPF;

	CPF = telaPesquisarCliente();
	clt = buscarCliente(CPF);
	exibirCliente(clt);
	free (clt);
	free (CPF);
}

Cliente* buscarCliente (char* CPF){
	FILE* arq;
	Cliente* clt;

	clt = (Cliente*) malloc(sizeof(Cliente));
	arq = fopen("clientes.dat", "rb");
		if (arq == NULL) {
    		printf(" ERRO!!!! ");
			exit(1);
		}
		while (fread(clt, sizeof(Cliente), 1, arq)){
    		if ((strcmp(clt->CPF, CPF) == 0) && (clt->status == 1)) {
				fclose(arq);
				return clt;
			}
		}
	fclose(arq);
	return NULL;
}

void exibirCliente (Cliente* clt){
	if (clt == NULL){
		printf("/////////////////////////////////////////////////////////////////////////////\n");
		printf("///             O CLIENTE INFORMADO NÃO EXISTE                            ///\n");
		printf("/////////////////////////////////////////////////////////////////////////////\n");
	}
	else{
		printf("/////////////////////////////////////////////////////////////////////////////\n");
		printf("///                  O CLIENTE ESTÁ CADASTRADO                            ///\n");
		printf("///                  CPF: %s                                              ///\n", clt->CPF);
		printf("///                  Nome : %s                                            ///\n", clt->nome);
		printf("///                  Email: %s                                            ///\n", clt->email);
		printf("///                  Nascimento: %s                                       ///\n", clt->dataNascimento);
		printf("///                  N° celular: %s                                       ///\n", clt->celular);
		printf("\n");
		printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
		getchar();
		printf("/////////////////////////////////////////////////////////////////////////////\n");
	}
}

char* telaAlterarCliente(void) {
	char* CPF;
	CPF = (char*) malloc(12*sizeof(char));
    system("clear");
	printf("\n");
	printf("/////////////////////////////////////////////////////////////////////////////\n");
	printf("///                                                                       ///\n");
	printf("///                ||||||||||||||||||||||||||||||||||||||||||||           ///\n");
	printf("///                | Sistema de Controle de Cheques Recebidos |           ///\n");
	printf("///                |            SISTEMA SIG-CHECK             |           ///\n");
	printf("///                ||||||||||||||||||||||||||||||||||||||||||||           ///\n");
	printf("///                                                                       ///\n");
	printf("///                Developed by  @jeisonoliver - Jan, 2021                ///\n");
	printf("///                                                                       ///\n");
	printf("/////////////////////////////////////////////////////////////////////////////\n");
	printf("///                                                                       ///\n");
	printf("///               ||||||||||||||||||||||||||||||||||||||||||||            ///\n");
	printf("///               |     ALTERAR DADOS DE UM CLIENTE          |            ///\n");
	printf("///               ||||||||||||||||||||||||||||||||||||||||||||            ///\n");
	printf("///               INFORME O CPF DO CLIENTE QUE DESEJA ALTERAR             ///\n");
	printf("///               CPF (APENAS NUMEROS): ");
	scanf("%[0-9]", CPF);
	getchar();

		while (!valCPF(CPF)) {
    		printf ("///               Ocorreu um erro\n");
    		printf ("///               O CPF Digitado é invalido \n");
    		printf ("///               Insira o CPF novamente:\n");
    		scanf("%[^\n]", CPF);
			getchar();
    	}

    printf("///               O CPF: %s está correto!\n" , CPF);
	printf("///                                                                       ///\n");
	printf("/////////////////////////////////////////////////////////////////////////////\n");
	printf("\n");
	printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
	getchar();
	return CPF;
}

void alterarCliente (void) {
	Cliente* clt;
	char* CPF;

	CPF = telaAlterarCliente();
	clt = buscarCliente(CPF);
	if (clt == NULL){
		printf("/////////////////////////////////////////////////////////////////////////////\n");
		printf("///             O CLIENTE INFORMADO NÃO EXISTE                             ///\n");
		printf("/////////////////////////////////////////////////////////////////////////////\n");
	} else {
		clt = telaCadastrarCliente();
		strcpy(clt->CPF, CPF);
		regravarDadosCliente(clt);
		free(clt);
	}
	free(CPF);
}

void regravarDadosCliente (Cliente* clt){
int encontrou;
FILE* arq;
Cliente* cltlido;

cltlido = (Cliente*) malloc(sizeof(Cliente));
arq = fopen("clientes.dat", "r+b");
	if (arq == NULL){
		printf("///   ERRO!!!!!!!!!!  ///");
		exit(1);
	}
encontrou = 0;
	while(fread(cltlido, sizeof(Cliente), 1, arq) && !encontrou){
		if (strcmp(cltlido->CPF, clt->CPF) == 0){
			encontrou = 1;
			fseek(arq, -1*sizeof(Cliente), SEEK_CUR);
			fwrite(clt, sizeof(Cliente), 1, arq);
		}
	}
fclose(arq);
free(cltlido);
}


char* telaExcluirCliente(void) {
	char* CPF;
	CPF = (char*) malloc(12*sizeof(char));
    system("clear");
	printf("\n");
	printf("/////////////////////////////////////////////////////////////////////////////\n");
	printf("///                                                                       ///\n");
	printf("///                ||||||||||||||||||||||||||||||||||||||||||||           ///\n");
	printf("///                | Sistema de Controle de Cheques Recebidos |           ///\n");
	printf("///                |            SISTEMA SIG-CHECK             |           ///\n");
	printf("///                ||||||||||||||||||||||||||||||||||||||||||||           ///\n");
	printf("///                                                                       ///\n");
	printf("///                Developed by  @jeisonoliver - Jan, 2021                ///\n");
	printf("///                                                                       ///\n");
	printf("/////////////////////////////////////////////////////////////////////////////\n");
	printf("///                                                                       ///\n");
	printf("///               ||||||||||||||||||||||||||||||||||||||||||||            ///\n");
	printf("///               |     EXCLUIR DADOS DE UM CLIENTE          |            ///\n");
	printf("///               ||||||||||||||||||||||||||||||||||||||||||||            ///\n");
	printf("///                                                                       ///\n");
	printf("///               INFORME O CPF DO CLIENTE QUE DESEJA EXCLUIR:            ///\n");
	printf("///               CPF (APENAS NUMEROS): ");
	scanf("%[0-9]",CPF);
	getchar();

		while (!valCPF(CPF)) {
    		printf ("///               Ocorreu um erro\n");
    		printf ("///               O CPF Digitado é invalido \n");
    		printf ("///               Insira o CPF novamente:\n");
    		scanf("%[^\n]",CPF);
			getchar();
    	}

    printf("///               O CPF: %s está correto!\n" , CPF);
	printf("///                                                                       ///\n");
	printf("///                                                                       ///\n");
	printf("/////////////////////////////////////////////////////////////////////////////\n");
	printf("\n");
	printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
	getchar();
	return CPF;
}

void excluirCliente (void){
	Cliente* clt;
	char *CPF;

	CPF = telaExcluirCliente();
	clt = (Cliente*) malloc(sizeof(Cliente));
	clt = buscarCliente(CPF);
		if (clt == NULL) {
			printf("///   ERRO!!!!!!!!!!  ///");
			exit(1);	
		}
		else {
			clt->status = 0;
			regravarDadosCliente(clt);
			free (clt);
		}
	free(CPF);
}
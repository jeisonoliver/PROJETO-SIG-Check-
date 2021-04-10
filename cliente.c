#include <stdio.h>
#include <stdlib.h>
#include "validacoesUteis.h"

struct cadastro {
char CPF[11];
char nome[51];
char email[51];
char dataNascimento[12];
char celular[11];
};

char telaCadastrarCliente(void) {
	struct cadastro cliente;
	
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
	scanf("%11[^\n]",cliente.CPF);
	getchar();

    while (!valCPF(cliente.CPF)) {
    printf ("///               Ocorreu um erro\n");
    printf ("///               O CPF Digitado é invalido \n");
    printf ("///               Insira o CPF novamente:\n");
    scanf("%11[^\n]", cliente.CPF);
	getchar();
    }

    printf("///               O CPF: %s está correto!\n" , cliente.CPF);

	printf("///               Nome: (SEM ACENTOS) ");
	scanf("%[A-Z a-z]", cliente.nome);
    getchar();

    while (valNome(cliente.nome)){
	printf ("///               Ocorreu um erro\n");
	printf ("///               O nome Digitado é invalido \n");
	printf ("///               Insira o seu nome novamente (SEM ACENTOS):\n");
	scanf("%[^\n]", cliente.nome);
	getchar();
	}

    printf("///               O nome %s está correto\n", cliente.nome);

	printf("///               E-mail: ");
	scanf("%[a-z 0-9 @.]", cliente.email);
	getchar();

    while (!valEmail(cliente.email)){
	printf ("///               Ocorreu um erro\n");
    printf ("///               O email Digitado é invalido \n");
    printf ("///               Insira seu email novamente:\n");	
	scanf("%[^\n]", cliente.email);
	getchar();
	}

    printf("///               O email: %s está correto!\n" , cliente.email);

	printf("///               Data de Nascimento (DD / MM / AAAA): ");
	scanf("%[0-9 /]", cliente.dataNascimento);
	getchar();

	printf("///               Celular (APENAS NUMEROS): ");
	scanf("%[^\n]", cliente.celular);
	getchar();

    while (!ntelefone(cliente.celular)) {
    printf("///               O numero informado é inválido!\n");
    printf("///               Tente novamente...\n");
    printf("///               Digite seu numero de celular novamente: ");
    scanf("%[^\n]", cliente.celular);
    getchar();
    }

    printf("///               O numero de telefone %s está correto \n", cliente.celular);

	printf("///                                                                       ///\n");
	printf("///                                                                       ///\n");
	printf("/////////////////////////////////////////////////////////////////////////////\n");
	printf("\n");
	printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
	getchar();
}

char telaPesquisarCliente(void) {
	char pesquisarCPF[15];
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
	scanf("%[0-9 . _ ]", pesquisarCPF);
	getchar();
	printf("///               Nome:                                                   ///\n");
	printf("///               E-mail:                                                 ///\n");
	printf("///               Data de Nascimento:                                     ///\n");
	printf("///               Celular:                                                ///\n");
	printf("///                                                                       ///\n");
	printf("///                                                                       ///\n");
	printf("/////////////////////////////////////////////////////////////////////////////\n");
	printf("\n");
	printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
	getchar();
}

char telaAlterarCliente(void) {
	char op;
	char alterarCPF[15];
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
	scanf("%[0-9 . _ ]", alterarCPF);
	getchar();
	printf("///               1. CPF                                                  ///\n");
	printf("///               2. Nome:                                                ///\n");
	printf("///               3. E-mail:                                              ///\n");
	printf("///               4. Data de Nascimento:                                  ///\n");
	printf("///               5. Celular:                                             ///\n");
	printf("///               INFORME O NUMERO REFERENTE AO QUE DESEJA ALTERAR ");
	scanf("%c" , &op);
	getchar();
	printf("///                                                                       ///\n");
	printf("/////////////////////////////////////////////////////////////////////////////\n");
	printf("\n");
	printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
	getchar();
}

char telaExcluirCliente(void) {
	char cpfExcluir[15];
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
	scanf("%[0-9 . _ ]",cpfExcluir);
	getchar();
	printf("///               CONFIRME OS DADOS DO CLIENTE A EXCLUIR:                 ///\n");
	printf("///               Nome:                                                   ///\n");
	printf("///               E-mail:                                                 ///\n");
	printf("///               Data de Nascimento:                                     ///\n");
	printf("///               Celular:                                                ///\n");
	printf("///                                                                       ///\n");
	printf("///                                                                       ///\n");
	printf("/////////////////////////////////////////////////////////////////////////////\n");
	printf("\n");
	printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
	getchar();
}
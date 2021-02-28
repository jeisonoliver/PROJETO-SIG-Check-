///////////////////////////////////////////////////////////////////////////////
///             Universidade Federal do Rio Grande do Norte                 ///
///                 Centro de Ensino Superior do Seridó                     ///
///               Departamento de Computação e Tecnologia                   ///
///                  Disciplina DCT1106 -- Programação                      ///
///                  Projeto Sistema de Gestão Escolar                      ///
///                Developed by  @jeisonoliver - sep,2021                   ///
///////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>
#include "Receber.h"
#include "enviar.h"
#include "cliente.h"

/// 
/// Assinaturas das funções
///
char menuPrincipal(void);

void telaSobre(void);

char menuRecebimento(void);
char menuEnvio(void);
char menuCliente(void);

void moduloRecebimento(void);

void moduloEnvio(void);

void moduloCliente(void);

///
/// Programa Principal
///
int main(void) {
    char opcao;
	do {
	    opcao = menuPrincipal();
		switch (opcao) {
			case '1' :  moduloRecebimento();
			                        break;
			case '2' :  moduloEnvio();
			                        break;
			case '3' :	moduloCliente();
			                        break;
			case '4' :  telaSobre();
			                        break;
		}
	} while (opcao != '0');
	return 0;
 }

char menuPrincipal(void) {
	char op;
    system("clear");
	printf("\n");
	printf("/////////////////////////////////////////////////////////////////////////////\n");
	printf("///                                                                       ///\n");
	printf("///             ||||||||||||||||||||||||||||||||||||||||||||              ///\n");
	printf("///             | Sistema de Controle de Cheques Recebidos |              ///\n");
	printf("///             |            SISTEMA SIG-CHECK             |              ///\n");
	printf("///             ||||||||||||||||||||||||||||||||||||||||||||              ///\n");
	printf("///                                                                       ///\n");
	printf("///               Developed by  @jeisonoliver - Jan, 2021                 ///\n");
	printf("///                                                                       ///\n");
	printf("/////////////////////////////////////////////////////////////////////////////\n");
	printf("///                                                                       ///\n");
	printf("///             |||||||||||||||||||||||||||||||||||||||||||||             ///\n");
	printf("///             |               MENU PRINCIPAL              |             ///\n");
	printf("///             |||||||||||||||||||||||||||||||||||||||||||||             ///\n");
	printf("///                                                                       ///\n");
	printf("///             1. Módulo Recebimento de Cheque                           ///\n");
	printf("///             2. Módulo Envio de Cheque                                 ///\n");
	printf("///             3. Módulo clientes                                        ///\n");
	printf("///             4. Informações sobre o sistema                            ///\n");
	printf("///             0. Encerra o programa                                     ///\n");
	printf("///                                                                       ///\n");
	printf("///                                                                       ///\n");
	printf("///             Escolha a opção desejada: ");
	scanf("%c", &op);
	getchar();
	printf("///                                                                       ///\n");
	printf("///                                                                       ///\n");
	printf("/////////////////////////////////////////////////////////////////////////////\n");
	printf("\n");
    printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
	getchar();
	return op;
}

void telaSobre(void) {
    system("clear");
	printf("\n");
	printf("/////////////////////////////////////////////////////////////////////////////\n");
	printf("///                                                                       ///\n");
	printf("///              Universidade Federal do Rio Grande do Norte              ///\n");
	printf("///                  Centro de Ensino Superior do Seridó                  ///\n");
	printf("///                Departamento de Computação e Tecnologia                ///\n");
	printf("///                   Disciplina DCT1106 -- Programação                   ///\n");
	printf("///                   Projeto Sistema de Gestão Escolar                   ///\n");
	printf("///                 Developed by  @flgorgonio - Jan, 2021                 ///\n");
	printf("///                                                                       ///\n");
	printf("/////////////////////////////////////////////////////////////////////////////\n");
	printf("///                                                                       ///\n");
	printf("///          |||||||||||||||||||||||||||||||||||||||||||||||||||          ///\n");
	printf("///          |||||||||||||||||||||||||||||||||||||||||||||||||||          ///\n");
	printf("///          |  Sistema de Controle de Cheques Recebidos       |          ///\n");
	printf("///          |||||||||||||||||||||||||||||||||||||||||||||||||||          ///\n");
	printf("///          |||||||||||||||||||||||||||||||||||||||||||||||||||          ///\n");
	printf("///                                                                       ///\n");
	printf("/// Programa feito para a disciplina DCT1106 - Programação. O presente    ///\n");
	printf("/// programa tem o objetivo de dar continuidade trabalhos referentes à    ///\n");
	printf("/// disciplina de programação, este programa é reerente a semana 3 do     ///\n");
	printf("/// projeto que terá duração de 15 semanas. O projeto de nome SIG-Check   ///\n");
	printf("/// tem como objetivo realizar o cadastro e o acompanhamento de cheques   ///\n");
 	printf("/// pré-datados, auxiliando o controle financeiro da empresa.             ///\n");
	printf("///                                                                       ///\n");
	printf("/////////////////////////////////////////////////////////////////////////////\n");
	printf("\n");
	printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
	getchar();
}

char menuRecebimento(void) {
	char op;
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
	printf("///            |||||||||||||||||||||||||||||||||||||||||||||              ///\n");
	printf("///            |           MENU RECEBER CHEQUE             |              ///\n");
	printf("///            |||||||||||||||||||||||||||||||||||||||||||||              ///\n");
	printf("///                                                                       ///\n");
	printf("///           1. Cadastrar um novo cheque recebido.                       ///\n");
	printf("///           2. Pesquisar os dados de um cheque recebido.                ///\n");
	printf("///           3. Atualizar o cadastro de um cheque.                       ///\n");
	printf("///           4. Excluir um cheque do sistema.                            ///\n");
	printf("///           0. Voltar ao menu anterior                                  ///\n");
	printf("///                                                                       ///\n");
	printf("///           Escolha a opção desejada: ");
	scanf("%c", &op);
	getchar();
	printf("///                                                                       ///\n");
	printf("///                                                                       ///\n");
	printf("/////////////////////////////////////////////////////////////////////////////\n");
	printf("\n");
    printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
	getchar();
	return op;
}


char menuEnvio(void) {
	char op;
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
	printf("///            |||||||||||||||||||||||||||||||||||||||||||||              ///\n");
	printf("///            |           MENU ENVIAR CHEQUE              |              ///\n");
	printf("///            |||||||||||||||||||||||||||||||||||||||||||||              ///\n");
	printf("///                                                                       ///\n");
	printf("///           1. Cadastrar um novo cheque enviado.                        ///\n");
	printf("///           2. Pesquisar os dados de um cheque enviado.                 ///\n");
	printf("///           3. Atualizar o cadastro de um cheque.                       ///\n");
	printf("///           4. Excluir um cheque do sistema.                            ///\n");
	printf("///           0. Voltar ao menu anterior                                  ///\n");
	printf("///                                                                       ///\n");
	printf("///           Escolha a opção desejada: ");
	scanf("%c", &op);
	getchar();
	printf("///                                                                       ///\n");
	printf("///                                                                       ///\n");
	printf("/////////////////////////////////////////////////////////////////////////////\n");
	printf("\n");
    printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
	getchar();
	return op;
}


char menuCliente(void) {
	char op;
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
	printf("///            |||||||||||||||||||||||||||||||||||||||||||||              ///\n");
	printf("///            |             MODULO CLIENTE                |              ///\n");
	printf("///            |||||||||||||||||||||||||||||||||||||||||||||              ///\n");
	printf("///                                                                       ///\n");
	printf("///           1. Cadastrar um novo cliente.                               ///\n");
	printf("///           2. Pesquisar os dados de um cliente.                        ///\n");
	printf("///           3. Atualizar o cadastro de um cliente.                      ///\n");
	printf("///           4. Excluir um cliente do sistema.                           ///\n");
	printf("///           0. Voltar ao menu anterior                                  ///\n");
	printf("///                                                                       ///\n");
	printf("///           Escolha a opção desejada: ");
	scanf("%c", &op);
	getchar();
	printf("///                                                                       ///\n");
	printf("///                                                                       ///\n");
	printf("/////////////////////////////////////////////////////////////////////////////\n");
	printf("\n");
    printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
	getchar();
	return op;
}

void moduloRecebimento(void){
	char opcao;
	do {
		opcao = menuRecebimento();
		switch (opcao) {
			case '1' : telaCadastrarChequeRecebido();
											   break;
			case '2' : telaConsultarChequeRecebido();
											   break;
			case '3' : telaAlterarChequeRecebido();
											   break;
			case '4' :  telaExcluirChequeRecebido();
											   break;
			}
	} while (opcao != '0');
}

void moduloEnvio(void){
	char opcao;
	do {
		opcao = menuEnvio();
		switch (opcao) {
			case '1' : telaCadastrarChequeEnviado();
											   break;
			case '2' : telaConsultarChequeEnviado();
											   break;
			case '3' : telaAlterarChequeEnviado();
											   break;
			case '4' :  telaExcluirChequeEnviado();
											   break;
			}
	} while (opcao != '0');
}

void moduloCliente(void){
	char opcao;
	do {
		opcao = menuCliente();
		switch (opcao) {
			case '1' : telaCadastrarCliente();
											   break;
			case '2' : telaPesquisarCliente();
											   break;
			case '3' : telaAlterarCliente();
											   break;
			case '4' : telaExcluirCliente();
											   break;
			}
	} while (opcao != '0');
}

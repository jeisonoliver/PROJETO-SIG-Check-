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
#include "menuprincipal.h"
#include "relatorios.h"

/// 
/// Assinaturas das funções
///
char menuPrincipal(void);

void telaSobre(void);


void moduloRecebimento(void);

void moduloEnvio(void);

void moduloCliente(void);

void moduloRelatorios(void);

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
			case '5' :  moduloRelatorios();
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
	printf("///             5. Módulo de exibição de Relatórios                       ///\n");
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
	printf("/// disciplina de programação, este programa é referente a semana 6 do    ///\n");
	printf("/// projeto que terá duração de 15 semanas. O projeto de nome SIG-Check   ///\n");
	printf("/// tem como objetivo realizar o cadastro e o acompanhamento de cheques   ///\n");
 	printf("/// pré-datados, auxiliando o controle financeiro da empresa.             ///\n");
	printf("///                                                                       ///\n");
	printf("/////////////////////////////////////////////////////////////////////////////\n");
	printf("\n");
	printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
	getchar();
}

void moduloRecebimento(void){
	char opcao;
	do {
		opcao = menuRecebimento();
		switch (opcao) {
			case '1' : cadastrarChequeRecebido();
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
			case '1' : cadastrarChequeEnviado();
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


void moduloRelatorios(void){
	char opcao;
	do {
		opcao = menuRelatorios();
		switch (opcao) {
			case '1' : telaRealtorio1();
											   break;
			case '2' : telaRealtorio2();
											   break;
			case '3' : telaRealtorio3();
											   break;
			case '4' : telaRealtorio4();
											   break;
			}
	} while (opcao != '0');
}
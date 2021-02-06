///////////////////////////////////////////////////////////////////////////////
///             Universidade Federal do Rio Grande do Norte                 ///
///                 Centro de Ensino Superior do Seridó                     ///
///               Departamento de Computação e Tecnologia                   ///
///                  Disciplina DCT1106 -- Programação                      ///
///                  Projeto Sistema de Gestão Escolar                      ///
///                Developed by  @jeisonoliver - sep, 2021                  ///
///////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>

/// 
/// Assinaturas das funções
///
char menuPrincipal(void);
void telaSobre(void);
char moduloRecebimento(void);
char moduloEnvio(void);
char moduloCliente(void);
void telaCadastrarChequeRecebido(void);
char telaConsultarChequeRecebido(void);
char telaAlterarChequeRecebido(void);
void telaExcluirChequeRecebido(void);
void telaCadastrarChequeEnviado(void);
char telaConsultarChequeEnviado(void);
char telaAlterarChequeEnviado(void);
void telaExcluirChequeEnviado(void);
void telaCadastrarCliente(void);
char telaPesquisarCliente(void);
char telaAlterarCliente(void);
void telaExcluirCliente(void);

///
/// Programa Principal
///
int main(void) {
    char opcao;

	telaSobre();
	opcao = menuPrincipal();
	opcao = moduloRecebimento();
	opcao = moduloEnvio(); 
	opcao = moduloCliente();
	telaCadastrarChequeRecebido();
	opcao = telaConsultarChequeRecebido();
	opcao = telaAlterarChequeRecebido();
	telaExcluirChequeRecebido();
	telaCadastrarChequeEnviado();
	opcao = telaConsultarChequeEnviado();
	opcao = telaAlterarChequeEnviado();
	telaExcluirChequeEnviado();
	telaCadastrarCliente();
	opcao = telaPesquisarCliente();
	opcao = telaAlterarCliente();
	telaExcluirCliente();
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
	printf("///             2. Módulo Desconto de Cheque                              ///\n");
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

char moduloRecebimento(void) {
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


char moduloEnvio(void) {
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


char moduloCliente(void) {
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

void telaCadastrarChequeRecebido(void) {
	char nChequeRecebido[4];
	char nomeBanco[30];
	char agencia[10];
	char numeroConta[10];
	char valor[15];
	char data[10];
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
	printf("///            |       CADASTRAR CHEQUE RECEBIDO          |               ///\n");
	printf("///            ||||||||||||||||||||||||||||||||||||||||||||               ///\n");
	printf("///                                                                       ///\n");
	printf("///            Numero do cheque (EX:0001): ");
	scanf("%[0-9]", nChequeRecebido);
	getchar();
	printf("///            Nome do Banco : ");
	scanf("%[A-ZÁÉÍÓÚÂÊÔÇÀÃÕ a-záéíóúâêôçàãõ]", nomeBanco);
	getchar();
	printf("///            Agencia (EX: 1234-5) : ");
	scanf("%[0-9 -]", agencia);
	getchar();
	printf("///            Conta (EX: 12345-6): ");
	scanf("%[0-9 -]", numeroConta);
	getchar();
	printf("///            Valor do cheque: R$");
	scanf("%[0-9 ,]", valor);
	getchar();
	printf("///            Data de Deposito (DD/MM/AAAA): ");
	scanf("%[0-9 /]", data);
	getchar();
	printf("///                                                                       ///\n");
	printf("/////////////////////////////////////////////////////////////////////////////\n");
	printf("\n");
	printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
	getchar();
}


char telaConsultarChequeRecebido(void) {
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
	printf("///            ||||||||||||||||||||||||||||||||||||||||||||               ///\n");
	printf("///            |         CONSULTAR CHEQUE RECEIDO         |               ///\n");
	printf("///            ||||||||||||||||||||||||||||||||||||||||||||               ///\n");
	printf("///                                                                       ///\n");
	printf("///            1.Numero do cheque:                                        ///\n");
	printf("///            2.Banco:                                                   ///\n");
	printf("///            3.Agencia:                                                 ///\n");
	printf("///            4.Conta:                                                   ///\n");
	printf("///            5.Valor do cheque:                                         ///\n");
	printf("///            6.Data de Deposito:                                        ///\n");
	printf("///            INFORME O NUMERO REFERENTE AO QUE DESEJA CONSULTAR: ");
	scanf("%c" , &op);
	getchar();
	printf("/////////////////////////////////////////////////////////////////////////////\n");
	printf("\n");
	printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
	getchar();
	return op;
}

char telaAlterarChequeRecebido(void) {
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
	printf("///            ||||||||||||||||||||||||||||||||||||||||||||               ///\n");
	printf("///            |          ALTERAR CHEQUE RECEBIDO         |               ///\n");
	printf("///            ||||||||||||||||||||||||||||||||||||||||||||               ///\n");
	printf("///                                                                       ///\n");
	printf("///            1.Numero do cheque:                                        ///\n");
	printf("///            2.Banco:                                                   ///\n");
	printf("///            3.Agencia:                                                 ///\n");
	printf("///            4.Conta:                                                   ///\n");
	printf("///            5.Valor do cheque:                                         ///\n");
	printf("///            6.Data de Deposito:                                        ///\n");
	printf("///            INFORME O NUMERO REFERENTE AO QUE DESEJA ALTERAR: ");
	scanf("%c" , &op);
	getchar();
	printf("/////////////////////////////////////////////////////////////////////////////\n");
	printf("\n");
	printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
	getchar();
	return op;
}

void telaExcluirChequeRecebido(void) {
	char nChequeExcluir[4];
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
	printf("///            |         EXCLUIR CHEQUE RECEBIDO          |               ///\n");
	printf("///            ||||||||||||||||||||||||||||||||||||||||||||               ///\n");
	printf("///            INFORME O NUMERO DO CHEQUE QUE DESEJA EXCLUIR:             ///\n");
	printf("///            Numero do cheque:(EX: 0001) ");
	scanf("%[0-9]", nChequeExcluir);
	getchar();
	printf("///            CONFIRA OS DADOS DO CHEQUE A EXCLUIR:                      ///\n");
	printf("///            Banco:                                                     ///\n");
	printf("///            Agencia:                                                   ///\n");
	printf("///            Conta:                                                     ///\n");
	printf("///            Valor do cheque:                                           ///\n");
	printf("///            Data de Deposito:                                          ///\n");
	printf("///                                                                       ///\n");
	printf("/////////////////////////////////////////////////////////////////////////////\n");
	printf("\n");
	printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
	getchar();
}

void telaCadastrarChequeEnviado(void) {
	char nChequeEnviado;
	char nomeDoBanco;
	char nAgencia;
	char nConta;
	char valorCheque;
	char dataEnvio;

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
	printf("///            |        CADASTRAR CHEQUE ENVIADO          |               ///\n");
	printf("///            ||||||||||||||||||||||||||||||||||||||||||||               ///\n");
	printf("///                                                                       ///\n");
	printf("///            Numero do cheque (EX: 0001): ");
	scanf("%[0-9]" , nChequeEnviado);
	getchar();
	printf("///            Nome Do Banco: ");
	scanf("%[A-ZÁÉÍÓÚÂÊÔÇÀÃÕ a-záéíóúâêôçàãõ]", nomeDoBanco);
	getchar();
	printf("///            Agencia (EX: 1234-5): ");
	scanf("%[0-9 -]", nAgencia);
	getchar();
	printf("///            Conta (EX: 12345-6): ");
	scanf("%[0-9 -]", nConta);
	getchar();
	printf("///            Valor do cheque: R$");
	scanf("%[0-9 -]", valorCheque);
	getchar();
	printf("///            Data de Deposito (DD/MM/AAAA): ");
	scanf("%[0-9 /]", dataEnvio);
	getchar();
	printf("///                                                                       ///\n");
	printf("/////////////////////////////////////////////////////////////////////////////\n");
	printf("\n");
	printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
	getchar();
}

char telaConsultarChequeEnviado(void) {
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
	printf("///            ||||||||||||||||||||||||||||||||||||||||||||               ///\n");
	printf("///            |         CONSULTAR CHEQUE ENVIADO         |               ///\n");
	printf("///            ||||||||||||||||||||||||||||||||||||||||||||               ///\n");
	printf("///                                                                       ///\n");
	printf("///            1.Numero do cheque:                                        ///\n");
	printf("///            2.Banco:                                                   ///\n");
	printf("///            3.Agencia:                                                 ///\n");
	printf("///            4.Conta:                                                   ///\n");
	printf("///            5.Valor do cheque:                                         ///\n");
	printf("///            6.Data de Deposito:                                        ///\n");
	printf("///            INFORME O NUMERO REFERENTE AO QUE DESEJA CONSULTAR: ");
	scanf("%c" , &op);
	getchar(); 
	printf("/////////////////////////////////////////////////////////////////////////////\n");
	printf("\n");
	printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
	getchar();
	return op;
}

char telaAlterarChequeEnviado(void) {
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
	printf("///            ||||||||||||||||||||||||||||||||||||||||||||               ///\n");
	printf("///            |          ALTERAR CHEQUE ENVIADO          |               ///\n");
	printf("///            ||||||||||||||||||||||||||||||||||||||||||||               ///\n");
	printf("///                                                                       ///\n");
	printf("///            1.Numero do cheque:                                        ///\n");
	printf("///            2.Banco:                                                   ///\n");
	printf("///            3.Agencia:                                                 ///\n");
	printf("///            4.Conta:                                                   ///\n");
	printf("///            5.Valor do cheque:                                         ///\n");
	printf("///            6.Data de Deposito:                                        ///\n");
	printf("///            INFORME O NUMERO REFERENTE AO QUE DESEJA ALTERAR: ");
	scanf("%c" , &op);
	getchar();
	printf("/////////////////////////////////////////////////////////////////////////////\n");
	printf("\n");
	printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
	getchar();
	return op;
}

void telaExcluirChequeEnviado(void) {
	char numeroChequeExcluir;
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
	printf("///            |         EXCLUIR CHEQUE ENVIADO           |               ///\n");
	printf("///            ||||||||||||||||||||||||||||||||||||||||||||               ///\n");
	printf("///            INFORME O NUMERO DO CHEQUE QUE DESEJA EXCLUIR:             ///\n");
	printf("///            Numero do cheque (EX:0001):");
	scanf("%[0-9]", numeroChequeExcluir);
	getchar();
	printf("///            CONFIRA OS DADOS DO CHEQUE A EXCLUIR:                      ///\n");
	printf("///            Banco:                                                     ///\n");
	printf("///            Agencia:                                                   ///\n");
	printf("///            Conta:                                                     ///\n");
	printf("///            Valor do cheque:                                           ///\n");
	printf("///            Data de Deposito:                                          ///\n");
	printf("///                                                                       ///\n");
	printf("/////////////////////////////////////////////////////////////////////////////\n");
	printf("\n");
	printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
	getchar();
}

void telaCadastrarCliente(void) {
	char CPF;
	char nomeCliente;
	char email;
	char dataNascimento;
	char celular;
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
	printf("///               CPF (000.000.000-00): ");
	scanf("%[0-9 - .]", CPF);
	getchar();
	printf("///               Nome: ");
	scanf("%[A-ZÁÉÍÓÚÂÊÔÇÀÃÕ a-záéíóúâêôçàãõ]", nomeCliente);
	getchar();
	printf("///               E-mail: ");
	scanf("%[a-z @.]", email);
	getchar();
	printf("///               Data de Nascimento (DD / MM / AAAA): ");
	scanf("%[0-9 /]", dataNascimento);
	getchar();
	printf("///               Celular: ");
	scanf("%[0-9]", celular);
	getchar();
	printf("///                                                                       ///\n");
	printf("///                                                                       ///\n");
	printf("/////////////////////////////////////////////////////////////////////////////\n");
	printf("\n");
	printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
	getchar();
}

char telaPesquisarCliente(void) {
	char op;
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
	printf("///                                                                       ///\n");
	printf("///                                                                       ///\n");
	printf("///               1. Nome:                                                ///\n");
	printf("///               2. E-mail:                                              ///\n");
	printf("///               3. Data de Nascimento:                                  ///\n");
	printf("///               4. Celular:                                             ///\n");
	printf("///               INFORME O NUMERO REFERENTE AO DADO QUE DESEJA SABER: ");
	scanf("%c" , &op);
	getchar();
	printf("///                                                                       ///\n");
	printf("/////////////////////////////////////////////////////////////////////////////\n");
	printf("\n");
	printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
	getchar();
	return op;
}

char telaAlterarCliente(void) {
	char op;
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
	printf("///                                                                       ///\n");
	printf("///                                                                       ///\n");
	printf("///               1. Nome:                                                ///\n");
	printf("///               2. E-mail:                                              ///\n");
	printf("///               3. Data de Nascimento:                                  ///\n");
	printf("///               4. Celular:                                             ///\n");
	printf("///               INFORME O NUMERO REFERENTE AO QUE DESEJA ALTERAR ");
	scanf("%c" , &op);
	getchar();
	printf("///                                                                       ///\n");
	printf("/////////////////////////////////////////////////////////////////////////////\n");
	printf("\n");
	printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
	getchar();
	return op;
}

void telaExcluirCliente(void) {
	char cpfExcluir;
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
	printf("///               CPF: ");
	scanf("%[0-9 - .]",cpfExcluir);
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

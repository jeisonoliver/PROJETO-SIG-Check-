#include <stdio.h>
#include <stdlib.h>

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
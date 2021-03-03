#include <stdio.h>
#include <stdlib.h>


char telaCadastrarCliente(void) {
	char CPF[30];
	char nomeCliente[30];
	char email[30];
	char dataNascimento[12];
	char celular[12];
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
	printf("///               CPF (000.000.000_00): ");
	scanf("%[0-9 _ . ]", CPF);
	getchar();
	printf("///               Nome: ");
	scanf("%[A-ZÁÉÍÓÚÂÊÔÇÀÃÕ a-záéíóúâêôçàãõ]", nomeCliente);
	getchar();
	printf("///               E-mail: ");
	scanf("%[a-z 0-9 @.]", email);
	getchar();
	printf("///               Data de Nascimento (DD / MM / AAAA): ");
	scanf("%[0-9 /]", dataNascimento);
	getchar();
	printf("///               Celular: ");
	scanf("%[0-9 - ]", celular);
	getchar();
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
	printf("///               CPF: ");
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
	printf("///               CPF: ");
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
	printf("///               CPF: ");
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
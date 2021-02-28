#include <stdio.h>
#include <stdlib.h>


char telaCadastrarChequeEnviado(void) {
	char nChequeEnviado[5];
	char nomeDoBanco[30];
	char nAgencia[10];
	char nConta[10];
	char valorCheque[10];
	char dataEnvio[12];

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
	char numeroChequeConsulta[5];
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
	printf("///            INFORE O NUMERO DO CHEQUE QUE DESEJA FAZER A CONSULTA:     ///\n");
	printf("///            Numero do cheque: ");
	scanf("%[0-9]", numeroChequeConsulta);
	getchar();
	printf("///            OS DADOS DO CHEQUE SÃO:                                    ///\n");
	printf("///            2.Banco:                                                   ///\n");
	printf("///            3.Agencia:                                                 ///\n");
	printf("///            4.Conta:                                                   ///\n");
	printf("///            5.Valor do cheque:                                         ///\n");
	printf("///            6.Data de Deposito:                                        ///\n");
	printf("///                                                                       ///\n"); 
	printf("/////////////////////////////////////////////////////////////////////////////\n");
	printf("\n");
	printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
	getchar();
}

char telaAlterarChequeEnviado(void) {
	char op;
	char numeroChequeAlterar[5];
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
	printf("///            INFORME O NUMERO DO CHEQUE EM QUE DESEJA FAZER ALTERAÇÕES: ///\n");
	printf("///            Numero do cheque: ");
	scanf("%[0-9]", numeroChequeAlterar);
	getchar();
	printf("///            1.Numero do Cheque:                                        ///\n");
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
}

char telaExcluirChequeEnviado(void) {
	char numeroChequeExcluir[5];
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
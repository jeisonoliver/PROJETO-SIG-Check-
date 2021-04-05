#include <stdio.h>
#include <stdlib.h>
#include "validacoesUteis.h"


char telaCadastrarChequeRecebido(void) {
	char numero[5];
	char nomeBanco[30];
	char agencia[5];
	char numeroConta[12];
	int valorReal;
	int valorCentavos;
	char dataR[10];
	char dataV[10];
	char digitoA[1];
	char digitoC[1];
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
	scanf("%[0-9]", numero);
	getchar();

    while (!Vnumero(numero)) {
    printf("///               O numero informado é inválido!\n");
    printf("///               Tente novamente...\n");
    printf("///               Digite o numero do cheque: ");
    scanf("%[^\n]", numero);
    getchar();
    }

    printf("///               numero de cheque lido: %s\n", numero);
	
	printf("///            Nome do Banco : ");
	scanf("%[A-ZÁÉÍÓÚÂÊÔÇÀÃÕ a-záéíóúâêôçàãõ]", nomeBanco);
	getchar();
	printf("///            Agencia (SEM O DIGITO) : ");
	scanf("%[0-9]", agencia);
	getchar();

    while (!Vnumero(agencia)) {
    printf("///               O numero da agencia informado é inválido!\n");
    printf("///               Tente novamente...\n");
    printf("///               Digite o numero da agencia novamente: ");
    scanf("%[^\n]", agencia);
    getchar();
    }

	printf("///            Digito Agencia: ");
	scanf("%[0-9]", digitoA);
	getchar();

	while (!VDigito(digitoA)) {
    printf("///               O digito informado é inválido!\n");
    printf("///               Tente novamente...\n");
    printf("///               Digite o digito da agencia novamente: ");
    scanf("%[^\n]", digitoA);
    getchar();
    }

    printf("O numero da agencia é %s-%s:\n", agencia , digitoA);

	printf("///            Conta (SEM O DIGITO): ");
	scanf("%[0-9]", numeroConta);
	getchar();
	printf("///            Digito Conta: ");
	scanf("%[0-9]", digitoC);
	getchar();
	printf("///            Valor do cheque (apenas o valor em real!!): R$");
	scanf("%d", &valorReal);
	getchar();
	printf("///            Valor do cheque (apenas o valor referente aos centavos!!): R$");
	scanf("%d", &valorCentavos);
	getchar();
	while (!validarValor(valorReal, valorCentavos)){
	printf("///           os valores informados não são validos! \n");
	printf("///           tente novamente! \n"); 
	printf("///           insira o valor em real: R$");
	scanf("%d", &valorReal);
    printf("///           insira o valor em centavos: C");
	scanf("%d", &valorCentavos);
	}
	printf("///           os valores informados são validos! valor do cheque: %d , %d \n",valorReal,valorCentavos);

	printf("///            Data de Recebimento do Cheque (DD/MM/AAAA): ");
	scanf("%[0-9 /]", dataR);
	getchar();
	printf("///            Data de Vencimento do Cheque (DD/MM/AAAA): ");
	scanf("%[0-9 /]", dataV);
	getchar();
	printf("///                                                                       ///\n");
	printf("/////////////////////////////////////////////////////////////////////////////\n");
	printf("\n");
	printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
	getchar();
}


char telaConsultarChequeRecebido(void) {
	char nChequeConsulta[5];
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
	printf("///            INFORME O NUMERO DO CHEQUE QUE DESEJA FAZER A CONSUTA:     ///\n");
	printf("///            Numero do cheque: ");
	scanf("%[0-9]", nChequeConsulta);
	getchar();
	printf("///            OS DADOS DO CHEQUE SÃO:                                    ///\n");
	printf("///            Banco:                                                     ///\n");
	printf("///            Agencia:                                                   ///\n");
	printf("///            Conta:                                                     ///\n");
	printf("///            Valor do cheque:                                           ///\n");
	printf("///            Data de Recebimento:                                       ///\n");
	printf("///            Data de Vencimento:                                        ///\n");
	printf("///                                                                       ///\n");
	printf("/////////////////////////////////////////////////////////////////////////////\n");
	printf("\n");
	printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
	getchar();
}

char telaAlterarChequeRecebido(void) {
	char op;
	char nChequeAlterar[5];
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
	printf("///            INFORME O NUMERO DO CHEQUE EM QUE DESEJA FAZER ALTERAÇÕES: ///\n");
	printf("///            Numero do cheque: ");
	scanf("%[0-9]", nChequeAlterar);
	getchar();
	printf("///            1.Numero do cheque:                                        ///\n");
	printf("///            2.Banco:                                                   ///\n");
	printf("///            3.Agencia:                                                 ///\n");
	printf("///            4.Conta:                                                   ///\n");
	printf("///            5.Valor do cheque:                                         ///\n");
	printf("///            6.Data de Recebimento:                                       ///\n");
	printf("///            7.Data de Vencimento:                                        ///\n");
	printf("///            INFORME O NUMERO REFERENTE AO QUE DESEJA ALTERAR: ");
	scanf("%c" , &op);
	getchar();
	printf("/////////////////////////////////////////////////////////////////////////////\n");
	printf("\n");
	printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
	getchar();
}

char telaExcluirChequeRecebido(void) {
	char nChequeExcluir[5];
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
	printf("///            Data de Recebimento:                                       ///\n");
	printf("///            Data de Vencimento:                                        ///\n");
	printf("///                                                                       ///\n");
	printf("/////////////////////////////////////////////////////////////////////////////\n");
	printf("\n");
	printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
	getchar();
}
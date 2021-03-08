#include <stdio.h>
#include <stdlib.h>
#include "validarValor.h"


char telaCadastrarChequeRecebido(void) {
	char nChequeRecebido[4];
	char nomeBanco[30];
	char agencia[10];
	char numeroConta[10];
	int valorReal;
	int valorCentavos;
	char dataR[10];
	char dataV[10];
	int digitoA[1];
	int digitoC[1];
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
	printf("///            Agencia (SEM O DIGITO) : ");
	scanf("%[0-9]", agencia);
	getchar();
	printf("///            Digito Agencia: ");
	scanf("%[0-9]", digitoA);
	getchar();
	printf("///            Conta (SEM O DIGITO): ");
	scanf("%[0-9]", numeroConta);
	getchar();
	printf("///            Digito Conta: ");
	scanf("%[0-9]", digitoC);
	getchar();
	printf("///            Valor do cheque (apenas o valor em real!!): R$");
	scanf("%[0-9]", valorReal);
	getchar();
	printf("///            Valor do cheque (apenas o valor referente aos centavos!!): R$");
	scanf("%[0-9]", valorCentavos);
	getchar();
    if (!validarValor(valorReal, valorCentavos))
	while (!validarValor(valorReal, valorCentavos)){
	printf("os valores informados não são validos!");
	printf("tente novamente!"); 
	printf("insira o valor em real");
	scanf("%d", valorReal);
    printf("insira o valor em centavos");
	scanf("%d", valorCentavos);
	}
	else {
		printf("os valores informados são validos!");
	}
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
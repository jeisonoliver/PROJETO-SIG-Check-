#include <stdio.h>
#include <stdlib.h>
#include "validacoesUteis.h"
#include "enviar.h"


typedef struct enviar Enviar;

char telaCadastrarChequeEnviado(void) {
    Enviar *env;
    
    env = (Enviar*) malloc(sizeof(Enviar));
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
	scanf("%[0-9]" , env->numero);
	getchar();

    while (!Vnumero(env->numero)) {
    printf("///               O numero informado é inválido!\n");
    printf("///               Tente novamente...\n");
    printf("///               Digite o numero do cheque novamente: ");
    scanf("%[^\n]", env->numero);
    getchar();
    }

    printf("///               O numero %s é valido!\n", env->numero);


	printf("///            Nome Do Banco: ");
	scanf("%[A-ZÁÉÍÓÚÂÊÔÇÀÃÕ a-záéíóúâêôçàãõ]", env->nomeDoBanco);
	getchar();

    while (!valNome(env->nomeDoBanco)) {
	printf("///               O nome informado é inválido!\n");
    printf("///               Tente novamente...\n");
    printf("///               Digite o nome do banco novamente: ");
	scanf("%[A-ZÁÉÍÓÚÂÊÔÇÀÃÕ a-záéíóúâêôçàãõ]", env->nomeDoBanco);
	getchar();
	}

    printf("///               O nome %s é valido!", env->nomeDoBanco);

	printf("///            Agencia (SEM O DIGITO): ");
	scanf("%[0-9 - ]", env->nAgencia);
	getchar();

    while (!Vnumero(env->nAgencia)){
	printf("///               O numero informado é inválido!\n");
    printf("///               Tente novamente...\n");
    printf("///               Digite o numero da agencia novamente: ");	
	scanf("%[0-9 - ]", env->nAgencia);
	getchar();
	}
	printf("///            Digito Agencia: ");
	scanf("%[0-9]", env->digitoA);
	getchar();

    while (!VDigito(env->digitoA)){
	printf("///               O digito informado é inválido!\n");
    printf("///               Tente novamente...\n");
    printf("///               Digite o digito da agencia novamente: ");
	scanf("%[0-9]", env->digitoA);
	getchar();
	}
	
	printf ("///               A agencia %s-%s é valida", env->nAgencia,env->digitoA);

	printf("///            Conta (SEM O DIGITO): ");
	scanf("%[0-9 - ]", env->nConta);
	getchar();

    while(!VnumeroConta(env->nConta)) {
	printf("///               O numero informado é inválido!\n");
    printf("///               Tente novamente...\n");
    printf("///               Digite o numero da conta novamente: ");
	scanf("%[0-9 - ]", env->nConta);
	getchar();	
	}
	printf("///            Digito Conta: ");
	scanf("%[0-9]", env->digitoC);
	getchar();

    while (!VDigito(env->digitoC))
	{
	printf("///               O digito informado é inválido!\n");
    printf("///               Tente novamente...\n");
    printf("///               Digite o digito da agencia novamente: ");
	scanf("%[0-9]", env->digitoC);
	getchar();
	}

	printf("///               A conta %s-%s é valida", env->nConta,env->digitoC);

	printf("///            Valor do cheque (Apenas o valor em real!!): R$");
	scanf("%d", &env->Real);
	getchar();
	printf("///            Valor do cheque (Apenas o valor referente aos centavos!!): R$");
	scanf("%d", &env->Centavos);
	getchar();

    while (!validarValor(env->Real, env->Centavos)){
	printf("///           os valores informados não são validos! \n");
	printf("///           tente novamente! \n"); 
	printf("///           insira o valor em real: R$");
	scanf("%d", &env->Real);
    printf("///           insira o valor em centavos: C");
	scanf("%d", &env->Centavos);
	}
	printf("///           os valores informados são validos! valor do cheque: %d , %d \n",env->Real, env->Centavos);

	printf("///            Data de Envio (DD/MM/AAAA): ");
	scanf("%[0-9 / ]", env->dataEnvio);
	getchar();
	printf("///            Data Para Cobrir o Valor do Cheque(vencimento) (DD/MM/AAAA): ");
	scanf("%[0-9 / ]", env->dataCobrir);
	getchar();
	printf("///                                                                       ///\n");
	printf("/////////////////////////////////////////////////////////////////////////////\n");
	printf("\n");
	free (env);
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
	printf("///            Banco:                                                     ///\n");
	printf("///            Agencia:                                                   ///\n");
	printf("///            Conta:                                                     ///\n");
	printf("///            Valor do cheque:                                           ///\n");
	printf("///            Data de Deposito:                                          ///\n");
	printf("///            Data de Vencimento:                                        ///\n");
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
	printf("///            7.Data de Vencimento:                                      ///\n");
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
	printf("///            Data de Vencimento:                                        ///\n");
	printf("///                                                                       ///\n");
	printf("/////////////////////////////////////////////////////////////////////////////\n");
	printf("\n");
	printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
	getchar();
}
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "validacoesUteis.h"
#include "enviar.h"


typedef struct enviar Enviar;

Enviar* telaCadastrarChequeEnviado(void) {
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

    printf("///               O nome %s é valido!\n", env->nomeDoBanco);

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
	
	printf ("///               A agencia %s-%s é valida\n", env->nAgencia,env->digitoA);

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

	printf("///               A conta %s-%s é valida\n", env->nConta,env->digitoC);

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
	env->status = 1;
	printf("///                                                                       ///\n");
	printf("/////////////////////////////////////////////////////////////////////////////\n");
	printf("\n");
	printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
	getchar();
	return env;
}

void cadastrarChequeEnviado (void){
Enviar *env;

env = telaCadastrarChequeEnviado();

gravarDadosEnviados(env);

free(env);
}



void gravarDadosEnviados (Enviar* env){
FILE* arq;

arq = fopen("enviados.dat", "ab");
if (arq == NULL) {
printf("///            NÃO FOI POSSIVEL ABRIR O ARQUIVO");
printf("///            NÃO É POSSIVEL SEGUIR COM O PROGRAMA");
exit(1);
}
fwrite(env, sizeof(Enviar), 1, arq);
fclose(arq);
}

char* telaConsultarChequeEnviado(void) {
	char* num;
	num = (char*) malloc(5*sizeof(char));
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
	scanf("%[0-9]", num);
	getchar();

	while (!Vnumero(num)) {
    printf("///               O numero informado é inválido!\n");
    printf("///               Tente novamente...\n");
    printf("///               Digite o numero do cheque novamente: ");
    scanf("%[^\n]", num);
    getchar();
    }

    printf("///               O numero %s é valido!\n", num);
	printf("///                                                                       ///\n"); 
	printf("/////////////////////////////////////////////////////////////////////////////\n");
	printf("\n");
	printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
	getchar();
	return num;
}

void consultarChequeEnviado (void) {
	Enviar* env;
	char* num;

	num = telaConsultarChequeEnviado();
	env = buscarChequeEnviado(num);
	exibirChequeEnviado(env);
	free (env);
	free (num);
}

Enviar* buscarChequeEnviado (char* num){
	FILE* arq;
	Enviar* env;

	env = (Enviar*) malloc(sizeof(Enviar));
	arq = fopen("enviados.dat", "rb");
	if (arq == NULL) {
    printf(" ERRO!!!! ");
	exit(1);
	}
	while (fread(env, sizeof(Enviar), 1, arq)){
    if ((strcmp(env->numero, num) == 0) && (env->status == 1)) {
		fclose(arq);
		return env;
	}
	}
	fclose(arq);
	return NULL;
}

void exibirChequeEnviado (Enviar* env){
	if (env == NULL){
	printf("/////////////////////////////////////////////////////////////////////////////\n");
	printf("///             O CHEQUE INFORMADO NÃO EXISTE                             ///\n");
	printf("/////////////////////////////////////////////////////////////////////////////\n");
	}else{
	printf("/////////////////////////////////////////////////////////////////////////////\n");
	printf("///                  O CHEQUE ESTÁ CADASTRADO                             ///\n");
	printf("///                  Numero: %s                                           ///\n", env->numero);
	printf("///                  Nome do Banco: %s                                    ///\n", env->nomeDoBanco);
	printf("///                  Agencia: %s-%s                                       ///\n", env->nAgencia,env->digitoA);
	printf("///                  Conta: %s-%s                                         ///\n", env->nConta,env->digitoC);
	printf("///                  Valor: %d,%d                                         ///\n", env->Real,env->Centavos);
	printf("///                  Data de Envio: %s                                    ///\n", env->dataEnvio);
	printf("///                  Data de Vencimento: %s                               ///\n", env->dataCobrir);
	printf("\n");
	printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
	getchar();
	printf("/////////////////////////////////////////////////////////////////////////////\n");
	}
}

char* telaAlterarChequeEnviado(void){
	char* num;
	num = (char*) malloc(5*sizeof(char));
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
	scanf("%[0-9]", num);
	getchar();

	while (!Vnumero(num)) {
    printf("///               O numero informado é inválido!\n");
    printf("///               Tente novamente...\n");
    printf("///               Digite o numero do cheque novamente: ");
    scanf("%[^\n]", num);
    getchar();
    }

    printf("///               O numero %s é valido!\n", num);
	printf("/////////////////////////////////////////////////////////////////////////////\n");
	printf("\n");
	printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
	getchar();
	return num;
}

void alterarChequeEnviado (void) {
	Enviar* env;
	char* num;

	num = telaAlterarChequeEnviado();
	env = buscarChequeEnviado(num);
	if (env == NULL){
	printf("/////////////////////////////////////////////////////////////////////////////\n");
	printf("///             O CHEQUE INFORMADO NÃO EXISTE                             ///\n");
	printf("/////////////////////////////////////////////////////////////////////////////\n");
	} else {
		env = telaCadastrarChequeEnviado();
		strcpy(env->numero, num);
		regravarDadosEnviados(env);
		free(env);
	}
	free(num);
}

void regravarDadosEnviados (Enviar* env){
int encontrou;
FILE* arq;
Enviar* envlido;

envlido = (Enviar*) malloc(sizeof(Enviar));
arq = fopen("enviados.dat", "r+b");
if (arq == NULL){
	printf("///   ERRO!!!!!!!!!!  ///");
	exit(1);
}
encontrou = 0;
while(fread(envlido, sizeof(Enviar), 1, arq) && !encontrou){
	if (strcmp(envlido->numero, env->numero) == 0){
		encontrou = 1;
		fseek(arq, -1*sizeof(Enviar), SEEK_CUR);
		fwrite(env, sizeof(Enviar), 1, arq);
	}
}
fclose(arq);
free(envlido);
}

char* telaExcluirChequeEnviado(void) {
	char* num;
	num = (char*) malloc(5*sizeof(char));
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
	scanf("%[0-9]", num);
	getchar();

	while (!Vnumero(num)) {
    printf("///               O numero informado é inválido!\n");
    printf("///               Tente novamente...\n");
    printf("///               Digite o numero do cheque novamente: ");
    scanf("%[^\n]", num);
    getchar();
    }

    printf("///               O numero %s é valido!\n", num);
	printf("///                                                                       ///\n");
	printf("/////////////////////////////////////////////////////////////////////////////\n");
	printf("\n");
	printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
	getchar();
	return num;
}

void excluirChequeEnviado (void){
	Enviar* env;
	char *num;

	num = telaExcluirChequeEnviado();
	env = (Enviar*) malloc(sizeof(Enviar));
	env = buscarChequeEnviado(num);
	if (env == NULL) {
	printf("///   ERRO!!!!!!!!!!  ///");
	exit(1);	
	}
	else {
		env->status = 0;
		regravarDadosEnviados(env);
		free (env);
	}
	free(num);
}

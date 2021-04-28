#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "validacoesUteis.h"
#include "Receber.h"

typedef struct receber Receber;


Receber* telaCadastrarChequeRecebido(void) {
    Receber *rec;
    
	rec = (Receber*) malloc(sizeof(Receber));

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
	scanf("%[0-9]", rec->numero);
	getchar();

    	while (!Vnumero(rec->numero)) {
    		printf("///               O numero informado é inválido!\n");
    		printf("///               Tente novamente...\n");
    		printf("///               Digite o numero do cheque: ");
    		scanf("%[^\n]", rec->numero);
    		getchar();
    	}

    	printf("///               O numero %s é valido\n", rec->numero);
	
	printf("///            Nome do Banco (SEM ACENTOS): ");
	scanf("%[A-ZÁÉÍÓÚÂÊÔÇÀÃÕ a-záéíóúâêôçàãõ]", rec->nomeBanco);
	getchar();

    	while (!valNome(rec->nomeBanco)){
			printf("///               O nome informado é inválido!\n");
    		printf("///               Tente novamente...\n");
    		printf("///               Digite o nome do banco novamente: ");
			scanf("%[A-Z a-z]", rec->nomeBanco);
			getchar();
		}
	
		printf("///               O nome %s é valido\n", rec->nomeBanco);

	printf("///            Agencia (SEM O DIGITO) : ");
	scanf("%[0-9]", rec->agencia);
	getchar();

    	while (!Vnumero(rec->agencia)) {
    		printf("///               O numero da agencia informado é inválido!\n");
    		printf("///               Tente novamente...\n");
    		printf("///               Digite o numero da agencia novamente: ");
    		scanf("%[^\n]", rec->agencia);
    		getchar();
    	}

	printf("///            Digito Agencia: ");
	scanf("%[0-9]", rec->digitoA);
	getchar();

		while (!VDigito(rec->digitoA)) {
    		printf("///               O digito informado é inválido!\n");
    		printf("///               Tente novamente...\n");
    		printf("///               Digite o digito da agencia novamente: ");
    		scanf("%[^\n]", rec->digitoA);
    		getchar();
    	}

	    printf("///               A agencia é %s-%s valida:\n", rec->agencia , rec->digitoA);
 
	printf("///            Conta (SEM O DIGITO): ");
	scanf("%[0-9]", rec->numeroConta);
	getchar();

	    while(!VnumeroConta(rec->numeroConta)) {
			printf("///               O numero informado é inválido!\n");
	    	printf("///               Tente novamente...\n");
		    printf("///               Digite o numero da conta novamente: ");
			scanf("%[0-9 - ]", rec->numeroConta);
			getchar();	
		}

	printf("///            Digito Conta: ");
	scanf("%[0-9]", rec->digitoC);
	getchar();

    	while (!VDigito(rec->digitoC)){
			printf("///               O digito informado é inválido!\n");
    		printf("///               Tente novamente...\n");
    		printf("///               Digite o digito da agencia novamente: ");
			scanf("%[0-9]", rec->digitoC);
			getchar();
		}

		printf("///               A conta %s-%s é valida \n", rec->numeroConta,rec->digitoC);

	printf("///            Valor do cheque (apenas o valor em real!!): R$");
	scanf("%d", &rec->valorReal);
	getchar();
	printf("///            Valor do cheque (apenas o valor referente aos centavos!!): R$");
	scanf("%d", &rec->valorCentavos);
	getchar();

		while (!validarValor(rec->valorReal, rec->valorCentavos)){
			printf("///           os valores informados não são validos! \n");
			printf("///           tente novamente! \n"); 
			printf("///           insira o valor em real: R$");
			scanf("%d", &rec->valorReal);
			getchar();
    		printf("///           insira o valor em centavos: C");
			scanf("%d", &rec->valorCentavos);
			getchar();
		}
		printf("///           os valores informados são validos! valor do cheque: %d , %d \n",rec->valorReal,rec->valorCentavos);

	printf("///            Data de Recebimento do Cheque (DD/MM/AAAA): ");
	scanf("%[0-9 /]", rec->dataR);
	getchar();
	printf("///            Data de Vencimento do Cheque (DD/MM/AAAA): ");
	scanf("%[0-9 /]", rec->dataV);
	getchar();
	rec->status = 1;
	printf("///                                                                       ///\n");
	printf("/////////////////////////////////////////////////////////////////////////////\n");
	printf("\n");
	printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
	getchar();
	return rec;
}

void cadastrarChequeRecebido (void) {
Receber *rec;

/// ler os dados vindos da função telaCadastrarChequeRecebido ///
rec = telaCadastrarChequeRecebido();

/// gravar os dados vindos da função telaCadastrarChequeRecebido no arquivo de cheques recebidos ///
gravarDados(rec); 

/// liberar espaço de memoria ///
free (rec);
}



void gravarDados (Receber* rec){
FILE* arq;

arq = fopen("recebidos.dat", "ab");
	if (arq == NULL) {
		printf("///            NÃO FOI POSSIVEL ABRIR O ARQUIVO");
		printf("///            NÃO É POSSIVEL SEGUIR COM O PROGRAMA");
		exit(1);
	}
fwrite(rec, sizeof(Receber), 1, arq);
fclose(arq);
}


char* telaConsultarChequeRecebido(void) {
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
	printf("///            |         CONSULTAR CHEQUE RECEIDO         |               ///\n");
	printf("///            ||||||||||||||||||||||||||||||||||||||||||||               ///\n");
	printf("///            INFORME O NUMERO DO CHEQUE QUE DESEJA FAZER A CONSUTA:     ///\n");
	printf("///            Numero do cheque: ");
	scanf("%[0-9]", num);
	getchar();

		while (!Vnumero(num)) {
    		printf("///               O numero informado é inválido!\n");
    		printf("///               Tente novamente...\n");
    		printf("///               Digite o numero do cheque: ");
    		scanf("%[^\n]", num);
    		getchar();
    	}

    	printf("///               O numero %s é valido\n", num);
	printf("///                                                                       ///\n");
	printf("/////////////////////////////////////////////////////////////////////////////\n");
	printf("\n");
	printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
	getchar();
	return num;
}

void consultarChequeRecebido (void) {
	Receber* rec;
	char* num;

	num = telaConsultarChequeRecebido();
	rec = buscarCheque(num);
	exibirCheque(rec);
	free (rec);
	free (num);
}

Receber* buscarCheque (char* num){
	FILE* arq;
	Receber* rec;

	rec = (Receber*) malloc(sizeof(Receber));
	arq = fopen("recebidos.dat", "rb");
		if (arq == NULL) {
    		printf(" ERRO!!!! ");
			exit(1);
		}
		while (fread(rec, sizeof(Receber), 1, arq)){
    		if ((strcmp(rec->numero, num) == 0) && (rec->status == 1)) {
			fclose(arq);
			return rec;
			}
		}
	fclose(arq);
	return NULL;
}

void exibirCheque (Receber* rec){
	if (rec == NULL){
		printf("/////////////////////////////////////////////////////////////////////////////\n");
		printf("///             O CHEQUE INFORMADO NÃO EXISTE                             ///\n");
		printf("/////////////////////////////////////////////////////////////////////////////\n");
	}
	else{
		printf("/////////////////////////////////////////////////////////////////////////////\n");
		printf("///                  O CHEQUE ESTÁ CADASTRADO                             ///\n");
		printf("///                  Numero: %s                                           ///\n", rec->numero);
		printf("///                  Nome do Banco: %s                                    ///\n", rec->nomeBanco);
		printf("///                  Agencia: %s-%s                                       ///\n", rec->agencia,rec->digitoA);
		printf("///                  Conta: %s-%s                                         ///\n", rec->numeroConta,rec->digitoC);
		printf("///                  Valor: %d,%d                                         ///\n", rec->valorReal,rec->valorCentavos);
		printf("///                  Data de Recebimento: %s                              ///\n", rec->dataR);
		printf("///                  Data de Vencimento: %s                               ///\n", rec->dataV);
		printf("\n");
		printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
		getchar();
		printf("/////////////////////////////////////////////////////////////////////////////\n");
	}


}

char* telaAlterarChequeRecebido(void) {
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
	printf("///            |          ALTERAR CHEQUE RECEBIDO         |               ///\n");
	printf("///            ||||||||||||||||||||||||||||||||||||||||||||               ///\n");
	printf("///            INFORME O NUMERO DO CHEQUE EM QUE DESEJA FAZER ALTERAÇÕES: ///\n");
	printf("///            Numero do cheque: ");
	scanf("%[0-9]", num);
	getchar();

		while (!Vnumero(num)) {
    		printf("///               O numero informado é inválido!\n");
    		printf("///               Tente novamente...\n");
    		printf("///               Digite o numero do cheque: ");
    		scanf("%[^\n]", num);
    		getchar();
    	}

    	printf("///               O numero %s é valido\n", num);
	printf("///                                                                       ///\n");
	printf("/////////////////////////////////////////////////////////////////////////////\n");
	printf("\n");
	printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
	getchar();
	return num;
}

void alterarChequeRecebido (void) {
	Receber* rec;
	char* num;

	num = telaAlterarChequeRecebido();
	rec = buscarCheque(num);
		if (rec == NULL){
			printf("/////////////////////////////////////////////////////////////////////////////\n");
			printf("///             O CHEQUE INFORMADO NÃO EXISTE                             ///\n");
			printf("/////////////////////////////////////////////////////////////////////////////\n");
		}
		else {
			rec = telaCadastrarChequeRecebido();
			strcpy(rec->numero, num);
			regravarDados(rec);
			free(rec);
		}
	free(num);
}

void regravarDados (Receber* rec){
int encontrou;
FILE* arq;
Receber* reclido;

reclido = (Receber*) malloc(sizeof(Receber));
arq = fopen("recebidos.dat", "r+b");
	if (arq == NULL){
		printf("///   ERRO!!!!!!!!!!  ///");
		exit(1);
	}
encontrou = 0;
	while(fread(reclido, sizeof(Receber), 1, arq) && !encontrou){
		if (strcmp(reclido->numero, rec->numero) == 0){
			encontrou = 1;
			fseek(arq, -1*sizeof(Receber), SEEK_CUR);
			fwrite(rec, sizeof(Receber), 1, arq);
		}
	}
fclose(arq);
free(reclido);
}


char* telaExcluirChequeRecebido(void) {
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
	printf("///            |         EXCLUIR CHEQUE RECEBIDO          |               ///\n");
	printf("///            ||||||||||||||||||||||||||||||||||||||||||||               ///\n");
	printf("///            INFORME O NUMERO DO CHEQUE QUE DESEJA EXCLUIR:             ///\n");
	printf("///            Numero do cheque:(EX: 0001) ");
	scanf("%[0-9]", num);
	getchar();

		while (!Vnumero(num)) {
		    printf("///               O numero informado é inválido!\n");
    		printf("///               Tente novamente...\n");
    		printf("///               Digite o numero do cheque: ");
			scanf("%[^\n]", num);
		    getchar();
    	}

    	printf("///               O numero %s é valido\n", num);
	printf("///                                                                       ///\n");
	printf("/////////////////////////////////////////////////////////////////////////////\n");
	printf("\n");
	printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
	getchar();
	return num;
}

void excluirChequeRecebido (void){
	Receber* rec;
	char *num;

	num = telaExcluirChequeRecebido();
	rec = (Receber*) malloc(sizeof(Receber));
	rec = buscarCheque(num);
		if (rec == NULL) {
			printf("///   ERRO!!!!!!!!!!  ///");
			exit(1);	
		}
		else {
			rec->status = 0;
			regravarDados(rec);
			free (rec);
		}
	free(num);
}
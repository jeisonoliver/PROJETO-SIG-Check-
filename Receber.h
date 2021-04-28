struct receber{	
	char numero[5];
	char nomeBanco[51];
	char agencia[10];
	char numeroConta[12];
	int valorReal;
	int valorCentavos;
	char dataR[12];
	char dataV[12];
	char digitoA[2];
	char digitoC[2];
	int status;
};

typedef struct receber Receber;

/// Assinatura das funções para o modulo receber cheque ////

Receber* telaCadastrarChequeRecebido(void);

char* telaConsultarChequeRecebido(void);

char* telaAlterarChequeRecebido(void);

char* telaExcluirChequeRecebido(void);

void gravarDados (Receber*);

void cadastrarChequeRecebido (void);

void consultarChequeRecebido (void);

Receber* buscarCheque (char*);

void exibirCheque (Receber*);

void regravarDados (Receber*);

void alterarChequeRecebido (void);

void excluirChequeRecebido (void);
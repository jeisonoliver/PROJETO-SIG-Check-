typedef struct enviar Enviar;

struct enviar{
	char numero[5];
	char nomeDoBanco[51];
	char nAgencia[10];
	char digitoA[2];
	char nConta[12];
	char digitoC[2];
	int Real;
	int Centavos;
	char dataEnvio[12];
	char dataCobrir[12];
	int status;
};


// Função para envio de cheque //

Enviar* telaCadastrarChequeEnviado(void);

char* telaConsultarChequeEnviado(void);

char* telaAlterarChequeEnviado(void);

char* telaExcluirChequeEnviado(void);

void cadastrarChequeEnviado (void);

void gravarDadosEnviados (Enviar*);

void consultarChequeEnviado (void);

Enviar* buscarChequeEnviado (char*);

void exibirChequeEnviado (Enviar*);

void alterarChequeEnviado (void);

void regravarDadosEnviados (Enviar*);

void excluirChequeEnviado (void);
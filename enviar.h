typedef struct enviar Enviar;

struct enviar{
	char numero[5];
	char nomeDoBanco[30];
	char nAgencia[10];
	char digitoA[1];
	char nConta[10];
	char digitoC[1];
	int Real;
	int Centavos;
	char dataEnvio[12];
	char dataCobrir[12];
};


// Função para envio de cheque //

Enviar* telaCadastrarChequeEnviado(void);

void telaConsultarChequeEnviado(void);

void telaAlterarChequeEnviado(void);

void telaExcluirChequeEnviado(void);

void cadastrarChequeEnviado (void);

void gravarDadosEnviados (Enviar*);
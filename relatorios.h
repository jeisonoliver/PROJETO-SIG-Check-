typedef struct enviado Enviado;

struct enviado{
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

struct recebido{	
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

typedef struct recebido Recebido;


////////////////////// RELATORIO DE CHEQUES ENVIADOS A PARTIR DE SEU VENCIMENTO /////////////////////////////
char* TelaListaChequesEnviadosPorVencimento(void);
void listaChequesEnviadosPorVencimento(char* data);
void chequesEnviadosPorVencimento (void);


////////////////////// RELATORIO DE CHEQUES RECEBIDOS A PARTIR DE SEU VENCIMENTO /////////////////////////////

char* TelaListaChequesRecebidosPorVencimento(void);
void listaChequesRecebidosPorVencimento(char* data);
void chequesRecebidosPorVencimento (void);











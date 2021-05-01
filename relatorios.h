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
    struct recebido *prox;
};

typedef struct recebido Recebido;

void telaRealtorio1(void);

void telaRealtorio2(void);

void telaRealtorio3(void);

void telaRealtorio4(void);

void gerarRelatorio(Recebido **listaRec);

void apagarLista(Recebido **listaRec);

void exibirLista(Recebido *aux);


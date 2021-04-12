struct receber{	
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
};

/// Assinatura das funções para o modulo receber cheque ////

char telaCadastrarChequeRecebido(void);

char telaConsultarChequeRecebido(void);

char telaAlterarChequeRecebido(void);

char telaExcluirChequeRecebido(void);
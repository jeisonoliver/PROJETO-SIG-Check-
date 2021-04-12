/// Função cadastro de cliente //
typedef struct cliente Cliente;


struct cliente {
char CPF[11];
char nome[51];
char email[51];
char dataNascimento[12];
char celular[11];
};


char telaCadastrarCliente(void);

char telaPesquisarCliente(void);

char telaAlterarCliente(void);

char telaExcluirCliente(void);
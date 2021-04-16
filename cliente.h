/// Função cadastro de cliente //
typedef struct cliente Cliente;


struct cliente {
char CPF[11];
char nome[51];
char email[51];
char dataNascimento[12];
char celular[11];
int status;
};

void cadastrarCliente (void);

void gravarDadosCliente (Cliente*);

Cliente* telaCadastrarCliente(void);

char* telaPesquisarCliente(void);

char* telaAlterarCliente(void);

char* telaExcluirCliente(void);

void consultarCliente (void);

Cliente* buscarCliente (char*);

void exibirCliente (Cliente*);

void alterarCliente (void);

void regravarDadosCliente (Cliente*);

void excluirCliente (void);
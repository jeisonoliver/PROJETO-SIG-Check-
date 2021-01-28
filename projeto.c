///////////////////////////////////////////////////////////////////////////////
///             Universidade Federal do Rio Grande do Norte                 ///
///                 Centro de Ensino Superior do Seridó                     ///
///               Departamento de Computação e Tecnologia                   ///
///                  Disciplina DCT1106 -- Programação                      ///
///                  Projeto Sistema de Gestão Escolar                      ///
///                Developed by  @jeisonoliver - Sep, 2021                  ///
////////////////// /////////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>

/// 
/// Assinaturas das funções
///
void menuPrincipal(void);
void telaSobre(void);
void menuAluno(void);
void menuProfessor(void);
void menuTurma(void);
void telaCadastrarAluno(void);


///
/// Programa Principal
///
int main(void) {
    telaSobre();
    menuPrincipal();
    menuAluno();
    menuProfessor();
    menuTurma();
    telaCadastrarAluno();
    return 0;
}


void menuPrincipal(void) {
    system("clear");
	printf("\n");
	printf("/////////////////////////////////////////////////////////////////////////////\n");
	printf("///                                                                       ///\n");
	printf("///             [|||||||||||||||||||||||||||||||||||||||||||]             ///\n");
	printf("///             [ Sistema de Controle de Cheques Recebidos  ]             ///\n");
	printf("///             [            SISTEMA SIG-CHECK              ]             ///\n");
	printf("///             [|||||||||||||||||||||||||||||||||||||||||||]             ///\n");
	printf("///                                                                       ///\n");
	printf("///                Developed by  @jeisonoliver - Jan, 2021                ///\n");
	printf("///                                                                       ///\n");
	printf("/////////////////////////////////////////////////////////////////////////////\n");
	printf("///                                                                       ///\n");
	printf("///             [|||||||||||||||||||||||||||||||||||||||||||]             ///\n");
	printf("///             [               MENU PRINCIPAL              ]             ///\n");
	printf("///             [|||||||||||||||||||||||||||||||||||||||||||]             ///\n");
	printf("///                                                                       ///\n");
	printf("///             1. Módulo Recebimento de Cheque                           ///\n");
	printf("///             2. Módulo Desconto de Cheque                              ///\n");
	printf("///             3. Módulo clientes                                        ///\n");
	printf("///             4. Informações sobre o sistema                            ///\n");
	printf("///             0. Encerra o programa                                     ///\n");
	printf("///                                                                       ///\n");
	printf("///                                                                       ///\n");
	printf("///             Escolha a opção desejada:                                 ///\n");
	printf("///                                                                       ///\n");
	printf("///                                                                       ///\n");
	printf("/////////////////////////////////////////////////////////////////////////////\n");
	printf("\n");
    printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
	getchar();
}
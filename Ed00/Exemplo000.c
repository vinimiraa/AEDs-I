/*
 Exemplo0005 - v0.0. - 10 / 08 / 2023
 Author: Vinicius Miranda de Araujo

 Para compilar em terminal (janela de comandos):
 Linux : gcc -o exemplo0005 exemplo0005.c
 Windows: gcc -o exemplo0005 exemplo0005.c
 Para executar em terminal (janela de comandos):
 Linux : ./exemplo0005
 Windows: exemplo0005
*/

#include <stdio.h>  // para as entradas e saidas
#include <stdlib.h> // para outras funcoes de uso geral

void metodo01()
{
    // identificar
    printf("\n%s\n", "EXEMPLO0101 - PRIMEIRO EXEMPLO EM C");
    // encerrar
    printf("\n%s\n", "APERTAR <Enter> PARA TERMINAR.");
    getchar(); // para esperar
}
void metodo02()
{
    // identificar
    // (dependente do sistema operacional)
    system("cls"); // ( Windows ) para limpar a tela
                   // system ( "clear" ); // ( Linux ) para limpar a tela
    printf("\n%s\n", "EXEMPLO0102 - PRIMEIRO EXEMPLO EM C");
    // encerrar
    printf("\n%s\n", "APERTAR <Enter> PARA TERMINAR.");
    getchar(); // para esperar
}
void clrscr ( ) { system ( "cls" ); } // para Windows
void metodo03()
{
    // identificar
    printf("\n%s\n", "EXEMPLO0103 - PRIMEIRO EXEMPLO EM C");
    // (dependente do sistema operacional)
    clrscr(); // para limpar a tela
    printf("\n%s\n", "MATRICULA: ______ ALUNO : __________________");
    // encerrar
    printf("\n%s\n", "APERTAR <Enter> PARA TERMINAR.");
    getchar(); // para esperar
}
void metodo04()
{
    // identificar
    printf("\n%s\n", "EXEMPLO0104 - PRIMEIRO EXEMPLO EM C");
    printf("\n"); // para mudar de linha (="\n")
    printf("\n%s\n", "MATRICULA: ______ ALUNO : __________________");
    printf("\n"); // para mudar de linha
                  // encerrar
    printf("\n%s\n", "APERTAR <Enter> PARA TERMINAR.");
    getchar(); // para esperar
}
void metodo05()
{
    // identificar
    printf("\n%s\n", "EXEMPLO0105 - PRIMEIRO EXEMPLO EM C");
    printf("\n%s\n", "MATRICULA: ______ ALUNO : __________________");
    printf("\nEXEMPLOS DE VALORES : ");
    printf("\nCARACTERE : %c", 'A'); // letra ou simbolo
    printf("\nINTEIRO : %d", 10);    // valor sem parte fracionaria
    printf("\nREAL : %f", 3.1415);   // valor com parte fracionaria
                                     // encerrar
    printf("\n%s\n", "APERTAR <Enter> PARA TERMINAR.");
    getchar(); // para esperar
}
void metodo06()
{
    double PI = 3.1415;
    // identificar
    printf("\n%s\n", "EXEMPLO0106 - PRIMEIRO EXEMPLO EM C");
    printf("\n%s\n", "MATRICULA: ______ ALUNO : __________________");
    printf("\nEXEMPLOS DE VALORES : ");
    printf("\nCARACTERE : %c", 'A'); // letra ou simbolo
    printf("\nINTEIRO : %d", 10);    // valor sem parte fracionaria
    printf("\nREAL : %f", PI);       // emprego de macro
                                     // encerrar
    printf("\n%s\n", "APERTAR <Enter> PARA TERMINAR.");
    getchar(); // para esperar
}
void metodo07()
{
    // definicao de constante (local)
    const float PI = 3.14; // com nome e tipo (melhor)
                           // identificar
    printf("\n%s\n", "EXEMPLO0107 - PRIMEIRO EXEMPLO EM C");
    printf("\n%s\n", "MATRICULA: ______ ALUNO : __________________");
    printf("\nEXEMPLOS DE VALORES : ");
    printf("\nCARACTERE : %c", 'A'); // letra ou simbolo
    printf("\nINTEIRO : %d", 10);    // valor sem parte fracionaria
    printf("\nREAL : %f", PI);       // constante real
                                     // encerrar
    printf("\n%s\n", "APERTAR <Enter> PARA TERMINAR.");
    getchar(); // para esperar
}
void metodo08()
{
    // definicao de constante
    const float PI = 3.14; // com nome e tipo (melhor)
                           // definicao de variavel real
    float X = 10.01;       // com atribuicao de valor inicial
                           // identificar
    printf("\n%s\n", "EXEMPLO0108 - PRIMEIRO EXEMPLO EM C");
    printf("\n%s\n", "MATRICULA: ______ ALUNO : __________________");
    printf("\nEXEMPLOS DE VALORES : ");
    printf("\nCARACTERE : %c", 'A'); // letra ou simbolo
    printf("\nINTEIRO : %d", 10);    // valor sem parte fracionaria
    printf("\nREAL : %f", PI);       // constante real
    printf("\nREAL : %f", X);        // variavel real
                                     // encerrar
    printf("\n%s\n", "APERTAR <Enter> PARA TERMINAR.");
    getchar(); // para esperar
}
void metodo09()
{
    // definicao de constante
    const float PI = 3.14;
    // definicao de variavel real
    float X = 10.01;
    // definicao de variavel inteira
    int I = 10;
    // identificar
    printf("\n%s\n", "EXEMPLO0109 - PRIMEIRO EXEMPLO EM C");
    printf("\n%s\n", "MATRICULA: ______ ALUNO : __________________");
    printf("\nEXEMPLOS DE VALORES : ");
    printf("\nINTEIRO : %i", I);
    printf("\nREAL : %f", X);
    printf("\nREAL : %f", PI);
    // encerrar
    printf("\n%s\n", "APERTAR <Enter> PARA TERMINAR.");
    getchar(); // para esperar
}
void metodo10()
{
    // definicao de constante
    const float PI = 3.14;
    // definicao de variavel real
    float X = 10.01;
    // definicao de variavel inteira
    int I = 10;
    // definicao de variavel caractere
    char N = '\n'; // mudar de linha
                   // identificar
    printf("\n%s\n", "EXEMPLO0106 - PRIMEIRO EXEMPLO EM C");
    printf("\n%s\n", "MATRICULA: ______ ALUNO : __________________");
    printf("%c%s", N, "EXEMPLOS DE VALORES : ");
    printf("%c%s%i", N, "INTEIRO : ", I);
    printf("%c%s%f", N, "REAL : ", X);
    printf("%c%s%f", N, "REAL : ", PI);
    // encerrar
    printf("\n%s\n", "APERTAR <Enter> PARA TERMINAR.");
    getchar(); // para esperar
}
void metodo11()
{
}
void metodo12()
{
}
void metodo13()
{
}
void metodo14()
{
}
void metodo15()
{
}
void metodo16()
{
}
void metodo17()
{
}
void metodo18()
{
}
void metodo19()
{
}
void metodo20()
{
}
void metodo21()
{
}
void metodo22()
{
}
void metodo23()
{
}
void metodo24()
{
}
void metodo25()
{
}
void metodo26()
{
}
void metodo27()
{
}
void metodo28()
{
}
void metodo29()
{
}
void metodo30()
{
}
void metodo31()
{
}
void metodo32()
{
}
void metodo33()
{
}
void metodo34()
{
}
void metodo35()
{
}
void metodo36()
{
}
void metodo37()
{
}
void metodo38()
{
}
void metodo39()
{
}
void metodo40()
{
}
void metodo41()
{
}
void metodo42()
{
}
void metodo43()
{
}
void metodo44()
{
}
void metodo45()
{
}
void metodo46()
{
}
void metodo47()
{
}
void metodo48()
{
}
void metodo49()
{
}
void metodo50()
{
}

/*
 Funcao principal
*/
int main()
{
    int opcao = 0;

    printf("%s\n", "Exemplo0006 - Programa = v0.0");
    printf("%s\n", "Autor: Vinicius Miranda de Araujo");
    printf("\n");

    do
    {
        // para mostrar opcoes
        printf("\n%s\n", "Opcoes:");
        printf("\n%s", "0 - Terminar");
        printf("\n%s", "1 - Metodo 01");
        printf("\n");
        // ler a opcao do teclado
        printf("\n%s", "Opcao = ");
        scanf("%d", &opcao);
        getchar(); // para limpar a entrada de dados
        // para mostrar a opcao lida
        printf("\n%s%d", "Opcao = ", opcao);
        // escolher acao dependente da opcao
        switch (opcao)
        {
        case 0: // nao fazer nada
            break;
        case 1: // executar metodo 01
            metodo01();
            break;
        default: // comportamento padrao
            printf("\nERRO: Opcao invalida.\n");
            break;
        } // end switch
    } while (opcao != 0);
    // encerrar
    printf("\n\nApertar ENTER para terminar.");
    getchar();  // aguardar por ENTER

    return (0); // voltar ao SO (sem erros)
} // end main ( )

/*
  ---------------------------------------------- documentacao complementar
  ---------------------------------------------- notas / observacoes / comentarios
  ---------------------------------------------- previsao de testes
  a.) 0.5
  b.) -0.5
  c.) 1.23456789
  ---------------------------------------------- historico
  Versao Data Modificacao
  0.1 __/__ esboco
  0.2 __/__ mudanca de versao
  ---------------------------------------------- testes
  Versao Teste
  0.0 00. ( OK ) identificacao de programa
  0.1 01. ( OK ) identificacao de programa
  0.2 02. ( OK ) identificacao de programa
  leitura e exibicao de inteiro
  0.3 03. ( OK ) identificacao de programa
  leitura e exibicao mediante escolha
  0.4 04. ( OK ) identificacao de programa
  leitura e exibicao mediante escolha
  0.5 05. ( OK ) identificacao de programa
  leitura e exibicao mediante escolha com repeticao
*/
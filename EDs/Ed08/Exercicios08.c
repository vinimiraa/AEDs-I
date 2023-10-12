/*
 *  -------------------------- Documentacao
 *  Pontificia Universidade Catolica de Minas Gerais
 *  Curso de Ciencia da Computacao
 *  Algoritmos e Estruturas de Dados I
 *   
 *  Exercicios08 - v0.0. - 12 / 10 / 2023
 *  Author: Vinicius Miranda de Araujo
 *   
 *  Para compilar em terminal (janela de comandos):
 *       Linux : gcc -o Exercicios08 Exercicios08.c
 *       Windows: gcc -o Exercicios08 Exercicios08.c
 *   
 *  Para executar em terminal (janela de comandos):
 *       Linux : ./Exercicios08
 *       Windows: Exercicios08
 *   
 */  

// -------------------------- lista de dependencias

#include "libshow.h"

// -------------------------- tratamento de erro

// -------------------------- definicao de constantes

// -------------------------- definicao de variaveis globais

// -------------------------- definicao de prototipos

void menuOpcoes();
void exercicio0811();
void exercicio0812();
void exercicio0813();
void exercicio0814();
void exercicio0815();
void exercicio0816();
void exercicio0817();
void exercicio0818();
void exercicio0819();
void exercicio0820();
void exercicio08E1();
void exercicio08E2();

// -------------------------- definicao do metodo principal

int main(void)
{
    int opcao = 0;

    do
    {
        clear();

        // mostrar identificacao do autor e programa
        id("Programa: Exercicios08 - v0.0");

        // mostrar menu de opcoes
        menuOpcoes();

        // ler opcao do teclado
        opcao = readint("Opcao = ");

        // executar a opcao escolhida
        switch (opcao)
        {
        case 0:
            printf("\n%s\n", "Programa Encerrado...");
            break;
        case 1:
            exercicio0811();
            break;
        case 2:
            exercicio0812();
            break;
        case 3:
            exercicio0813();
            break;
        case 4:
            exercicio0814();
            break;
        case 5:
            exercicio0815();
            break;
        case 6:
            exercicio0816();
            break;
        case 7:
            exercicio0817();
            break;
        case 8:
            exercicio0818();
            break;
        case 9:
            exercicio0819();
            break;
        case 10:
            exercicio0820();
            break;
        case 11:
            exercicio08E1();
            break;
        case 12:
            exercicio08E2();
            break;
        default:
            printf("\n%s\n", "ERRO: opcao invalida");
            break;
        } // fim switch

    } while (opcao != 0);

    // encerrar
    printf("\n%s\n", "Aperte ENTER para terminar!");
    getchar();

    return (0);
}

// -------------------------- definicao de metodos

/**
 * Menu de opcoes
 */
void menuOpcoes()
{
    printf("\n");
    printf("%s\n\n", "Escolha alguma das opcoes a seguir:");
    printf("%s\n", "  0 - Encerrar programa");
    printf("%s\n", "  1 - Exercicio 0811");
    printf("%s\n", "  2 - Exercicio 0812");
    printf("%s\n", "  3 - Exercicio 0813");
    printf("%s\n", "  4 - Exercicio 0814");
    printf("%s\n", "  5 - Exercicio 0815");
    printf("%s\n", "  6 - Exercicio 0816");
    printf("%s\n", "  7 - Exercicio 0817");
    printf("%s\n", "  8 - Exercicio 0818");
    printf("%s\n", "  9 - Exercicio 0819");
    printf("%s\n", " 10 - Exercicio 0820");
    printf("%s\n", " 11 - Exercicio 08E1");
    printf("%s\n", " 12 - Exercicio 08E2");
    printf("\n");
} // fim menuOpcoes()

void readintArray(int n, int array[])
{
    int x = 0;
    int y = 0;
    string text = allocchar(STR_SIZE);
    
    for (x = 0; x < n; x = x + 1)
    {
        strcpy(text, "");
        do{
            y = readint( concat( concat(text, inttostr(x)), " : " ) );
        }while ( (y <= 0) || (y%2 == 0) );
        array[x] = y;
    }
} // end readIntArray ( )
/**
 * Metodo01.
 */
void exercicio0811()
{
    // identificacao
    id("Exercicio 0811:");

    // programa
    int n = 0;
    n = readint("Digite um tamanho: "); print("\n");

    if( n <= 0 )
    {
        print("%s\n", "ERRO: tamanho invalido");
    }
    else
    {
        int array[n];
        readintArray(n,array);
        printArray(n,array);
    }

    // encerrar
    pause("Aperte ENTER para continuar!");
    clear();
} // fim exercicio0811

/**
 * Metodo02.
 */
void exercicio0812()
{
    // identificacao
    id("Exercicio 0812:");

    // programa

    // encerrar
    pause("Aperte ENTER para continuar!");
    clear();
} // fim exercicio0812

/**
 * Metodo03.
 */
void exercicio0813()
{
    // identificacao
    id("Exercicio 0813:");

    // programa

    // encerrar
    pause("Aperte ENTER para continuar!");
    clear();
} // fim exercicio0813

/**
 * Metodo04.
 */
void exercicio0814()
{
    // identificacao
    id("Exercicio 0814:");

    // programa

    // encerrar
    pause("Aperte ENTER para continuar!");
    clear();
} // fim exercicio0814

/**
 * Metodo05.
 */
void exercicio0815()
{
    // identificacao
    id("Exercicio 0815:");

    // programa

    // encerrar
    pause("Aperte ENTER para continuar!");
    clear();
} // fim exercicio0815

/**
 * Metodo06.
 */
void exercicio0816()
{
    // identificacao
    id("Exercicio 0816:");

    // programa

    // encerrar
    pause("Aperte ENTER para continuar!");
    clear();
} // fim exercicio0816

/**
 * Metodo07.
 */
void exercicio0817()
{
    // identificacao
    id("Exercicio 0817:");

    // programa

    // encerrar
    pause("Aperte ENTER para continuar!");
    clear();
} // fim exercicio0817

/**
 * Metodo08.
 */
void exercicio0818()
{
    // identificacao
    id("Exercicio 0818:");

    // programa

    // encerrar
    pause("Aperte ENTER para continuar!");
    clear();
} // fim exercicio0818

/**
 * Metodo09.
 */
void exercicio0819()
{
    // identificacao
    id("Exercicio 0819:");

    // programa

    // encerrar
    pause("Aperte ENTER para continuar!");
    clear();
} // fim exercicio0819

/**
 * Metodo10.
 */
void exercicio0820()
{
    // identificacao
    id("Exercicio 0820:");

    // programa

    // encerrar
    pause("Aperte ENTER para continuar!");
    clear();
} // fim exercicio0820

/**
 * Metodo11.
 */
void exercicio08E1()
{
    // identificacao
    id("Exercicio 08E1:");

    // programa

    // encerrar
    pause("Aperte ENTER para continuar!");
    clear();
} // fim exercicio08E1

/**
 * Metodo12.
 */
void exercicio08E2()
{
    // identificacao
    id("Exercicio 08E2:");

    // programa

    // encerrar
    pause("Aperte ENTER para continuar!");
    clear();
} // fim exercicio08E2
/*
 * -------------------------- Documentacao
 * Pontificia Universidade Catolica de Minas Gerais
 * Curso de Ciencia da Computacao
 * Algoritmos e Estruturas de Dados I
 *
 * Exercicios05 - v0.0. - 15 / 09 / 2023
 * Author: Vinicius Miranda de Araujo
 *
 * Para compilar em terminal (janela de comandos):
 *      Linux : gcc -o Exercicios05 Exercicios05.c
 *      Windows: gcc -o Exercicios05 Exercicios05.c
 *
 * Para executar em terminal (janela de comandos):
 *      Linux : ./Exercicios05
 *      Windows: Exercicios05
 *
 */

// -------------------------- lista de dependencias

#include "libshow.h"

// -------------------------- tratamento de erro

// -------------------------- definicao de constantes

// -------------------------- definicao de variaveis globais

// -------------------------- definicao de prototipos

void menuOpcoes();
void exercicio0511();
void exercicio0512();
void exercicio0513();
void exercicio0514();
void exercicio0515();
void exercicio0516();
void exercicio0517();
void exercicio0518();
void exercicio0519();
void exercicio0520();
void exercicio05E1();
void exercicio05E2();

// -------------------------- definicao do metodo principal

int main(void)
{
    int opcao = 0;

    do
    {
        clear();

        // mostrar identificacao do autor e programa
        id("Programa: Exercicios05 - v0.0");

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
        case 1:  exercicio0511(); break;
        case 2:  exercicio0512(); break;
        case 3:  exercicio0513(); break;
        case 4:  exercicio0514(); break;
        case 5:  exercicio0515(); break;
        case 6:  exercicio0516(); break;
        case 7:  exercicio0517(); break;
        case 8:  exercicio0518(); break;
        case 9:  exercicio0519(); break;
        case 10: exercicio0520(); break;
        case 11: exercicio05E1(); break;
        case 12: exercicio05E2(); break;
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
    printf("%s\n", "  1 - Exercicio 0511");
    printf("%s\n", "  2 - Exercicio 0512");
    printf("%s\n", "  3 - Exercicio 0513");
    printf("%s\n", "  4 - Exercicio 0514");
    printf("%s\n", "  5 - Exercicio 0515");
    printf("%s\n", "  6 - Exercicio 0516");
    printf("%s\n", "  7 - Exercicio 0517");
    printf("%s\n", "  8 - Exercicio 0518");
    printf("%s\n", "  9 - Exercicio 0519");
    printf("%s\n", " 10 - Exercicio 0520");
    printf("%s\n", " 11 - Exercicio 05E1");
    printf("%s\n", " 12 - Exercicio 05E2");
    printf("\n");
} // fim menuOpcoes()

void multiplos0511(int n)
{
    int i = 0;
    int mult = 7;

    print("\n%s" , "Multplos de 7 =" );
    for( i = 0; i < n; i = i + 1)
    {
        print(" %d", mult);
        mult += 7;
    } // end for
    print("\n");
}
/**
 * Metodo01.
 */
void exercicio0511()
{
    // identificacao
    id("Exercicio 0511:");

    // programa
    int n = 0;
    n = readint( "Digite uma quantidade: " );

    multiplos0511(n);

    // encerrar
    printf("\n%s\n", "Aperte ENTER para continuar!");
    getchar();
    clear();
} // fim exercicio0511

void multiplos0512(int n)
{
    int i = 0;
    int mult = 12;
    print("\n%s", "Multiplos de 3 e 4 =");
    for( i = 0; i < n; i++ )
    {
        if( (mult % 3 == 0) && (mult % 4 == 0) ){
            print(" %d", mult);
        }
        mult = mult + 12;
    }
    print("\n");
}
/**
 * Metodo02.
 */
void exercicio0512()
{
    // identificacao
    id("Exercicio 0512:");

    // programa
    int n = 0;
    n = readint( "Digite uma quantidade: " );

    multiplos0512(n);

    // encerrar
    printf("\n%s\n", "Aperte ENTER para continuar!");
    getchar();
    clear();
} // fim exercicio0512

void potencia0513(int n)
{
    int p = n;
    int i = 0;
    int num = 0;

    print( "\n%s", "Potencias de 5 =" );
    for( i = p; i > 0; i = i - 1 )
    {
        num = pow(5, p);
        print(" %d", num);
        p = p - 1;
    }
    print("\n");
}
/**
 * Metodo03.
 */
void exercicio0513()
{
    // identificacao
    id("Exercicio 0513:");

    // programa
    int n = 0;
    n = readint( "Digite uma quantidade: " );

    potencia0513(n);

    // encerrar
    printf("\n%s\n", "Aperte ENTER para continuar!");
    getchar();
    clear();
} // fim exercicio0513

/**
 * Metodo04.
 */
void exercicio0514()
{
    // identificacao
    id("Exercicio 0514:");

    // programa

    // encerrar
    printf("\n%s\n", "Aperte ENTER para continuar!");
    getchar();
    clear();
} // fim exercicio0514

/**
 * Metodo05.
 */
void exercicio0515()
{
    // identificacao
    id("Exercicio 0515:");

    // programa

    // encerrar
    printf("\n%s\n", "Aperte ENTER para continuar!");
    getchar();
    clear();
} // fim exercicio0515

/**
 * Metodo06.
 */
void exercicio0516()
{
    // identificacao
    id("Exercicio 0516:");

    // programa

    // encerrar
    printf("\n%s\n", "Aperte ENTER para continuar!");
    getchar();
    clear();
} // fim exercicio0516

/**
 * Metodo07.
 */
void exercicio0517()
{
    // identificacao
    id("Exercicio 0517:");

    // programa

    // encerrar
    printf("\n%s\n", "Aperte ENTER para continuar!");
    getchar();
    clear();
} // fim exercicio0517

/**
 * Metodo08.
 */
void exercicio0518()
{
    // identificacao
    id("Exercicio 0518:");

    // programa

    // encerrar
    printf("\n%s\n", "Aperte ENTER para continuar!");
    getchar();
    clear();
} // fim exercicio0518

/**
 * Metodo09.
 */
void exercicio0519()
{
    // identificacao
    id("Exercicio 0519:");

    // programa

    // encerrar
    printf("\n%s\n", "Aperte ENTER para continuar!");
    getchar();
    clear();
} // fim exercicio0519

/**
 * Metodo10.
 */
void exercicio0520()
{
    // identificacao
    id("Exercicio 0520:");

    // programa

    // encerrar
    printf("\n%s\n", "Aperte ENTER para continuar!");
    getchar();
    clear();
} // fim exercicio0520

/**
 * Metodo11.
 */
void exercicio05E1()
{
    // identificacao
    id("Exercicio 05E1:");

    // programa

    // encerrar
    printf("\n%s\n", "Aperte ENTER para continuar!");
    getchar();
    clear();
} // fim exercicio05E1

/**
 * Metodo12.
 */
void exercicio05E2()
{
    // identificacao
    id("Exercicio 05E2:");

    // programa

    // encerrar
    printf("\n%s\n", "Aperte ENTER para continuar!");
    getchar();
    clear();
} // fim exercicio05E2
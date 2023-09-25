/*
 * -------------------------- Documentacao
 * Pontificia Universidade Catolica de Minas Gerais
 * Curso de Ciencia da Computacao
 * Algoritmos e Estruturas de Dados I
 *
 * Exercicios06 - v0.0. - 25 / 09 / 2023
 * Author: Vinicius Miranda de Araujo
 *
 * Para compilar em terminal (janela de comandos):
 *      Linux : gcc -o Exercicios06 Exercicios06.c
 *      Windows: gcc -o Exercicios06 Exercicios06.c
 *
 * Para executar em terminal (janela de comandos):
 *      Linux : ./Exercicios06
 *      Windows: Exercicios06
 *
 */

// -------------------------- lista de dependencias

#include "libshow.h"

// -------------------------- tratamento de erro

// -------------------------- definicao de constantes

// -------------------------- definicao de variaveis globais

// -------------------------- definicao de prototipos

void menuOpcoes();
void exercicio0611();
void exercicio0612();
void exercicio0613();
void exercicio0614();
void exercicio0615();
void exercicio0616();
void exercicio0617();
void exercicio0618();
void exercicio0619();
void exercicio0620();
void exercicio06E1();
void exercicio06E2();

// -------------------------- definicao do metodo principal

int main(void)
{
    int opcao = 0;

    do
    {
        clear();

        // mostrar identificacao do autor e programa
        id("Programa: Exercicios06 - v0.0");

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
        case  1: exercicio0611(); break;
        case  2: exercicio0612(); break;
        case  3: exercicio0613(); break;
        case  4: exercicio0614(); break;
        case  5: exercicio0615(); break;
        case  6: exercicio0616(); break;
        case  7: exercicio0617(); break;
        case  8: exercicio0618(); break;
        case  9: exercicio0619(); break;
        case 10: exercicio0620(); break;
        case 11: exercicio06E1(); break;
        case 12: exercicio06E2(); break;
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
    printf("%s\n", "  1 - Exercicio 0611");
    printf("%s\n", "  2 - Exercicio 0612");
    printf("%s\n", "  3 - Exercicio 0613");
    printf("%s\n", "  4 - Exercicio 0614");
    printf("%s\n", "  5 - Exercicio 0615");
    printf("%s\n", "  6 - Exercicio 0616");
    printf("%s\n", "  7 - Exercicio 0617");
    printf("%s\n", "  8 - Exercicio 0618");
    printf("%s\n", "  9 - Exercicio 0619");
    printf("%s\n", " 10 - Exercicio 0620");
    printf("%s\n", " 11 - Exercicio 06E1");
    printf("%s\n", " 12 - Exercicio 06E2");
    printf("\n");
} // fim menuOpcoes()

void metodo0611(int x,int n)
{
    // for(int i = 1; i <= n; i = i + 1)
    // {
    //     print("%d ", x);
    //     if(x % 2 != 0)
    //         x = x + 1;
    //     else
    //         x = x + 2;
    // }
    if(n >= 1) // teste / base
    {
        print("%d ", x);
        if(x % 2 != 0)
            metodo0611( x + 1, n - 1 ); // motor
        else
            metodo0611( x + 2, n - 1 ); // motor
    }
}
/**
 * Metodo01.
 */
void exercicio0611()
{
    // identificacao
    id("Exercicio 0611:");

    // programa
    int n = 0;
    n = readint("Digite um valor: ");

    print("\n%s\n", "Valores pares em ordem crescente comecando no valor 7:");
    metodo0611(7,n);
    print("\n");

    // encerrar
    printf("\n%s\n", "Aperte ENTER para continuar!");
    getchar();
    clear();
} // fim exercicio0611

void metodo0612(int x, int n)
{
    if(n >= 1)
    {
        metodo0612( x + 7, n - 1 );
        print("%d ", x);
    }
}
/**
 * Metodo02.
 */
void exercicio0612()
{
    // identificacao
    id("Exercicio 0612:");

    // programa
    int n = 0;
    n = readint("Digite um valor: ");

    print("\n%s\n", "Multiplos de 7 em ordem decrescente encerrando no valor 7:");
    metodo0612(7,n);
    print("\n");

    // encerrar
    printf("\n%s\n", "Aperte ENTER para continuar!");
    getchar();
    clear();
} // fim exercicio0612

void metodo0613(int x, int n)
{
    if(n >= 1)
    {
        print("%d ", x);
        if(x == 1)
            metodo0613( x + 6, n - 1 );
        else
            metodo0613( x + 7, n - 1 );
    }
}
/**
 * Metodo03.
 */
void exercicio0613()
{
    // identificacao
    id("Exercicio 0613:");

    // programa
    int n = 0;
    n = readint("Digite um valor: ");

    print("\n%s", "Sequencia = ");
    metodo0613(1,n);
    print("\n");

    // encerrar
    printf("\n%s\n", "Aperte ENTER para continuar!");
    getchar();
    clear();
} // fim exercicio0613

void metodo0614(int x, int n)
{
    if(n > 1)
    {
        if(x % 7 == 0)
        {
            metodo0614(x + 7, n - 1);
            print("1/%d ", x);
        }
        else
            metodo0614(x + 1, n);
        if(x == 1)
        {
            print("1");
        }
    }
}
/**
 * Metodo04.
 */
void exercicio0614()
{
    // identificacao
    id("Exercicio 0614:");

    // programa
    int n = 0;
    n = readint("Digite um valor: ");

    print("\n%s", "Sequencia = ");
    metodo0614(1,n);
    print("\n");

    // encerrar
    printf("\n%s\n", "Aperte ENTER para continuar!");
    getchar();
    clear();
} // fim exercicio0614

int metodo0615(int x, int n)
{
    int soma = 0;
    if(n >= 1)
    {
        // print("\nAntes  : soma = %2d   x = %2d   n = %2d", soma, x, n);
        soma = x + metodo0615( x + 2, n - 1 );
        // print("\nDepois : soma = %2d   x = %2d   n = %2d", soma, x, n);
    }
    return ( soma );
}
/**
 * Metodo05.
 */
void exercicio0615()
{
    // identificacao
    id("Exercicio 0615:");

    // programa
    int n = 0;
    n = readint("Digite uma quantidade: ");

    print("\n%s%d\n", "Soma dos primeiros valores impares positivos comecando no valor 7 = ", 
                        metodo0615(7,n) );

    // encerrar
    printf("\n%s\n", "Aperte ENTER para continuar!");
    getchar();
    clear();
} // fim exercicio0615

double metodo0616(int x, int n)
{
    double soma = 0.0;
    if(n >= 1)
    {
        // print("\nAntes  : soma = %lf   x = %2d   n = %2d", soma, x, n);
        double inverso = 1.0/x;
        if(x % 2 != 0)
            soma = inverso + metodo0616( x + 1, n - 1);
        else
            soma = inverso + metodo0616( x + 2, n - 1 );
        // print("\nDepois : soma = %lf   x = %2d   n = %2d", soma, x, n);
    }
    return ( soma );
}
/**
 * Metodo06.
 */
void exercicio0616()
{
    // identificacao
    id("Exercicio 0616:");

    // programa
    int n = 0;
    n = readint("Digite uma quantidade: ");

    print("\n%s%lf\n", "Soma dos inversos (1/x) dos primeiros valores pares positivos comecando no valor 7 = ", 
                        metodo0616(7,n) );
    // encerrar
    printf("\n%s\n", "Aperte ENTER para continuar!");
    getchar();
    clear();
} // fim exercicio0616

/**
 * Metodo07.
 */
void exercicio0617()
{
    // identificacao
    id("Exercicio 0617:");

    // programa

    // encerrar
    printf("\n%s\n", "Aperte ENTER para continuar!");
    getchar();
    clear();
} // fim exercicio0617

/**
 * Metodo08.
 */
void exercicio0618()
{
    // identificacao
    id("Exercicio 0618:");

    // programa

    // encerrar
    printf("\n%s\n", "Aperte ENTER para continuar!");
    getchar();
    clear();
} // fim exercicio0618

/**
 * Metodo09.
 */
void exercicio0619()
{
    // identificacao
    id("Exercicio 0619:");

    // programa

    // encerrar
    printf("\n%s\n", "Aperte ENTER para continuar!");
    getchar();
    clear();
} // fim exercicio0619

/**
 * Metodo10.
 */
void exercicio0620()
{
    // identificacao
    id("Exercicio 0620:");

    // programa

    // encerrar
    printf("\n%s\n", "Aperte ENTER para continuar!");
    getchar();
    clear();
} // fim exercicio0620

/**
 * Metodo11.
 */
void exercicio06E1()
{
    // identificacao
    id("Exercicio 06E1:");

    // programa

    // encerrar
    printf("\n%s\n", "Aperte ENTER para continuar!");
    getchar();
    clear();
} // fim exercicio06E1

/**
 * Metodo12.
 */
void exercicio06E2()
{
    // identificacao
    id("Exercicio 06E2:");

    // programa

    // encerrar
    printf("\n%s\n", "Aperte ENTER para continuar!");
    getchar();
    clear();
} // fim exercicio06E2
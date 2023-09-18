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

    for( i = 0; i < n; i = i + 1)
    {
        print(" %d", mult);
        mult = mult + 7;
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

    print("\n%s" , "Multplos de 7 =" );
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

    print("\n%s", "Multiplos de 3 e 4 =");
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

    print( "\n%s", "Potencias de 5 =" );
    potencia0513(n);

    // encerrar
    printf("\n%s\n", "Aperte ENTER para continuar!");
    getchar();
    clear();
} // fim exercicio0513

void metodo0514(int n)
{
    double numerador = 1.0;
    double denominador = 6.0;

    int i = 0;
    for(i = 0; i < n; i = i + 1)
    {
        printf("\n%.lf/%.lf = %.4lf", numerador, denominador, numerador/denominador);
        denominador = denominador + 6.0;
    }
    print("\n");
}
/**
 * Metodo04.
 */
void exercicio0514()
{
    // identificacao
    id("Exercicio 0514:");

    // programa
    int n = 0;
    n = readint("Digite uma quantidade: ");

    print("\n%s\n", "Valores inversos multiplos de 6 =");
    metodo0514(n);

    // encerrar
    printf("\n%s\n", "Aperte ENTER para continuar!");
    getchar();
    clear();
} // fim exercicio0514

void metodo0515(int x, int n)
{
    int p = 1; // potencia
    double numerador = 1.0;
    double denominador = x;
    int i = 0;
    //mostrar a potencia par
    print("\n%.lf/%.lf^%d = %.4lf", numerador, denominador, p-1, numerador/(pow(denominador,p-1)) );
    for(i = 1; i < n; i = i + 1)
    {   
        print("\n%.lf/%.lf^%d = %.4lf", numerador, denominador, p, numerador/(pow(denominador,p)) );
        p = p + 2; 
    }
    print("\n");
}
/**
 * Metodo05.
 */
void exercicio0515()
{
    // identificacao
    id("Exercicio 0515:");

    // programa
    double x = 0;
    int    n = 0;
    x = readdouble("Digite um numero: ");
    n = readint("Digite uma quantidade: ");

    metodo0515(x,n);
    // encerrar
    printf("\n%s\n", "Aperte ENTER para continuar!");
    getchar();
    clear();
} // fim exercicio0515

void metodo0516(int n)
{
    int soma = 3; // soma comeca com o valor 3
    int i    = 0; // ir incrementando se achar um valor par nao multiplo de 4  
    int num  = 6; // menor valor par nao mutiplo de 4
    while( n > i) // enquanto quantidade for maior que i
    {   
        if( num % 4 != 0 ) // testar se nao for multiplo de 4
        { // se true:
            soma = soma + num; // soma recebe soma mais o numero 
            i = i + 1; // incrementa a variavel de parada
        }
        num = num + 2; // incrementar de 2 em 2 garantindo que o proximo valor sera par
    }
    print("\n%s%d\n", "Soma = ", soma); // soma  =  3 + 6 + 10 + 14 + 18 = 51 -> resultado esperado
}
/**
 * Metodo06.
 */
void exercicio0516()
{
    // identificacao
    id("Exercicio 0516:");

    // programa
    int n = 0;
    n = readint("Digite uma quantidade: ");

    metodo0516(n);

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
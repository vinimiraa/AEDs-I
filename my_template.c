/*
 Exercicios0X - v0.0. - 11 / 08 / 2023
 Author: Vinicius Miranda de Araujo

 Para compilar em terminal (janela de comandos):
 Linux : gcc -o Exercicios0X Exercicios0X.c
 Windows: gcc -o Exercicios0X Exercicios0X.c
 Para executar em terminal (janela de comandos):
 Linux : ./Exercicios0X
 Windows: Exercicios0X
*/

// dependencias
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <ctype.h>

// declaracao das funcoes secundarias
void identificacao();
void menuOpcoes();
void exercicio0X11();
void exercicio0X12();
void exercicio0X13();
void exercicio0X14();
void exercicio0X15();
void exercicio0X16();
void exercicio0X17();
void exercicio0X18();
void exercicio0X19();
void exercicio0X20();
void exercicio0XE1();
void exercicio0XE2();

// funcao principal
int main (void)
{
    int opcao = 0;
    // mostrar identificacao do autor e programa
    identificacao();

    do{
        // mostrar menu de opcoes
        menuOpcoes();

        // ler opcao do teclado
        printf( "\n %s" , "Opcao = ");
        scanf( "%d" , &opcao ); 
        getchar(); // limpar entrada de dados

        // estetica
        printf( "\n======== Opcao %d ========\n", opcao );

        // executar a opcao escolhida
        switch (opcao)
        {
        case  0:                  break;
        case  1: exercicio0X11(); break;
        case  2: exercicio0X12(); break;
        case  3: exercicio0X13(); break;
        case  4: exercicio0X14(); break;
        case  5: exercicio0X15(); break;
        case  6: exercicio0X16(); break;
        case  7: exercicio0X17(); break;
        case  8: exercicio0X18(); break;
        case  9: exercicio0X19(); break;
        case 10: exercicio0X20(); break;
        case 11: exercicio0XE1(); break;
        case 12: exercicio0XE2(); break;
        default:
            printf( "\n   %s\n\n" , "ERRO: opcao invalida" );
            break;
        } // fim switch
        
        // estetica
        if( opcao == 0 ){
            printf( "\n%s\n\n" , "     Programa Encerrado     ");
        }

        // estetica
        printf( "====== Fim Opcao %d ======\n\n", opcao );

    }while (opcao != 0);

    // encerrar
    printf( "\n%s\n" , "Aperte ENTER para terminar!" );
    getchar();

    return (0);
}

// definicao das funcoes secundarias

void identificacao()
{
    printf("\n");
    printf("%s\n", "Exercicios0X - Programa - v0.0");
    printf("%s\n", "Autor: Vinicius Miranda de Araujo - 812839");
    printf("\n");
} // fim identificacao()

void menuOpcoes()
{
    printf( "%s\n\n" , "Escolha alguma das opcoes a seguir:");
    printf( "%s\n" , "  0 - Encerrar programa");
    printf( "%s\n" , "  1 - Exercicio 0X11");
    printf( "%s\n" , "  2 - Exercicio 0X12");
    printf( "%s\n" , "  3 - Exercicio 0X13");
    printf( "%s\n" , "  4 - Exercicio 0X14");
    printf( "%s\n" , "  5 - Exercicio 0X15");
    printf( "%s\n" , "  6 - Exercicio 0X16");
    printf( "%s\n" , "  7 - Exercicio 0X17");
    printf( "%s\n" , "  8 - Exercicio 0X18");
    printf( "%s\n" , "  9 - Exercicio 0X19");
    printf( "%s\n" , " 10 - Exercicio 0X20");
    printf( "%s\n" , " 11 - Exercicio 0XE1");
    printf( "%s\n" , " 12 - Exercicio 0XE2");
} // fim menuOpcoes()

void exercicio0X11()
{
    // identificacao
    printf( "\n%s\n\n" , "Exercicio 0X11:" );

    // programa

    // encerrar
    printf( "\n%s\n" , "Aperte ENTER para continuar!" );
    getchar();
} // fim exercicio0X11

void exercicio0X12()
{
    // identificacao
    printf( "\n%s\n\n" , "Exercicio 0X12:" );

    // programa
    
    // encerrar
    printf( "\n%s\n" , "Aperte ENTER para continuar!" );
    getchar();
} // fim exercicio0X12

void exercicio0X13()
{
    // identificacao
    printf( "\n%s\n\n" , "Exercicio 0X13:" );

    // programa
   
    // encerrar
    printf( "\n%s\n" , "Aperte ENTER para continuar!" );
    getchar();
} // fim exercicio0X13

void exercicio0X14()
{
    // identificacao
    printf( "\n%s\n\n" , "Exercicio 0X14:" );

    // programa
   
    // encerrar
    printf( "\n%s\n" , "Aperte ENTER para continuar!" );
    getchar();
} // fim exercicio0X14

void exercicio0X15()
{
    // identificacao
    printf( "\n%s\n\n" , "Exercicio 0X15:" );

    // programa

    // encerrar
    printf( "\n%s\n" , "Aperte ENTER para continuar!" );
    getchar();
} // fim exercicio0X15

void exercicio0X16()
{
    // identificacao
    printf( "\n%s\n\n" , "Exercicio 0X16:" );

    // programa

    // encerrar
    printf( "\n%s\n" , "Aperte ENTER para continuar!" );
    getchar();
} // fim exercicio0X16

void exercicio0X17()
{
    // identificacao
    printf( "\n%s\n\n" , "Exercicio 0X17:" );

    // programa
  
    // encerrar
    printf( "\n%s\n" , "Aperte ENTER para continuar!" );
    getchar();
} // fim exercicio0X17

void exercicio0X18()
{
    // identificacao
    printf( "\n%s\n\n" , "Exercicio 0X18:" );

    // programa

    // encerrar
    printf( "\n%s\n" , "Aperte ENTER para continuar!" );
    getchar();
} // fim exercicio0X18

void exercicio0X19()
{   
    // identificacao
    printf( "\n%s\n\n" , "Exercicio 0X19:" );

    // programa

    // encerrar
    printf( "\n%s\n" , "Aperte ENTER para continuar!" );
    getchar();
} // fim exercicio0X19

void exercicio0X20()
{
    // identificacao
    printf( "\n%s\n\n" , "Exercicio 0X20:" );

    // programa

    // encerrar
    printf( "\n%s\n" , "Aperte ENTER para continuar!" );
    getchar();
} // fim exercicio0X20

void exercicio0XE1()
{
    // identificacao
    printf( "\n%s\n\n" , "Exercicio 0XE1:" );

    // programa

    // encerrar
    printf( "\n%s\n" , "Aperte ENTER para continuar!" );
    getchar();
} // fim exercicio0XE1

void exercicio0XE2()
{
    // identificacao
    printf( "\n%s\n\n" , "Exercicio 0XE2:" );

    // programa

    // encerrar
    printf( "\n%s\n" , "Aperte ENTER para continuar!" );
    getchar();
} // fim exercicio0XE2
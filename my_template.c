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
        printf("\n Opcao = ");
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
            printf( "\nERRO: OPCAO INVALIDA\n" );
            break;
        } // fim switch
        
        // estetica
        if( opcao == 0 ){
            printf("\n     Programa Encerrado     \n\n");
        }

        // estetica
        printf( "====== Fim Opcao %d ======\n\n", opcao );

    }while (opcao != 0);

    // encerrar
    printf( "\nAperte ENTER para terminar!\n" );
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
    printf("Escolha alguma das opcoes a seguir:\n\n");
    printf("  0 - Encerrar programa\n");
    printf("  1 - Exercicio 0X11\n");
    printf("  2 - Exercicio 0X12\n");
    printf("  3 - Exercicio 0X13\n");
    printf("  4 - Exercicio 0X14\n");
    printf("  5 - Exercicio 0X15\n");
    printf("  6 - Exercicio 0X16\n");
    printf("  7 - Exercicio 0X17\n");
    printf("  8 - Exercicio 0X18\n");
    printf("  9 - Exercicio 0X19\n");
    printf(" 10 - Exercicio 0X20\n");
    printf(" 11 - Exercicio 0XE1\n");
    printf(" 12 - Exercicio 0XE2\n");
} // fim menuOpcoes()

void exercicio0X11()
{
    // identificacao
    printf( "\nExercicio 0X11:\n\n" );

    // programa

    // encerrar
    printf( "\nAperte ENTER para continuar!\n" );
    getchar();
} // fim exercicio0X11

void exercicio0X12()
{
    // identificacao
    printf( "\nExercicio 0X12:\n\n" );

    // programa
    
    // encerrar
    printf( "\nAperte ENTER para continuar!\n" );
    getchar();
} // fim exercicio0X12

void exercicio0X13()
{
    // identificacao
    printf( "\nExercicio 0X13:\n\n" );

    // programa
   
    // encerrar
    printf( "\nAperte ENTER para continuar!\n" );
    getchar();
} // fim exercicio0X13

void exercicio0X14()
{
    // identificacao
    printf( "\nExercicio 0X14:\n\n" );

    // programa
   
    // encerrar
    printf( "\nAperte ENTER para continuar!\n" );
    getchar();
} // fim exercicio0X14

void exercicio0X15()
{
    // identificacao
    printf( "\nExercicio 0X15:\n\n" );

    // programa

    // encerrar
    printf( "\nAperte ENTER para continuar!\n" );
    getchar();
} // fim exercicio0X15

void exercicio0X16()
{
    // identificacao
    printf( "\nExercicio 0X16:\n\n" );

    // programa

    // encerrar
    printf( "\nAperte ENTER para continuar!\n" );
    getchar();
} // fim exercicio0X16

void exercicio0X17()
{
    // identificacao
    printf( "\nExercicio 0X17:\n\n" );

    // programa
  
    // encerrar
    printf( "\nAperte ENTER para continuar!\n" );
    getchar();
} // fim exercicio0X17

void exercicio0X18()
{
    // identificacao
    printf( "\nExercicio 0X18:\n\n" );

    // programa

    // encerrar
    printf( "\nAperte ENTER para continuar!\n" );
    getchar();
} // fim exercicio0X18

void exercicio0X19()
{   
    // identificacao
    printf( "\nExercicio 0X19:\n\n" );

    // programa

    // encerrar
    printf( "\nAperte ENTER para continuar!\n" );
    getchar();
} // fim exercicio0X19

void exercicio0X20()
{
    // identificacao
    printf( "\nExercicio 0X20:\n\n" );

    // programa

    // encerrar
    printf( "\nAperte ENTER para continuar!\n" );
    getchar();
} // fim exercicio0X20

void exercicio0XE1()
{
    // identificacao
    printf( "\nExercicio 0XE1:\n\n" );

    // programa

    // encerrar
    printf( "\nAperte ENTER para continuar!\n" );
    getchar();
} // fim exercicio0XE1

void exercicio0XE2()
{
    // identificacao
    printf( "\nExercicio 0XE2:\n\n" );

    // programa

    // encerrar
    printf( "\nAperte ENTER para continuar!\n" );
    getchar();
} // fim exercicio0XE2
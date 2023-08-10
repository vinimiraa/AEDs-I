/*
 Exemplo00E - v0.0. - 10 / 08 / 2023
 Author: Vinicius Miranda de Araujo

 Para compilar em terminal (janela de comandos):
 Linux : gcc -o exemplo00E exemplo00E.c
 Windows: gcc -o exemplo00E exemplo00E.c
 Para executar em terminal (janela de comandos):
 Linux : ./exemplo00E
 Windows: exemplo00E
*/

#include <stdio.h>   // para as entradas e saidas
#include <stdlib.h>  // para outras funcoes de uso geral
#include <math.h>    // para operacoes matematicas
#include <stdbool.h> // para definicoes booleanas
#include <ctype.h>   // para definicoes com strings 
#include <string.h>  // para definicoes com strings
#include "my_lib.h"  // para funcoes proprias
#include "my_def.h"  // para definicoes globais, constantes ...

void CONTAR(int X)
{
    if (X > 0)
    {
        printf("\n%d\n", X);
        CONTAR(X - 1);
    }
} // fim procedimento CONTAR( )
void metodo51()
{
    // PROGRAMA PARA CONTAR 5 10 ATE' 1, RECURSIVAMENTE
    // identificar
    printf("EXEMPLO0602 - CONTAR DE 5 A 1 RECURSIVAMENTE\n");
    CONTAR(5);
    // encerrar
    printf("\nAPERTAR <Enter> PARA TERMINAR");
    getchar(); // para esperar
}
void metodo52()
{
    // PROGRAMA PARA CONTAR 5 10 ATE' 1, RECURSIVAMENTE
    // identificar
    printf("EXEMPLO0602 - CONTAR DE 5 A 1 RECURSIVAMENTE\n");
    CONTAR(5);
    // encerrar
    printf("\nAPERTAR <Enter> PARA TERMINAR");
    getchar(); // para esperar
}
void PARES_1(int X)
{
    if (X > 0){
       if (X % 2 == 0)
        {
            PARES_1(X - 2);
            printf("\n%d\n", X);
        }
        else
            PARES_1(X - 1); 
    }
} // fim procedimento PARES_1 ( )
void metodo53()
{
    // PROGRAMA RECURSIVO PARA MOSTRAR PARES_1
    // identificar
    printf("EXEMPLO0603 - MOSTRAR OS PARES_1 <= 10\n");
    PARES_1(10);
    // encerrar
    printf("\nAPERTAR <Enter> PARA TERMINAR");
    getchar(); // para esperar
}
void PARES_2(int X)
{
    if (X > 0)
    {
        PARES_2(X - 1);
        printf("\n%d%c%d\n", X, " ", 2 * X);
    }
} // fim procedimento PARES_2 ( )
void metodo54()
{
    // PROGRAMA RECURSIVO PARA MOSTRAR PARES_2
    // identificar
    printf("EXEMPLO0604 - MOSTRAR OS 5 PRIMEIROS PARES_2\n");
    PARES_2(5);
    // encerrar
    printf("\nAPERTAR <Enter> PARA TERMINAR");
    getchar(); // para esperar
}
void PARES_3(int X, int *S)
{
    if (X > 0)
    {
        PARES_3(X - 1, S);
        *S = *S + 2 * X;
    }
    else
        S = 0;
} // fim procedimento PARES_3 ( )
void metodo55()
{
    // PROGRAMA RECURSIVO PARA SOMAR PARES_3
    // DADO:
    int SOMA;
    // identificar
    printf("EXEMPLO0605 - SOMAR OS 5 PRIMEIROS PARES_3\n");
    PARES_3(5, &SOMA);
    printf("\nSOMA DOS 5 PRIMEIROS PARES_3 = %d\n", SOMA);
    // encerrar
    printf("\nAPERTAR <Enter> PARA TERMINAR");
    getchar(); // para esperar
}
int PARES_4(int X)
{
    // DADO:
    int S = 0;
    if (X > 0)
        S = 2 * X + PARES_4(X - 1);
    else
        S = 0;
    return (S);
} // fim funcao PARES_4 ( )
void metodo56()
{
    // PROGRAMA RECURSIVO PARA SOMAR PARES_4
    // DADO :
    int SOMA = 0;
    // identificar
    printf("EXEMPLO0606 - SOMAR OS 5 PRIMEIROS PARES_4\n");
    SOMA = PARES_4(5);
    printf("\nSOMA DOS 5 PRIMEIROS PARES_4 = %d\n", SOMA);
    // encerrar
    printf("\nAPERTAR <Enter> PARA TERMINAR");
    getchar(); // para esperar
}
int PARES_5(int X)
{
    // DADO :
    int S = 0;
    if (X > 0)
        if (X % 2 == 0)
            S = 1 + PARES_5(X - 2);
        else
            S = PARES_5(X - 1);
    else
        S = 0;
    return (S);
} // fim funcao PARES_5 ( )
void metodo57()
{
    // PROGRAMA RECURSIVO PARA CONTAR PARES_5
    // identificar
    printf("EXEMPLO0607 - CONTAR OS PARES_5 <= 10\n");
    printf("\nPARES <= 10 = %d\n", PARES_5(10));
    // encerrar
    printf("\nAPERTAR <Enter> PARA TERMINAR");
    getchar(); // para esperar
}
typedef char STRING30[30];
bool PROCURAR_1(char LETRA, STRING30 S, int POSICAO)
{
    // DADO :
    bool R = false;
    if (POSICAO <= strlen(S))
        R = (S[POSICAO] == LETRA) || PROCURAR_1(LETRA, S, POSICAO + 1);
    else
        R = false;
    return (R);
} // fim funcao PROCURAR_1 ( )
void metodo58()
{
    // PROGRAMA RECURSIVO PARA ACHAR A POSICAO DE UMA LETRA
    // DADO :
    char L = '_';
    STRING30 S = "";
    // identificar
    printf("EXEMPLO0608 - PROCURAR_1 UMA LETRA EM UMA SENTENCA\n");
    printf("\nFORNECER UMA SENTENCA COM MENOS DE 30 CARACTERES : ");
    gets(S);
    printf("\nFORNECER UMA LETRA PARA SER PROCURADA : ");
    L = getchar();
    getchar(); // para limpar a entrada de dados
    printf("\nRESPOSTA = %d\n", PROCURAR_1(L, S, 0));
    // encerrar
    printf("\nAPERTAR <Enter> PARA TERMINAR");
    getchar(); // para esperar
}
int PROCURAR_2(char LETRA, STRING30 S, int POSICAO)
{
    // DADO :
    int R = 0;
    if (POSICAO <= strlen(S))
        if (S[POSICAO] == LETRA)
            R = POSICAO + 1; // a primeira posicao e' 0 !
        else
            R = PROCURAR_2(LETRA, S, POSICAO + 1);
    else
        R = 0;
    return (R);
} // fim funcao PROCURAR_2 ( )
void metodo59()
{
    // PROGRAMA RECURSIVO PARA PROCURAR_2 UMA LETRA
    // DADO :
    char L = '_';
    STRING30 S = "";
    // identificar
    printf("EXEMPLO0609 - POSICAO DE UMA LETRA EM UMA SENTENCA\n");
    printf("\nFORNECER UMA SENTENCA COM MENOS DE 30 CARACTERES : ");
    gets(S);
    printf("\nFORNECER UMA LETRA PARA SER PROCURADA : ");
    L = getchar();
    getchar(); // para limpar a entrada de dados
    printf("\nRESPOSTA = %d\n", PROCURAR_2(L, S, 0));
    // encerrar
    printf("\nAPERTAR <Enter> PARA TERMINAR");
    getchar(); // para esperar
}
int PROCURAR_3(char LETRA, STRING30 S, int POSICAO)
{
    // DADO :
    int R = 0;
    if (POSICAO <= strlen(S))
        if (S[POSICAO] == LETRA)
            R = 1 + PROCURAR_3(LETRA, S, POSICAO + 1);
        else
            R = PROCURAR_3(LETRA, S, POSICAO + 1);
    else
        R = 0;
    return (R);
} // fim funcao PROCURAR_3 ( )
void metodo60()
{
    // PROGRAMA RECURSIVO PARA PROCURAR_3 OCORRENCIAS DE UMA LETRA
    // DADO :
    char L = '_';
    STRING30 S = "";
    printf("EXEMPLO0610 - PROCURAR_3 OCORRENCIAS DE UMA LETRA\n");
    printf("\nFORNECER UMA SENTENCA COM MENOS DE 30 CARACTERES : ");
    gets(S);
    printf("\nFORNECER UMA LETRA PARA SER PROCURADA : ");
    L = getchar();
    getchar(); // para limpar a entrada de dados
    printf("\nRESPOSTA = %d\n", PROCURAR_3(L, S, 0));
    // encerrar
    printf("\nAPERTAR <Enter> PARA TERMINAR");
    getchar(); // para esperar
}
void metodo61()
{
    typedef int TABELA[10];
    // PROGRAMA PARA LER UMA TABELA DE INTEIROS
    // VARIAVEIS:
    TABELA V;
    int X = 0;
    // identificar
    printf("EXEMPLO0701 - LER UM TABELA DE 10 INTEIROS\n");
    // REPETIR PARA CADA POSICAO
    for (X = 0; X < 10; X++)
    { // a primeira posicao e' zero !
        printf("\nFORNECER O %d o. INTEIRO : ", (X + 1));
        scanf("%d", &V[X]);
        getchar(); // para limpar a entrada de dados
    }              // FIM REPETIR
    printf("\nVETOR LIDO: \n");
    // REPETIR PARA CADA POSICAO
    for (X = 0; X < 10; X++)
    {
        printf("%d ", V[X]);
    } // FIM REPETIR
      // encerrar
    printf("\n\nAPERTAR <Enter> PARA TERMINAR");
    getchar(); // para esperar
}
void metodo62()
{
    typedef int TABELA[10];
    // PROGRAMA PARA SOMAR UMA TABELA DE INTEIROS
    // VARIAVEIS :
    TABELA V;
    int X = 0,
        SOMA = 0;
    // identificar
    printf("EXEMPLO0702 - SOMAR UM TABELA DE 10 INTEIROS\n");
    // REPETIR PARA CADA POSICAO
    for (X = 0; X < 10; X++)
    {
        printf("\nFORNECER O %do. INTEIRO : ", (X + 1));
        scanf("%d", &V[X]);
        getchar(); // para limpar a entrada de dados
    }              // FIM REPETIR
    SOMA = 0;
    // REPETIR PARA CADA POSICAO
    for (X = 0; X < 10; X++)
        SOMA = SOMA + V[X];
    printf("\nSOMA = %d", SOMA);
    // encerrar
    printf("\n\nAPERTAR <Enter> PARA TERMINAR");
    getchar(); // para esperar
}
void metodo63()
{
    typedef int TABELA[10];
    // PROGRAMA PARA CALCULAR A MEDIA DE UMA TABELA DE INTEIROS
    // VARIAVEIS :
    TABELA V;
    float MEDIA = 0.0;
    int X = 0,
        SOMA = 0;
    // identificar
    printf("EXEMPLO0703 - MEDIA DE UMA TABELA DE 10 INTEIROS\n");
    // REPETIR PARA CADA POSICAO
    for (X = 0; X < 10; X++)
    {
        printf("\nFORNECER O %do. INTEIRO : ", (X + 1));
        scanf("%d", &V[X]);
        getchar(); // para limpar a entrada de dados
    }              // FIM REPETIR
    SOMA = 0;
    // REPETIR PARA CADA POSICAO
    for (X = 0; X < 10; X++)
        SOMA = SOMA + V[X];
    MEDIA = SOMA / 10.0;
    printf("\nMEDIA = %f\n", MEDIA);
    // encerrar
    printf("\n\nAPERTAR <Enter> PARA TERMINAR");
    getchar(); // para esperar
}
void metodo64()
{
    typedef char STRING10[10];
    // PROGRAMA PARA LER UMA PALAVRA
    // VARIAVEIS :
    STRING10 PALAVRA;
    int X = 0;
    // identificar
    printf("EXEMPLO0704 - LER UMA PALAVRA\n");
    printf("\nFORNECER UMA PALAVRA (NO MAXIMO 09 LETRAS) : ");
    gets(PALAVRA);
    printf("\nLETRAS DA PALAVRA LIDA : ");
    // REPETIR PARA CADA POSICAO
    for (X = 0; X < strlen(PALAVRA); X++)
        printf("%c ", PALAVRA[X]);
    // encerrar
    printf("\n\nAPERTAR <Enter> PARA TERMINAR");
    getchar(); // para esperar
}
void metodo65()
{
    typedef char STRING10[10];
    // PROGRAMA PARA PROCURAR LETRA EM PALAVRA
    // VARIAVEIS :
    STRING10 PALAVRA;
    char LETRA = '_';
    int X = 0;
    bool ACHAR = false;
    // identificar
    printf("EXEMPLO0705 - PROCURAR LETRA EM UMA PALAVRA\n");
    printf("\nDIGITAR UMA PALAVRA (NO MAXIMO 09 LETRAS) : ");
    gets(PALAVRA);
    printf("\nFORNECER A LETRA A SER PROCURADA : ");
    LETRA = getchar();
    getchar(); // para limpar a entrada de dados
    ACHAR = false;
    X = 0;
    // REPETIR PARA CADA POSICAO
    while (X < strlen(PALAVRA) && !ACHAR)
    {
        if (PALAVRA[X] == LETRA)
            ACHAR = true;
        else
            X = X + 1;
    } // FIM REPETIR
    if (ACHAR)
        printf("LETRA ENCONTRADA");
    else
        printf("LETRA NAO ENCONTRADA");
    // encerrar
    printf("\n\nAPERTAR <Enter> PARA TERMINAR");
    getchar(); // para esperar
}
void metodo66()
{
    typedef double POLINOMIO[10 + 1]; // posicoes de 0:10
                                      // PROGRAMA PARA AVALIAR UM POLINOMIO
                                      // VARIAVEIS :
    POLINOMIO P;
    int Y = 0, N = 0;
    double X = 0.0, PX = 0.0;
    // identificar
    printf("EXEMPLO0706 - LER COEFICIENTES DE UM POLINOMIO\n");
    printf("\nFORNECER O GRAU DO POLINOMIO : ");
    scanf("%d", &N);
    getchar(); // para limpar a entrada de dados
               // REPETIR PARA CADA POSICAO
    for (Y = 0; Y <= N; Y++)
    {
        printf("\nFORNECER O %do. COEFICIENTE : ", (Y + 1));
        scanf("%lf", &P[Y]);
        getchar(); // para limpar a entrada de dados
    }              // FIM REPETIR
    printf("\nFORNECER O PONTO DE AVALIACAO : ");
    scanf("%lf", &X);
    getchar(); // para limpar a entrada de dados
    PX = 0.0;
    // REPETIR PARA CADA POSICAO
    // DA ULTIMA ATE' A PRIMEIRA
    for (Y = N; Y >= 0; Y--)
        PX = PX * X + P[Y];
    printf("\nP(%lf) = %lf", X, PX);
    // encerrar
    printf("\n\nAPERTAR <Enter> PARA TERMINAR");
    getchar(); // para esperar
}
void metodo67()
{
    typedef int VETOR[3]; // X,Y,Z
                          // PROGRAMA PARA AVALIAR O COMPRIMENTO DE UM VETOR
                          // VARIAVEIS :
    VETOR V;
    int X = 0;
    double SOMA = 0.0;
    // identificar
    printf("EXEMPLO0707 - COMPRIMENTO DE UM VETOR\n");
    printf("\nFORNECER O VALOR DE X : ");
    scanf("%d", &V[0]);
    getchar(); // para limpar a entrada de dados
    printf("\nFORNECER O VALOR DE Y : ");
    scanf("%d", &V[1]);
    getchar(); // para limpar a entrada de dados
    printf("\nFORNECER O VALOR DE Z : ");
    scanf("%d", &V[2]);
    getchar(); // para limpar a entrada de dados
    SOMA = 0.0;
    // REPETIR PARA CADA POSICAO
    for (X = 0; X < 3; X++)
        SOMA = SOMA + V[X] * V[X];
    printf("\nCOMPRIMENTO = %lf", sqrt(SOMA));
    // encerrar
    printf("\n\nAPERTAR <Enter> PARA TERMINAR");
    getchar(); // para esperar
}
void metodo68()
{
    typedef int MATRIZ[2][2];
    // PROGRAMA PARA LER UMA MATRIZ
    // VARIAVEIS :
    MATRIZ M;
    int X = 0, Y = 0;
    // identificar
    printf("EXEMPLO0708 - LER UMA MATRIZ INTEIRA 2x2\n");
    // REPETIR PARA CADA LINHA
    for (X = 0; X < 2; X++)
    { // REPETIR PARA CADA COLUNA
        for (Y = 0; Y < 2; Y++)
        {
            printf("\nFORNECER ELEMENTO %d, %d : ", (X + 1), (Y + 1));
            scanf("%d", &M[X][Y]);
            getchar(); // para limpar a entrada de dados
        }              // FIM REPETIR
    }                  // FIM REPETIR
    printf("\n");
    // REPETIR PARA CADA LINHA
    for (X = 0; X < 2; X++)
    { // REPETIR PARA CADA COLUNA
        for (Y = 0; Y < 2; Y++)
            printf("%d ", M[X][Y]);
        printf("\n");
    } // FIM REPETIR
      // encerrar
    printf("\n\nAPERTAR <Enter> PARA TERMINAR");
    getchar(); // para esperar
}
void metodo69()
{
    typedef int MATRIZ[2][2];
    // PROGRAMA PARA MONTAR A TRANSPOSTA DE UMA MATRIZ
    // VARIAVEIS :
    MATRIZ M, // MATRIZ ORIGINAL
        MT;   // MATRIZ TRANSPOSTA
    int X = 0, Y = 0;
    // identificar
    printf("EXEMPLO0709 - TRANSPOR UMA MATRIZ INTEIRA 2x2\n");
    // REPETIR PARA CADA LINHA
    for (X = 0; X < 2; X++)
    { // REPETIR PARA CADA COLUNA
        for (Y = 0; Y < 2; Y++)
        {
            printf("\nFORNECER ELEMENTO %d, %d : ", (X + 1), (Y + 1));
            scanf("%d", &M[X][Y]);
            getchar(); // para limpar a entrada de dados
            MT[Y][X] = M[X][Y];
        } // FIM REPETIR
    }     // FIM REPETIR
    printf("\n");
    // REPETIR PARA CADA LINHA
    for (X = 0; X < 2; X++)
    { // REPETIR PARA CADA COLUNA
        for (Y = 0; Y < 2; Y++)
            printf("%d ", M[X][Y]);
        printf("\n");
    } // FIM REPETIR
      // encerrar
    printf("\n\nAPERTAR <Enter> PARA TERMINAR");
    getchar(); // para esperar
}
void metodo70()
{
    #define ORDEM 3
    typedef int MATRIZ[ORDEM][ORDEM];
    // PROGRAMA PARA MOSTRAR A DIAGONAL DE UMA MATRIZ
    // VARIAVEIS :
    MATRIZ M;
    int X = 0, Y = 0;
    // identificar
    printf("EXEMPLO0710 - MOSTRAR A DIAGONAL DE UMA MATRIZ\n");
    // REPETIR PARA CADA LINHA
    for (X = 0; X < ORDEM; X++)
    { // REPETIR PARA CADA COLUNA
        for (Y = 0; Y < ORDEM; Y++)
        {
            printf("\nFORNECER ELEMENTO %d, %d : ", (X + 1), (Y + 1));
            scanf("%d", &M[X][Y]);
            getchar(); // para limpar a entrada de dados
        }              // FIM REPETIR
    }                  // FIM REPETIR
    printf("\n");
    // REPETIR PARA CADA LINHA
    for (X = 0; X < ORDEM; X++)
    { // REPETIR PARA CADA COLUNA
        for (Y = 0; Y < ORDEM; Y++)
        {
            if (X == Y) // SE ESTIVER NA DIAGONAL
                printf("%d ", M[X][Y]);
        } // FIM REPETIR
    }     // FIM REPETIR
          // encerrar
    printf("\n\nAPERTAR <Enter> PARA TERMINAR");
    getchar(); // para esperar
}
void metodo71()
{
    // PROGRAMA PARA LER UM VALOR INTEIRO E VERIFICAR SE E' ZERO
    // VARIAVEL:
    int X = 0;
    printf("EXEMPLO301 - LER E TESTAR UM VALOR INTEIRO");
    printf("\nFORNECER UM VALOR INTEIRO QUALQUER: ");
    scanf("%d", &X);
    getchar(); // limpar a entrada de dados
    if (X == 0)
        printf("\nO VALOR DIGITADO FOI ZERO");
    else
        printf("\nO VALOR DIGITADO NAO FOI ZERO");
    printf("\nPRESSIONAR <Enter> PARA TERMINAR.");
    getchar(); // para esperar
}
void metodo72()
{
    // PROGRAMA PARA LER UM REAL E TESTAR SE DIFERENTE DE ZERO
    // VARIAVEL:
    float X = 0.0;
    printf("EXEMPLO302 - LER E TESTAR UM VALOR REAL");
    printf("\nFORNECER UM VALOR REAL DIFERENTE DE ZERO: ");
    scanf("%f", &X);
    getchar(); // limpar a entrada de dados
    if (X != 0.0)
        printf("\nO VALOR DIGITADO FOI DIFERENTE DE ZERO");
    printf("\nPRESSIONAR <Enter> PARA TERMINAR.");
    getchar(); // para esperar
}
void metodo73()
{
    // PROGRAMA PARA LER CARACTERE E VERIFICAR SE E' UM ALGARISMO
    // VARIAVEL:
    char X = '0';
    printf("EXEMPLO303 - LER E TESTAR UM CARACTERE");
    printf("\nFORNECER UM ALGARISMO QUALQUER: ");
    scanf("%c", &X);
    getchar(); // limpar a entrada de dados
    if (X >= '0' && X <= '9')
    {
        printf("\nO VALOR DIGITADO FOI UM ALGARISMO");
        printf("\nO ALGARISMO DIGITADO FOI: %c", X);
    } // if ALGARISMO
    printf("\nPRESSIONAR <Enter> PARA TERMINAR.");
    getchar(); // para esperar
}
void metodo74()
{
    // PROGRAMA PARA LER CARACTERE E TESTAR SE NAO E' ALGARISMO
    // VARIAVEL:
    char X = '0';
    printf("EXEMPLO304 - LER E TESTAR CARACTERE");
    printf("\nFORNECER UM CARACTERE QUALQUER: ");
    scanf("%c", &X);
    getchar(); // limpar a entrada de dados
    if (!(X >= '0' && X <= '9'))
    {
        printf("\nNAO FOI DIGITADO UM ALGARISMO");
        printf("\nFOI DIGITADO O CARACTERE: %c", X);
    } // if NAO ALGARISMO
    printf("\nPRESSIONAR <Enter> PARA TERMINAR.");
    getchar(); // para esperar
}
void metodo75()
{
    // PROGRAMA PARA LER E TESTAR A IGUALDADE DE DOIS INTEIROS
    // VARIAVEIS:
    int X = 0, Y = 0;
    printf("EXEMPLO305 - LER E TESTAR DOIS VALORES INTEIROS");
    printf("\nFORNECER UM VALOR INTEIRO QUALQUER: ");
    scanf("%d", &X);
    getchar(); // limpar a entrada de dados
    printf("\nFORNECER OUTRO VALOR INTEIRO QUALQUER: ");
    scanf("%d", &Y);
    getchar(); // limpar a entrada de dados
    if (X == Y)
        printf("\nDOIS VALORES IGUAIS");
    else
    {
        printf("\n%d", X);
        printf(" DIFERENTE DE ");
        printf("%d", Y);
    }
    printf("\nPRESSIONAR <Enter> PARA TERMINAR.");
    getchar(); // para esperar
}
void metodo76()
{
    // PROGRAMA PARA LER E TESTAR DOIS VALORES REAIS
    // VARIAVEIS:
    double X = 0.0, Y = 0.0;
    printf("EXEMPLO306 - LER E TESTAR DOIS VALORES REAIS");
    printf("\nFORNECER UM VALOR REAL QUALQUER: ");
    scanf("%lf", &X);
    getchar(); // limpar a entrada de dados
    printf("\nFORNECER OUTRO VALOR REAL QUALQUER: ");
    scanf("%lf", &Y);
    getchar(); // limpar a entrada de dados
    if (!(X == Y))
    {
        printf("\n%lf", X);
        printf(" DIFERENTE DE ");
        printf("%lf", Y);
    }
    else
    {
        printf("VALORES IGUAIS");
    } // if VALORES DIFERENTES
    printf("\nPRESSIONAR <Enter> PARA TERMINAR.");
    getchar(); // para esperar
}
void metodo77()
{
    // PROGRAMA PARA TRATAR ALTERNATIVAS COM VALORES LOGICOS
    // VARIAVEIS:
    int X = 0, Y = 0;
    bool Z = false;
    printf("EXEMPLO307 - TRATAR VALORES LOGICOS");
    printf("\nFORNECER UM VALOR INTEIRO QUALQUER: ");
    scanf("%d", &X);
    getchar(); // limpar a entrada de dados
    printf("\nFORNECER OUTRO VALOR INTEIRO QUALQUER: ");
    scanf("%d", &Y);
    getchar(); // limpar a entrada de dados
    Z = (X == Y);
    if (Z)
        printf("VALORES IGUAIS");
    else
        printf("VALORES DIFERENTES");
    printf("\nPRESSIONAR <Enter> PARA TERMINAR.");
    getchar(); // para esperar
}
void metodo78()
{
    // PROGRAMA PARA LER E TESTAR UMA LETRA
    // VARIAVEL:
    char X = '0';
    printf("EXEMPLO308 - LER E TESTAR UMA LETRA");
    printf("\nFORNECER UMA LETRA QUALQUER: ");
    scanf("%c", &X);
    getchar(); // limpar a entrada de dados
    if (X >= 'A' && X <= 'Z')
        printf("FOI DIGITADA UMA LETRA MAIUSCULA");
    else if (X >= 'a' && X <= 'z')
        printf("FOI DIGITADA UMA LETRA MINUSCULA");
    else
        printf("NAO FOI DIGITADA UMA LETRA");
    printf("\nPRESSIONAR <Enter> PARA TERMINAR.");
    getchar(); // para esperar
}
void metodo79()
{
    // PROGRAMA PARA COMPARAR CARACTERES < , = , >
    // VARIAVEL:
    char X = '0';
    printf("EXEMPLO309 - COMPARAR CARACTERES < , = , >");
    printf("\nFORNECER UM DOS CARACTERES CITADOS: ");
    scanf("%c", &X);
    getchar(); // limpar a entrada de dados
    switch (X)
    {
    case '>':
        printf("FOI DIGITADO O SINAL DE MAIOR");
        break;
    case '=':
        printf("FOI DIGITADO O SINAL DE IGUAL");
        break;
    case '<':
        printf("FOI DIGITADO O SINAL DE MENOR");
        break;
    default:
        printf("FOI DIGITADO UM OUTRO CARACTERE QUALQUER");
    } // COMPARACAO DE X COM < , = , >
    printf("\nPRESSIONAR <Enter> PARA TERMINAR.");
    getchar(); // para esperar
}
void metodo80()
{
    // PROGRAMA PARA IDENTIFICAR CARACTERES
    // VARIAVEL
    char X = '0';
    printf("EXEMPLO310 - IDENTIFICAR CARACTERES");
    printf("\nFORNECER UM CARACTERE QUALQUER: ");
    scanf("%c", &X);
    getchar(); // limpar a entrada de dados
    switch (X)
    {
    case 'A':
    case 'E':
    case 'I':
    case 'O':
    case 'U':
        printf("FOI DIGITADO UMA VOGAL");
        break;
    case '0':
    case '1':
    case '2':
    case '3':
    case '4':
    case '5':
    case '6':
    case '7':
    case '8':
    case '9':
        printf("FOI DIGITADO UM ALGARISMO");
        printf("\nO NUMERO CORRESPONDENTE = %d", (X - 48));
        break;
    default:
        printf("FOI DIGITADO UM OUTRO CARACTERE QUALQUER");
    } // IDENTIFICACAO DE UM CARACTERE
    printf("\nPRESSIONAR <Enter> PARA TERMINAR.");
    getchar(); // para esperar
}
void metodo81()
{
    // PROGRAMA PARA LER E IMPRIMIR 03 VALORES INTEIROS
    // VARIAVEIS :
    int X = 0,
        CONTADOR = 0;
    // identificar
    printf("EXEMPLO0401 - LER E IMPRIMIR 03 VALORES INTEIROS");
    printf("\n"); // mudar de linha
    CONTADOR = 1;
    while (CONTADOR <= 3) // REPETIR
    {
        printf("\n"); // mudar de linha
        printf("%d. FORNECER UM VALOR INTEIRO : ", CONTADOR);
        scanf("%d", &X);
        getchar(); // limpar a entrada de dados
        printf("\nO VALOR DIGITADO FOI : %d\n", X);
        CONTADOR = CONTADOR + 1;
    } // ENQUANTO ( CONTADOR <= 3 )
      // encerrar
    printf("\n%s\n", "APERTAR <Enter> PARA TERMINAR.");
    getchar(); // para esperar
}
void metodo82()
{
    // PROGRAMA PARA LER E IMPRIMIR (N) VALORES INTEIROS
    // VARIAVEIS :
    int X = 0, N = 0, CONTADOR = 0;
    // identificar
    printf("EXEMPLO0402 - LER E IMPRIMIR (N) VALORES INTEIROS\n");
    printf("\nFORNECER O NUMERO DE VEZES (N) : ");
    scanf("%d", &N);
    getchar(); // limpar a entrada de dados
    CONTADOR = 1;
    while (CONTADOR <= N)
    {
        printf("\n%d", CONTADOR);
        printf(" FORNECER UM VALOR INTEIRO QUALQUER : ");
        scanf("%d", &X);
        getchar(); // limpar a entrada de dados
        printf("\nO VALOR DIGITADO FOI : %d\n", X);
        CONTADOR = CONTADOR + 1;
    } // ENQUANTO ( CONTADOR <= N )
      // encerrar
    printf("\n%s\n", "APERTAR <Enter> PARA TERMINAR.");
    getchar(); // para esperar
}
void metodo83()
{
    // PROGRAMA PARA LER E IMPRIMIR (N) VALORES INTEIROS
    // VARIAVEIS :
    int X = 0, N = 0;
    // identificar
    printf("EXEMPLO0403 - LER E IMPRIMIR (N) VALORES INTEIROS\n");
    printf("\nFORNECER O NUMERO DE VEZES (N) : ");
    scanf("%d", &N);
    getchar();    // limpar a entrada de dados
    while (N > 0) // REPETIR
    {
        printf("\n%d", N);
        printf(" FORNECER UM VALOR INTEIRO QUALQUER : ");
        scanf("%d", &X);
        getchar(); // limpar a entrada de dados
        printf("\nO VALOR DIGITADO FOI : %d\n", X);
        N = N - 1;
    } // ENQUANTO N > 0
      // encerrar
    printf("\n%s\n", "APERTAR <Enter> PARA TERMINAR.");
    getchar(); // para esperar
}
void metodo84()
{
    // PROGRAMA PARA LER E IMPRIMIR 03 VALORES INTEIROS
    // VARIAVEIS :
    int X = 0,
        CONTADOR = 0;
    // identificar
    printf("EXEMPLO0404 - LER E IMPRIMIR 03 VALORES INTEIROS\n");
    for (CONTADOR = 1; CONTADOR <= 3; CONTADOR = CONTADOR + 1)
    {
        printf("\n%d. FORNECER UM VALOR INTEIRO : ", CONTADOR);
        scanf("%d", &X);
        getchar(); // limpar a entrada de dados
        printf("\nO VALOR DIGITADO FOI : %d\n", X);
    } // PARA CONTADOR EM [1:3]
      // encerrar
    printf("\n%s\n", "APERTAR <Enter> PARA TERMINAR.");
    getchar(); // para esperar
}
void metodo85()
{
    // PROGRAMA PARA LER E IMPRIMIR (N) VALORES INTEIROS
    // VARIAVEIS :
    int X = 0,
        N = 0,
        CONTADOR = 0;
    // identificar
    printf("EXEMPLO0405 - LER E IMPRIMIR (N) VALORES INTEIROS\n");
    printf("\nFORNECER O NUMERO DE VEZES (N) : ");
    scanf("%d", &N);
    getchar(); // limpar a entrada de dados
    for (CONTADOR = 1; CONTADOR <= N; CONTADOR++)
    {
        printf("\n%d. FORNECER UM VALOR INTEIRO : ", CONTADOR);
        scanf("%d", &X);
        getchar(); // limpar a entrada de dados
        printf("\nO VALOR DIGITADO FOI : %d", X);
    } // PARA CONTADOR EM [1:N]
      // encerrar
    printf("\n%s\n", "APERTAR <Enter> PARA TERMINAR.");
    getchar(); // para esperar
}
void metodo86()
{
    // PROGRAMA PARA LER E IMPRIMIR 03 VALORES INTEIROS
    // VARIAVEIS :
    int X = 0,
        CONTADOR = 0;
    // identificar
    printf("EXEMPLO0406 - LER E IMPRIMIR 03 VALORES INTEIROS\n");
    CONTADOR = 1;
    do // REPETIR
    {
        printf("\n%d. FORNECER UM VALOR INTEIRO : ", CONTADOR);
        scanf("%d", &X);
        getchar(); // limpar a entrada de dados
        printf("\nO VALOR DIGITADO FOI : %d\n", X);
        CONTADOR = CONTADOR + 1;
    } while (CONTADOR <= 3); // ATE' ( CONTADOR > 3 )
                             // encerrar
    printf("\n%s\n", "APERTAR <Enter> PARA TERMINAR.");
    getchar(); // para esperar
}
void metodo87()
{
    // PROGRAMA PARA LER E IMPRIMIR (N) VALORES INTEIROS
    // VARIAVEIS :
    int X = 0,
        CONTADOR = 0;
    // identificar
    printf("EXEMPLO0407 - LER E IMPRIMIR (N) VALORES INTEIROS\n");
    printf("\nFORNECER O NUMERO DE VEZES (N) : ");
    scanf("%d", &CONTADOR);
    getchar(); // limpar a entrada de dados
    do         // REPETIR
    {
        printf("\n%d. FORNECER UM VALOR INTEIRO : ", CONTADOR);
        scanf("%d", &X);
        printf("\nO VALOR DIGITADO FOI : %d\n", X);
        CONTADOR = CONTADOR - 1;
    } while (CONTADOR > 0); // ATE' ( CONTADOR <= 3 )
                            // encerrar
    printf("\n%s\n", "APERTAR <Enter> PARA TERMINAR.");
    getchar(); // para esperar
}
void metodo88()
{
    // PROGRAMA PARA LER E IMPRIMIR INTEIROS DIFERENTES DE ZERO
    // VARIAVEL :
    int X = 0;
    // identificar
    printf("EXEMPLO0408 - LER E IMPRIMIR INTEIROS NAO NULOS\n");
    printf("\nFORNECER UM VALOR INTEIRO (0 = PARAR) : ");
    scanf("%d", &X);
    getchar();     // limpar a entrada de dados
    while (X != 0) // REPETIR
    {
        printf("\nO VALOR DIGITADO FOI : %d\n", X);
        printf("\nDIGITE UM VALOR INTEIRO QUALQUER : ");
        scanf("%d", &X);
    } // ENQUANTO X DIFERENTE DE ZERO
      // encerrar
    printf("\n%s\n", "APERTAR <Enter> PARA TERMINAR.");
    getchar(); // para esperar
}
void metodo89()
{
    // PROGRAMA PARA LER UM INTEIRO DIFERENTE DE ZERO
    // VARIAVEL :
    int X = 0;
    // identificar
    printf("EXEMPLO0409 - PARA LER UM INTEIRO NAO NULO\n");
    printf("\nFORNECER UM VALOR DIFERENTE DE ZERO : ");
    scanf("%d", &X);
    getchar();     // limpar a entrada de dados
    while (X == 0) // REPETIR
    {
        printf("\nFORNECER UM VALOR DIFERENTE DE ZERO : ");
        scanf("%d", &X);
        getchar(); // limpar a entrada de dados
    }              // ENQUANTO X IGUAL A ZERO
    printf("\nDIGITADO UM NUMERO DIFERENTE DE ZERO\n");
    // encerrar
    printf("\n%s\n", "APERTAR <Enter> PARA TERMINAR.");
    getchar(); // para esperar
}
void metodo90()
{
    // PROGRAMA PARA LER UM INTEIRO DIFERENTE DE ZERO
    // VARIAVEL :
    int X = 0;
    // identificar
    printf("EXEMPLO0410 - LER UM INTEIRO NAO NULO\n");
    do // REPETIR
    {
        printf("\nFORNECER UM VALOR DIFERENTE DE ZERO : ");
        scanf("%d", &X);
        getchar();    // limpar a entrada de dados
    } while (X == 0); // ATE' X DIFERENTE DE ZERO
    printf("\nDIGITADO UM NUMERO DIFERENTE DE ZERO\n");
    // encerrar
    printf("\n%s\n", "APERTAR <Enter> PARA TERMINAR.");
    getchar(); // para esperar
}
void P1(void)
{
    printf("\n");
    printf("\nCHAMADO O PROCEDIMENTO P1 SEM PARAMETROS");
    printf("\n");
} // fim procedimento P1( )
void metodo91()
{
    // PROGRAMA PARA CHAMADA DE PROCEDIMENTO SEM PARAMETROS
    // identificar
    printf("EXEMPLO0501 - CHAMADA A UM PROCEDIMENTO");
    P1(); // chamada ao procedimento
    printf("\n");
    // encerrar
    printf("\nAPERTAR <Enter> PARA TERMINAR.");
    getchar(); // para esperar
}
void metodo92()
{
    // PROGRAMA PARA MOSTRAR PASSAGENS DE PARAMETROS
    // identificar
    printf("EXEMPLO0502 - CHAMADA COM VARIAVEL GLOBAL\n");
    for (int X = 1; X <= 5; X = X + 1)
        P1(); // chamar 5 vezes
    printf("\n");
    // encerrar
    printf("\nAPERTAR <Enter> PARA TERMINAR.");
    getchar(); // para esperar
}
void P1_2(void)
{
    int X = 0;
    X = X + 1; // AVANCAR O CONTEXTO
    printf("\nCHAMADO O PROCEDIMENTO P1 %d VEZ(ES)", X);
    printf("\n");
    if (X < 5)
        P1_2(); // CHAMAR O PROCEDIMENTO RECURSIVAMENTE
    printf("\nRETORNANDO AO PROCEDIMENTO P1 PARA A CHAMADA %d", X);
    X = X - 1; // RETORNAR AO CONTEXTO ANTERIOR
    getchar(); // para esperar
} // fim procedimento P1( )
void metodo93()
{
    // PROGRAMA PARA MOSTRAR PASSAGENS DE PARAMETROS
    // identificar
    printf("EXEMPLO0503 - CHAMADA/RETORNO COM VARIAVEL GLOBAL\n");
    P1_2(); // OBSERVAR A RECURSIVIDADE !
    printf("\n");
    // encerrar
    printf("\nAPERTAR <Enter> PARA TERMINAR.");
    getchar(); // para esperar
}
void P1_3(int X)
{
    printf("\nCHAMADO O PROCEDIMENTO P1 %d VEZ(ES)\n", X);
    if (X < 5)
        P1_3(X + 1); // chamar recursivamente com parametro
    printf("\nRETORNANDO AO PROCEDIMENTO P1 PARA A CHAMADA %d", X);
    getchar(); // para esperar
} // fim procedimento P1( )
void metodo94()
{
    // PROGRAMA PARA MOSTRAR PASSAGENS DE PARAMETROS
    // identificar
    printf("EXEMPLO0904 - CHAMADA/RETORNO COM PARAMETRO\n");
    P1_3(1); // OBSERVAR REPETICAO FINITA, SEM VARIAVEL GLOBAL !
    printf("\n");
    // encerrar
    printf("\nAPERTAR <Enter> PARA TERMINAR.");
    getchar(); // para esperar
}
void P1_4(int X)
{
    printf("\nCHAMADO O PROCEDIMENTO P1 %d VEZ(ES)\n", X);
    if (X > 1)
        P1_4(X - 1);
    printf("\nRETORNANDO AO PROCEDIMENTO P1 PARA A CHAMADA %d", X);
    getchar(); // para esperar
} // fim procedimento P1( )
void metodo95()
{
    // PROGRAMA PARA MOSTRAR PASSAGEM DE PARAMETRO POR VALOR
    // identificar
    printf("EXEMPLO0505 - CHAMADA/RETORNO COM PARAMETRO\n");
    P1_4(5); // OBSERVAR REPETICAO FINITA, SEM VARIAVEL GLOBAL !
    printf("\n");
    // encerrar
    printf("\nAPERTAR <Enter> PARA TERMINAR.");
    getchar(); // para esperar
}
void P2(int X); // PROTOTIPO DE PROCEDIMENTO
void P1_5(int X)
{
    printf("CHAMADO O PROCEDIMENTO P1 COM X = %d\n", X);
    if (X < 5)
        P2(X);
    printf("RETORNANDO AO PROCEDIMENTO P1 PARA A CHAMADA COM X = %d\n", X);
    getchar(); // para esperar
} // fim do procedimento P1( )
void P2(int X)
{
    printf("CHAMADO O PROCEDIMENTO P2 COM X = %d\n", X);
    X = X + 1;
    printf("RETORNANDO AO PROCEDIMENTO P2 PARA A CHAMADA COM X = %d\n", X);
    getchar(); // para esperar
    P1_5(X);
} // fim do procedimento P2( )
void metodo96()
{
    // PROGRAMA PARA MOSTRAR PASSAGENS DE PARAMETROS
    // identificar
    printf("EXEMPLO0506 - CHAMADA/RETORNO COM PARAMETRO\n\n");
    P1_5(1); // OBSERVAR RECURSIVIDADE INDIRETA !
    printf("\n");
    // encerrar
    printf("\nAPERTAR <Enter> PARA TERMINAR.");
    getchar(); // para esperar
}
void P1_6(int *X)
{
    *X = *X + 1; // AVANCAR O CONTEXTO NA REFERENCIA
    printf("\nCHAMADO O PROCEDIMENTO P1 %d VEZ(ES)\n", *X);
    if (*X < 5)
        P1_6(X);
    printf("\nRETORNANDO AO PROCEDIMENTO P1 PARA A CHAMADA %d", *X);
    *X = *X - 1; // RETORNAR AO CONTEXTO DA REFERENCIA ANTERIOR
    getchar();   // para esperar
} // fim procedimento P1( )
void metodo97()
{
    // PROGRAMA PARA MOSTRAR PASSAGEM DE PARAMETRO POR REFERENCIA
    // VARIAVEL LOCAL
    int X;
    // identificar
    printf("EXEMPLO0507 - CHAMADA/RETORNO COM REFERENCIA\n");
    X = 0;
    P1_6(&X); // OBSERVAR REPETICAO FINITA !
    printf("\n");
    // encerrar
    printf("\nAPERTAR <Enter> PARA TERMINAR.");
    getchar(); // para esperar
}
void P2_1(int X); // PROTOTIPO DE PROCEDIMENTO
void P1_7(int X)
{
    X = X + 1;
    printf("CHAMADO O PROCEDIMENTO P1 COM X = %d\n", X);
    if (X < 4)
    {
        P1_7(X);
        P2_1(X);
    }
    printf("\nRETORNANDO AO PROCEDIMENTO P1 PARA A CHAMADA COM X = %d\n", X);
    getchar(); // para esperar
} // fim do procedimento P1( )
void P2_2(int X)
{
    printf("CHAMADO O PROCEDIMENTO P2 COM X = %d\n", X);
    if (X > 1)
        P2_1(X - 1);
    printf("RETORNANDO AO PROCEDIMENTO P2 PARA A CHAMADA COM X = %d", X);
    getchar(); // para esperar
} // fim procedimento P2( )
void metodo98()
{
    // PROGRAMA PARA MOSTRAR PASSAGENS DE PARAMETROS
    // identificar
    printf("EXEMPLO0508 - MULTIPLAS CHAMADAS/RETORNOS\n\n");
    P1_7(1);
    printf("\n");
    // encerrar
    printf("\nAPERTAR <Enter> PARA TERMINAR.");
    getchar(); // para esperar
}
void metodo99()
{
    // PROGRAMA PARA MOSTRAR O USO DE MODULOS
    // identificar
    println("EXEMPLO0509 - USO DE MODULOS");
    // encerrar
    pause("APERTAR <Enter> PARA TERMINAR.");
}
void metodo100()
{
    // PROGRAMA PARA MOSTRAR O USO DE MODULOS
    // VARIAVEIS :
    chars text = "MUDAR DE LINHA";
    // identificar
    println("EXEMPLO0510 - USO DE MODULOS");
    printf("%c", EOL);
    printf("%s%c", text, EOL);
    // encerrar
    pause("PRESSIONAR <Enter> PARA TERMINAR.");
}

void identificacao()
{
    printf("\n");
    printf("Exemplo000 - Programa = v0.0\n");
    printf("Autor: Vinicius Miranda de Araujo\n");
    printf("\n");
}
void menu()
{
    // para mostrar opcoes
    printf("Escolha alguma das opcoes a seguir:\n");
    printf("51 - M01     76 - M26\n");
    printf("52 - M01     77 - M27\n");
    printf("53 - M01     78 - M28\n");
    printf("54 - M01     79 - M29\n");
    printf("55 - M01     80 - M30\n");
    printf("56 - M01     81 - M31\n");
    printf("57 - M01     82 - M32\n");
    printf("58 - M01     83 - M33\n");
    printf("59 - M01     84 - M34\n");
    printf("60 - M01     85 - M35\n");
    printf("61 - M01     86 - M36\n");
    printf("62 - M01     87 - M37\n");
    printf("63 - M01     88 - M38\n");
    printf("64 - M01     89 - M39\n");
    printf("65 - M01     90 - M40\n");
    printf("66 - M01     91 - M41\n");
    printf("67 - M01     92 - M42\n");
    printf("68 - M01     93 - M43\n");
    printf("69 - M01     94 - M44\n");
    printf("70 - M01     95 - M45\n");
    printf("71 - M01     96 - M46\n");
    printf("72 - M01     97 - M47\n");
    printf("73 - M01     98 - M48\n");
    printf("74 - M01     99 - M49\n");
    printf("75 - M01     100 - M50\n");
}
/*
 Funcao principal
*/
int main()
{
    int opcao = 0;

    void identificacao();

    do
    {
        // para mostrar opcoes
        menu();
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
        case 51: // executar metodo 01
            metodo51();
            break;
        case 52:
            metodo52();
            break;
        case 53:
            metodo53();
            break;
        case 54:
            metodo54();
            break;
        case 55:
            metodo55();
            break;
        case 56:
            metodo56();
            break;
        case 57:
            metodo57();
            break;
        case 58:
            metodo58();
            break;
        case 59:
            metodo59();
            break;
        case 60:
            metodo60();
            break;
        case 61:
            metodo61();
            break;
        case 62:
            metodo62();
            break;
        case 63:
            metodo63();
            break;
        case 64:
            metodo64();
            break;
        case 65:
            metodo65();
            break;
        case 66:
            metodo66();
            break;
        case 67:
            metodo67();
            break;
        case 68:
            metodo69();
            break;
        case 70:
            metodo70();
            break;
        case 71:
            metodo71();
            break;
        case 72:
            metodo72();
            break;
        case 73:
            metodo73();
            break;
        case 74:
            metodo74();
            break;
        case 75:
            metodo75();
            break;
        case 76:
            metodo76();
            break;
        case 77:
            metodo77();
            break;
        case 78:
            metodo78();
            break;
        case 79:
            metodo79();
            break;
        case 80:
            metodo80();
            break;
        case 81:
            metodo81();
            break;
        case 82:
            metodo82();
            break;
        case 83:
            metodo83();
            break;
        case 84:
            metodo84();
            break;
        case 85:
            metodo85();
            break;
        case 86:
            metodo86();
            break;
        case 87:
            metodo87();
            break;
        case 88:
            metodo88();
            break;
        case 89:
            metodo89();
            break;
        case 90:
            metodo90();
            break;
        case 91:
            metodo91();
            break;
        case 92:
            metodo92();
            break;
        case 93:
            metodo93();
            break;
        case 94:
            metodo94();
            break;
        case 95:
            metodo95();
            break;
        case 96:
            metodo96();
            break;
        case 97:
            metodo97();
            break;
        case 98:
            metodo98();
            break;
        case 99:
            metodo99();
            break;
        case 100:
            metodo100();
            break;
        default: // comportamento padrao
            printf("\nERRO: Opcao invalida.\n");
            break;
        } // end switch
    } while (opcao != 0);
    // encerrar
    printf("\n\nApertar ENTER para terminar.");
    getchar(); // aguardar por ENTER

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
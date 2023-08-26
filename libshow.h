/**
   Biblioteca Show - IO - Console Input/Output library.
   PUC-Minas - ICEI
   @author  Vinícius Miranda de Araújo
   @version 0.1 - 2023-1b

   SHOW - v2023-1_0.1 - 22 / 08 / 2023
   Author: Vinícius Miranda de Araújo

*/

// ---------------------- lista de dependencias

#include <stdio.h>   // para entradas e saidas
#include <stdlib.h>  // para a biblioteca padrao
#include <stddef.h>  // para definicoes basicas
#include <stdbool.h> // para definicoes logicas
#include <string.h>  // para cadeias de caracteres
#include <ctype.h>   // para tipos padroes
#include <math.h>    // para definicoes matematicas

// ---------------------- redefinicoes uteis

#ifndef _SHOW_H_
#define _SHOW_H_

#define print printf
#define scan scanf
#define fprint fprintf
#define fscan fscanf

// ---------------------- definicoes de constantes

#define PI 3.14159265358979323846
#define E 2.71828182845904523536

const int STR_SIZE = 80; // definir tamanho padrao para caracteres

// ---------------------- definicoes de variaveis globais

// ---------------------- para entradas e saidas

/**
    Metodo para limpar a entrada de dados padrao.
*/
void flush()
{
    int x = 0;
    do
    {
        x = getchar();
    } while (x != EOF && x != '\n');
    clearerr(stdin); // reiniciar o estado de EOF
} // end flush ( )

/**
    Metodo para identificar o programa e a autoria.
    @param prog Nome do programa.
    @param autor Autor do programa.
*/
void id(const char *const prog, const char *const autor)
{
    print("\n");
    print("%s\n", prog);
    print("%s\n", autor);
    print("\n");
} // end id ( )

/**
    Funcao para ler valor inteiro do teclado.
    @return Valor lido.
    @param  text Mensagem a ser exibida antes da leitura.
*/
int readint(const char *const text)
{
    int x = 0;
    print("%s", text);
    scan("%d", &x);
    flush();
    return (x);
} // end readint ( )

/**
    Funcao para ler valor real de precisao simples do teclado.
    @return Valor lido.
    @param  text Mensagem a ser exibida antes da leitura.
*/
float readfloat(const char *const text)
{
    float x = 0.0;
    print("%s", text);
    scan("%f", &x);
    flush();
    return (x);
} // end readfloat ( )

/**
    Funcao para ler valor real de precisao dupla do teclado.
    @return Valor lido.
    @param  text Mensagem a ser exibida antes da leitura.
*/
double readdouble(const char *const text)
{
    double x = 0.0;
    print("%s", text);
    scan("%lf", &x);
    flush();
    return (x);
} // end readdouble ( )

/**
    Funcao para ler valor logico do teclado.
    @return Valor lido.
    @param  text Mensagem a ser exibida antes da leitura.
    OBS.:   Usar zero (0) para falso e
            diferente de zero para verdadeiro
*/
bool readbool(const char *const text)
{
    int x = 0;
    print("%s", text);
    scan("%d", &x);
    flush();
    return (x != 0);
} // end readbool ( )

/**
    Funcao para ler caractere do teclado.
    @return Valor lido.
    @param  text Mensagem a ser exibida antes da leitura.
*/
char readchar(const char *const text)
{
    char x = '0';
    print("%s", text);
    x = getchar();
    flush();
    return (x);
} // end readchar ( )

/**
    Funcao para mostrar na tela uma matriz de inteiros.
    @param  array Vetor.
    @param  size Quantidade de elementos do vetor.
*/
void printArray(int vetor[], int n)
{
    int i = 0;
    print("\n%s\n", "Vetor: ");
    for (i = 0; i < n; i = i + 1)
    {
        print(" [ %2d ] ", vetor[i]);
    }
    print("\n");
} // end printArray()

/**
    Funcao inverter as posicoes de um vetor.
    @param  array Vetor.
    @param  size Quantidade de elementos do vetor.
*/
void reverseArray(int vetor[], int n)
{
    int i = 0;
    for (i = 0; i < n / 2; i++)
    {
        int temp = vetor[i];
        vetor[i] = vetor[n - 1 - i];
        vetor[n - 1 - i] = temp;
    }
} // end reverseArray

/**
    Funcao para mostrar na tela uma matriz de inteiros.
    @param  lin Numero de linhas da matriz.
    @param  col Numero de colunas da matriz.
    @param  matrix Matriz .
*/
void printMatriz(int nLin, int nCol, const int matriz[][nCol])
{
    int i = 0, j = 0;
    print("\n%s\n", "Matriz: ");
    for (i = 0; i < nLin; i = i + 1)
    {
        for (j = 0; j < nCol; j = j + 1)
        {
            print(" [ %2d ] ", matriz[i][j]);
        }
        print("\n");
    }
    print("\n");
} // end printMatriz()

#endif
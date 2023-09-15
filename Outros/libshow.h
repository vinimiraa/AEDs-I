/**
    Biblioteca Show - IO - Console Input/Output library.
    PUC-Minas - ICEI
    @author  Vinícius Miranda de Araújo
    @version 0.1 - 2023-2b

    LIBSHOW - v2023-2_0.1 - 22 / 08 / 2023
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

// #define PI 3.14159265358979323846
// #define E 2.71828182845904523536
const long double PI = 3.14159265358979323846; // definir valor de pi
const long double E = 2.71828182845904523536;  // definir valor do numero de Euler
const int STR_SIZE = 80;                       // definir tamanho padrao para caracteres

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
    Metodo para identificar o programa.
    @param name Nome do programa.
*/
void id(const char *const name)
{
    print("\n%s\n", name);
} // end id ( )

/*
    Metodo para limpar o terminal
*/
void clear() {
	system("cls");  //only for windows
} // end clear()

// ---------------------- para entrada e leitura de dados

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
    Funcao para ler cadeia de caracteres.
    @return cadeia de caracteres
    @param text - mensagem a ser exibida antes da leitura
 */
char *readstring(const char *const text)
{
    char *word = (char *)malloc((STR_SIZE + 1) * sizeof(char));
    print("%s", text);
    scan("%80[^\n]", word); // ler cadeia de caracteres
    flush();
    return (word);
} // end readString ( )

// ---------------------- para checar dados

/**
    Funcao para ver se o numero e par.
    @return true se par; falso caso contrario.
    @param  number Numero a ser lido.
*/
bool isEven(int x)
{
    bool result = false;
    if (x % 2 == 0)
    {
        result = true;
    } // end if
    return (result);
} // end isEven()

/**
    Funcao para ver se o numero e impar.
    @return true se impar; falso caso contrario.
    @param  number Numero a ser lido.
*/
bool isOdd(int x)
{
    bool result = false;
    if (x % 2 != 0)
    {
        result = true;
    } // end if
    return (result);
} // end isOdd()

/**
    Funcao para ver se o numero e positivo.
    @return true se positivo; falso caso contrario.
    @param  number Numero a ser lido.
*/
bool isPositive(int x)
{
    bool result = false;
    if (x >= 0)
    {
        result = true;
    } // end if
    return (result);
} // end isPositive()

/**
    Funcao para ver se o numero e negativo.
    @return true se negativo; falso caso contrario.
    @param  number Numero a ser lido.
*/
bool isNegative(int x)
{
    bool result = false;
    if (x < 0)
    {
        result = true;
    } // end if
    return (result);
} // end isNegative()

/**
    Funcao para ver se o numero e negativo.
    @return true se maiuscula; falso caso contrario.
    @param  char Caractere a ser lido.
*/
bool isUpper(char c)
{
    bool result = false;
    if ( 'A' <= c && c <= 'Z' )
    {
        result = true;
    } // end if
    return (result);
} // end isUpper()

/**
    Funcao para ver se o numero e negativo.
    @return true se minuscula; falso caso contrario.
    @param  char Caractere a ser lido.
*/
bool isLower(char c)
{
    bool result = false;
    if ( 'a' <= c && c <= 'z' )
    {
        result = true;
    } // end if
    return (result);
} // end isLower()

/**
    Funcao para ver se o numero e negativo.
    @return true se digito; falso caso contrario.
    @param  char Caractere a ser lido.
*/
bool isDigit(char c)
{
    bool result = false;
    if ( '0' <= c && c <= '1' )
    {
        result = true;
    } // end if
    return (result);
} // end isDigit()

/**
    Funcao para ver se o numero e negativo.
    @return true se letra; falso caso contrario.
    @param  char Caractere a ser lido.
*/
bool isAlpha(char c)
{
    bool result = false;
    if ( isLower(c) || isUpper(c) )
    {
        result = true;
    } // end if
    return (result);
} // end isAlpha()

/**
    Funcao para ver se o numero e negativo.
    @return true se letra ou digito; falso caso contrario.
    @param  char Caractere a ser lido.
*/
bool isAlnum(char c)
{
    bool result = false;
    if ( isAlpha(c) || isDigit(c) )
    {
        result = true;
    } // end if
    return (result);
} // end isAlnum()

/**
    Funcao para ver se o numero e negativo.
    @return true se espaco; falso caso contrario.
    @param  char Caractere a ser lido.
*/
bool isSpace(char c)
{
    bool result = false;
    if ( c == ' ' )
    {
        result = true;
    } // end if
    return (result);
} // end isSpace()

// ---------------------- para estrutura de dados homogeneas

/**
    Funcao para mostrar na tela um vetor.
    @param  array Vetor.
    @param  size Quantidade de elementos do vetor.
*/
void printArray(int vetor[], int n)
{
    int i = 0;
    print("\n%s\n", "Vetor: ");
    for (i = 0; i < n; i = i + 1)
    {
        print("[ %2d ] ", vetor[i]);
    } // end for
    print("\n");
} // end printArray()

/**
    Funcao para inverter as posicoes de um vetor.
    @param  array Vetor.
    @param  size Quantidade de elementos do vetor.
*/
void reverseArray(int vetor[], int n)
{
    int i = 0;
    for (i = 0; i < n / 2; i++)
    {
        int aux = vetor[i];
        vetor[i] = vetor[n - 1 - i];
        vetor[n - 1 - i] = aux;
    } // end for
} // end reverseArray()

/**
    Funcao para retornar o maior elemento de um vetor.
    @param  array Vetor.
    @param  size Quantidade de elementos do vetor.
*/
int maxArray(int vetor[], int n)
{
    int i = 0, maior = 0;
    maior = vetor[0];
    for (i = 0; i < n; i++)
    {
        if (vetor[i] > maior)
        {
            maior = vetor[i];
        } // end if
    } // end for
    return (maior);
} // end maxArray()

/**
    Funcao para retornar o menor elemento de um vetor.
    @param  array Vetor.
    @param  size Quantidade de elementos do vetor.
*/
int minArray(int vetor[], int n)
{
    int i = 0, menor = 0;
    menor = vetor[0];
    for (i = 0; i < n; i++)
    {
        if (vetor[i] < menor)
        {
            menor = vetor[i];
        } // end if
    } // end for
    return (menor);
} // end maxArray()

/**
    Funcao para mostrar na tela uma matriz.
    @param  row Numero de linhas da matriz.
    @param  col Numero de colunas da matriz.
    @param  matrix Matriz.
*/
void printMatrix(int nLin, int nCol, const int matriz[][nCol])
{
    int i = 0, j = 0;
    print("\n%s\n", "Matriz: ");
    for (i = 0; i < nLin; i = i + 1)
    {
        for (j = 0; j < nCol; j = j + 1)
        {
            print("[ %2d ] ", matriz[i][j]);
        } // end for
        print("\n");
    } // end for
} // end printMatriz()

/**
    Funcao para mostrar os elementos da diagonal principal de uma matriz.
    @param  row Numero de linhas da matriz.
    @param  col Numero de colunas da matriz.
    @param  matrix Matriz.
*/
void leadingMatrix(int nLin, int nCol, int matriz[][nCol])
{
    int i = 0;
    print("\n%s\n", "Diagonal Principal da Matriz: ");
    if (nLin != nCol)
    {
        print("\n%s\n", " ERRO: a matriz nao e quadrada!");
    } // end if
    else
    {
        for (i = 0; i < nLin; i = i + 1)
        {
            print("[ %2d ] ", matriz[i][i]);
        } // end for
        print("\n");
    } // end else
} // end leadingMatrix()

/**
    Funcao para mostrar os elementos da diagonal secundaria de uma matriz.
    @param  row Numero de linhas da matriz.
    @param  col Numero de colunas da matriz.
    @param  matrix Matriz.
*/
void secondaryMatrix(int nLin, int nCol, int matriz[][nCol])
{
    int i = 0;
    print("\n%s\n", "Diagonal Secundaria da Matriz: ");
    if (nLin != nCol)
    {
        print("\n%s\n", " ERRO: a matriz nao e quadrada!");
    } // end if
    else
    {
        for (i = 0; i < nLin; i = i + 1)
        {
            print("[ %2d ] ", matriz[i][nLin - 1 - i]);
        } // end for
        print("\n");
    } // end else
} // end secondaryMatrix()

/**
    Funcao para mostrar os elementos abaixo da diagonal principal de uma matriz.
    @param  row Numero de linhas da matriz.
    @param  col Numero de colunas da matriz.
    @param  matrix Matriz.
*/
void inferiorMatrix(int nLin, int nCol, int matriz[][nCol])
{
    int i = 0, j = 0;
    print("\n%s\n", "Elementos Abaixo da Diagonal Principal da Matriz: ");
    if (nLin != nCol)
    {
        print("\n%s\n", " ERRO: a matriz nao e quadrada!");
    } // end if
    else
    {
        for (i = 0; i < nLin; i = i + 1)
        {
            for (j = 0; j < nCol; j = j + 1)
            {
                if (i > j)
                {
                    print("[ %2d ] ", matriz[i][j]);
                } // end if
            } // end for
        } // end for
        print("\n");
    } // end else
} // end inferiorMatrix()

/**
    Funcao para mostrar os elementos acima da diagonal principal de uma matriz.
    @param  row Numero de linhas da matriz.
    @param  col Numero de colunas da matriz.
    @param  matrix Matriz.
*/
void superiorMatrix(int nLin, int nCol, int matriz[][nCol])
{
    int i = 0, j = 0;
    print("\n%s\n", "Elementos Acima da Diagonal Principal da Matriz: ");
    if (nLin != nCol)
    {
        print("\n%s\n", " ERRO: a matriz nao e quadrada!");
    } // end if
    else
    {
        for (i = 0; i < nLin; i = i + 1)
        {
            for (j = 0; j < nCol; j = j + 1)
            {
                if (i < j)
                {
                    print("[ %2d ] ", matriz[i][j]);
                } // end if
            }     // end for
        }         // end for
        print("\n");
    } // end else
} // end superiorMatrix()

// ---------------------- outros procedimentos

/**
    Funcao para ver os divisores e sua quantidade de divisores de um numero.
    @param number Numero a ser lido.
*/
void dividers(int x)
{
    int divisor = 1;
    int count = 0;
    if (x < 0)
    {
        x = (-1) * x;
    } // end if
    print("\n%s", "Divisores =");
    while (divisor <= x)
    {
        if (x % divisor == 0)
        {
            print(" %d", divisor);
            count = count + 1;
        } // end if
        divisor = divisor + 1;
    } // end while
    print("\n%s%d\n", "Quantidade de Divisores = ", count);
} // end dividers()

#endif
/**
    Biblioteca Matrix - IO - Console Input/Output library.
    PUC-Minas - ICEI
    @author  Vinícius Miranda de Araújo
    @version 0.1 - 2023-2b

    MATRIX - v2023-2_0.1 - 25 / 10 / 2023
    Author: Vinícius Miranda de Araújo

*/

// ---------------------- lista de dependencias

#include <stdio.h>   // para entradas e saidas
#include <stdlib.h>  // para a biblioteca padrao
#include <stddef.h>  // para definicoes basicas
#include <stdbool.h> // para definicoes logicas
#include <stdarg.h>  // para tratar argumentos
#include <string.h>  // para cadeias de caracteres
#include <ctype.h>   // para tipos padroes
#include <math.h>    // para definicoes matematicas
#include <time.h>    // para medir tempo
#include <wchar.h>   // para 16-bit characters

// ---------------------- redefinicoes uteis

#ifndef _MATRIX_H_
#define _MATRIZ_H_

// ---------------------- definicoes de constantes

const int MAX_SIZE = 10 ;  // definir tamanho padrao para matrizes

// ---------------------- definicoes de variaveis globais

// ---------------------- para entradas e saidas

#endif

// ---------------------- estrutura de dados homogeneas

// /**
//     Funcao para mostrar na tela um vetor.
//     @param  size Quantidade de elementos do vetor.
//     @param  array Vetor.
// */
// void printArray(int n, int vetor[])
// {
//     int i = 0;
//     print("\n");
//     for (i = 0; i < n; i = i + 1)
//     {
//         print("%2d: %d\n", i, vetor[i]);
//     } // end for
//     print("\n");
// } // end printArray ( )

// /**
//     Funcao para inverter as posicoes de um vetor.
//     @param  size Quantidade de elementos do vetor.
//     @param  array Vetor.
// */
// void reverseArray(int n,int vetor[])
// {
//     int i = 0;
//     for (i = 0; i < n / 2; i++)
//     {
//         int aux = vetor[i];
//         vetor[i] = vetor[n - 1 - i];
//         vetor[n - 1 - i] = aux;
//     } // end for
// } // end reverseArray ( )

// /**
//     Funcao para retornar o maior elemento de um vetor.
//     @param  size Quantidade de elementos do vetor.
//     @param  array Vetor.
// */
// int maxArray(int n,int vetor[])
// {
//     int i = 0, maior = 0;
//     maior = vetor[0];
//     for (i = 0; i < n; i++)
//     {
//         if (vetor[i] > maior)
//         {
//             maior = vetor[i];
//         } // end if
//     }     // end for
//     return (maior);
// } // end maxArray ( )

// /**
//     Funcao para retornar o menor elemento de um vetor.
//     @param  size Quantidade de elementos do vetor.
//     @param  array Vetor.
// */
// int minArray(int n,int vetor[])
// {
//     int i = 0, menor = 0;
//     menor = vetor[0];
//     for (i = 0; i < n; i++)
//     {
//         if (vetor[i] < menor)
//         {
//             menor = vetor[i];
//         } // end if
//     }     // end for
//     return (menor);
// } // end maxArray ( )

// /**
//     Funcao para mostrar uma matriz.
//     @param  row Numero de linhas da matriz.
//     @param  col Numero de colunas da matriz.
//     @param  matrix Matriz.
// */
// void printMatrix(int row, int col, int matrix[][col])
// {
//     int L = 0, C = 0;
//     print("\n");
//     for (L = 0; L < row; L = L + 1)
//     {
//         for (C = 0; C < col; C = C + 1)
//         {
//             print("[ %2d ] ", matrix[L][C]);
//         } // end for
//         print("\n");
//     } // end for
//     print("\n");
// } // end printMatrix ( )

// /**
//     Funcao para mostrar os elementos da diagonal principal de uma matriz.
//     @param  row Numero de linhas da matriz.
//     @param  col Numero de colunas da matriz.
//     @param  matrix Matriz.
// */
// void leadingMatrix(int row, int col, int matriz[][col])
// {
//     int L = 0;
//     print("\n");
//     for (L = 0; L < row; L = L + 1)
//     {
//         print("[ %2d ] ", matriz[L][L]);
//     } // end for
//     print("\n");
// } // end leadingMatrix ( )

// /**
//     Funcao para mostrar os elementos da diagonal secundaria de uma matriz.
//     @param  row Numero de linhas da matriz.
//     @param  col Numero de colunas da matriz.
//     @param  matrix Matriz.
// */
// void secondaryMatrix(int row, int col, int matrix[][col])
// {
//     int L = 0;
//     print("\n");
//     for (L = 0; L < row; L = L + 1)
//     {
//         print("[ %2d ] ", matrix[L][row - 1 - L]);
//     } // end for
//     print("\n");
// } // end secondaryMatrix ( )

// /**
//     Funcao para mostrar os elementos abaixo da diagonal principal de uma matriz.
//     @param  row Numero de linhas da matriz.
//     @param  col Numero de colunas da matriz.
//     @param  matrix Matriz.
// */
// void inferiorMatrix(int row, int col, int matrix[][col])
// {
//     int L = 0, C = 0;
//     print("\n");
//     for (L = 0; L < row; L = L + 1)
//     {
//         for (C = 0; C < col; C = C + 1)
//         {
//             if (L > C)
//             {
//                 print("[ %2d ] ", matrix[L][C]);
//             } // end if
//         }     // end for
//     }         // end for
//     print("\n");
// } // end inferiorMatrix ( )

// /**
//     Funcao para mostrar os elementos acima da diagonal principal de uma matriz.
//     @param  row Numero de linhas da matriz.
//     @param  col Numero de colunas da matriz.
//     @param  matrix Matriz.
// */
// void superiorMatrix(int row, int col, int matrix[][col])
// {
//     int L = 0, C = 0;
//     print("\n");
//     for (L = 0; L < row; L = L + 1)
//     {
//         for (C = 0; C < col; C = C + 1)
//         {
//             if (L < C)
//             {
//                 print("[ %2d ] ", matrix[L][C]);
//             } // end if
//         }     // end for
//     }         // end for
//     print("\n");
// } // end superiorMatrix ( )

// /**
//     Funcao para mostrar uma matriz transposta.
//     @param  row Numero de linhas da matriz.
//     @param  col Numero de colunas da matriz.
//     @param  matrix Matriz.
// */
// void transposedMatrix(int row, int col, int matrix[][col])
// {
//     int L = 0, C = 0;
//     int transp[col][row];
//     print("\n");
//     for (C = 0; C < col; C = C + 1)
//     {
//         for (L = 0; L < row; L = L + 1)
//         {
//             transp[C][L] = matrix[L][C];
//             print("[ %2d ] ", transp[C][L]);
//         } // end for
//         print("\n");
//     } // end for
//     print("\n");
// } // end transposedMatrix ( )

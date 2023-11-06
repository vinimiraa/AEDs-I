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
#define _MATRIX_H_

typedef char* string;

// ---------------------- definicoes de constantes

const int MAX_SIZE = 10 ;  // definir tamanho padrao para matrizes

// ---------------------- definicoes de variaveis globais

typedef struct s_intMatrix
{
    int row;
    int col;
    int** data;
    int ix,iy;
} intMatrix;

typedef struct s_doubleMatrix
{
    int row;
    int col;
    double** data;
    int ix,iy;
} doubleMatrix;

typedef struct s_charMatrix
{
    int row;
    int col;
    char** data;
    int ix,iy;
} charMatrix;

typedef struct s_boolMatrix
{
    int row;
    int col;
    float** data;
    int ix,iy;
} boolMatrix;

typedef struct s_floatMatrix
{
    int row;
    int col;
    float** data;
    int ix,iy;
} floatMatrix;

// ---------------------- para entradas e saidas

/**
 * Verifica se a matriz de inteiros e os dados existem.
 * @return TRUE : se existem; FALSE : caso contrario.
*/
bool exist_intMatrix( intMatrix* matrix )
{
    bool result = false;
    if( matrix != NULL && matrix->data != NULL )
    {
        result = true;
    }
    return ( result );
}

/**
 * Cria e aloca o espaço de memória para uma matriz de inteiros.
 * @return MATRIZ.
*/
intMatrix* new_intMatrix( int rows, int columns )
{
    intMatrix *matrix = ( intMatrix* ) malloc ( 1 * sizeof( intMatrix ) );
    
    if( matrix != NULL )
    {
        matrix->row = 0;
        matrix->col = 0;
        matrix->data = NULL;
        
        if ( rows > 0 && columns > 0 )
        {
            matrix->row = rows;
            matrix->col = columns;
            matrix->data = ( int** ) malloc( rows * sizeof( int* ) );
            
            if ( matrix->data )
            {
                for (matrix->ix = 0; matrix->ix < matrix->row; matrix->ix = matrix->ix + 1)
                {
                    matrix->data[matrix->ix] = ( int* ) malloc( columns * sizeof( int ) );
                } // end for
            } // end if
        } // end if
        matrix->ix = 0;
        matrix->iy = 0;
    } // end if

    return ( matrix );
} // end new_intMatrix ( )

/**
 * Inicializa uma matriz de inteiros com um valor. 
*/
void init_intMatrix( intMatrix* matrix, int rows, int columns, int init_value )
{
    if( exist_intMatrix( matrix ) && rows > 0 && columns > 0 )
    {
        for( matrix->ix = 0; matrix->ix < matrix->row; matrix->ix = matrix->ix + 1 )
        {
            for( matrix->iy = 0; matrix->iy < matrix->col; matrix->iy = matrix->iy + 1 )
            {
                matrix->data[matrix->ix][matrix->iy] = init_value;
            } // end for
        } // end for
        matrix->ix = 0;
        matrix->iy = 0;
    } // end if
} // end init_intMatrix ( )

/**
 * Libera o espaço de memória de uma matriz de inteiros.
*/
void free_intMatrix( intMatrix* matrix )
{
    if ( exist_intMatrix( matrix ) )
    {
        for (matrix->ix = 0; matrix->ix < matrix->row; matrix->ix = matrix->ix + 1)
        {
            free(matrix->data[matrix->ix]);
        } // end for
        free(matrix->data);
        free(matrix);
    } // end if
} // end free_int_Matrix ( )

/**
 * Mostra uma matriz com valores inteiros.
*/
void print_intMatrix( intMatrix* matrix )
{
    if ( exist_intMatrix( matrix ) )
    {
        for ( matrix->ix = 0; matrix->ix < matrix->row; matrix->ix = matrix->ix + 1 )
        {
            for ( matrix->iy = 0; matrix->iy < matrix->col; matrix->iy = matrix->iy + 1 )
            {
                printf( "%3d\t", matrix->data[matrix->ix][matrix->iy] );
            } // end for
            printf( "\n" );
        } // end for
    } // end if
} // end print_intMatrix ( )

/**
 * Lê os dados de uma matriz de inteiros.
 * @return MATRIZ com os dados lidos.
*/
intMatrix* read_intMatrix( )
{
    intMatrix* matrix = NULL;
    int rows = 0;
    int columns = 0;

    do
    {
        printf( "\n%s" , "Rows = " );
        scanf( "%d", &rows ); 
        getchar( );
    }while( rows <= 0 );
    do
    {
        printf( "\n%s", "Columns = " );
        scanf( "%d", &columns );
        getchar( );
    } while ( columns <= 0 );

    matrix = new_intMatrix( rows, columns );

    if( matrix != NULL )
    {
        if( matrix->data == NULL )
        {
            matrix->row = 0;
            matrix->col = 0;
            matrix->ix  = 0;
            matrix->iy  = 0;
        }
        else
        {
            for( matrix->ix = 0; matrix->ix < matrix->row; matrix->ix = matrix->ix + 1 )
            {
                for( matrix->iy = 0; matrix->iy < matrix->col; matrix->iy = matrix->iy + 1 )
                {
                    printf( "%2d, %2d: ", matrix->ix, matrix->iy );
                    scanf( "%d", matrix->data[matrix->ix][matrix->iy] );
                    getchar( );
                } // end for
            } // end for
        } // end if
    } // end if

    return ( matrix );
} // end read_intMatrix ( )

/**
 * Grava em um arquivo uma matriz de inteiros.
*/
void fprint_intMatrix( string filename , intMatrix* matrix )
{
    FILE* file = fopen( filename, "wt" );

    if( !exist_intMatrix( matrix ) )
    {
        printf( "\n%s\n", "ERROR: the matrix does not exist." );
    }
    else
    {
        fprintf( file, "%d\n", matrix->row );
        fprintf( file, "%d\n", matrix->col );
        for( matrix->ix = 0; matrix->ix < matrix->row; matrix->ix = matrix->ix + 1 )
        {
            for( matrix->iy = 0; matrix->iy < matrix->col; matrix->iy = matrix->iy + 1 )
            {
                fprintf( file, "%d\n", matrix->data[matrix->ix][matrix->iy] );
            } // end for
        } // end for

        fclose( file );
    } // end if
} // end fprint_intMatrix ( )

/**
 * Lê de um arquivo uma matriz de inteiros.
 * @return MATRIZ com os valores lidos do arquivo.
*/
intMatrix* fread_intMatrix( string filename )
{
    FILE *file = fopen( filename, "rt" );
    intMatrix* matrix = NULL;
    int rows = 0;
    int columns = 0;
    
    if ( file == NULL )
    {
        printf( "\n%s\n", "ERROR: Unable to open the file." );
    }
    else
    {
        fscanf( file, "%d", &rows ); fgetc( file );
        fscanf( file, "%d", &columns ); fgetc( file );

        if ( rows <= 0 || columns <= 0 )
        {
            printf( "\n%s\n", "ERROR: Invalid size." );
        }
        else
        {
            matrix = new_intMatrix( rows, columns );

            if ( matrix != NULL && matrix->data == NULL )
            {
                matrix->row = 0;
                matrix->col = 0;
                matrix->ix = 0;
                matrix->iy = 0;
            }
            else
            {
                if ( matrix != NULL )
                {
                    matrix->ix = 0;
                    while ( !feof( file ) && matrix->ix < matrix->row )
                    {
                        matrix->iy = 0;
                        while ( !feof( file ) && matrix->iy < matrix->col )
                        {
                            fscanf( file, "%d", &( matrix->data[matrix->ix][matrix->iy] ) );
                            fgetc( file );
                            matrix->iy = matrix->iy + 1;
                        } // end while
                        matrix->ix = matrix->ix + 1;
                    } // end while
                    matrix->ix = 0;
                    matrix->iy = 0;
                } // end if
            } // end if
        } // end if
    } // end if
    fclose ( file );
    
    return (matrix);
} // end fread_intMatrix ( ) 

/**
 * Faz a transposição de uma matriz de inteiros.
 * @return MATRIZ transposta.
*/
intMatrix* transpose_intMatrix( intMatrix* matrix ) 
{
    intMatrix* transposed = NULL;
    int rows = 0;
    int columns = 0;
    
    if( exist_intMatrix( matrix ) )
    {
        rows = matrix->col;
        columns = matrix->row;

        transposed = new_intMatrix( rows, columns );
        
        if( transposed != NULL && transposed->data == NULL )
        {
            transposed->row = 0;
            transposed->col = 0;
            transposed->ix  = 0;
            transposed->iy  = 0;
        }
        else
        {
            if( transposed != NULL )
            {
                transposed->ix = 0;
                while( transposed->ix < transposed->row )
                {
                    transposed->iy = 0;
                    while( transposed->iy < transposed->col )
                    {
                        transposed->data[transposed->ix][transposed->iy] = matrix->data[transposed->iy][transposed->ix];
                        transposed->iy = transposed->iy + 1;
                    } // end while
                    transposed->ix = transposed->ix + 1;
                } // end while
            } // end if
        } // end if
    } // end if
    
    return ( transposed ) ;
} // end transpose_intMatrix ( )

/**
 * Verifica se a matriz de inteiros só tem zeros.
 * @return TRUE : se só tem zeros; FALSE : caso contrário.
*/
bool iszero_intMatrix ( intMatrix* matrix )
{
    bool result = true;

    if( matrix != NULL && matrix->data != NULL )
    {
        matrix->ix = 0;
        while( matrix->ix < matrix->row )
        {
            matrix->iy = 0;
            while( matrix->iy < matrix->col )
            {
                if( matrix->data[matrix->ix][matrix->iy] != 0 )
                {
                    result = false;
                } // end if
                matrix->iy = matrix->iy + 1;
            } // end while
            matrix->ix = matrix->ix + 1;
        } // end while
    } // end if

    return ( result );
} // end iszero_intMatrix ( )

/**
 * Verifica se duas matrizes de inteiros são iguais.
 * @return TRUE : se iguais; FALSE : caso contrário. 
*/
bool compare_intMatrix( intMatrix* matrix1, intMatrix* matrix2 )
{
    bool result = true;

    if( exist_intMatrix( matrix1 ) && exist_intMatrix( matrix2 ) )
    {
        if( matrix1->row != matrix2->row && matrix1->col != matrix2->col )
        {
            printf( "\n%s\n", "ERROR: Invalid size." );
        }
        else
        {
            matrix1->ix = 0;
            while( matrix1->ix < matrix1->row && !result )
            {
                matrix1->iy = 0;
                while( matrix1->iy < matrix1->col && !result )
                {
                    if( matrix1->data[matrix1->ix][matrix1->iy] !=
                        matrix2->data[matrix1->ix][matrix1->iy] )
                    {
                        result = false;
                    } // end if
                    matrix1->iy = matrix1->iy + 1; 
                } // end while
                matrix1->ix = matrix1->ix + 1; 
            } // end while
        } // end if
    } // end if

    return ( result );
} // end compare_intMatrix ( )

/**
 * Soma duas matrizes de inteiros.
 * @return MATRIZ resultante da soma.
*/
intMatrix* add_intMatrix( intMatrix* matrix1, intMatrix* matrix2 )
{
    intMatrix* aux = NULL;

    if( exist_intMatrix( matrix1 ) && exist_intMatrix( matrix2 ) )
    {
        if( matrix1->row != matrix2->row && matrix1->col != matrix2->col )
        {
            printf( "\n%s\n", "ERROR: Invalid size." );
        }
        else
        {
            aux = new_intMatrix( matrix1->row, matrix1->col );

            if( aux != NULL )
            {
                aux->ix = 0;
                while( aux->ix < aux->row )
                {
                    aux->iy = 0;
                    while( aux->iy < aux->col )
                    {
                        aux->data[aux->ix][aux->iy] =   matrix1->data[aux->ix][aux->iy] +
                                                        matrix2->data[aux->ix][aux->iy];
                        aux->iy = aux->iy + 1;
                    } // end while
                    aux->ix = aux->ix + 1;
                } // end while
            } // end if
        } // end if
    } // end if

    return ( aux );
} // end add_intMatrix ( )

/**
 * Faz a diferença de duas matrizes de inteiros.
 * @return MATRIZ resultante da diferença.
*/
intMatrix* diff_intMatrix( intMatrix* matrix1, intMatrix* matrix2 )
{
    intMatrix* aux = NULL;

    if( exist_intMatrix( matrix1 ) && exist_intMatrix( matrix2 ) )
    {
        if( matrix1->row != matrix2->row && matrix1->col != matrix2->col )
        {
            printf( "\n%s\n", "ERROR: Invalid size." );
        }
        else
        {
            aux = new_intMatrix( matrix1->row, matrix1->col );

            if( aux != NULL )
            {
                aux->ix = 0;
                while( aux->ix < aux->row )
                {
                    aux->iy = 0;
                    while( aux->iy < aux->col )
                    {
                        aux->data[aux->ix][aux->iy] =   matrix1->data[aux->ix][aux->iy] -
                                                        matrix2->data[aux->ix][aux->iy];
                        aux->iy = aux->iy + 1;
                    } // end while
                    aux->ix = aux->ix + 1;
                } // end while
            } // end if
        } // end if
    } // end if

    return ( aux );
} // end diff_intMatrix ( )

/**
 * Faz o produto de duas matrizes de inteiros.
 * @return MATRIZ resultante do produto.
*/
intMatrix* product_intMatrix( intMatrix* matrix1, intMatrix* matrix2 )
{
    intMatrix* aux = NULL;

    if( exist_intMatrix( matrix1) && exist_intMatrix( matrix2 ) )
    {
        if( matrix1->col != matrix2->row ) 
        {
            printf( "\n%s\n", "ERROR: Invalid size." );
        }
        else
        {
            aux = new_intMatrix( matrix1->row, matrix2->col );

            if( exist_intMatrix( aux ) )
            {
                aux->ix = 0;
                while( aux->ix < aux->row )
                {
                    aux->iy = 0;
                    while( aux->iy < aux->col )
                    {
                        aux->data[aux->ix][aux->iy] = 0;

                        matrix1->ix = 0;
                        while( matrix1->ix < matrix1->col )
                        {
                            aux->data[aux->ix][aux->iy] +=  matrix1->data[aux->ix][matrix1->ix] *
                                                            matrix2->data[matrix1->ix][aux->iy];
                            matrix1->ix = matrix1->ix + 1;
                        } // end while
                        aux->iy = aux->iy + 1;
                    } // end while
                    aux->ix = aux->ix + 1;
                } // end while
            } // end if
        } // end if
    } // end if

    return ( aux );
} // end product_intMatrix ( )

/**
    Copia uma matriz com valores inteiros.
    @return cópia da MATRIZ;
*/
intMatrix* copy_intMatrix( intMatrix* matrix )
{
    intMatrix* copy = NULL;

    if ( !exist_intMatrix( matrix ) )
    {
        printf( "\n%s\n", "ERROR: Missing data." );
    }
    else
    {
        if (matrix->row <= 0 || matrix->col <= 0)
        {
            printf( "\n%s\n", "ERROR: Invalid size." );
        }
        else
        {
            copy = new_intMatrix( matrix->row, matrix->col );

            if ( exist_intMatrix( copy ) )
            {
                for (copy->ix = 0; copy->ix < copy->row; copy->ix = copy->ix + 1)
                {
                    for (copy->iy = 0; copy->iy < copy->col; copy->iy = copy->iy + 1)
                    {
                        copy->data[copy->ix][copy->iy] = matrix->data[copy->ix][copy->iy];
                    } // end for
                } // end for
            } // end if
        } // end if
    } // end if

    return (copy);
} // end copy_intMatrix ( )

#endif

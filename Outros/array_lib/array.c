/*
 *  ----------------------------------------------------------------------------
 *  Definições da Biblioteca de Arranjos em C - "array.c"
 *  ----------------------------------------------------------------------------
 *  Copyright (c) 2023, Vinicius MIranda de Araujo
 *  Todos os direitos reservados.
 *  
 *  Este código fonte é propriedade exclusiva de Vinicius Miranda de Araujo e não pode ser
 *  copiado, modificado, distribuído, ou sublicenciado por qualquer outra pessoa
 *  sem autorização expressa por escrito do autor. O uso deste código está
 *  sujeito aos termos e condições estabelecidos no contrato de licença, se fornecido,
 *  ou, na ausência de tal contrato, pelos termos padrão da Licença MIT.
 *  ----------------------------------------------------------------------------
*/

// ---------------------------------- Lista de Dependências

#include "array.h"
#include <stdio.h>
#include <stdlib.h>

// ---------------------------------- Definições de Variáveis Globais

struct s_intArray
{
    int size;
    int *data;
    int ix;
};

// ---------------------------------- Definição de Funções

// ---------------------- Funções de intMatrix

/**
 *  Verificar se o arranjo e seus dados existem.
 *  @return true se existem; false caso contrário.
*/
bool exist_intArray( intArray* array )
{
    bool result = false;

    if( array != NULL && array->data != NULL )
    {
        result = true;
    }
    
    return ( result );
} // end exist_intArray ( )

/**
 *  
*/
intArray* new_intArray( int size )
{
    intArray* array = ( intArray* ) malloc( 1 * sizeof( intArray ) );

    if( array != NULL )
    {
        array->size = 0;
        array->data = NULL;
        array->ix = -1;
        if( size > 0 )
        {
            array->size = size;
            array->data = ( int* ) malloc( size * sizeof( int ) );
            array->ix = 0; 
        } // end if
    } // end if

    return ( array );
} // end new_intArray ( )

/**
 *  
*/
void init_intArray( intArray* array, int init_value )
{
    if( exist_intArray( array ) )
    {
        for( array->ix = 0; array->ix < array->size; array->ix = array->ix + 1 )
        {
            array->data[array->ix] = init_value;
        } // end for
    } // end if
} // end init_intArray ( )

/**
 *  
*/
void free_intArray( intArray* array )
{
    if( array != NULL )
    {
        if( array->data != NULL )
        {
            free( array->data );
        } // end if
        free( array );
    } // end if
} // end free_intArray ( )

/**
 *  
*/
void print_intArray( intArray* array )
{
    if( array != NULL )
    {
        if( array->data == NULL )
        {
            printf( "\n%s\n", "[ NULL ]" );
        }
        else
        {   
            printf( "\n" );
            for( array->ix = 0; array->ix < array->size; array->ix = array->ix + 1 )
            {
                printf( "%2d ", array->data[array->ix] ); 
            } // end for
            printf( "\n" );
        } // end if
    } // end if
} // end print_intArray ( )

/**
 *  
*/
intArray* read_intArray( void )
{
    intArray* array = NULL;
    int size = 0;

    do
    {
        printf( "\n%s", "Size = " );
        scanf( "%d", &size );
        getchar( );
    } while ( size <= 0 );

    array = new_intArray( size );

    if( array != NULL )
    {
        if( array->data == NULL )
        {
            array->size = 0;
            array->ix = 0;
        }
        else
        {
            for( array->ix = 0; array->ix < array->size; array->ix = array->ix + 1 )
            {
                printf( "%2d: ", array->ix );
                scanf( "%d", &array->data[array->ix] );
                getchar( );
            } // end for
        } // end of
    } // end if

    return ( array );
} // end read_intArray ( )

void fprint_intArray( char* filename, intArray* array )
{
    FILE* file = fopen( filename, "wt" );

    if( !exist_intArray( array ) )
    {
        printf( "\n%s\n", "[ERRO]: the array does not exist." );
    }
    else
    {
        fprintf( file, "%d\n", array->size );
        for( array->ix = 0; array->ix < array->data; array->ix = array->ix + 1 )
        {
            fprrintf( file, "%d\n", array->data[array->ix] ); 
        } // end for
    } // end if

    fclose( file );
} // end fprint_intArray ( )

/**
 *  
*/
intArray* fread_intArray( char* filename )
{
    FILE* file = fopen( filename, "rt" );
    intArray* array = NULL;
    int n = 0;

    if( file == NULL )
    {
        printf( "\n%s\n", "[ERRO]: Unable to open the file." );
    }
    else
    {
        fscanf( file, "%d", &n ); fgetc( file );
        if( n < 0 )
        {
            printf( "\n%s\n", "[ERRO]: Invalid size." ); 
        }
        else
        {
            array = new_intArray( n );

            if( array != NULL & array->data == NULL )
            {
                array->size = 0;
                array->ix = 0;
            }
            else
            {
                if( array != NULL )
                {
                    array->ix = 0;
                    while( !feof( file ) && array->ix < array->size )
                    {
                        fscanf( file, "%d", &array->data[array->ix] );
                        fgetc( file );
                        array->ix = array->ix + 1;
                    } // end while
                    array->ix = 0;
                } // end if
            } // end if
        } // end if
    } // end if

    fclose( file );
    return( array );
} // end fread_intArray ( )

/**
 *  
*/
void set_int_intArray( intArray* array, int index, int value )
{
    if( exist_intArray( array ) )
    {
        if( 0 <= index && index < array->size )
        {
            array->data[index] = value;
        } // end if
    } // end if
} // end set_int_intArray ( )

int get_int_intArray( intArray* array, int index )
{
    int value = 0;

    if( exist_intArray( array ) )
    {
        if( 0 <= index && index < array->size ) 
        {
            value = array->data[index];
        } // end if
    } // end if

    return ( value );
} // end get_int_intArray ( )

// ---------------------------------- Fim

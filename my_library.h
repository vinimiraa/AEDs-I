/**
   Minha Biblioteca - IO - Console Input/Output library.
   PUC-Minas - ICEI
   @author  Vinícius Miranda de Araújo
   @version 0.1 - 2023-1b
   
   SHOW - v2023-1_0.1 - 22 / 08 / 2023
   Author: Vinícius Miranda de Araújo

*/

// ---------------------- lista de dependencias

#include <stdio.h>     // para entradas e saidas
#include <stdlib.h>    // para a biblioteca padrao
#include <stddef.h>    // para definicoes basicas
#include <stdbool.h>   // para definicoes logicas
#include <string.h>    // para cadeias de caracteres
#include <ctype.h>     // para tipos padroes
#include <math.h>      // para definicoes matematicas

// ---------------------- redefinicoes uteis

#ifndef _SHOW_H_
#define _SHOW_H_

#define  print        printf    
#define  scan         scanf     
#define  fprint       fprintf   
#define  fscan        fscanf

// ---------------------- definicoes de constantes

#define PI 3.14159265358979323846
#define E  2.71828182845904523536

const   int  STR_SIZE     =  80 ;   // definir tamanho padrao para caracteres

// ---------------------- definicoes de variaveis globais

bool trace   = true;                // inicialmente habilitado

// ---------------------- para entradas e saidas

/**
    Metodo para limpar a entrada de dados padrao.
*/
void flush ( )
{
    int  x = 0;         
    do { x = getchar( ); } while ( x != EOF && x != '\n' );
    clearerr ( stdin ); // reiniciar o estado de EOF
} // end flush ( )

/**
    Metodo para identificar o programa e a autoria.
    @param prog Nome do programa.
    @param autor Autor do programa.
*/ 
void id ( const char * const prog, const char * const autor )
{
    print ( "\n" );          
    print ( "%s\n", prog );
    print ( "%s\n", autor );
    print ( "\n" );          
} //end id ( )

/**
    Funcao para ler valor inteiro do teclado.
    @return Valor lido.
    @param  text Mensagem a ser exibida antes da leitura.
*/
int readint (const char * const text)
{
    int x = 0;
    if(trace)
       print("%s", text);
    scan("%d", &x);
    flush();
    return(x);
} // end readint ( )

/**
    Funcao para ler valor real de precisao simples do teclado.
    @return Valor lido.
    @param  text Mensagem a ser exibida antes da leitura.
*/
float readfloat ( const char * const text )
{
    int x = 0;
    if(trace)
       print("%s", text);
    scan("%f", &x);
    flush();
    return(x);
} // end readfloat ( )

/**
    Funcao para ler valor real de precisao dupla do teclado.
    @return Valor lido.
    @param  text Mensagem a ser exibida antes da leitura.
*/
double readdouble ( const char * const text) 
{
    int x = 0;
    if(trace)
       print("%s", text);
    scan("%lf", &x);
    flush();
    return(x);
} // end readdouble ( )

/**
    Funcao para ler valor logico do teclado.
    @return Valor lido.
    @param  text Mensagem a ser exibida antes da leitura.
    OBS.:   Usar zero (0) para falso e
            diferente de zero para verdadeiro
*/
bool readbool ( const char * const text )
{
    int x = 0;
    if ( trace )
       print ( "%s", text );
    scan ( "%d", &x );
    flush ( );
    return ( x!=0 );
} // end readbool ( )

/**
    Funcao para ler caractere do teclado.
    @return Valor lido.
    @param  text Mensagem a ser exibida antes da leitura.
*/
char readchar ( const char * const text )
{
    char x = '0';
    if ( trace )
       print ( "%s", text   );
    do { x = getchar( ); } while ( '\n' == x ); 
    flush ( );
    return ( x );
} // end readchar ( )

#endif
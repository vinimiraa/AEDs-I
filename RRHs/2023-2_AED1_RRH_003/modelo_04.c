// 999999 - AED1
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

// ler inteiro
int readint ( char *text )
{
    int    x = 0;
    printf ( "%s", text );
    scanf  ( "%d" , &x ); getchar( );
    return ( x );
}

// ler real
double readdouble ( char *text )
{
    double x = 0.0;
    printf ( "%s", text );
    scanf  ( "%lf", &x ); getchar( );
    return ( x );
}

// ler caractere
char readchar ( char *text )
{
    char   x = '0';
    printf ( "%s", text );
    scanf  ( "%c" , &x ); getchar( );
    return ( x );
}

// ler logico
bool readbool ( char *text )
{
    bool   x = false;
    int    d = 0;
    printf ( "%s", text );
    scanf  ( "%d" , &d ); getchar( );
    x = (d!=0);
    return ( x );
}

// ler cadeia de caracteres
char* readstring ( char *text )
{
 // reservar area para guardar cadeia de caracteres
    char*  x = calloc ( 80, sizeof(char) );
    printf ( "%s", text );
    scanf  ( "%s" , x ); getchar( );
    return ( x );
}

int main ( void )
{
 // definir dados e resultados
    int    d =  0 ;
    double x = 0.0;
    char   c = '0';
    bool   b = false;
    char  *s = "PQR";
        
 // identificar
    printf ( "999999 - AED1\n" );
    
 // acoes

 // acoes
 // mostrar inteiro
    printf ( "d = %d\n" , d );
    d = 5;
    printf ( "d = %d\n" , d );

 // mostrar real
    printf ( "x = %lf\n", x );
    x = 0.5;
    printf ( "x = %lf\n", x );

 // mostrar caractere
    printf ( "c = %c\n" , c );
    printf ( "c = %c = %d\n" , c, c );
    c = 'A';
    printf ( "c = %c\n" , c );
    printf ( "c = %c = %d\n" , c, c );

 // mostrar logico
    printf ( "b = %d\n" , b );
    b = true;
    printf ( "b = %d\n" , b );

 // mostrar cadeia de caracteres
    printf ( "s = %s\n" , s );

 // ler inteiro
    d = readint ( "d = " );
    printf ( "d = %d\n" , d );

 // ler real
    x = readdouble ( "x = " );
    printf ( "x = %lf\n" , x );

 // ler caractere
    c = readchar ( "c = " );
    printf ( "c = %c\n" , c );
    printf ( "c = %c = %d\n" , c, c );

 // ler logico
    b = readbool ( "b = " );
    printf ( "b = %d\n" , b );

 // ler cadeia de caracteres
    s = readstring ( "s = " );
    printf ( "s = %s\n" , s );
  
 // encerrar
    printf ( "\nApertar ENTER para terminar.\n" );
    getchar( );
    return ( 0 );
}

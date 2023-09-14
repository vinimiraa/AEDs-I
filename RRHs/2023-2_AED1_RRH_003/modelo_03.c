// 999999 - AED1
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main ( void )
{
 // definir dados e resultados
    int    d =  0 ;
    double x = 0.0;
    char   c = '0';
    bool   b = false;
    char  *s = "PQR"; // substituto para s[]

 // identificar
    printf ( "999999 - AED1\n" );

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
    printf ( "d = " );
    scanf  ( "%d" , &d ); getchar( );
    printf ( "d = %d\n" , d );
 
 // ler real
    printf ( "x = " );
    scanf  ( "%lf", &x ); getchar( );
    printf ( "x = %lf\n" , x );

 // ler caractere
    printf ( "c = " );
    scanf  ( "%c" , &c ); getchar( );
    printf ( "c = %c\n" , c );
    printf ( "c = %c = %d\n" , c, c );

 // ler logico
    printf ( "b = " );
    scanf  ( "%d" , &d ); getchar( );
    b = (d!=0);
    printf ( "b = %d\n" , b );

 // ler cadeia de caracteres
    printf ( "s = " );
    scanf  ( "%s" ,  s ); getchar( );
    printf ( "s = %s\n" , s );

 // encerrar
    printf ( "\nApertar ENTER para terminar.\n" );
    getchar( );
    return ( 0 );
}

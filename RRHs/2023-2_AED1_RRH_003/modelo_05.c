// 999999 - AED1
#include "myio.h"

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

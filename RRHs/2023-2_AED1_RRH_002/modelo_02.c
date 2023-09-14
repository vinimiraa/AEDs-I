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
    char   s [80] = "ABC";
        
 // identificar
    printf ( "999999 - AED1\n" );
    
 // acoes
    printf ( "d = %d\n" , d );
    d = 5;
    printf ( "d = %d\n" , d );
    
    printf ( "x = %lf\n", x );
    x = 0.5;
    printf ( "x = %lf\n", x );
    
    printf ( "c = %c\n" , c );
    printf ( "c = %c = %d\n" , c, c );
    c = 'A';
    printf ( "c = %c\n" , c );
    printf ( "c = %c = %d\n" , c, c );
    
    printf ( "b = %d\n" , b );
    b = true;
    printf ( "b = %d\n" , b );
    
    printf ( "s = %s\n" , s );
    
    printf ( "d = " );
    scanf  ( "%d" , &d ); getchar( );
    printf ( "d = %d\n" , d );
  
    printf ( "x = " );
    scanf  ( "%lf", &x ); getchar( );
    printf ( "x = %lf\n" , x );
    
    printf ( "c = " );
    scanf  ( "%c" , &c ); getchar( );
    printf ( "c = %c\n" , c );
    printf ( "c = %c = %d\n" , c, c );

    printf ( "b = " );
    scanf  ( "%d" , &d ); getchar( );
    b = (d!=0);
    printf ( "b = %d\n" , b );
    
    printf ( "s = " );
    scanf  ( "%s" ,  s ); getchar( );
    printf ( "s = %s\n" , s );
  
 // encerrar
    printf ( "\nApertar ENTER para terminar.\n" );
    getchar( );
    return ( 0 );
}

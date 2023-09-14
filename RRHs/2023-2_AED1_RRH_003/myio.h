// 999999 - AED1
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int readint ( char *text )
{
    int    x = 0;
    printf ( "%s" , text );
    scanf  ( "%d" , &x ); getchar( );
    return ( x );
}

double readdouble ( char *text )
{
    double x = 0.0;
    printf ( "%s" , text );
    scanf  ( "%lf", &x ); getchar( );
    return ( x );
}

char readchar ( char *text )
{
    char   x = '0';
    printf ( "%s" , text );
    scanf  ( "%c" , &x ); getchar( );
    return ( x );
}

bool readbool ( char *text )
{
    bool   x = false;
    int    y = 0;
    printf ( "%s" , text );
    scanf  ( "%d" , &y ); getchar( );
    x =    (y!=0);
    return ( x );
}

char* readstring ( char *text )
{
    char  *x = calloc(80,sizeof(char));
    printf ( "%s" , text );
    scanf  ( "%s" , x ); getchar( );
    return ( x );
}


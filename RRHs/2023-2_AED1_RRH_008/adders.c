#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

/*
  Funcao para somar os primeiros numeros naturais.
  @return soma dos naturais
  @param  n - valor ate' o qual somar
*/
int somar_1_a ( int n )
{
 // definir dados
    int soma = 0;
    int x    = 0;
    for ( x=1; x<=n; x=x+1 )
    {
	soma = soma + x;
    } // end for
    return ( soma );
} // end somar_1_a ( )

/*
  Funcao para calcular a somar dos primeiros numeros naturais.
  @return soma dos naturais
  @param  n - valor ate' o qual somar
*/
int somar_1_b ( int n )
{
    return ( (n+1)*n / 2 ); // formula matematica
} // end somar_1_b ( )

/*
  Funcao para somar os primeiros pares.
  @return soma dos pares
  @param  n - quantidade de valores
*/
int somar_2_a ( int n )
{
 // definir dados
    int soma = 0;
    int x    = 0;
    for ( x=1; x<=n; x=x+1 )
    {
        soma = soma + (2*x);
    } // end for
    return ( soma );
} // end somar_2_a ( )

/*
  Funcao para somar os primeiros pares.
  @return soma dos pares
  @param  n - quantidade de valores
*/
int somar_2_b ( int n )
{
    return ( (n+1)*n ); // formula matematica
} // end somar_2_b ( )

/*
  Funcao para somar os primeiros impares.
  @return soma dos impares
  @param  n - quantidade de valores
*/
int somar_3_a ( int n )
{
 // definir dados
    int soma = 0;
    int x    = 0;
    for ( x=1; x<=n; x=x+1 )
    {
        soma = soma + (2*x-1);
//      printf ( "\n%d: %d  %d", x, (2*x-1), soma );
    } // end for
    return ( soma );
} // end somar_3_a ( )

/*
  Funcao para somar os primeiros impares.
  @return soma dos impares
  @param  n - quantidade de valores
*/
int somar_3_b ( int n )
{
    return ( n*n ); // formula matematica
} // end somar_3_b ( )

/*
  Funcao para somar os inversos dos primeiros naturais.
  @return soma dos inversos
  @param  n - quantidade de valores
*/
double somar_4_a ( int n )
{
 // definir dados
    double soma = 0;
    int x    = 0;
    for ( x=1; x<=n; x=x+1 )
    {
   	soma = soma + 1.0 / x;
        printf ( "\n%d: 1/%d  %lf  %lf", x, x, 1.0/x, soma );
    } // end for
    return ( soma );
} // end somar_4_a ( )

/*
  Funcao para somar os inversos dos primeiros pares.
  @return soma dos inversos de pares
  @param  n - quantidade de valores
*/
double somar_4_b ( int n )
{
 // definir dados
    double soma = 0;
    int x    = 0;
    for ( x=1; x<=n; x=x+1 )
    {
        soma = soma + 1.0 / (2.0*x);
        printf ( "\n%d: 1/%d  %lf  %lf", x, 2*x, 1.0/(2.0*x), soma );
    } // end for
    return ( soma );
} // end somar_4_b ( )

/*
  Funcao para somar os inversos dos primeiros impares.
  @return soma dos inversos de impares
  @param  n - quantidade de valores
*/
double somar_4_c ( int n )
{
 // definir dados
    double soma = 0;
    int x    = 0;
    for ( x=1; x<=n; x=x+1 )
    {
        soma = soma + 1.0 / (2.0*x-1);
        printf ( "\n%d: 1/%d  %lf  %lf",
                   x, (2*x-1), 1.0/(2.0*x-1), soma );
    } // end for
    return ( soma );
} // end somar_4_c ( )

/*
  Funcao para somar fracoes.
  @return soma de fracoes
  @param  n - quantidade de valores
*/
double somar_5_a ( int n )
{
 // definir dados
    double soma = 0;
    int x    = 0;
    for ( x=1; x<=n; x=x+1 )
    {
        soma = soma + (1.0*x) / (2.0*x-1);
        printf ( "\n%d: %d/%d  %lf  %lf",
                   x, x, (2*x-1), (1.0*x)/(2.0*x-1), soma );
    } // end for
    return ( soma );
} // end somar_5_a ( )

/*
  Funcao para somar fracoes.
  @return soma de fracoes
  @param  n - quantidade de valores
*/
double somar_5_b ( int n )
{
 // definir dados
    double soma = 0;
    int x    = 0;
    for ( x=1; x<=n; x=x+1 )
    {
        soma = soma + (1.0*x+1.0) / (2.0*x-1);
        printf ( "\n%d: %d/%d  %lf  %lf",
                   x, (x+1), (2*x-1), (1.0*x+1.0)/(2.0*x-1), soma );
    } // end for
    return ( soma );
} // end somar_5_b ( )

/*
  Funcao para somar fracoes
  com casos excepcionais.
  @return soma de fracoes
  @param  n - quantidade de valores
*/
double somar_6_a ( int n )
{
 // definir dados
    double soma = 1.0;
    int x       = 0;
    for ( x=1; x<=n-1; x=x+1 )
    {
   	soma = soma + (1.0) / (2.0*x-1);
        printf ( "\n%d: %d/%d  %lf  %lf",
                   x, (1), (2*x-1), (1.0)/(2.0*x-1), soma );
    } // end for
    return ( soma );
} // end somar_6_a ( )

/*
  Funcao para somar fracoes
  com casos excepcionais.
  @return soma de fracoes
  @param  n - quantidade de valores
*/
double somar_6_b ( int n )
{
 // definir dados
    double soma = 1.0;
    int x       = 0;
    for ( x=2; x<=n; x=x+1 )
    {
	soma = soma + (1.0) / (2.0*x-3);
        printf ( "\n%d: %d/%d  %lf  %lf",
                   x, (1), (2*(x-1)-1), (1.0)/(2.0*x-3), soma );
    } // end for
    return ( soma );
} // end somar_6_b ( )

/*
  Funcao para calcular o fatorial.
  @return produto dos primeiros naturais
  @param  n - quantidade de valores
*/
int multiplicar_7_a ( int n )
{
 // definir dados
    int produto = 1;
    int x       = 0;
    for ( x=1; x<=n; x=x+1 )
    {
        produto = produto * x;
        printf ( "\n%d: %d %d",
                   x, x, produto );
    } // end for
    return ( produto );
} // end multiplicar_7_a ( )

/*
  Funcao para calcular o fatorial.
  @return produto dos primeiros naturais
  @param  n - quantidade de valores
*/
long long int multiplicar_7_b ( int n )
{
 // definir dados
    long long int produto = 1;
    int x       = 0;
    for ( x=1; x<=n; x=x+1 )
    {
        produto = produto * x;
        printf ( "\n%d: %d %lld",
                   x, x, produto );
    } // end for
    return ( produto );
} // end multiplicar_7_b ( )

/*
  Funcao para calcular o fatorial.
  @return produto dos primeiros naturais
  @param  n - quantidade de valores
*/
double multiplicar_8_a ( int n )
{
 // definir dados
    double produto = 1.0;
    int x       = 0;
    for ( x=1; x<=n; x=x+1 )
    {
        produto = produto * x;
        printf ( "\n%d: %d %.0lf",
                   x, x, produto );
    } // end for
    return ( produto );
} // end multiplicar_8_a ( )

/*
  Funcao para calcular o produto de pares.
  @return produto dos primeiros pares
  @param  n - quantidade de valores
*/
double multiplicar_8_b ( int n )
{
 // definir dados
    double produto = 1.0;
    int x       = 0;
    for ( x=1; x<=n; x=x+1 )
    {
        produto = produto * (2.0*x);
        printf ( "\n%d: %d %.0lf",
                   x, (2*x), produto );
    } // end for
    return ( produto );
} // end multiplicar_8_b ( )

/*
  Funcao para calcular o produto de pares.
  @return produto dos primeiros pares
  @param  n - quantidade de valores
*/
double multiplicar_8_c ( int n )
{
    double produto = multiplicar_8_b ( n );
    return ( pow(2.0, n) * produto );
} // end multiplicar_9_a ( )

/*
  Funcao para calcular o inverso de fatorial.
  @return produto do inverso de fatorial
  @param  n - quantidade de valores
*/
double multiplicar_9_a ( int n )
{
 // definir dados
    double produto = 1.0;
    int x       = 0;
    for ( x=1; x<=n; x=x+1 )
    {
        produto = produto * 1.0/x;
        printf ( "\n%d: %lf %lf",
                   x, 1.0/x, produto );
    } // end for
    return ( produto );
} // end multiplicar_9_a ( )

/**
*/
int main ( void )
{
    printf ( "\n01. somar_1_a ( %d ) = %d" ,  5, somar_1_a (  5 ) );
    printf ( "\n02. somar_1_b ( %d ) = %d" ,  5, somar_1_b (  5 ) );
    printf ( "\n03. somar_2_a ( %d ) = %d" ,  5, somar_2_a (  5 ) );
    printf ( "\n04. somar_2_b ( %d ) = %d" ,  5, somar_2_b (  5 ) );
    printf ( "\n05. somar_3_a ( %d ) = %d" ,  5, somar_3_a (  5 ) );
    printf ( "\n06. somar_3_b ( %d ) = %d" ,  5, somar_3_b (  5 ) );
    printf ( "\n07. somar_4_a ( %d ) = %lf",  5, somar_4_a (  5 ) );
    printf ( "\n08. somar_4_b ( %d ) = %lf",  5, somar_4_b (  5 ) );
    printf ( "\n09. somar_4_c ( %d ) = %lf",  5, somar_4_c (  5 ) );
    printf ( "\n10. somar_5_a ( %d ) = %lf",  5, somar_5_a (  5 ) );
    printf ( "\n11. somar_5_b ( %d ) = %lf",  5, somar_5_b (  5 ) );
    printf ( "\n12. somar_6_a ( %d ) = %lf",  5, somar_6_a (  5 ) );
    printf ( "\n13. somar_6_b ( %d ) = %lf",  5, somar_6_b (  5 ) );
    printf ( "\n14. multiplicar_7_a ( %d ) = %d"   ,  5, multiplicar_7_a (   5 ) );
    printf ( "\n15. multiplicar_7_b ( %d ) = %lld" , 25, multiplicar_7_b (  25 ) );
    printf ( "\n16. multiplicar_8_a ( %d ) = %lld" , 25, multiplicar_8_a (  25 ) );
    printf ( "\n17. multiplicar_8_a ( %d ) = %lld" ,175, multiplicar_8_a ( 175 ) );
    printf ( "\n18. multiplicar_8_b ( %d ) = %.0lf",125, multiplicar_8_b ( 125 ) );
    printf ( "\n19. multiplicar_8_c ( %d ) = %.0lf",175, multiplicar_8_c ( 175 ) );
    printf ( "\n20. multiplicar_9_a ( %d ) = %lf"  ,  5, multiplicar_9_a (   5 ) );

    return ( 0 );
} // end main ( )

/**
  * ----------------------------------- Documentacao preliminar
  * Pontificia Universidade Catolica de Minas Gerais
  * Curso de Ciencia da Computacao
  * Algoritmos e Estruturas de Dados I
  *
  * Trabalho pratico: lista 00
  *
  * Objetivo:
  * Modelo de programa para a disciplina AED I
  * Sugestao para montar um trabalho pratico
  *
  * Autor:   Matricula: 999999  Nome: xxx yyy zzz
  * Versao:  1.0                Data: 01/mm/20aa
  *
  * Dados:
  * - opcao de execucao escolhida pelo usuario
  *
  * Resultados:
  * - execucao de um teste de cada vez a escolha do usuario
  *
  * Condicoes:
  * - so' aceitara' as opcoes oferecidas.
  *
  * Arquivos:
  *
  * - lista_00.c
  * - lista_00     ( no Linux   )
  * - lista_00.exe ( no Windows )
  *
  * Forma de compilacao:
  * - acionar o compilador no modo console 
  *   (terminal/janela de comandos):
  *
  *   Linux  : gcc -o ./lista_00 ./lista_00.c
  *   Windows: gcc -o   lista_00   lista_00.c
  *
  * Forma de uso:
  * - acionar o programa   no modo console 
  *   (terminal/janela de comandos):
  *
  *   Linux  :  ./lista_00
  *   Windows:    lista_00
  *
  * Referencias:
  * - Exemplos mostrados em sala de aula
  * - Apostila: Fundamentos de Programacao - Notas de aulas
  *
  */

// -------------------------- classes nativas
//                            ou auxiliares

#include "io.h"

// -------------------------- definicao de classe

/**
  * Modelo para definir exemplo de um programa.
  * Obs.: E' recomendado ter o nome do programa
  *       sem espacos em branco, acentos ou cedilha.
  */

// -------------------------- tratamento de erro


// -------------------------- definicao de constantes


// -------------------------- definicao de armazenadores globais


// -------------------------- definicao de prototipos


// -------------------------- definicao de metodos

/**
  * Metodo01.
  */
void metodo01 ( void )
{
 // definir dados
    char palavra     [80];
    char simbolo    = '0';
    int  tamanho    =  0 ;
    int  x          =  0 ;
    int  maiusculas =  0 ;
 // identificar
    printf ( "\n%s\n", "Metodo01" );
 // acoes
 // ler palavra
    printf ( "Qual a palavra? " );
    scanf  ( "%s", palavra ); getchar ( );
 // printf ( "\npalavra = [%s]\n", palavra );
 // obter o tamanho
    tamanho = strlen ( palavra );
 // printf ( "\ntamanho = %d\n", tamanho );
 // repetir para cada simbolo
    for ( x=0; x<tamanho; x=x+1 )
    {
     // obter um simbolo
        simbolo = palavra [ x ];
     //	printf ( "\n%d %c", x, simbolo );
     // testar se maiuscula
        if ( 'A' <= simbolo && simbolo <= 'Z' )
    	{
         // contar
            maiusculas = maiusculas + 1;
    	} // end if
    } // end for
    printf ( "\n" );
 // mostrar a quantidade de maiusculas
    printf ( "\n%s%d\n", "Maiusculas = ", maiusculas );
 // encerrar
    printf ( "\n%s\n", "Apertar ENTER para continuar." );
    getchar( );
} // fim metodo01 ( )

/**
  * Metodo02.
  */
void metodo02 ( void )
{
 // definir dados
    int x = 0;
    int y = 0;
    int n = 0;
 // identificar
    printf ( "\n%s\n", "Metodo02" );
 // acoes
 // ler a quantidade de dados
    printf ( "\nn = " );
    scanf  ( "%d", &n ); getchar ( );
 // mapear valores
    y = n;
    printf ( "\n%s", "x y" );
    for ( x=1; x<=n; x=x+1 )
    {
        printf ( "\n%d %d", x, y );
        y = y-1; // variacao independente
    } // end for
    printf ( "\n" );
 // encerrar
    printf ( "\n%s\n", "Apertar ENTER para continuar." );
    getchar( );
} // fim metodo02 ( )

/**
  * Metodo03.
  */
void metodo03 ( void )
{
 // definir dados
    int x = 0;
    int y = 0;
    int n = 0;
 // identificar
    printf ( "\n%s\n", "Metodo03" );
 // acoes
 // ler a quantidade de dados
    printf ( "\nn = " );
    scanf  ( "%d", &n ); getchar ( );
 // mapear valores
    y = 1;
    printf ( "\n%s", "x y" );
    for ( x=1; x<=n; x=x+1 )
    {
        printf ( "\n%d %d", x, y );
        y = y+2; // variacao independente
    } // end for
    printf ( "\n" );
 // encerrar
    printf ( "\n%s\n", "Apertar ENTER para continuar." );
    getchar( );
} // fim metodo03 ( )

/**
  * Metodo04.
  */
void metodo04 ( void )
{
 // definir dados
    int x = 0;
    int y = 0;
    int n = 0;
 // identificar
    printf ( "\n%s\n", "Metodo04" );
 // acoes
 // ler a quantidade de dados
    printf ( "\nn = " );
    scanf  ( "%d", &n ); getchar ( );
 // mapear valores
    y = 102;
    printf ( "\n%s", "x y" );
    for ( x=1; x<=n; x=x+1 )
    {
        printf ( "\n%d %d", x, y );
        y = y+2; // variacao independente
    } // end for
    printf ( "\n" );
 // encerrar
    printf ( "\n%s\n", "Apertar ENTER para continuar." );
    getchar( );
} // fim metodo04 ( )

/**
  * Metodo05.
  */
void metodo05 ( void )
{
 // definir dados
    int x = 0;
    int y = 0;
    int n = 0;
 // identificar
    printf ( "\n%s\n", "Metodo05" );
 // acoes
 // ler a quantidade de dados
    printf ( "\nn = " );
    scanf  ( "%d", &n ); getchar ( );
 // mapear valores
    printf ( "\n%s", "x y" );
    for ( x=1; x<=n; x=x+1 )
    {
     // calcular a relacao (linear)
        y = -x + 6; // variacao dependente
        printf ( "\n%d %d", x, y );
    } // end for
    printf ( "\n" );
 // encerrar
    printf ( "\n%s\n", "Apertar ENTER para continuar." );
    getchar( );
} // fim metodo05 ( )

/**
  * Metodo06.
  */
void metodo06 ( void )
{
 // definir dados
    int x = 0;
    int y = 0;
    int n = 0;
 // identificar
    printf ( "\n%s\n", "Metodo06" );
 // acoes
 // ler a quantidade de dados
    printf ( "\nn = " );
    scanf  ( "%d", &n ); getchar ( );
 // mapear valores
    printf ( "\n%s", "x y" );
    for ( x=1; x<=n; x=x+1 )
    {
     // calcular a relacao (linear)
        y = 2*x - 1; // variacao dependente
        printf ( "\n%d %d", x, y );
    } // end for
    printf ( "\n" );
 // encerrar
    printf ( "\n%s\n", "Apertar ENTER para continuar." );
    getchar( );
} // fim metodo06 ( )

/**
  * Metodo07.
  */
void metodo07 ( void )
{
 // definir dados
    int x = 0;
    int y = 0;
    int n = 0;
 // identificar
    printf ( "\n%s\n", "Metodo07" );
 // acoes
 // ler a quantidade de dados
    printf ( "\nn = " );
    scanf  ( "%d", &n ); getchar ( );
 // mapear valores
    printf ( "\n%s", "x y" );
    for ( x=1; x<=n; x=x+1 )
    {
     // calcular a relacao (linear)
        y = 2*x + 100; // variacao dependente
        printf ( "\n%d %d", x, y );
    } // end for
    printf ( "\n" );
 // encerrar
    printf ( "\n%s\n", "Apertar ENTER para continuar." );
    getchar( );
} // fim metodo07 ( )

/**
  * Metodo08.
  */
void metodo08 ( void )
{
 // definir dados
    int x  = 0;
    int y1 = 0;
    int y2 = 0;
    int y3 = 0;
    int n  = 0;
 // identificar
    printf ( "\n%s\n", "Metodo08" );
 // acoes
 // ler a quantidade de dados
    printf ( "\nn = " );
    scanf  ( "%d", &n ); getchar ( );
 // mapear valores
    for ( x=1; x<=n; x=x+1 )
    {
     // calcular as relacoes (lineares)
        y1 =  -x +   6; // variacao dependente
        y2 = 2*x -   1; // variacao dependente
        y3 = 2*x + 100; // variacao dependente
        printf ( "\n%d %d %d %d", x, y1, y2, y3 );
    } // end for
    printf ( "\n" );
 // encerrar
    printf ( "\n%s\n", "Apertar ENTER para continuar." );
    getchar( );
} // fim metodo08 ( )

/**
  * Metodo09.
  */
void metodo09 ( void )
{
 // definir dados
    int x = 0;
    int y = 0;
    int n = 0;
 // identificar
    printf ( "\n%s\n", "Metodo09" );
 // acoes
 // ler a quantidade de dados
    printf ( "\nn = " );
    scanf  ( "%d", &n ); getchar ( );
 // mapear valores
    for ( x=1; x<=n; x=x+1 )
    {
     // calcular a relacao (quadratica)
        y = x*x + 1; // a*x**2+b*x**1+c*x**0 = 1*x**2+0*x**1+1*x**0
        printf ( "\n%d %d", x, y );
    } // end for
    printf ( "\n" );
 // encerrar
    printf ( "\n%s\n", "Apertar ENTER para continuar." );
    getchar( );
} // fim metodo09 ( )

/**
  * Metodo10.
  */
void metodo10 ( void )
{
 // definir dados
    int x = 0;
    int y = 0;
    int n = 0;
 // identificar
    printf ( "\n%s\n", "Metodo10" );
 // acoes
 // ler a quantidade de dados
    printf ( "\nn = " );
    scanf  ( "%d", &n ); getchar ( );
 // copiar
    x = n;
 // testar se negativo
    if ( x < 0 )
    { x = (-1)*x; }	// inverter sinal
 // repetir
    do
    {
     // isolar as unidades
        y = x % 10;  // decompor pelo resto
     // mostrar
        printf ( "\n%d", y );
     // reduzir
        x = x / 10;  // reduzir  pelo quociente
    }
    while ( x > 0 );
    printf ( "\n" );
 // encerrar
    printf ( "\n%s\n", "Apertar ENTER para continuar." );
    getchar( );
} // fim metodo10 ( )

/**
  * Metodo11.
  */
void metodo11 ( void )
{
 // definir dados
    int x = 0;
    int y = 0;
    int n = 0;
    int e = 0;
    int p = 1;
 // identificar
    printf ( "\n%s\n", "Metodo11" );
 // acoes
 // ler a quantidade de dados
    printf ( "\nn = " );
    scanf  ( "%d", &n ); getchar ( );
 // copiar
    x = n;
 // testar se zero
    if ( x == 0 )
    {   printf ( "\n0" ); }
    else
    {
     // testar sinal
        if ( x < 0 )
        {  x = (-1)*x;  }
     // copiar
        while ( p <= x )
        {
           e = e +  1; // expoente
           p = p * 10; // potencia
        } // end while
        printf ( "\ne = %d p = %d", e, p );
 	// reduzir
        e = e -  1;    // maior expoente
        p = p / 10;    // maior potencia
        while ( p > 0 )
        {
            y = x / p ; // decompor pelo quociente
            printf ( "\n%d", y );
            x = x % p ; // reduzir  pelo resto
            p = p / 10; // reduzir  potencia
        } // end while
    } // end if
    printf ( "\n" );
 // encerrar
    printf ( "\n%s\n", "Apertar ENTER para continuar." );
    getchar( );
} // fim metodo11 ( )

/**
  * Metodo12.
  */
void metodo12 ( void )
{
 // definir dados
    int x = 0;
    int y = 0;
    int n = 0;
    int p = 0;
    int d = 1;
 // identificar
    printf ( "\n%s\n", "Metodo12" );
 // acoes
 // ler a quantidade de dados
    printf ( "\nn = " );
    scanf  ( "%d", &n ); getchar ( );
 // decompor o valor inteiro
    y = n;
 // testar se negativo
    if ( y < 0 )
    { y = (-1) * y; }
 // copiar
    x = y;
 // calcular a potencia
    while ( x > 0 )
    {
        printf ( "\n%d", p );
        p = p +  1;
        d = d * 10;
        x = x / 10;
    } // end while
 // mostrar a potencia
    printf ( "\np = %d d = %d", p, d ); getchar( );
    p = p -  1;
    d = d / 10;
    printf ( "\np = %d d = %d", p, d ); getchar( );
 // recuperar o valor inicial
    x = y;
 // mostrar os digitos
    while ( d > 0 )
    {
        y = x / d;
        x = x % d;
        d = d / 10;
        printf ( "\n%d %d %d", y, x, d ); getchar();
    } // end while
    printf ( "\n" );
 // encerrar
    printf ( "\n%s\n", "Apertar ENTER para continuar." );
    getchar( );
} // fim metodo12 ( )

/**
   Funcao para testar se caractere e' letra maiuscula.
   @return true, se maiuscula; false, caso contrario
   @param  x - caractere
   Exemplo:
   bool resposta1 = maiuscula ( 'A' ); // true
   bool resposta2 = maiuscula ( 'a' ); // false
*/
bool maiuscula ( char x )
{
   bool resposta = false;
   if ( 'A' <= x && x <= 'Z' )
   { resposta = true; }
   return ( resposta );
} // end maiuscula ( )

/**
  * Metodo13.
  */
void metodo13 ( void )
{
 // definir dados
    char palavra  [80] ;
    int  x        =  0 ;
    int  tamanho  =  0 ;
    char simbolo  = '0';
 // identificar
    printf ( "\n%s\n", "Metodo13" );
 // acoes
    printf ( "\npalavra = " );
    scanf  ( "%s", palavra  ); getchar ( );
    tamanho = strlen (palavra);
    for    ( x = 0; x < tamanho; x = x + 1 )
    {
        simbolo = palavra [x];
    	if ( maiuscula ( simbolo ) )
    	{
    	   printf ( "\n%c", simbolo );
    	} // end if
    } // end for
    printf ( "\n" );
 // encerrar
    printf ( "\n%s\n", "Apertar ENTER para continuar." );
    getchar( );
} // fim metodo13 ( )

/**
  * Metodo14.
  */
void metodo14 ( void )
{
 // definir dados
    char palavra  [80] ;
    int  x        =  0 ;
    int  contador =  0 ;
    int  tamanho  =  0 ;
    char simbolo  = '0';
 // identificar
    printf ( "\n%s\n", "Metodo14" );
 // acoes
    printf ( "\npalavra = " );
    scanf  ( "%s", palavra  ); getchar ( );
    tamanho = strlen (palavra);
    for    ( x = 0; x < tamanho; x = x + 1 )
    {
        simbolo = palavra [x];
    	if ( maiuscula ( simbolo ) )
    	{
    	   printf ( "\n%c", simbolo );
           contador = contador + 1;
    	} // end if
    } // end for
    printf ( "\n" );
 // mostrar a quantidade de maiusculas
    printf ( "\n%s %d\n", "maiusculas = ", contador );
 // encerrar
    printf ( "\n%s\n", "Apertar ENTER para continuar." );
    getchar( );
} // fim metodo14 ( )

/**
   Funcao para testar se caractere e' letra minuscula.
   @return true, se minuscula; false, caso contrario
   @param  x - caractere
   Exemplo:
   bool resposta1 = minuscula ( 'A' ); // false
   bool resposta2 = minuscula ( 'a' ); // true
*/
bool minuscula ( char x )
{
   bool resposta = false;
   if ( 'a' <= x && x <= 'z' )
   { resposta = true; }
   return ( resposta );
} // end minuscula ( )

/**
  * Metodo15.
  */
void metodo15 ( void )
{
 // definir dados
    char palavra  [80] ;
    int  x        =  0 ;
    int  contador =  0 ;
    int  tamanho  =  0 ;
    char simbolo  = '0';
 // identificar
    printf ( "\n%s\n", "Metodo15" );
 // acoes
    printf ( "\npalavra = " );
    scanf  ( "%s", palavra  ); getchar ( );
    tamanho = strlen (palavra);
    for    ( x = 0; x < tamanho; x = x + 1 )
    {
        simbolo = palavra [x];
    	if ( minuscula ( simbolo ) )
    	{
    	   printf ( "\n%c", simbolo );
           contador = contador + 1;
	} // end if
    } // end for
    printf ( "\n" );
 // mostrar a quantidade de minusculas
    printf ( "\n%s %d\n", "minusculas = ", contador );
 // encerrar
    printf ( "\n%s\n", "Apertar ENTER para continuar." );
    getchar( );
} // fim metodo15 ( )

/**
  * Metodo16.
  */
void metodo16 ( void )
{
 // definir dados
    char palavra   [80] ;
    int  x         =  0 ;
    int  contador1 =  0 ;
    int  contador2 =  0 ;
    int  tamanho   =  0 ;
    char simbolo   = '0';
 // identificar
    printf ( "\n%s\n", "Metodo16" );
 // acoes
    printf ( "\npalavra = " );
    scanf  ( "%s", palavra  ); getchar ( );
    tamanho = strlen (palavra);
    for    ( x = 0; x < tamanho; x = x + 1 )
    {
        simbolo = palavra [x];
    	if ( maiuscula ( simbolo ) )
    	{
           printf ( "\n%c", simbolo );
           contador1 = contador1 + 1;
    	}
    	else // para diminuir testes desnecessarios
    	if ( minuscula ( simbolo ) )
    	{
    	   printf ( "\n%c", simbolo );
           contador2 = contador2 + 1;
    	} // end if
    } // end for
    printf ( "\n" );
 // mostrar a quantidade de maiusculas
    printf ( "\n%s %d\n", "maiusculas = ", contador1 );
 // mostrar a quantidade de minusculas
    printf ( "\n%s %d\n", "minusculas = ", contador2 );
 // encerrar
    printf ( "\n%s\n", "Apertar ENTER para continuar." );
    getchar( );
} // fim metodo16 ( )

/**
  * Metodo17.
  */
void metodo17 ( void )
{
 // definir dados
    char *palavra   = calloc (80,sizeof(char)); // alternativa
    int   x         =  0 ;
    int   contador1 =  0 ;
    int   contador2 =  0 ;
    int   tamanho   =  0 ;
    char  simbolo   = '0';
 // identificar
    printf ( "\n%s\n", "Metodo17" );
 // acoes
    printf ( "\npalavra = " );
    scanf  ( "%s", palavra  ); getchar ( );
    tamanho = strlen (palavra);
    for    ( x = 0; x < tamanho; x = x + 1 )
    {
        simbolo = palavra [x];
    	if ( maiuscula ( simbolo ) )
    	{
    	   printf ( "\n%c", simbolo );
           contador1 = contador1 + 1;
    	}
    	else // para diminuir testes desnecessarios
    	if ( minuscula ( simbolo ) )
    	{
    	   printf ( "\n%c", simbolo );
           contador2 = contador2 + 1;
    	} // end if
    } // end for
    printf ( "\n" );
 // mostrar a quantidade de maiusculas
    printf ( "\n%s %d\n", "maiusculas = ", contador1 );
 // mostrar a quantidade de minusculas
    printf ( "\n%s %d\n", "minusculas = ", contador2 );
 // encerrar
    printf ( "\n%s\n", "Apertar ENTER para continuar." );
    getchar( );
} // fim metodo17 ( )

/**
   Funcao para testar se valor tem outro por divisor.
   @return true, se for divisivel; false, caso contrario
   @param  n - valor inteiro
   @param  x - possivel divisor
   Exemplo:
   bool resposta1 = divisor ( 4, 2 ); // true
   bool resposta2 = divisor ( 5, 2 ); // false
*/
bool divisor ( int n, int x )
{
   bool resposta = false;
   // so' testar se divisor diferente de zero
   if ( x!= 0 && n % x == 0 )
   { resposta = true; }
   return ( resposta );
} // end divisor ( )

/**
  * Metodo18.
  */
void metodo18 ( void )
{
 // definir dados
    int  n        = 0;
    int  x        = 0;
    int  y        = 0;
    int  contador = 0;
 // identificar
    printf ( "\n%s\n", "Metodo18" );
 // acoes
    printf ( "\nn = " );
    scanf  ( "%d", &n  ); getchar ( );
    y = n;
    if ( y == 0 )
    {
        printf ( "\nZero pode ter multiplos divisores."	);
    }
    else
    {
    	if ( y < 0 )
    	{ y = -y; }
    	for ( x = 1; x <= y; x = x + 1 )
    	{
            if ( divisor ( y, x ) )
            {
               printf ( "\n%d", x );
               contador = contador + 1;
            } // end if
	} // end for
     // mostrar a quantidade de divisores
	printf ( "\n\n%s %d\n", "divisores = ", contador );
    } // end if

 // encerrar
    printf ( "\n%s\n", "Apertar ENTER para continuar." );
    getchar( );
} // fim metodo18 ( )

/**
   Funcao para contar divisores.
   @return quantidade de divisores positivos
   @param  n - valor inteiro
   Exemplo:
   int resposta1 = divisores ( 0 ); // 0 - SEM RESPOSTA
   int resposta2 = divisores ( 4 ); // 3
   Nota:
   E' DEPENDENTE da funcao divisor (n,x).
*/
int ndivisores ( int n )
{
   int contador = 0;
   int x        = 0;
   int y        = 0;
   // so' testar se diferente de zero
   if ( n != 0 )
   {
      y = n;
      if ( y < 0 )
      { y = -y; }
      for ( x = 1; x <= y; x = x + 1 )
      {
          if ( divisor ( y, x ) )
          {
             contador = contador + 1;
          } // end if
      } // end for
   } // end if
   return ( contador );
} // end ndivisores ( )

/**
  * Metodo19.
  */
void metodo19 ( void )
{
 // definir dados
    int  n        = 0;
    int  contador = 0;
 // identificar
    printf ( "\n%s\n", "Metodo19" );
 // acoes
    printf ( "\nn = " );
    scanf  ( "%d", &n  ); getchar ( );
    if ( n == 0 )
    {
        printf ( "\nZero pode ter multiplos divisores.\n" );
    }
    else
    {
        contador = ndivisores ( n );
     // mostrar a quantidade de divisores
    	printf ( "\n%s %d\n", "divisores = ", contador );
    } // end if

 // encerrar
    printf ( "\n%s\n", "Apertar ENTER para continuar." );
    getchar( );
} // fim metodo19 ( )

/**
   Funcao para contar divisores.
   @return quantidade de divisores positivos
   @param  n - valor inteiro
   Exemplo:
   int resposta1 = divisores ( 0 ); // 0 - SEM RESPOSTA
   int resposta2 = divisores ( 4 ); // 3
   Nota:
   E' INDEPENDENTE.
*/
int divisores ( int n )
{
   int contador = 0;
   int x        = 0;
   int y        = 0;
   // so' testar se diferente de zero
   if ( n != 0 )
   {
      y = n;
      if ( y < 0 )
      { y = -y; }
      for ( x = 1; x <= y; x = x + 1 )
      {
          if ( y % x == 0 )
          {
             contador = contador + 1;
          } // end if
      } // end for
   } // end if
   return ( contador );
} // end divisores ( )

/**
  * Metodo20.
  */
void metodo20 ( void )
{
 // definir dados
    int  n        = 0;
 // identificar
    printf ( "\n%s\n", "Metodo20" );
 // acoes
    printf ( "\nn = " );
    scanf  ( "%d", &n  ); getchar ( );
    if ( n == 0 )
    {
        printf ( "\nZero pode ter multiplos divisores.\n"     );
    }
    else
    {
     // mostrar a quantidade de divisores
    	printf ( "\n%s %d\n", "divisores = ", divisores ( n ) );
    } // end if

 // encerrar
    printf ( "\n%s\n", "Apertar ENTER para continuar." );
    getchar( );
} // fim metodo20 ( )

// -------------------------- definicao do metodo principal

int main ( void )
{
 // definir dados/resultados
    int opcao = 0;

 // repetir ate' desejar parar
    do
    {
     // identificar
        printf ( "\n" );             // para saltar linha
        printf ( "%s\n", "Lista_00 - v.0.0 - 01/mm/20aa"       );
        printf ( "%s\n", "Matricula: 999999 Nome: xxx yyy zzz" );

     // mostrar opcoes
        printf ( "%s\n", "Opcoes:"         );
        printf ( "%s\n", " 0 - parar"      );
        printf ( "%s\n", " 1 - metodo 01   2 - metodo 02" );
        printf ( "%s\n", " 3 - metodo 03   4 - metodo 04" );
        printf ( "%s\n", " 5 - metodo 05   6 - metodo 06" );
        printf ( "%s\n", " 7 - metodo 07   8 - metodo 08" );
        printf ( "%s\n", " 9 - metodo 09  10 - metodo 10" );
        printf ( "%s\n", "11 - metodo 11  12 - metodo 12" );
        printf ( "%s\n", "13 - metodo 13  14 - metodo 14" );
        printf ( "%s\n", "15 - metodo 15  16 - metodo 16" );
        printf ( "%s\n", "17 - metodo 17  18 - metodo 18" );
        printf ( "%s\n", "19 - metodo 19  20 - metodo 20" );
        printf ( "%s\n", "" );        // para saltar linha

     // ler opcao
        printf ( "%s", "Qual a sua opcao? " );
        scanf  ( "%d", &opcao ); getchar ( );
        printf ( "%d",  opcao );

     // escolher acao
        switch ( opcao )
        {
           case  0:               break;
           case  1: metodo01 ( ); break;
           case  2: metodo02 ( ); break;
           case  3: metodo03 ( ); break;
           case  4: metodo04 ( ); break;
           case  5: metodo05 ( ); break;
           case  6: metodo06 ( ); break;
           case  7: metodo07 ( ); break;
           case  8: metodo08 ( ); break;
           case  9: metodo09 ( ); break;
           case 10: metodo10 ( ); break;
           case 11: metodo11 ( ); break;
           case 12: metodo12 ( ); break;
           case 13: metodo13 ( ); break;
           case 14: metodo14 ( ); break;
           case 15: metodo15 ( ); break;
           case 16: metodo16 ( ); break;
           case 17: metodo17 ( ); break;
           case 18: metodo18 ( ); break;
           case 19: metodo19 ( ); break;
           case 20: metodo20 ( ); break;
           default:
                    printf ( "\n%s\n\n", "ERRO: Opcao invalida." );
              break;
        } // fim escolher
    }
    while ( opcao != 0 );

 // encerrar execucao
    printf ( "\n%s\n\n", "Apertar ENTER para terminar." );
    getchar( );

} // end main ( )

/*
----------------------------- documentacao complementar


----------------------------- notas / observacoes / comentarios


----------------------------- previsao de testes


----------------------------- historico

Versao	Data		    Modificacao
  0.1	__/__		    esboco

 ---------------------------- testes

Versao	Teste
  0.1	01. ( OK )		identificacao de programa

*/

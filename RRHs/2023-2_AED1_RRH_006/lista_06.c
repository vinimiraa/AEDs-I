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
  *   Linux  : gcc -o ./lista_03 ./lista_03.c
  *   Windows: gcc -o   lista_03   lista_03.c
  *
  * Forma de uso:
  * - acionar o programa   no modo console 
  *   (terminal/janela de comandos):
  *
  *   Linux  :  ./lista_03
  *   Windows:    lista_03
  *
  * Referencias:
  * - Exemplos mostrados em sala de aula
  * - Apostila: Fundamentos de Programacao - Notas de aulas
  *
  */

// --------------------------- classes nativas
//                             ou auxiliares

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>

// --------------------------- definicao de classe

/**
  * Modelo para definir exemplo de um programa.
  * Obs.: E' recomendado ter o nome do programa
  *       sem espacos em branco, acentos ou cedilha.
  */

// --------------------------- tratamento de erro


// --------------------------- definicao de constantes


// --------------------------- definicao de armazenadores globais


// --------------------------- definicao de prototipos


// --------------------------- definicao de metodos

/**
  * Metodo01.
  */
void metodo01 ( void )
{
 // definir dados e resultados
    int lado     = 2;
    int area     = 1;
    int resposta = 0;
 // identificar
    printf ( "\n%s\n", "Metodo01" );
 // ler lado positivo
    do
	{
	 // ler lado do teclado
        printf( "Qual o valor do lado? " );
        scanf ( "%i", &lado ); getchar ( );
     // testar se lado positivo
        if ( lado <= 0 )
	    {
         // mostrar erro
            printf ( "%s\n", "ERRO: Valor invalido." );
        } // end if 
    }
	while ( lado <= 0 ); // repetir enquanto nao for valido

 // testar se lado valido
	if ( lado > 0 )
	{
     // calcular a area
        area     = lado * lado; 
     // calcular a resposta
        resposta = 6 * area; 
     // mostrar a resposta
        printf ( "%s %d", "resposta = ", resposta );
	} // end if
 // encerrar
    printf ( "\n%s\n", "Apertar ENTER para continuar." );
    getchar( );
} // fim metodo01 ( )

/**
  * Metodo02.
  */
void metodo02 ( void )
{
 // definir dados e resultados
    int lado     = 0; // garantir a condicao inicial
    int area     = 0;
    int resposta = 0;
	int opcao    = 0;
 // identificar
    printf ( "\n%s\n", "Metodo02" );
 // ler opcao para continuar	
	printf ( "\n%s", "Quer continuar (1=S|0=N)? " );
    scanf  ( "%i", &opcao ); getchar ( );
 // ler lado positivo
	while ( opcao == 1 && lado <= 0 )
	{
	 // ler dado
        printf( "Qual o valor do lado? " );
        scanf ( "%i", &lado ); getchar ( );
     // testar o lado
        if ( lado <= 0 )
	    {
         // mostrar erro
            printf ( "%s\n", "ERRO: Valor invalido." );
        } // end if 
    } // end while

 // testar se lado valido
	if ( lado > 0 )
	{
     // calcular a area
        area     = lado * lado; 
     // calcular a resposta
        resposta = 6 * area; 
     // mostrar a resposta
        printf ( "%s %d", "resposta = ", resposta );
	} // end if
 // encerrar
    printf ( "\n%s\n", "Apertar ENTER para continuar." );
    getchar( );
} // fim metodo02 ( )

/**
  * Metodo03.
  */
void metodo03 ( void )
{
 // definir dados e resultados
    int  lado     =  0 ; // garantir a condicao inicial
    int  area     =  0 ;
    int  resposta =  0 ;
	char opcao    = '0';
 // identificar
    printf ( "\n%s\n", "Metodo03" );
 // ler opcao para continuar	
	printf ( "\n%s", "Quer continuar (S|N)? " );
    scanf  ( "%c", &opcao ); getchar ( );
 // ler lado positivo
	while ( opcao == 'S' && lado <= 0 )
	{
        printf( "Qual o valor do lado? " );
        scanf ( "%i", &lado ); getchar ( );
     // testar o lado
        if ( lado <= 0 )
	    {
         // mostrar erro
            printf ( "%s\n", "ERRO: Valor invalido." );
        } // end if 
    } // end while
 // testar se lado valido
	if ( lado > 0 )
	{
     // calcular a area
        area     = lado * lado; 
     // calcular a resposta
        resposta = 6 * area; 
     // mostrar a resposta
        printf ( "%s %d", "resposta = ", resposta );
	} // end if
 // encerrar
    printf ( "\n%s\n", "Apertar ENTER para continuar." );
    getchar( );
} // fim metodo03 ( )

/**
  * Metodo04.
  */
void metodo04 ( void )
{
 // definir dados e resultados
    int  lado     =  0 ; // garantir a condicao inicial
    int  area     =  0 ;
    int  resposta =  0 ;
	char opcao    = '0';
 // identificar
    printf ( "\n%s\n", "Metodo04" );
 // ler opcao para continuar	
	printf ( "\n%s", "Quer continuar (S|N)? " );
    scanf  ( "%c", &opcao ); getchar ( );
 // ler lado positivo
	while ( (opcao == 'S' || opcao == 's') && lado <= 0 )
	{
        printf( "Qual o valor do lado? " );
        scanf ( "%i", &lado ); getchar ( );
     // testar o lado
        if ( lado <= 0 )
	    {
         // mostrar erro
            printf ( "%s\n", "ERRO: Valor invalido." );
        } // end if 
    } // end while
 // testar se lado valido
	if ( lado > 0 )
	{
     // calcular a area
        area     = lado * lado; 
     // calcular a resposta
        resposta = 6 * area; 
     // mostrar a resposta
        printf ( "%s %d", "resposta = ", resposta );
	} // end if
 // encerrar
    printf ( "\n%s\n", "Apertar ENTER para continuar." );
    getchar( );
} // fim metodo04 ( )

/**
  * Metodo05.
  */
void metodo05 ( void )
{
 // definir dados e resultados
    int  lado     =  0 ; // garantir a condicao inicial
    int  area     =  0 ;
    int  resposta =  0 ;
	char opcao    = '0';
	bool teste    = false;
 // identificar
    printf ( "\n%s\n", "Metodo05" );
 // ler opcao para continuar	
	printf ( "\n%s", "Quer continuar (S|N)? " );
    scanf  ( "%c", &opcao ); getchar ( );
	teste = ( opcao == 'S' || opcao == 's' );
 // ler lado positivo
	while (  teste && lado <= 0 )
	{
	 // ler dado
        printf( "Qual o valor do lado? " );
        scanf ( "%i", &lado ); getchar ( );
     // testar o lado
        if ( lado <= 0 )
	    {
         // mostrar erro
            printf ( "%s\n", "ERRO: Valor invalido." );
        } // end if 
    } // end while
 // testar se lado valido
	if ( lado > 0 )
	{
     // calcular a area
        area     = lado * lado; 
     // calcular a resposta
        resposta = 6 * area; 
     // mostrar a resposta
        printf ( "%s %d", "resposta = ", resposta );
	} // end if
 // encerrar
    printf ( "\n%s\n", "Apertar ENTER para continuar." );
    getchar( );
} // fim metodo05 ( )

/**
  * Metodo06.
  */
void metodo06 ( void )
{
 // definir dados e resultados
    int  lado     =  0 ; // garantir a condicao inicial
    int  area     =  0 ;
    int  resposta =  0 ;
	char opcao    = '0';
	bool teste    = false;
 // identificar
    printf ( "\n%s\n", "Metodo06" );
	do
	{
	 // ler opcao
        printf  ( "\n%s", "Quer continuar (S|N)? " );
        scanf   ( "%c", &opcao ); getchar ( );
	    teste = ( opcao == 'S' || opcao == 's' ) ||
	            ( opcao == 'N' || opcao == 'n' )  ;
	}
	while ( ! teste );
    teste = ( opcao == 'S' || opcao == 's' );
 // ler lado positivo
	while (  teste && lado <= 0 )
	{
	 // ler dado
        printf( "Qual o valor do lado? " );
        scanf ( "%i", &lado ); getchar ( );
     // testar o lado
        if ( lado <= 0 )
	    {
         // mostrar erro
            printf ( "%s\n", "ERRO: Valor invalido." );
        } // end if 
    } // end while
 // testar se lado valido
	if ( lado > 0 )
	{
     // calcular a area
        area     = lado * lado; 
     // calcular a resposta
        resposta = 6 * area; 
     // mostrar a resposta
        printf ( "%s %d", "resposta = ", resposta );
	} // end if
 // encerrar
    printf ( "\n%s\n", "Apertar ENTER para continuar." );
    getchar( );
} // fim metodo06 ( )

/**
  * Metodo07.
  */
void metodo07 ( void )
{
 // definir dados e resultados
    int  lado     =  0 ; // garantir a condicao inicial
    int  area     =  0 ;
    int  resposta =  0 ;
	char opcao    = '0';
	bool teste1   = false;
	bool teste2   = false;
 // identificar
    printf ( "\n%s\n", "Metodo07" );
	do
	{
      printf ( "\n%s", "Quer continuar (S|N)? " );
      scanf  ( "%c", &opcao ); getchar ( );
	  teste1 = ( opcao == 'S' || opcao == 's' );
	  teste2 = ( opcao == 'N' || opcao == 'n' );
	}
	while ( ! teste1 && ! teste2 );
 // ler lado positivo
	while (  teste1 && lado <= 0 )
	{
        printf( "Qual o valor do lado? " );
        scanf ( "%i", &lado ); getchar ( );
     // testar o lado
        if ( lado <= 0 )
	    {
         // mostrar erro
            printf ( "%s\n", "ERRO: Valor invalido." );
        } // end if 
    } // end while
 // testar se lado valido
	if ( lado > 0 )
	{
     // calcular a area
        area     = lado * lado; 
     // calcular a resposta
        resposta = 6 * area; 
     // mostrar a resposta
        printf ( "%s %d", "resposta = ", resposta );
	} // end if
 // encerrar
    printf ( "\n%s\n", "Apertar ENTER para continuar." );
    getchar( );
} // fim metodo07 ( )

/**
  * Metodo08.
  */
void metodo08 ( void )
{
 // definir dados e resultados
    int  lado     =  0 ; // garantir a condicao inicial
    int  area     =  0 ;
    int  resposta =  0 ;
	char opcao    = '0';
	bool teste1   = false;
	bool teste2   = false;
 // identificar
    printf ( "\n%s\n", "Metodo08" );
	do
	{
      printf ( "\n%s", "Quer continuar (S|N)? " );
      scanf  ( "%c", &opcao ); getchar ( );
	  teste1 = ( opcao == 'S' || opcao == 's' );
	  teste2 = ( opcao == 'N' || opcao == 'n' );
	}
	while ( ! (teste1 || teste2) );
 // ler lado positivo
	while (  teste1 && lado <= 0 )
	{
        printf( "Qual o valor do lado? " );
        scanf ( "%i", &lado ); getchar ( );
     // testar o lado
        if ( lado <= 0 )
	    {
         // mostrar erro
            printf ( "%s\n", "ERRO: Valor invalido." );
        } // end if 
    } // end while
 // testar se lado valido
	if ( lado > 0 )
	{
     // calcular a area
        area     = lado * lado; 
     // calcular a resposta
        resposta = 6 * area; 
     // mostrar a resposta
        printf ( "%s %d", "resposta = ", resposta );
	} // end if
 // encerrar
    printf ( "\n%s\n", "Apertar ENTER para continuar." );
    getchar( );
} // fim metodo08 ( )

/**
  * Funcao para ler opcao valida (S|N).
  */
bool continuar1 ( void )
{
 // definir dados locais
    bool teste  = false;
	bool teste1 = false;
	bool teste2 = false;
	char opcao  = '0';
 // ler opcao valida	
	do
	{
	 // ler opcao
        printf ( "\n%s", "Quer continuar (S|N)? " );
        scanf  ( "%c", &opcao ); getchar ( );
	    teste1 = ( opcao == 'S' || opcao == 's' );
	    teste2 = ( opcao == 'N' || opcao == 'n' );
	}
	while ( ! (teste1 || teste2) );
	teste = teste1;
	return ( teste );
} // end continuar1 ( )

/**
  * Metodo09.
  */
void metodo09 ( void )
{
 // definir dados e resultados
    int  lado     =  0 ; // garantir a condicao inicial
    int  area     =  0 ;
    int  resposta =  0 ;
    bool teste    = false;	
 // identificar
    printf ( "\n%s\n", "Metodo09" );
 // ler opcao para continuar	
	teste  = continuar1 ( );
 // ler lado positivo
	while (  teste && lado <= 0 )
	{
	 // ler dado
        printf( "Qual o valor do lado? " );
        scanf ( "%i", &lado ); getchar ( );
     // testar o lado
        if ( lado <= 0 )
	    {
         // mostrar erro
            printf ( "%s\n", "ERRO: Valor invalido." );
        } // end if 
    } // end while
 // testar se lado valido
	if ( lado > 0 )
	{
     // calcular a area
        area     = lado * lado; 
     // calcular a resposta
        resposta = 6 * area; 
     // mostrar a resposta
        printf ( "%s %d", "resposta = ", resposta );
	} // end if
 // encerrar
    printf ( "\n%s\n", "Apertar ENTER para continuar." );
    getchar( );
} // fim metodo09 ( )

/**
  * Funcao para ler opcao valida (S|N).
  */
bool continuar2 ( char *texto )
{
 // definir dados locais
    bool teste  = false;
	bool teste1 = false;
	bool teste2 = false;
	char opcao  = '0';
 // ler opcao para continuar	
	do
	{
      printf ( "\n%s", texto  );
      scanf  ( "%c"  , &opcao ); getchar ( );
	  teste1 = ( opcao == 'S' || opcao == 's' );
	  teste2 = ( opcao == 'N' || opcao == 'n' );
	}
	while ( ! (teste1 || teste2) );
	teste = teste1;
	return ( teste );
} // end continuar2 ( )

/**
  * Funcao para ler valor inteiro positivo.
  */
int lerPositivo ( char *texto )
{
 // definir dados locais
    int valor = -1;
 // repetir enquanto negativo
	while ( valor < 0 )
	{
	 // ler dado
        printf( "\n%s", texto );
        scanf ( "%i"  , &valor ); getchar ( );
     // testar o lado
        if ( valor < 0 )
	    {
         // mostrar erro
            printf ( "%s\n", "ERRO: Valor invalido." );
        } // end if 
    } // end while
	return ( valor );
} // end lerPositivo ( )

void metodo10 ( void )
{
 // definir dados e resultados
    int  lado     =  0 ; // garantir a condicao inicial
    int  area     =  0 ;
    int  resposta =  0 ;
    bool teste    = false;	
 // identificar
    printf ( "\n%s\n", "Metodo10" );
 // ler opcao para continuar	
	teste  = continuar2  ( "Quer continuar (S|N)? " ); 
 // testar se e' para continuar
    if ( teste )
	{
	 // ler o lado
     	lado   = lerPositivo ( "Qual o valor do lado? " );
     // calcular a area
        area     = lado * lado; 
     // calcular a resposta
        resposta = 6 * area; 
     // mostrar a resposta
        printf ( "%s %d", "resposta = ", resposta );
	} // end if
 // encerrar
    printf ( "\n%s\n", "Apertar ENTER para continuar." );
    getchar( );
} // end method_10 ( )

/**
  * Funcao para ler opcao valida (S|N).
  */
char continuar3 ( char *texto )
{
 // definir dados locais
    bool teste  = false;
	bool teste1 = false;
	bool teste2 = false;
	char opcao  = '0';
 // ler opcao para continuar	
	do
	{
      printf ( "\n%s", texto  );
      scanf  ( "%c"  , &opcao ); getchar ( );
	  if ( opcao == 'S' || opcao == 's' )
	  {  teste1 = true; }
	  else 
	  {
	     if ( opcao == 'N' || opcao == 'n' )
	     {  teste2 = true; }
	  } // end if
	}
	while ( ! (teste1 || teste2) );
	return ( teste1 );
} // end continuar3 ( )

void metodo11 ( void )
{
 // definir dados e resultados
    int  lado     =  0 ; // garantir a condicao inicial
    int  area     =  0 ;
    int  resposta =  0 ;
    bool teste    = false;	
 // identificar
    printf ( "\n%s\n", "Metodo11" );
 // ler opcao para continuar	
	teste  = continuar3  ( "Quer continuar (S|N)? " ); 
 // testar se e' para continuar
    if ( teste )
	{
	 // ler o lado
     	lado   = lerPositivo ( "Qual o valor do lado? " );
     // calcular a area
        area     = lado * lado; 
     // calcular a resposta
        resposta = 6 * area; 
     // mostrar a resposta
        printf ( "%s %d", "resposta = ", resposta );
	} // end if
 // encerrar
    printf ( "\n%s\n", "Apertar ENTER para continuar." );
    getchar( );
} // end method_11 ( )

/**
  * Funcao para ler opcao valida (S|N).
  */
char continuar4 ( char *texto )
{
 // definir dados locais
    bool teste  = false;
	bool teste1 = false;
	bool teste2 = false;
	char opcao  = '0';
 // ler opcao para continuar	
	do
	{
      printf ( "\n%s", texto  );
      scanf  ( "%c"  , &opcao ); getchar ( );
	  teste1 = ( opcao == 'S' || opcao == 's' );
	  teste2 = ( opcao == 'N' || opcao == 'n' );
	}
	while ( ! (teste1 || teste2) );
	return ( opcao );
} // end continuar4 ( )

/**
  * Metodo12.
  */
void metodo12 ( void )
{
 // definir dados e resultados
    int  lado     =  0 ; // garantir a condicao inicial
    int  area     =  0 ;
    int  resposta =  0 ;
    bool teste    = false;
    char opcao    = '0';	
 // identificar
    printf ( "\n%s\n", "Metodo12" );
 // ler opcao para continuar	
	opcao = continuar4 ( "Continuar [S|N]? " );
    teste = ( opcao == 'S' || opcao == 's' );
 // testar se e' para continuar
    if ( teste )
	{
	 // ler o lado positivo
     	lado   = lerPositivo ( "Qual o valor do lado? " );
     // calcular a area
        area     = lado * lado; 
     // calcular a resposta
        resposta = 6 * area; 
     // mostrar a resposta
        printf ( "%s %d", "resposta = ", resposta );
	} // end if
 // encerrar
    printf ( "\n%s\n", "Apertar ENTER para continuar." );
    getchar( );
} // fim metodo12 ( )

/**
  * Funcao para ler opcao valida (S|N).
  */
char continuar5 ( char *texto )
{
 // definir dados locais
    bool teste  = false;
	bool teste1 = false;
	bool teste2 = false;
	char opcao  = '0';
 // ler opcao para continuar	
	do
	{
      printf ( "\n%s", texto  );
      scanf  ( "%c"  , &opcao ); getchar ( );
	  teste1 = ( opcao == 'S' || opcao == 's' );
	  teste2 = ( opcao == 'N' || opcao == 'n' );
	}
	while ( ! (teste1 || teste2) );
	if ( 'a' <= opcao && opcao <= 'z' )
    {  opcao = (char) ((int) opcao - 32); }	// converter para maiuscula
	return ( opcao );
} // end continuar5 ( )

/**
  * Metodo13.
  */
void metodo13 ( void )
{
 // definir dados e resultados
    int  lado     =  0 ; // garantir a condicao inicial
    int  area     =  0 ;
    int  resposta =  0 ;
    bool teste    = false;
    char opcao    = '0';	
 // identificar
    printf ( "\n%s\n", "Metodo13" );
 // ler opcao para continuar	
	opcao = continuar5 ( "Continuar [S|N]? " );
    teste = ( opcao == 'S' );
 // testar se e' para continuar
    if ( teste )
	{
	 // ler o lado positivo
     	lado   = lerPositivo ( "Qual o valor do lado? " );
     // calcular a area
        area     = lado * lado; 
     // calcular a resposta
        resposta = 6 * area; 
     // mostrar a resposta
        printf ( "%s %d", "resposta = ", resposta );
	} // end if
 // encerrar
    printf ( "\n%s\n", "Apertar ENTER para continuar." );
    getchar( );
} // fim metodo13 ( )

char paraMaiuscula ( char x )
{
    char valor = x;
	if ( 'a' <= x && x <= 'z' )
    {  valor = (char) ((int) x - 32); }	// converter para maiuscula
    return ( valor );	
} // fim paraMaiuscula ( )

/**
  * Funcao para ler opcao valida (S|N).
  */
char continuar6 ( char *texto )
{
 // definir dados locais
    bool teste  = false;
	bool teste1 = false;
	bool teste2 = false;
	char opcao  = '0';
 // ler opcao para continuar	
	do
	{
      printf ( "\n%s", texto  );
      scanf  ( "%c"  , &opcao ); getchar ( );
	  teste1 = ( opcao == 'S' || opcao == 's' );
	  teste2 = ( opcao == 'N' || opcao == 'n' );
	}
	while ( ! (teste1 || teste2) );
	opcao = paraMaiuscula ( opcao );
	return ( opcao );
} // end continuar6 ( )

/**
  * Metodo14.
  */
void metodo14 ( void )
{
 // definir dados e resultados
    int  lado     =  0 ; // garantir a condicao inicial
    int  area     =  0 ;
    int  resposta =  0 ;
    bool teste    = false;
    char opcao    = '0';	
 // identificar
    printf ( "\n%s\n", "Metodo14" );
 // ler opcao para continuar	
	opcao = continuar6 ( "Continuar [S|N]? " );
    teste = ( opcao == 'S' );
 // testar se e' para continuar
    if ( teste )
	{
	 // ler o lado positivo
     	lado     = lerPositivo ( "Qual o valor do lado? " );
     // calcular a area
        area     = lado * lado; 
     // calcular a resposta
        resposta = 6 * area; 
     // mostrar a resposta
        printf ( "%s %d", "resposta = ", resposta );
	} // end if
 // encerrar
    printf ( "\n%s\n", "Apertar ENTER para continuar." );
    getchar( );
} // fim metodo14 ( )

/**
  * Metodo15.
  */
void metodo15 ( void )
{
 // definir dados e resultados
 // OBS.: APENAS PARA VALOR INICIAL E' POSSIVEL ATRIBUIR DIRETAMENTE
    char s1 [80] = ""     ; // area inicialmente vazia
    char s2 [80] = "fGhIJ"; // area com valor inicial
    char s3 [  ] = "KlMnO";
    char s4 [  ] = {'p','Q','r','s','T','\0'};
	int  x      = 0 ;
	
 // identificar
    printf ( "\n%s\n", "Metodo15" );
 // determinar valor inicial
 // OBS.: PARA ATRIBUIR E' NECESSARIO USAR strcpy( )
	strcpy ( s1, "AbCdE" ); // s1 = "AbCdE";
 // mostrar valores	
	printf ( "\ns1 = %s (%d)", s1, strlen(s1) );
	printf ( "\n" );
	printf ( "\ns2 = %s (%d)", s2, strlen(s2) );
	printf ( "\n" );
	printf ( "\ns3 = %s (%d)", s3, strlen(s3) );
	printf ( "\n" );
	printf ( "\ns4 = %s (%d)", s4, strlen(s4) );
	printf ( "\n" );
 // mostrar cada simbolo	
	for ( x=0; x<=strlen(s1); x=x+1 )
	{
		printf ( "\n%d %c %d", x, s1[x], s1[x] );
	} // end for
	printf ( "\n" );

	for ( x=0; x<=strlen(s2); x=x+1 )
	{
		printf ( "\n%d %c %d", x, s2[x], s2[x] );
	} // end for
	printf ( "\n" );

	for ( x=0; x<=strlen(s3); x=x+1 )
	{
		printf ( "\n%d %c %d", x, s3[x], s3[x] );
	} // end for
	printf ( "\n" );

 // alterar valor	
	strcpy ( s2, "0123456789" );
	strcat ( s2, s1 );
	//strcpy ( s3, "0123456789" );
	
 // mostrar valor	
	printf ( "\ns1 = %s (%d)", s1, strlen(s1) );
	printf ( "\n" );
	printf ( "\ns2 = %s (%d)", s2, strlen(s2) );
	printf ( "\n" );
	printf ( "\ns3 = %s (%d)", s3, strlen(s3) );
	printf ( "\n" );
	printf ( "\ns4 = %s (%d)", s4, strlen(s4) );
	printf ( "\n" );

 // encerrar
    printf ( "\n%s\n", "Apertar ENTER para continuar." );
    getchar( );
} // fim metodo15 ( )

/**
  * Metodo16.
  */
void metodo16 ( void )
{
 // definir dados e resultados
    char *s1 = NULL; // nao existe dado algum
	
 // identificar
    printf ( "\n%s\n", "Metodo16" );
 // pedir reserva de espaco para guardar 80 caracteres	
	s1 = calloc (80, sizeof(char)); // char s1 [80];

 // confirmar a reserva	
    if ( s1 != NULL )
    {	
	 // atribuir valor
	    strcpy ( s1, "AbCdE" );
	 // mostrar  valor
        printf ( "\ns1 = %s (%d)", s1, strlen(s1) );
        printf ( "\n" );
	} // end if
	
 // encerrar
    printf ( "\n%s\n", "Apertar ENTER para continuar." );
    getchar( );
} // fim metodo16 ( )

/**
  * Metodo17.
  */
void metodo17 ( void )
{
 // definir dados e resultados
    char s1 [80] = "";
	int  x      =  0 ;
	int  y      =  0 ;
	char c      = '0';
	
 // identificar
    printf ( "\n%s\n", "Metodo17" );
 // atribuir valor	
	strcpy ( s1, "AbCdE" ); // s = "AbCdE";
 // mostrar valor	
	printf ( "\ns1 = %s (%d)", s1, strlen(s1) );
	printf ( "\n" );
 // repetir para cada simbolo	
	for ( x=0; x<=strlen(s1); x=x+1 )
	{
	 // separar um simbolo em certa posicao
	    c = s1 [x];
	 // testar simbolo	
		if ( 'A' <= c && c <= 'Z' )
		{
		 // mostrar simbolo
     		printf ( "\n%d %c %d", x, c, c );
		 // contar mais um letra maiuscula
			y = y + 1; 
		} // end if
	} // end for
 // mostrar o total de maiusculas	
	printf ( "\nmaiusculas = %d\n", y );
	
 // encerrar
    printf ( "\n%s\n", "Apertar ENTER para continuar." );
    getchar( );
} // fim metodo17 ( )

/**
  * Metodo18.
  */
void metodo18 ( void )
{
 // definir dados e resultados
    char s1 [80] = "";
	int  x      =  0 ;
	char c      = '0';
	int  y      =  0 ;
	
 // identificar
    printf ( "\n%s\n", "Metodo18" );
 // atribuir valor inicial	
	strcpy ( s1, "AbCdE" ); // s = "AbCdE";
 // mostrar  valor	
	printf ( "\ns1 = %s (%d)", s1, strlen(s1) );
	printf ( "\n" );
 // repetir para cada simbolo	
	for ( x=0; x<=strlen(s1); x=x+1 )
	{
	 // separar um simbolo em certa posicao
	    c = s1 [x];
	 // testar simbolo
		if ( 'a' <= c && c <= 'z' )
		{
		 // mostrar simbolo
     		printf ( "\n%d %c %d", x, c, c );
		 // contar mais uma minuscula
			y = y + 1; 
		} // end if
	} // end for
 // mostrar o total de minusculas	
	printf ( "\nminusculas = %d\n", y );
	
 // encerrar
    printf ( "\n%s\n", "Apertar ENTER para continuar." );
    getchar( );
} // fim metodo18 ( )

/**
  * Metodo19.
  */
void metodo19 ( void )
{
 // definir dados e resultados
    char s1 [80] = "";
	int  x      =  0 ;
	char c      = '0';
	int  y      =  0 ;
	
 // identificar
    printf ( "\n%s\n", "Metodo19" );
 // atribuir valor inicial	
	strcpy ( s1, "AbCdE" ); // s = "AbCdE";
 // mostrar  valor	
	printf ( "\ns1 = %s (%d)", s1, strlen(s1) );
	printf ( "\n" );
 // repetir para cada simbolo	
	x=0; 
	while ( x <= strlen(s1) )
	{
	 // separar um simbolo em certa posicao
	    c = s1 [x];
	 // testar simbolo
		if ( ('A' <= c && c <= 'Z') ||
             ('a' <= c && c <= 'z') )
		{
		 // mostrar valor
     		printf ( "\n%d %c %d", x, c, c );
		 // contar mais uma letra
			y = y + 1; 
		} // end if
		x=x+1; 
	} // end for
 // mostrar o total de letras	
	printf ( "\nletras = %d\n", y );
	
 // encerrar
    printf ( "\n%s\n", "Apertar ENTER para continuar." );
    getchar( );
} // fim metodo19 ( )

/**
  * Metodo20.
  */
void metodo20 ( void )
{
 // definir dados e resultados
    char s1 [80] =  "";
	int  x       =  0 ;
	char c       = '0';
	int  y       =  0 ;
	int  tamanho =  0 ;
	
 // identificar
    printf ( "\n%s\n", "Metodo20" );
 // atribuir valor inicial	
	strcpy ( s1, "4b(d&" ); // s = "AbCdE";
 // mostrar  valor	
	printf ( "\ns1 = %s (%d)", s1, strlen(s1) );
	printf ( "\n" );
 // guardar o tamanho	
	tamanho = strlen(s1);
 // repetir para cada simbolo
	x=0; 
	while ( x < tamanho )
	{
	 // printf ( "\n%d %c %d", x, s1[x], s1[x] );
	 // separar um simbolo em certa posicao
	    c = s1 [x];
	 // testar simbolo
		if ( ('A' <= c && c <= 'Z') ||
             ('a' <= c && c <= 'z') )
		{
		 // mostrar simbolo
     		printf ( "\n%d %c %d", x, c, c );
		 // contar mais uma letra
			y = y + 1; 
		} // end if
		x=x+1; 
	} // end while
 // mostrar o total de letras
	printf ( "\nletras = %d\n", y );
	
 // encerrar
    printf ( "\n%s\n", "Apertar ENTER para continuar." );
    getchar( );
} // fim metodo20 ( )

// --------------------------- definicao do metodo principal

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
------------------------------ documentacao complementar


------------------------------ notas / observacoes / comentarios


------------------------------ previsao de testes


------------------------------ historico

Versao	Data		    Modificacao
  0.1	__/__		    esboco

 ----------------------------- testes

Versao	Teste
  0.1	01. ( OK )		identificacao de programa

*/

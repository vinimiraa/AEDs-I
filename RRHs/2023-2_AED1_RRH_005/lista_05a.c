/**
  * ------------------------- Documentacao preliminar
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

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>

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
 // definir
 
 // identificar
    printf ( "\n%s"  , "Metodo01" );
 // acoes
    printf ( "\n4/3       = %d ", 4/3     );
    printf ( "\n4/3       = %lf", 4/3     );
    printf ( "\n4.0/3     = %lf", 4.0/3   );
    printf ( "\n4/3.0     = %lf", 4/3.0   );
    printf ( "\n4.0/3.0   = %lf", 4.0/3.0 );
    printf ( "\n1.0*4/3   = %lf", 1.0*4/3 );
    printf ( "\n4/(1.0*3) = %lf", 4/(1.0*3) );
    printf ( "\n(1.0*4)/(1.0*3) = %lf", (1.0*4)/(1.0*3) );
    printf ( "\n4/3       = %lf", (double)4/3 );
    printf ( "\n4/3       = %lf", 4/(double)3 );
    printf ( "\n4/3       = %lf", (double)4/(double)3 );
    printf ( "\n%s%lf", "4/3       = ", (double)4/(double)3 );
 // encerrar
    printf ( "\n%s\n", "Apertar ENTER para continuar." );
    getchar( );
} // fim metodo01 ( )

/**
  * Metodo02.
  */
void metodo02 ( void )
{
 // definir
    double raio   = 0.0;
	double volume = 0.0;
 // identificar
    printf ( "\n%s"  , "Metodo02" );
 // acoes
    // ler o raio
	   printf ( "\n%s", "raio = " );
	   scanf  ( "%lf" , &raio     ); getchar ( );
	// calcular o volume
	// volume = 4  /3   * M_PI * pow ( raio, 3.0 );
	// volume = 4 * M_PI * pow ( raio, 3.0 ) / 3  ;
	// volume = 4.0/3.0 * M_PI * pow ( raio, 3.0 );
	   volume = 4.0 * M_PI * pow ( raio, 3.0 ) / 3.0;
	// mostrar  o volume
       printf ( "\n%s%lf\n", "volume = ", volume ) ;	
 // encerrar
    printf ( "\n%s\n", "Apertar ENTER para continuar." );
    getchar( );
} // fim metodo02 ( )

/**
  * Metodo03.
  */
void metodo03 ( void )
{
 // definir
	double volume = 0.0;
    double raio   = 0.0;
 // identificar
    printf ( "\n%s"  , "Metodo03" );
 // acoes
    // ler o raio
    // calcular o volume
    // mostrar  o volume
 // encerrar
    printf ( "\n%s\n", "Apertar ENTER para continuar." );
    getchar( );
} // fim metodo03 ( )

/**
  * Metodo04.
  */
void metodo04 ( void )
{
 // definir
	double volume = 0.0;
    double raio   = 0.0;
 // identificar
    printf ( "\n%s"  , "Metodo04" );
 // acoes
    // ler o raio
    // calcular o volume
    // mostrar  o volume
	   printf ( "\n%s%lf", "volume = ", volume );
 // encerrar
    printf ( "\n%s\n", "Apertar ENTER para continuar." );
    getchar( );
} // fim metodo04 ( )

/**
  * Metodo05.
  */
void metodo05 ( void )
{
 // definir
	double volume = 0.0;
    double raio   = 1.0;
 // identificar
    printf ( "\n%s"  , "Metodo05" );
 // acoes
    // ler o raio
    // calcular o volume
	   volume = 4.0 / 3.0 * M_PI * pow ( raio, 3.0 ); 
    // mostrar  o volume
	   printf ( "\n%s%lf", "volume = ", volume );
 // encerrar
    printf ( "\n%s\n", "Apertar ENTER para continuar." );
    getchar( );
} // fim metodo03 ( )

/**
  * Metodo06.
  */
void metodo06 ( void )
{
 // definir
	double volume = 0.0;
    double raio   = 1.0;
 // identificar
    printf ( "\n%s"  , "Metodo06" );
 // acoes
    // ler o raio
	   printf ( "\n%s", "raio = " );
	   scanf  ( "%lf" , &raio     ); getchar ( );
    // calcular o volume
	   volume = 4.0 / 3.0 * M_PI * pow ( raio, 3.0 ); 
    // mostrar  o volume
	   printf ( "\n%s%lf", "volume = ", volume );
 // encerrar
    printf ( "\n%s\n", "Apertar ENTER para continuar." );
    getchar( );
} // fim metodo06 ( )

/**
  * Metodo07.
  */
void metodo07 ( void )
{
 // definir
    double raio   = 0.0;
	double volume = 0.0;
 // identificar
    printf ( "\n%s"  , "Metodo07" );
 // acoes
    // ler o raio
	   printf ( "\n%s", "raio = " );
	   scanf  ( "%lf" , &raio     ); getchar ( );
	// testar a validade do valor 
	   if ( raio >= 0.0 )
	   {
	    // calcular o volume
	       volume = 4.0/3.0 * M_PI * pow ( raio, 3.0 );
        // mostrar  o volume
           printf ( "\n%s%lf\n", "volume = ", volume ) ;	
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
 // definir
    double raio   = 0.0;
	double volume = 0.0;
 // identificar
    printf ( "\n%s"  , "Metodo08" );
 // acoes
    // ler o raio
	   printf ( "\n%s", "raio = " );
	   scanf  ( "%lf" , &raio     ); getchar ( );
	// testar a validade do valor 
	   if ( raio >= 0.0 )
	   {
	    // calcular o volume
	       volume = 4.0/3.0 * M_PI * pow ( raio, 3.0 );
        // mostrar  o volume
           printf ( "\n%s%lf\n", "volume = ", volume ) ;	
       }
	   else
	   {
		// mostrar mensagem de erro
		   printf ( "\n%s\n", "ERRO: Valor invalido." );
	   } // end if		   
 // encerrar
    printf ( "\n%s\n", "Apertar ENTER para continuar." );
    getchar( );
} // fim metodo08 ( )

/**
  * Metodo09.
  */
void metodo09 ( void )
{
 // definir
    double raio   = 0.0;
	double volume = 0.0;
 // identificar
    printf ( "\n%s"  , "Metodo09" );
 // acoes
    // ler o raio
	   printf ( "\n%s", "raio = " );
	   scanf  ( "%lf" , &raio     ); getchar ( );
	// testar a validade do valor 
	   if ( ! ( raio >= 0.0 ) )
	   {
		// mostrar mensagem de erro
		   printf ( "\n%s\n", "ERRO: Valor invalido." );
	   }   
	   else
	   {
	    // calcular o volume
	       volume = 4.0/3.0 * M_PI * pow ( raio, 3.0 );
        // mostrar  o volume
           printf ( "\n%s%lf\n", "volume = ", volume );	
       } // end if
 // encerrar
    printf ( "\n%s\n", "Apertar ENTER para continuar." );
    getchar( );
} // fim metodo09 ( )

/**
  * Metodo10.
  */
void metodo10 ( void )
{
 // definir
    double raio   = 0.0;
	double volume = 0.0;
 // identificar
    printf ( "\n%s"  , "Metodo10" );
 // acoes
    // ler o raio
	   printf ( "\n%s", "raio = " );
	   scanf  ( "%lf" , &raio     ); getchar ( );
	// testar a validade do valor 
	   if ( raio < 0.0 )
	   {
		// mostrar mensagem de erro
		   printf ( "\n%s\n", "ERRO: Valor invalido." );
	   } // end if		   
	   else
	   {
	    // calcular o volume
	       volume = 4.0/3.0 * M_PI * pow ( raio, 3.0 );
        // mostrar  o volume
           printf ( "\n%s%lf\n", "volume = ", volume ) ;	
       } // end if
 // encerrar
    printf ( "\n%s\n", "Apertar ENTER para continuar." );
    getchar( );
} // fim metodo10 ( )

/**
  * Metodo11.
  */
void metodo11 ( void )
{
 // definir
    double raio     = 0.0;
	double volume   = 0.0;
	const  double k = 4.0/3.0 * M_PI;
 // identificar
    printf ( "\n%s"  , "Metodo11" );
 // acoes
    // ler o raio
	   printf ( "\n%s", "raio = " );
	   scanf  ( "%lf" , &raio     ); getchar ( );
	// testar a validade do valor 
	   if ( raio < 0.0 )
	   {
		// mostrar mensagem de erro
		   printf ( "\n%s\n", "ERRO: Valor invalido." );
	   } // end if		   
	   else
	   {
	    // calcular o volume
	       volume = k * pow ( raio, 3.0 );
        // mostrar  o volume
           printf ( "\n%s%lf\n", "volume = ", volume ) ;	
       } // end if
 // encerrar
    printf ( "\n%s\n", "Apertar ENTER para continuar." );
    getchar( );
} // fim metodo11 ( )

/**
  * Metodo12.
  */
void metodo12 ( void )
{
 // definir
    double raio     = 0.0;
	double volume   = 0.0;
	const  double k = 4.0/3.0 * M_PI;
	double tmp      = 0.0;
 //   int    tmp;
 // identificar
    printf ( "\n%s"  , "Metodo12" );
 // acoes
    // ler o raio
	   printf ( "\n%s", "raio = " );
	   scanf  ( "%lf" , &raio     ); getchar ( );
	// testar a validade do valor 
	   if ( raio < 0.0 )
	   {
		// mostrar mensagem de erro
		   printf ( "\n%s\n", "ERRO: Valor invalido." );
	   } // end if		   
	   else
	   {
	    // calcular o volume
		   tmp    = pow ( raio, 3.0 );
		// printf ( "401. raio = %lf tmp = %d", raio, tmp );
	       volume = k * tmp;
        // mostrar  o volume
           printf ( "\n%s%lf\n", "volume = ", volume ) ;	
       }
 // encerrar
    printf ( "\n%s\n", "Apertar ENTER para continuar." );
    getchar( );
} // fim metodo12 ( )

/**
  * Metodo13.
  */
void metodo13 ( void )
{
 // definir
    double raio     = 0.0;
	double volume   = 0.0;
	const  double k = 4.0/3.0 * M_PI;
 // identificar
    printf ( "\n%s"  , "Metodo13" );
 // acoes
    // ler o raio
	   printf ( "\n%s", "raio = " );
	   scanf  ( "%lf" , &raio     ); getchar ( );
	// testar a validade do valor 
	   while ( raio < 0.0 )
	   {
		// mostrar mensagem de erro
		   printf ( "\n%s\n", "ERRO: Valor invalido." );
		// ler de novo   
           printf ( "\n%s", "raio = " );
	       scanf  ( "%lf" , &raio     ); getchar ( );
	   } // end while
	   
    // calcular o volume
       volume = k * pow ( raio, 3.0 );
    // mostrar  o volume
       printf ( "\n%s%lf\n", "volume = ", volume ) ;	
 // encerrar
    printf ( "\n%s\n", "Apertar ENTER para continuar." );
    getchar( );
} // fim metodo13 ( )

/**
  * Metodo14.
  */
void metodo14 ( void )
{
 // definir
    double raio     = 0.0;
	double volume   = 0.0;
	const  double k = 4.0/3.0 * M_PI;
 // identificar
    printf ( "\n%s"  , "Metodo14" );
 // acoes
	// testar a validade do valor 
	   do
	   {
        // ler o raio
	       printf ( "\n%s", "raio = " );
	       scanf  ( "%lf" , &raio     ); getchar ( );
		// testar a validade
           if ( raio < 0.0 )
           {		   
		    // mostrar mensagem de erro
		       printf ( "\n%s\n", "ERRO: Valor invalido." );
		   } // end if
	   }
	   while ( raio < 0.0 );
	   
    // calcular o volume
       volume = k * pow ( raio, 3.0 );
    // mostrar  o volume
       printf ( "\n%s%lf\n", "volume = ", volume ) ;	
 // encerrar
    printf ( "\n%s\n", "Apertar ENTER para continuar." );
    getchar( );
} // fim metodo14 ( )

/**
  * Metodo15.
  */
void metodo15 ( void )
{
 // definir
    double raio     = 0.0;
	double volume   = 0.0;
	const  double k = 4.0/3.0 * M_PI;
	bool   teste    = false;
 // identificar
    printf ( "\n%s"  , "Metodo15" );
 // acoes
	// testar a validade do valor 
	   do
	   {
        // ler o raio
	       printf ( "\n%s", "raio = " );
	       scanf  ( "%lf" , &raio     ); getchar ( );
		// fazer o teste
		   teste = ( raio < 0.0 );
		// testar a validade
           if ( teste )
           {		   
		    // mostrar mensagem de erro
		       printf ( "\n%s\n", "ERRO: Valor invalido." );
		   } // end if
	   }
	   while ( teste );
	   
    // calcular o volume
       volume = k * pow ( raio, 3.0 );
    // mostrar  o volume
       printf ( "\n%s%lf\n", "volume = ", volume ) ;	
 // encerrar
    printf ( "\n%s\n", "Apertar ENTER para continuar." );
    getchar( );
} // fim metodo15 ( )

/**
  * Metodo16.
  */
void metodo16 ( void )
{
 // definir
    double raio     = 0.0;
	double volume   = 0.0;
	const  double k = 4.0/3.0 * M_PI;
	int    vezes    = 0;
 // identificar
    printf ( "\n%s"  , "Metodo16" );
 // acoes
    // ler o raio
	   printf ( "\n%s", "raio = " );
	   scanf  ( "%lf" , &raio     ); getchar ( );
	   vezes  = 1;
	// testar a validade do valor 
	   while ( raio < 0.0 && vezes < 3 )
	   {
	       printf ( "\nraio = %lf vezes = %d", raio, vezes ); 
		   getchar( );
		// mostrar mensagem de erro
		   printf ( "\n%s\n", "ERRO: Valor invalido." );
		// ler de novo   
           printf ( "\n%s", "raio = " );
	       scanf  ( "%lf" , &raio ); getchar ( );
		   vezes  = vezes + 1;
	   } // end while
	   
	// testar a validade
       if ( raio < 0.0 )
       {		   
        // mostrar mensagem de erro
	       printf ( "\n%s\n", "ERRO: Valor invalido." );
	   }
	   else
	   {
		// calcular o volume
           volume = k * pow ( raio, 3.0 );
        // mostrar  o volume
           printf ( "\n%s%lf\n", "volume = ", volume ) ;	
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
 // definir
    double raio     = 0.0;
	double volume   = 0.0;
	const  double k = 4.0/3.0 * M_PI;
	int    vezes    = 3;
 // identificar
    printf ( "\n%s"  , "Metodo17" );
 // acoes
    // ler o raio
	   printf ( "\n%s", "raio = " );
	   scanf  ( "%lf" , &raio     ); getchar ( );
	   vezes  = vezes - 1;
	// testar a validade do valor 
	   while ( raio < 0.0 && vezes > 0 )
	   {
	       printf ( "\nraio = %lf vezes = %d", raio, vezes );
		   getchar( );
		// mostrar mensagem de erro
		   printf ( "\n%s\n", "ERRO: Valor invalido." );
		// ler de novo   
           printf ( "\n%s", "raio = " );
	       scanf  ( "%lf" , &raio ); getchar ( );
		   vezes  = vezes - 1;
	   } // end while
	   
	// testar a validade
       if ( raio < 0.0 )
       {		   
		// mostrar mensagem de erro
		   printf ( "\n%s\n", "ERRO: Valor invalido." );
	   }
	   else
	   {
		// calcular o volume
           volume = k * pow ( raio, 3.0 );
        // mostrar  o volume
           printf ( "\n%s%lf\n", "volume = ", volume ) ;	
	   } // end if
 // encerrar
    printf ( "\n%s\n", "Apertar ENTER para continuar." );
    getchar( );
} // fim metodo17 ( )

/**
  * Metodo18.
  */
void metodo18 ( void )
{
 // definir
    double raio     = -1.0;
	double volume   =  0.0;
	const  double k =  4.0/3.0 * M_PI;
	int    vezes    =  3;
 // identificar
    printf ( "\n%s"  , "Metodo18" );
 // acoes
	// testar a validade do valor 
	   for (  vezes = 3; vezes > 0; vezes = vezes - 1 )
	   {
		// ler de novo   
           printf ( "\n%s", "raio = " );
	       scanf  ( "%lf" , &raio     ); getchar ( );
	       printf ( "\nraio = %lf vezes = %d", raio, vezes );
		   getchar( );
           if ( raio < 0.0 )
		   {
		    // mostrar mensagem de erro
		       printf ( "\n%s\n", "ERRO: Valor invalido." );
		   }
		   else
		   {
		    // parar a repeticao 
			   vezes = 0;
		   } // end if
	   } // end for
	   
	// testar a validade
       if ( raio < 0.0 )
       {		   
		// mostrar mensagem de erro
           printf ( "\n%s\n", "ERRO: Valor invalido." );
	   }
	   else
	   {
		// calcular o volume
           volume = k * pow ( raio, 3.0 );
        // mostrar  o volume
           printf ( "\n%s%lf\n", "volume = ", volume ) ;	
	   } // end if
 // encerrar
    printf ( "\n%s\n", "Apertar ENTER para continuar." );
    getchar( );
} // fim metodo18 ( )

/**
  * Metodo19.
  */
void metodo19 ( void )
{
 // definir
    double raio     = -1.0;
	double volume   =  0.0;
	const  double k =  4.0/3.0 * M_PI;
	int    vezes    =  3;
	bool   controle =  true;
 // identificar
    printf ( "\n%s"  , "Metodo19" );
 // acoes
	// testar a validade do valor 
	   vezes = 3; 
	   while ( controle && vezes > 0 )
	   {
		// ler de novo   
           printf ( "\n%s", "raio = " );
	       scanf  ( "%lf" , &raio     ); getchar ( );
	       printf ( "\nraio = %lf vezes = %d", raio, vezes );
		   getchar( );
	       vezes = vezes - 1;
           if ( raio < 0.0 )
		   {
		    // mostrar mensagem de erro
		       printf ( "\n%s\n", "ERRO: Valor invalido." );
		   }
		   else
		   {
		    // parar a repeticao 
			   controle = false;
		   } // end if
	   } // end while
	   
	// testar a validade
       if ( raio < 0.0 )
       {		   
		// mostrar mensagem de erro
           printf ( "\n%s\n", "ERRO: Valor invalido." );
	   }
	   else
	   {
		// calcular o volume
           volume = k * pow ( raio, 3.0 );
        // mostrar  o volume
           printf ( "\n%s%lf\n", "volume = ", volume ) ;	
	   } // end if
 // encerrar
    printf ( "\n%s\n", "Apertar ENTER para continuar." );
    getchar( );
} // fim metodo19 ( )

/**
  * Metodo20.
  */
void metodo20 ( void )
{
 // definir
    double raio     = -1.0;
	double volume   =  0.0;
	const  double k =  4.0/3.0 * M_PI;
	int    vezes    =  3;
	bool   controle =  true;
 // identificar
    printf ( "\n%s"  , "Metodo20" );
 // acoes
	// testar a validade do valor 
	   vezes = 3; 
	   while ( controle && vezes > 0 )
	   {
		// ler de novo   
           printf ( "\n%s", "raio = " );
	       scanf  ( "%lf" , &raio     ); getchar ( );
	       printf ( "\nraio = %lf vezes = %d", raio, vezes );
		   getchar( );
	       vezes    =  vezes - 1  ;
		   controle = (raio < 0.0); 
           if ( controle )
		   {
		    // mostrar mensagem de erro
		       printf ( "\n%s\n", "ERRO: Valor invalido." );
		   }
	   } // end while
	   
	// testar a validade
       if ( raio < 0.0 )
       {		   
		// mostrar mensagem de erro
           printf ( "\n%s\n", "ERRO: Valor invalido." );
	   }
	   else
	   {
		// calcular o volume
           volume = k * pow ( raio, 3.0 );
        // mostrar  o volume
           printf ( "\n%s%lf\n", "volume = ", volume ) ;	
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
           case  1: metodo01 ( ); break; case  2: metodo02 ( ); break;
           case  3: metodo03 ( ); break; case  4: metodo04 ( ); break;
           case  5: metodo05 ( ); break; case  6: metodo06 ( ); break;
           case  7: metodo07 ( ); break; case  8: metodo08 ( ); break;
           case  9: metodo09 ( ); break; case 10: metodo10 ( ); break;
           case 11: metodo11 ( ); break; case 12: metodo12 ( ); break;
           case 13: metodo13 ( ); break; case 14: metodo14 ( ); break;
           case 15: metodo15 ( ); break; case 16: metodo16 ( ); break;
           case 17: metodo17 ( ); break; case 18: metodo18 ( ); break;
           case 19: metodo19 ( ); break; case 20: metodo20 ( ); break;
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

Versao	Data		          Modificacao
  0.1	__/__		          esboco

 ---------------------------- testes

Versao	Teste
  0.1	01. ( OK )	          identificacao de programa

*/

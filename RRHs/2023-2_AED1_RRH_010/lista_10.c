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
void method_01 ( void )
{
 // definir dados
 // abrir para gravar texto (wt = write text)
    FILE * arquivo = fopen ( "DADOS.TXT", "wt" );
    int    x       = 0;
 // identificar
    printf ( "999999_AED1_Method_01\n" );
 // acoes
    do
    {
     // ler     dado
	printf  ( "%s", "\nx = " );
	scanf   ( "%i", &x ); getchar ( );
     // mostrar dado
	printf  (          "%i\n", x );
     // gravar  dado
        fprintf ( arquivo, "%i\n", x );
    }
    while ( x != 0 );
 // INDISPENSAVEL fechar ao gravar
    fclose ( arquivo );
 // encerrar
    printf ( "\n%s\n", "Apertar ENTER para continuar." );
    getchar( );
} // fim method_01 ( )

/**
  * Metodo02.
  */
void method_02 ( void )
{
 // definir dados
 // abrir para ler texto (rt = read text)
    FILE * arquivo = fopen ( "DADOS.TXT", "rt" );
    int    x       = 0;
 // identificar
    printf ( "999999_AED1_Method_02\n" );
 // acoes
    fscanf( arquivo, "%i", &x );        // ler o primeiro
    while ( ! feof ( arquivo ) )
    {
     // mostrar dado
	printf (          "%i\n",  x );
        fscanf ( arquivo, "%i"  , &x ); // ler o proximo
    } // end while
 // RECOMENDAVEL fechar ao ler
    fclose ( arquivo );
 // encerrar
    printf ( "\n%s\n", "Apertar ENTER para continuar." );
    getchar( );
} // fim method_02 ( )

/**
  * Metodo03.
  */
void method_03 ( void )
{
 // definir dados
 // abrir para acrescentar ao final (at = append text)
    FILE * arquivo = fopen ( "DADOS.TXT", "at" );
    int    x       = 0;
 // identificar
    printf ( "999999_AED1_Method_03\n" );
 // acoes
    do
    {
     // ler     dado
	printf  ( "%s", "\nx = " );
	scanf   ( "%i", &x ); getchar ( );
     // mostrar dado
	printf  (          "%i\n", x );
     // gravar  dado
        fprintf ( arquivo, "%i\n", x );
    }
    while ( x != 0 );
 // INDISPENSAVEL ao gravar
    fclose ( arquivo );
 // encerrar
    printf ( "\n%s\n", "Apertar ENTER para continuar." );
    getchar( );
} // fim method_03 ( )

/**
  * Metodo04.
  */
void method_04 ( void )
{
 // definir dados
 // abrir para acrescentar 'a copia
    FILE * arquivo1 = fopen ( "NOVO.TXT" , "wt" );
    FILE * arquivo2 = fopen ( "DADOS.TXT", "rt" );
    int    x        = 0;
 // identificar
    printf ( "999999_AED1_Method_04\n" );
 // acoes
 // copiar dados diferentes de zero
    fscanf( arquivo2, "%i", &x );        // ler o primeiro
    while ( ! feof ( arquivo2 ) )
    {
     // testar se valor lido diferente de zero
        if ( x != 0 )
        {
           fprintf ( arquivo1, "%i\n",  x );
        } // end if
        fscanf  ( arquivo2, "%i"  , &x );// ler o proximo
    } // end while
 // acrescentar ao final da copia
    do
    {
     // ler    dado
        printf  ( "%s", "\nx = " );
        scanf   ( "%i", &x ); getchar ( );
     // gravar dado
        fprintf ( arquivo1, "%i\n", x );
    }
    while ( x != 0 );
 // fechar arquivos
    fclose ( arquivo1 ); // RECOMENDAVEL  ao ler
    fclose ( arquivo2 ); // INDISPENSAVEL ao gravar
 // encerrar
    printf ( "\n%s\n", "Apertar ENTER para continuar." );
    getchar( );
} // fim method_04 ( )

/**
  * Metodo05.
  */
void method_05 ( void )
{
 // definir dados
 // abrir para gravar texto
    FILE * arquivo = fopen ( "DADOS.TXT", "wt" );
    double x       = 0.0;
 // identificar
    printf ( "999999_AED1_Method_05\n" );
 // acoes
    do
    {
     // ler     dado
	printf  ( "%s", "\nx = " );
	scanf   ( "%lf",  &x ); getchar ( );
     // mostrar dado
	printf  (          "%lf\n", x );
     // gravar  dado
        fprintf ( arquivo, "%lf\n", x );
    }
    while ( x != 0.0 );
 // INDISPENSAVEL fechar ao gravar
    fclose ( arquivo );
 // encerrar
    printf ( "\n%s\n", "Apertar ENTER para continuar." );
    getchar( );
} // fim method_05 ( )

/**
  * Metodo06.
  */
void method_06 ( void )
{
 // definir dados
 // abrir para ler texto
    FILE * arquivo = fopen ( "DADOS.TXT", "rt" );
    double x       = 0;
 // identificar
    printf ( "999999_AED1_Method_06\n" );
 // acoes
    fscanf( arquivo, "%lf", &x );        // ler o primeiro
    while ( ! feof ( arquivo ) )
    {
     // mostrar dado
	printf (          "%lf\n",  x );
        fscanf ( arquivo, "%lf"  , &x ); // ler o proximo
    } // end while
 // RECOMENDAVEL fechar ao ler
    fclose ( arquivo );
 // encerrar
    printf ( "\n%s\n", "Apertar ENTER para continuar." );
    getchar( );
} // fim method_06 ( )

/**
  * Metodo07.
  */
void method_07 ( void )
{
 // definir dados
 // abrir para gravar texto
    FILE * arquivo = fopen ( "DADOS.TXT", "wt" );
    char   x = '0';
 // identificar
    printf ( "999999_AED1_Method_07\n" );
 // acoes
    do
    {
     // ler     dado
	printf  ( "%s", "\nx = " );
	scanf   ( "%c",   &x ); getchar ( );
     // mostrar dado
	printf  (          "%c\n", x );
     // gravar  dado
        fprintf ( arquivo, "%c\n", x );
    }
    while ( x != '0' );
 // INDISPENSAVEL fechar ao gravar
    fclose ( arquivo );
 // encerrar
    printf ( "\n%s\n", "Apertar ENTER para continuar." );
    getchar( );
} // fim method_07 ( )

/**
  * Metodo08.
  */
void method_08 ( void )
{
 // definir dados
 // abrir para ler texto
    FILE * arquivo = fopen ( "DADOS.TXT", "rt" );
    char   x = '0';
 // identificar
    printf ( "999999_AED1_Method_08\n" );
 // acoes
    fscanf( arquivo, "%c", &x );        // ler o primeiro
    while ( ! feof ( arquivo ) )
    {
     // mostrar dado
	printf (          "%c\n",  x );
        fscanf ( arquivo, "%c"  , &x ); // ler o proximo
    } // end while
 // RECOMENDAVEL fechar ao ler
    fclose ( arquivo );
 // encerrar
    printf ( "\n%s\n", "Apertar ENTER para continuar." );
    getchar( );
} // fim method_08 ( )

/**
  * Metodo09.
  */
void method_09 ( void )
{
 // definir dados
 // abrir para gravar texto
    FILE * arquivo = fopen ( "DADOS.TXT", "wt" );
    char   x [80];
 // identificar
    printf ( "999999_AED1_Method_09\n" );
 // acoes
    do
    {
     // ler     dado
	printf  ( "%s", "\nx = " );
	scanf   ( "%s",    x ); getchar ( );
     // mostrar dado
	printf  (          "%s\n", x );
     // gravar  dado
        fprintf ( arquivo, "%s\n", x );
    }
    while ( strcmp ( "0", x ) != 0 );
 // INDISPENSAVEL fechar ao gravar
    fclose ( arquivo );
 // encerrar
    printf ( "\n%s\n", "Apertar ENTER para continuar." );
    getchar( );
} // fim method_09 ( )

/**
  * Metodo10.
  */
void method_10 ( void )
{
 // definir dados
 // abrir para ler texto
    FILE * arquivo = fopen ( "DADOS.TXT", "rt" );
    char   x [80];
 // identificar
    printf ( "999999_AED1_Method_10\n" );
 // acoes
    fscanf( arquivo, "%s", x );         // ler o primeiro
    while ( ! feof ( arquivo ) )
    {
     // mostrar dado
	printf (          "%s\n",  x );
        fscanf ( arquivo, "%s"  ,  x ); // ler o proximo
    } // end while
 // RECOMENDAVEL fechar ao ler
    fclose ( arquivo );
 // encerrar
    printf ( "\n%s\n", "Apertar ENTER para continuar." );
    getchar( );
} // fim method_10 ( )

/**
  * Metodo11.
  */
void method_11 ( void )
{
  // definir dados
     int array [10]; // reservar area para dados
     int n = 0;
     int x = 0;
     int y = 0;
  // abrir arquivo para gravar texto
     FILE *arquivo = fopen ( "DADOS.TXT", "wt" );
  // identificar
     printf ( "999999_AED1_Method_11\n"   );
  // acoes
  // ler quantidade de dados
     do
     {  
        printf ( "\nQuantos dados? " );
        scanf  ( "%d", &n ); getchar ( );
     }
     while ( n <= 0 || 10 < n );
  // ler e guardar dados em arranjo
     for ( y = 0; y < n; y = y+1 )
     {
         printf ( "\nx = " );
         scanf  ( "%d", &x ); getchar ( );
         array  [ y ] = x; // guardar
     } // end for
  // gravar dados em arquivo
     for ( y = 0; y < n; y = y+1 )
     {
         fprintf (arquivo,"%d\n",array [y]);
     } // end for
  // fechar arquivo (INDISPENSAVEL ao gravar)
     fclose ( arquivo );
  // encerrar
     printf ( "\nApertar ENTER\n\n" ); getchar( );
} // end method_11 ( )

/**
  * Metodo12.
  */
void method_12 ( void )
{
  // definir dados
     int array [10]; // reservar a area para dados
     int n = 0;
     int x = 0;
     int y = 0;
  // abrir arquivo para ler texto
     FILE *arquivo = fopen ( "DADOS.TXT", "rt" );
  // identificar
     printf ( "999999_AED1_Method_12\n" );
  // acoes
     fscanf ( arquivo,"%d", &x );
     while ( ! feof(arquivo) && n < 10 )
     {
         array [ n ] = x; // guardar
         n = n + 1;       // contar
         fscanf (arquivo,"%d",&x);
     } // end while
     for ( y = 0; y < n; y = y+1 )
     {
         printf ( "%2d: %d\n", y, array [y] );
     } // end for
  // fechar arquivo (RECOMENDAVEL ao ler)
     fclose ( arquivo );
  // encerrar
     printf ( "\nApertar ENTER\n\n" ); getchar( );
} // end method_12 ( )

/**
  * Metodo13.
  */
void method_13 ( void )
{
  // definir dados
     int array [10]; // reservar a area para dados
     int n = 0;
     int x = 0;
     int y = 0;
  // abrir arquivo para gravar texto
     FILE *arquivo = fopen ( "DADOS.TXT", "wt" );
  // identificar
     printf ( "999999_AED1_Method_13\n"   );
  // acoes
     do
     {
        printf ( "\nQuantos dados? " );
        scanf  ( "%d", &n ); getchar ( );
     }
     while ( n <= 0 || 10 < n );
     for ( y = 0; y < n; y = y+1 )
     {
         printf ( "\nx = " );
         scanf  ( "%d", &x ); getchar ( );
         array  [ y ] = x; // guardar
     } // end for
  // gravar a quantidade
     fprintf ( arquivo,"%d\n", n );
  // gravar dados
     for ( y = 0; y < n; y = y+1 )
     {   fprintf ( arquivo, "%d\n", array [y] );
     } // end for
  // fechar arquivo (INDISPENSAVEL ao gravar)
     fclose ( arquivo );
  // encerrar
     printf ( "\nApertar ENTER\n\n" ); getchar( );
} // end method_13 ( )

/**
  * Metodo14.
  */
void method_14 ( void )
{
  // definir dados
     int n = 0;
     int x = 0;
     int y = 0;
  // abrir arquivo para ler texto
     FILE *arquivo = fopen("DADOS.TXT","rt");
  // identificar
     printf ( "999999_AED1_Method_14\n" );
  // acoes
  // ler a quantidade de dados
     fscanf ( arquivo,"%d", &n );
  // testar se quantidade valida
     if ( n > 0 )
     {
      // reservar area para guardar dados
         int array [n];
      // ler e guardar dados em arranjo
         fscanf ( arquivo,"%d", &x );
      // testar fim arquivo e capacidade de armazenar
         while ( ! feof(arquivo) && y < n )
         {
            array [ y ] = x; // guardar
            y = y + 1;       // contar
            fscanf ( arquivo,"%d", &x );
         } // end while
      // mostrar dados lidos
         for ( x = 0; x < y; x = x+1 )
         {
             printf ( "%2d: %d\n", x, array [x] );
         } // end for
     } // end if
  // fechar arquivo (RECOMENDAVEL ao ler)
     fclose ( arquivo );
  // encerrar
     printf ( "\nApertar ENTER\n\n" ); getchar( );
} // end method_14 ( )

/**
  * Metodo15.
  */
void method_15 ( void )
{
  // definir dados
     int n = 0;
     int x = 0;
     int y = 0;
  // abrir arquivo para ler texto
     FILE *arquivo = fopen("DADOS.TXT","rt");
  // identificar
     printf ( "999999_AED1_Method_15\n" );
  // acoes
  // ler e contar dados em arquivo
     fscanf ( arquivo,"%d", &x );
     while ( ! feof(arquivo) )
     {
           n = n + 1;       // contar
           fscanf ( arquivo,"%d", &x );
     } // end while
  // mostrar quantidade de dados lidos
     printf ( "%quantidade = %d\n", n );
  // fechar arquivo (RECOMENDAVEL ao ler)
     fclose ( arquivo );
  // encerrar
     printf ( "\nApertar ENTER\n\n" ); getchar( );
} // end method_15 ( )

/**
  * Metodo16.
  */
void method_16 ( void )
{
  // definir dados
     int  n =  0 ;
     int  x =  0 ;
     int  y =  0 ;
     char c = '0';
  // abrir arquivo para ler texto
     FILE *arquivo = fopen("DADOS.TXT","rt");
  // identificar
     printf ( "999999_AED1_Method_16\n" );
  // acoes
  // ler e contar dados em arquivo
     fscanf ( arquivo,"%c", &c );
     while ( ! feof(arquivo) )
     {
      // testar se mudanca de linha
         if ( 10 == (int) c )
         {  n = n + 1;  }     // contar
         fscanf ( arquivo,"%c", &c );
     } // end while
  // mostrar quantidade de linhas
     printf ( "%quantidade = %d\n", n );
  // fechar arquivo (RECOMENDAVEL ao ler)
     fclose ( arquivo );
  // encerrar
     printf ( "\nApertar ENTER\n\n" ); getchar( );
} // end method_16 ( )

/**
  * Funcao para contar linhas em arquivo.
  * @param filename - nome do arquivo
  */
int count_lines ( char *filename )
{
 // definir dados
    int   n = 0;
    int   x = 0;
 // tentar abrir arquivo para ler texto
    FILE *arquivo1 = fopen ( filename, "rt" );
 // testar a existencia de arquivo
    if ( ! arquivo1 )
    {
     // mostrar erro
        printf ( "\nERRO: Problema na leitura.\n" );
    }
    else
    {
     // contar a quantidade de linhas
     // tentar ler o primeiro dado
        fscanf ( arquivo1, "%d", &x );
     // ler e contar linhas
        while ( ! feof(arquivo1) )
        {
         // contar mais um dado
            n = n + 1;
         // tentar ler o proximo dado
            fscanf ( arquivo1, "%d", &x );
        } // end while
     // fechar arquivo
        fclose ( arquivo1 );
    } // end if
  // retornar resultado
     return ( n );
} // end count_lines ( )

/**
  * Metodo17.
  */
void method_17 ( void )
{
  // definir dados
     int n = 0;
     int x = 0;
     int y = 0;
  // abrir arquivo para ler texto
     FILE *arquivo = fopen("DADOS.TXT","rt");
  // identificar
     printf ( "999999_AED1_Method_17\n" );
  // acoes
  // ler a quantidade de dados
     n = count_lines ( "DADOS.TXT" );
  // testar se quantidade valida
     if ( n > 0 )
     {
      // reservar area para guardar dados
         int array [n];
      // ler e guardar dados em arranjo
         fscanf ( arquivo,"%d", &x );
      // testar fim arquivo e capacidade de armazenar
         while ( ! feof(arquivo) && y < n )
         {
            array [ y ] = x; // guardar
            y = y + 1;       // contar
            fscanf ( arquivo,"%d", &x );
         } // end while
      // mostrar dados lidos
         for ( x = 0; x < y; x = x+1 )
         {
             printf ( "%2d: %d\n", x, array [x] );
         } // end for
     } // end if
  // fechar arquivo (RECOMENDAVEL ao ler)
     fclose ( arquivo );
  // encerrar
     printf ( "\nApertar ENTER\n\n" ); getchar( );
} // end method_17 ( )

/**
  * Metodo18.
  */
void method_18 ( void )
{
  // definir dados
     int n = 0;
     int x = 0;
     int y = 0;
  // definir apontador para arquivo
     FILE *arquivo = NULL;
  // identificar
     printf ( "999999_AED1_Method_17\n" );
  // acoes
  // ler a quantidade de dados
     n = count_lines ( "DADOS.TXT" );
  // testar se quantidade valida
     if ( n > 0 )
     {
      // abrir arquivo para ler texto
         arquivo = fopen("DADOS.TXT","rt");
      // reservar area para guardar dados
         int array [n];
      // ler e guardar dados em arranjo
         fscanf ( arquivo,"%d", &x );
      // testar fim arquivo e capacidade de armazenar
         while ( ! feof(arquivo) && y < n )
         {
            array [ y ] = x; // guardar
            y = y + 1;       // contar
            fscanf ( arquivo,"%d", &x );
         } // end while
      // mostrar dados lidos
         for ( x = 0; x < y; x = x+1 )
         {
             printf ( "%2d: %d\n", x, array [x] );
         } // end for
     } // end if
  // fechar arquivo (RECOMENDAVEL ao ler)
     fclose ( arquivo );
  // encerrar
     printf ( "\nApertar ENTER\n\n" ); getchar( );
} // end method_18 ( )

/**
  * Metodo para gravar valor em arquivo.
  * @param filename - nome do arquivo
  * @param value    - valor a ser gravado
  */
void bloco_gravar_01 ( char *filename, int value )
{
 // abrir arquivo para acrescimo
    FILE *arquivo = fopen ( filename, "at" );
 // printf  (          "%d\n", value );
 // gravar
    fprintf ( arquivo, "%d\n", value );
 // fechar arquivo
    fclose  ( arquivo );
} // fim gravar ( )

/**
  * Metodo para gravar valor em arquivo.
  * @param filename   - nome do arquivo
  * @param x          - controle da recursao
  * @param size       - quantidade de dados
  */
void r_gravar_01b ( char *filename, int x, int size )
{
 // definir dado local
    int y = 0;
 // testar limite
    if ( x <= size )
    {
     // ler dado
        printf ( "\ny = " );
        scanf  ( "%d", &y ); getchar( );
     // gravar dado
        bloco_gravar_01 ( filename, y );
     // tentar fazer o proximo
        r_gravar_01b ( filename, x + 1, size );
    } // end if
} // fim r_gravar_01b ( )

/**
  * Metodo (de servico) para gravar valor em arquivo.
  * @param filename   - nome do arquivo
  * @param size       - quantidade de dados
  */
void r_gravar_01a ( char *filename, int size )
{
 // testar se quantidade valida
    if ( size > 0 )
    {
     // abrir arquivo para limpar o arquivo
        FILE  * arquivo = fopen ( filename, "wt" );
        fclose (arquivo);
     // disparar o processo recursivo
        r_gravar_01b ( filename, 1, size );
    } // end if
} // fim r_gravar_01a ( )

/**
  * Metodo19.
  */
void method_19 ( void )
{
 // definir dado
    int n = 0;
 // identificar
    printf ( "999999_AED1_Method_19\n" );
 // acoes
 // ler quantidade de dados para gravar
    printf ( "\nn = " );
    scanf ( "%d", &n ); getchar( );
 // iniciar a recursao
    r_gravar_01a ( "DADOS.TXT", n );
    printf ( "\n" );
 // encerrar
    printf ( "\nApertar ENTER\n\n" ); getchar( );
} // fim metodo19 ( )

/**
  * Metodo para gravar valor em arquivo.
  * OBS.: Supor o arquivo ja' aberto.
  * @param archive - apontador para arquivo
  * @param value   - valor a ser gravado
  */
void bloco_gravar_02 ( FILE *archive, int value )
{
 // printf  (          "%d\n", value );
 // gravar dado em arquivo ja' aberto
    fprintf ( archive, "%d\n", value );
} // fim gravar ( )

/**
  * Metodo para gravar valor em arquivo.
  * OBS.: Supor o arquivo ja' aberto.
  * @param archive    - apontador para arquivo
  * @param x          - controle da recursao
  * @param size       - quantidade de dados
  */
void r_gravar_02b ( FILE *archive, int x, int size )
{
 // definir dado local
    int y = 0;
 // testar limite
    if ( x <= size )
    {
     // ler dado novo
        printf ("\ny = ");
        scanf  ( "%d", &y ); getchar( );
     // gravar dado
        bloco_gravar_02 ( archive, y );
     // tentar fazer o proximo
        r_gravar_02b ( archive, x + 1, size );
    } // end if
} // fim r_gravar_01b ( )

/**
  * Metodo (de servico) para gravar valor em arquivo.
  * @param filename   - nome do arquivo
  * @param size       - quantidade de dados
  */
void r_gravar_02a ( char *filename, int size )
{
    FILE *arquivo = NULL;
    if ( size > 0 )
    {
     // abrir arquivo antes de iniciar a recursao
        arquivo = fopen ( filename, "wt" );
        r_gravar_02b ( arquivo, 1, size );
     // fechar arquivo apos o retorno da recursao
        fclose  ( arquivo );
    } // end if
} // fim r_gravar_02a ( )

/**
  * Metodo20.
  */
void method_20 ( void )
{
 // definir dado
    int n = 0;
 // identificar
    printf ( "999999_AED1_Method_20\n" );
 // acoes
 // ler a quantidade de dados
    printf ( "\nn = " ); 
    scanf ( "%d", &n ); getchar( );
 // iniciar a recursao
    r_gravar_02a ( "DADOS.TXT", n );
    printf ( "\n" );
 // encerrar
    printf ( "\nApertar ENTER\n\n" ); getchar( );
} // fim metodo20 ( )

/**
  * Menu.
  */
void menu ( void )
{
  // identificar
     printf  ( "\n999999_AED1\n" );
     printf  ( "\nMenu"          );
     printf  ( "\n 0 - Terminar " );
     printf  ( "\n 1 - Method_01    2 - Method_02" );
     printf  ( "\n 3 - Method_03    4 - Method_04" );
     printf  ( "\n 5 - Method_05    6 - Method_06" );
     printf  ( "\n 7 - Method_07    8 - Method_08" );
     printf  ( "\n 9 - Method_09   10 - Method_10" );
     printf  ( "\n11 - Method_11   12 - Method_12" );
     printf  ( "\n13 - Method_13   14 - Method_14" );
     printf  ( "\n15 - Method_15   16 - Method_16" );
     printf  ( "\n17 - Method_17   18 - Method_18" );
     printf  ( "\n19 - Method_19   20 - Method_20" );
     printf  ( "\n" );
} // end menu ( )

/**
  * Acao principal.
  */
int main ( void )
{
  // definir dados
     int opcao = 0;

  // acoes
     do
     {
       menu ( );
       printf ( "\nQual a opcao? " );
       scanf  ( "%d", &opcao ); getchar ( );
       printf ( "%d\n",  opcao );
       switch ( opcao )
       {
         case  0: /* nao fazer nada */
           break;
         case  1: method_01 ( ); break;  case  2: method_02 ( ); break;
         case  3: method_03 ( ); break;  case  4: method_04 ( ); break;
         case  5: method_05 ( ); break;  case  6: method_06 ( ); break;
         case  7: method_07 ( ); break;  case  8: method_08 ( ); break;
         case  9: method_09 ( ); break;  case 10: method_10 ( ); break;
         case 11: method_11 ( ); break;  case 12: method_12 ( ); break;
         case 13: method_13 ( ); break;  case 14: method_14 ( ); break;
         case 15: method_15 ( ); break;  case 16: method_16 ( ); break;
         case 17: method_17 ( ); break;  case 18: method_18 ( ); break;
         case 19: method_19 ( ); break;  case 20: method_20 ( ); break;
         default:
                  printf ( "ERRO: Opcao invalida.\nApertar ENTER." );
                  getchar( );
          break;
       } // end switch
     }
     while ( opcao != 0 );
  // encerrar
     printf ( "\nApertar ENTER\n\n" ); getchar( );
     return ( 0 );
} // end main ( )
/*
  Testes e observacoes
*/

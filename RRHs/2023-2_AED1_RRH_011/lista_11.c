/**
  * -------------------------- Documentacao preliminar
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
  * - a biblioteca "io.h" devera' estar na mesma pasta.
  *
  * Arquivos:
  *
  * - lista_00.c
  * - lista_00     ( no Linux   )
  * - lista_00.exe ( no Windows )
  * - io.h         ( na mesma pasta )
  *
  * Forma de compilacao:
  * - acionar o compilador no modo console 
  *  (terminal/janela de comandos):
  *
  *   Linux  : gcc -o ./lista_00     ./lista_00.c   -lm
  *   Windows: gcc -o   lista_00.exe   lista_00.c
  *
  * Forma de uso:
  * - acionar o programa   no modo console 
  *  (terminal/janela de comandos):
  *
  *   Linux  :  ./lista_00
  *   Windows:    lista_00
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
#include <time.h>

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

// --------------------------- inicio biblioteca

const int MAX = 100; // tamanho maximo

/*
  Metodo para guardar valor inicial em posicoes de arranjo.
  @param value - valor a ser guardado
  @param n     - quantidade de dados
  @param array - arranjo onde guardar
*/
void init_int_array ( int value, int n, int array [ ] )
{
 // definir dado local
    int x = 0;
 // guardar em cada loca o valor
    for ( x=0; x<n; x=x+1 )
    {
        array [x] = value;
    } // end for
} // end init_int_array( )

/*
  Metodo para mostrar valores em arranjo.
  @param n     - quantidade de dados
  @param array - arranjo onde guardar
*/
void print_int_array ( int n, int array [ ] )
{
 // definir dado local
    int x = 0;
    int y = 0;
 // mostrar cada dado
    for ( x=0; x<n; x=x+1 )
    {
     // copiar um dado
        y  = array [x];
     // mostrar dado
        printf ( "\n%d: %d", x, y );
    } // end if
} // end print_int_array( )

/*
  Metodo para mostrar valores em arranjo.
  @param n     - quantidade de dados
  @param array - apontador para arranjo
*/
void print_int_array_ap ( int n, int *array )
{
 // definir dado local
    int x = 0;
    int y = 0;
 // testar a existencia
    if ( array == NULL )
    {
       printf ( "\nERRO: Nao ha' dados.\n" );
    }
    else
    {
     // mostrar cada dado
        for ( x=0; x<n; x=x+1 )
        {
         // copiar um dado
            y  = array [x];
         // mostrar dado
            printf ( "\n%d: %d", x, y );
        } // end for
    } // end if
} // end print_int_array_a( )

/*
  Metodo para ler valores de arranjo.
  @param n     - quantidade de dados
  @param array - arranjo onde ler
*/
void scan_int_array ( int n, int array [ ] )
{
 // definir dados locais
    int x = 0;
    int y = 0;
 // ler e guardar dados
    for ( x=0; x<n; x=x+1 )
    {
     // ler dado
        printf ( "\n%d: ",  x );
        scanf  ( "%d"    , &y ); getchar ( );
     // guardar dado
        array  [x] = y;
    } // end for}
} // end scan_int_array( )

/*
  Funcao para ler valores para arranjo.
  @return quantidade de dados lida
  @param  m     - quantidade maxima de dados
  @param  array - arranjo onde guardar
*/
int n_scan_int_array ( int m, int array [ ] )
{
 // definir dados locais
    int x = 0;
    int y = 0;
    int n = 0;
 // ler a quantidade de dados
    printf ( "\nQuantidade: " );
    scanf  ( "%d"    , &n ); getchar ( );
 // testar se quantidade valida
    if ( n <= 0 || m < n )
    {
       printf ( "\nERRO: Quantidade invalida.\n" );
       n = 0; // nao ha' dados
    }
    else
    {
     // ler e guardar dados
        for ( x=0; x<n; x=x+1 )
        {
         // ler dado
            printf ( "\n%d: ",  x );
            scanf  ( "%d"    , &y ); getchar ( );
         // guardar dado   
            array  [x] = y;
       } // end for
    } // end if
 // retornar a quantidade
    return ( n );
} // end n_scan_int_array( )

/*
  Metodo para gravar em arquivo valores em arranjo.
  @param filename - nome do arquivo
  @param n        - quantidade de dados
  @param array    - arranjo com dados
*/
void fprint_int_array
    ( char filename [ ], int n, int array [ ] )
{
 // definir dados locais
    int x = 0;
    int y = 0;
 // abrir arquivo para gravar texto
    FILE *arquivo = fopen ( filename, "wt" );
 // gravar a quantidade de dados
    fprintf ( arquivo, "%d\n", n );
 // gravar dados
    for ( x=0; x<n; x=x+1 )
    {
     // copiar dado
        y = array [x];
     // gravar cada dado
        fprintf ( arquivo, "%d\n", y );
    } // end for
 // fechar arquivo 
    fclose ( arquivo );
} // end fprint_int_array( )

/*
  Metodo para gravar em arquivo valores em arranjo.
  @param filename - nome do arquivo
  @param n        - quantidade de dados
  @param array    - apontador para arranjo
*/
void fprint_int_array_a
    ( char *filename, int n, int *array )
{
 // definir dados locais
    int x = 0;
    int y = 0;
 // testar validade do nome de arquivo
    if ( filename == NULL || filename[0]=='\0' )
    {
       printf ( "\nERRO: Nome ou arquivo invalido.\n" );
    }
    else
    {
     // abrir arquivo para gravar texto
        FILE *arquivo = fopen ( filename, "wt" );
     // gravar a quantidade de dados
        fprintf ( arquivo, "%d\n", n );
     // testar a existencia de lugar para guardar
        if ( array == NULL )
        {
           printf ( "\nERRO: Nao ha' lugar para guardar.\n" );
        }
        else
        {
         // gravar dados
            for ( x=0; x<n; x=x+1 )
            {
             // copiar dado
                y = array [x];
             // gravar cada dado
                fprintf ( arquivo, "%d\n", y );
            } // end for
         // fechar arquivo 
            fclose ( arquivo );
        } // end if
   } // end if
} // end fprint_int_array( )

/*
  Metodo para ler de arquivo valores para arranjo.
  @return quantidade lida
  @param filename - nome do arquivo
  @param n        - quantidade de dados
  @param array    - arranjo com dados
*/
int fscan_int_array
    ( char filename [ ], int n, int array [ ] )
{
 // definir dados locais
    int x = 0;
    int y = 0;
 // abrir arquivo para ler texto
    FILE *arquivo = fopen ( filename, "rt" );
 // ler quantidade de dados
    fscanf  ( arquivo, "%d", &n );
    for ( x=0; x<n; x=x+1 )
    {
     // ler dado
        fscanf  ( arquivo, "%d", &y );
     // guardar dado
        array   [x] = y;
    } // end for
 // retornar a quantidade lida
    return ( n );
} // end fscan_int_array( )

/*
  Metodo para ler de arquivo valores para arranjo.
  @return quantidade lida
  @param filename - nome do arquivo
  @param m        - quantidade maxima de dados
  @param array    - arranjo com dados
*/
int n_fscan_int_array
    ( char filename [ ], int m, int array [ ] )
{
 // definir dados locais
    int n = 0;
    int x = 0;
    int y = 0;
 // abrir arquivo para ler texto
    FILE *arquivo = fopen ( filename, "rt" );
 // ler quantidade de dados
    fscanf  ( arquivo, "%d", &n );
 // testar se quantidade valida
    if ( n < 0 || m < n )
    {
       printf ( "\nERRO: Quantidade invalida.\n" );
       n = 0;
    }
    else
    {
       for ( x=0; x<n; x=x+1 )
       {
        // ler dado
           fscanf  ( arquivo, "%d", &y );
        // guardar dado
           array   [x] = y;
       } // end for
    } // end if
 // retornar a quantidade lida
    return ( n );
} // end n_fscan_int_array( )

/*
  Metodo para copiar valores em arranjo.
  @param n          - quantidade de dados
  @param array      - arranjo com dados
  @param copy_array - arranjo para onde copiar
*/
void copy_int_array
   ( int n, int array [ ], int copy_array [ ] )
{
 // definir dado local
    int x = 0;
    int y = 0;
 // copiar dados
    for ( x=0; x<n; x=x+1 )
    {
     // copiar um dado
        y  = array [x];
     // guardar em outro arranjo
        copy_array [x] = y;
    } // end for
} // end copy_int_array( )

/*
  Funcao para comparar valores em arranjos.
  @return zero, se iguais; diferente de zero, caso contrario
  @param n      - quantidade de dados
  @param array  - arranjo com dados
  @param other  - outro arranjo com dados
*/
int compare_int_array
   ( int n, int array [ ], int other [ ] )
{
 // definir dado local
    int x = 0;
    int y = 0;
 // comparar dados
    x=0;
    while ( x<n && y==0 )
    {
     // testar se ha' dados diferentes
        y = (array [x] - other [x]);
        x=x+1;
    } // end while
 // retornar resultado
    return ( y );
} // end compare_int_array( )

// -------------------------- fim da biblioteca

/**
  * Metodo01.
  */
void method_01 ( void )
{
 // definir dados
    int arranjo [ ] = {1,2,3,4,5}; // length=5
    int x = 0;
 // identificar
    printf ( "%s\n", "\nMetodo01" );
 // acoes
 // mostrar dados
    print_int_array   ( 5, arranjo );
    printf ( "\n" );
 // encerrar
    printf ( "\n%s\n", "Apertar ENTER para continuar." );
} // fim method_01 ( )

/**
  * Metodo02.
  */
void method_02 ( void )
{
 // definir dados
    int n = 5;  // tamanho
    int arranjo [n];
    int x = 0;
 // identificar
    printf ( "%s\n", "\nMetodo02" );
 // acoes
 // guardar valores iniciais
    init_int_array ( 0, n, arranjo );
 // guardar dados
    for ( x=0; x<n; x=x+1 )
    {
        arranjo [x] = (x+1);
    } // end for
 // mostrar dados
    print_int_array   ( n, arranjo );
    printf ( "\n" );
 // encerrar
    printf ( "\n%s\n", "Apertar ENTER para continuar." );
} // fim method_02 ( )

/**
  * Metodo03.
  */
void method_03 ( void )
{
 // definir dados
    int n = 5;  // tamanho
    int arranjo [n];
    int x = 0;
 // identificar
    printf ( "%s\n", "\nMetodo03" );
 // acoes
 // guardar valores iniciais
    init_int_array ( 0, n, arranjo );
 // guardar dados
    for ( x=0; x<n; x=x+1 )
    {
        arranjo [x] = n-x;
    } // end for
 // mostrar dados
    print_int_array  ( n, arranjo );
 // encerrar
    printf ( "\n%s\n", "Apertar ENTER para continuar." );
} // fim method_03 ( )

/**
  * Metodo04.
  */
void method_04 ( void )
{
 // definir dados
    int n = 5;  // tamanho
    int arranjo [n];
    int x = 0;
 // identificar
    printf ( "%s\n", "\nMetodo04" );
 // acoes
 // guardar valores iniciais
    init_int_array ( 0, n, arranjo );
 // guardar dados
    for ( x=0; x<n; x=x+1 )
    {
        arranjo [x] = n-x;
    } // end for
 // mostrar dados
    print_int_array_ap  ( n, NULL );
 // encerrar
    printf ( "\n%s\n", "Apertar ENTER para continuar." );
} // fim method_04 ( )

/**
  * Metodo05.
  */
void method_05 ( void )
{
 // definir dados
    int n = 5;  // tamanho
    int arranjo [n];
    int x = 0;
 // identificar
    printf ( "%s\n", "\nMetodo05" );
 // acoes
 // guardar valores iniciais
    init_int_array ( 0, n, arranjo );
 // guardar dados
    for ( x=0; x<n; x=x+1 )
    {
        arranjo [x] = n-x;
    } // end for
 // mostrar dados
    print_int_array_ap  ( n, &(arranjo[0]) );
 // encerrar
    printf ( "\n%s\n", "Apertar ENTER para continuar." );
} // fim method_05 ( )

/**
  * Metodo06.
  */
void method_06 ( void )
{
 // definir dados
    int n = 5;  // tamanho
    int arranjo [n];
    int x = 0;
 // identificar
    printf ( "%s\n", "\nMetodo06" );
 // acoes
 // guardar dados aleatorios
    for ( x=0; x<n; x=x+1 )
    {
        arranjo [x] = rand( );
    } // end for
 // mostrar dados
    print_int_array  ( n, arranjo );
 // encerrar
    printf ( "\n%s\n", "Apertar ENTER para continuar." );
} // fim method_06 ( )

/**
  * Metodo07.
  */
void method_07 ( void )
{
 // definir dados
    int n = 5;  // tamanho
    int arranjo [n];
    int x = 0;
 // identificar
    printf ( "%s\n", "\nMetodo07" );
 // acoes
 // guardar dados aleatorios
    for ( x=0; x<n; x=x+1 )
    {
        arranjo [x] = rand( );
    } // end for
 // mostrar dados
    print_int_array  ( n, arranjo );
 // encerrar
    printf ( "\n%s\n", "Apertar ENTER para continuar." );
} // fim method_07 ( )

/**
  * Metodo08.
  */
void method_08 ( void )
{
 // definir dados
    int n = 5;  // tamanho
    int arranjo [n];
    int x = 0;
 // identificar
    printf ( "%s\n", "\nMetodo08" );
 // acoes
 // semear aleatoriedade
    srand ( time(NULL) );
 // guardar dados aleatorios
    for ( x=0; x<n; x=x+1 )
    {
        arranjo [x] = rand( );
    } // end for
 // mostrar dados
    print_int_array  ( n, arranjo );
 // encerrar
    printf ( "\n%s\n", "Apertar ENTER para continuar." );
} // fim method_08 ( )

/**
  * Metodo09.
  */
void method_09 ( void )
{
 // definir dados
    int n = 5;  // tamanho
    int arranjo [n];
    int x = 0;
    int y = 0;
 // identificar
    printf ( "%s\n", "\nMetodo09" );
 // acoes
 // ler e guardar dados
    scan_int_array  ( n, arranjo );
 // mostrar dados
    print_int_array ( n, arranjo );
    printf ( "\n" );
 // encerrar
    printf ( "\n%s\n", "Apertar ENTER para continuar." );
} // fim method_09 ( )

/**
  * Metodo10.
  */
void method_10 ( void )
{ 
 // definir dados
    int arranjo [MAX];
    int n = 0;  // tamanho
    int x = 0;
    int y = 0;
 // identificar
    printf ( "%s\n", "\nMetodo10" );
 // acoes
 // ler e guardar dados
    n = n_scan_int_array  ( 10, arranjo );
 // mostrar dados
    print_int_array ( n, arranjo );
    printf ( "\n" );
 // encerrar
    printf ( "\n%s\n", "Apertar ENTER para continuar." );
} // fim method_10 ( )

/**
  * Metodo11.
  */
void method_11 ( void )
{
 // definir dados
    int arranjo [ ] = {1,2,3,4,5}; // length=5
    int x = 0;
 // identificar
    printf ( "%s\n", "\nMetodo11" );
 // acoes
 // guardar dados
    for ( x=0; x<5; x=x+1 )
    {
        arranjo [x] = (x+1);
    } // end for
 // mostrar dados
    print_int_array  ( 5, arranjo );
 // gravar  dados
    fprint_int_array ( "ARRAY_1.TXT", 5, arranjo );
    printf ( "\n" );
 // encerrar
    printf ( "\n%s\n", "Apertar ENTER para continuar." );
} // fim method_11 ( )

/**
  * Metodo12.
  */
void method_12 ( void )
{
 // definir dados
    int n = 5;
    int arranjo [5];
    int x = 0;
 // identificar
    printf ( "%s\n", "\nMetodo12" );
 // acoes
 // guardar valores iniciais
    init_int_array ( 0, n, arranjo );
 // guardar dados
    for ( x=0; x<n; x=x+1 )
    {
        arranjo [x] = (x+1);
    } // end for
 // mostrar dados
    print_int_array  ( n, arranjo );
 // gravar  dados
    fprint_int_array ( "ARRAY_1.TXT", n, arranjo );
    printf ( "\n" );
 // encerrar
    printf ( "\n%s\n", "Apertar ENTER para continuar." );
} // fim method_12 ( )

/**
  * Metodo13.
  */
void method_13 ( void )
{
 // definir dados
    int n = 5;  // tamanho
    int arranjo [n];
    int x = 0;
 // identificar
    printf ( "%s\n", "\nMetodo13" );
 // acoes
 // semear aleatoriedade
    srand ( time(NULL) );
 // guardar dados aleatorios
    for ( x=0; x<n; x=x+1 )
    {
        arranjo [x] = rand( );
    } // end for
 // mostrar dados
    print_int_array  ( n, arranjo );
 // gravar  dados
    fprint_int_array ( "ARRAY_1.TXT", n, arranjo );
    printf ( "\n" );
 // encerrar
    printf ( "\n%s\n", "Apertar ENTER para continuar." );
} // fim method_13 ( )

/**
  * Metodo14.
  */
void method_14 ( void )
{
 // definir dados
    int n = 5;  // tamanho
    int arranjo [n];
    int x = 0;
 // identificar
    printf ( "%s\n", "\nMetodo14" );
 // acoes
 // semear aleatoriedade
    srand ( time(NULL) );
 // guardar dados aleatorios
    for ( x=0; x<n; x=x+1 )
    {
        arranjo [x] = rand( )-rand( );
    } // end for
 // mostrar dados
    print_int_array  ( n, arranjo );
 // gravar  dados
    fprint_int_array ( "ARRAY_1.TXT", n, arranjo );
    printf ( "\n" );
 // encerrar
    printf ( "\n%s\n", "Apertar ENTER para continuar." );
} // fim method_14 ( )

/**
  * Metodo15.
  */
void method_15 ( void )
{
 // definir dados
    int n = 5;  // tamanho
    int arranjo [n];
    int x = 0;
 // identificar
    printf ( "%s\n", "\nMetodo15" );
 // acoes
 // semear aleatoriedade
    srand ( time(NULL) );
 // guardar dados aleatorios
    for ( x=0; x<n; x=x+1 )
    {
        arranjo [x] = rand( )%100;
    } // end for
 // mostrar dados
    print_int_array  ( n, arranjo );
 // gravar  dados
    fprint_int_array ( "ARRAY_1.TXT", n, arranjo );
    printf ( "\n" );
 // encerrar
    printf ( "\n%s\n", "Apertar ENTER para continuar." );
} // fim method_15 ( )

/**
  * Metodo16.
  */
void method_16 ( void )
{
 // definir dados
    int n = 5;  // tamanho
    int arranjo [n];
    int x = 0;
 // identificar
    printf ( "%s\n", "\nMetodo16" );
 // acoes
 // semear aleatoriedade
    srand ( time(NULL) );
 // guardar dados aleatorios
    for ( x=0; x<n; x=x+1 )
    {
        arranjo [x] = (int) (20.0*rand( )/(1.0+rand( )));
    } // end for
 // mostrar dados
    print_int_array  ( n, arranjo );
 // gravar  dados
    fprint_int_array ( "ARRAY_1.TXT", n, arranjo );
    printf ( "\n" );
 // encerrar
    printf ( "\n%s\n", "Apertar ENTER para continuar." );
} // fim method_16 ( )

/**
  * Metodo17.
  */
void method_17 ( void )
{
 // definir dados
    int n = 5;  // tamanho
    int arranjo [n];
    int x = 0;
    int y = 0;
    int z = 0;
 // identificar
    printf ( "%s\n", "\nMetodo17" );
 // acoes
 // ler e guardar dados
    z = fscan_int_array ( "ARRAY_1.TXT", n, arranjo );
 // mostrar dados
    print_int_array ( z, arranjo );
    printf ( "\n" );
 // encerrar
    printf ( "\n%s\n", "Apertar ENTER para continuar." );
} // fim method_17 ( )

/**
  * Metodo18.
  */
void method_18 ( void )
{
 // definir dados
    int n = 5;  // tamanho
    int arranjo [n];
    int x = 0;
    int y = 0;
    int z = 0;
 // identificar
    printf ( "%s\n", "\nMetodo18" );
 // acoes
 // ler e guardar dados
    z = n_fscan_int_array ( "ARRAY_1.TXT", n, arranjo );
 // mostrar dados
    print_int_array ( z, arranjo );
    printf ( "\n" );
 // encerrar
    printf ( "\n%s\n", "Apertar ENTER para continuar." );
} // fim method_18 ( )

/**
  * Metodo19.
  */
void method_19 ( void )
{
 // definir dados
    int n = 0;  // tamanho
    int arranjo [MAX];
    int copia   [MAX];
    int x = 0;
    int y = 0;
    int z = 0;
 // identificar
    printf ( "%s\n", "\nMetodo19" );
 // acoes
 // ler e guardar dados
    n = n_scan_int_array ( 10, arranjo );
 // mostrar dados
    print_int_array ( n, arranjo );
    printf ( "\n" );
 // copiar dados
    copy_int_array  ( n, arranjo, copia );
 // mostrar copia
    print_int_array ( n, arranjo );
    printf ( "\n" );
 // encerrar
    printf ( "\n%s\n", "Apertar ENTER para continuar." );
} // fim method_19 ( )

/**
  * Metodo20.
  */
void method_20 ( void )
{
 // definir dados
    int n = 0;  // tamanho
    int arranjo [MAX];
    int copia   [MAX];
    int x = 0;
    int y = 0;
    int z = 0;
 // identificar
    printf ( "%s\n", "\nMetodo20" );
 // acoes
 // ler e guardar dados
    n = n_scan_int_array ( 10, arranjo );
 // mostrar dados
    print_int_array ( n, arranjo );
    printf ( "\n" );
 // copiar dados
    copy_int_array  ( n, arranjo, copia );
 // ler dados de arquivo
    z = n_fscan_int_array  ( "ARRAY_1.TXT", n, copia );
 // mostrar copia
    print_int_array ( z, copia   );
    printf ( "\n" );
 // comparar pela igualdade (=0)
    printf ( "\ncomparacao = %d",
                compare_int_array ( n, arranjo, copia ) );
    printf ( "\n" );
 // encerrar
    printf ( "\n%s\n", "Apertar ENTER para continuar." );
} // fim method_20 ( )

// --------------------------- definicao do metodo principal

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


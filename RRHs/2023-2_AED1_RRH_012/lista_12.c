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
  * - a classe IO devera' estar acessivel.
  *
  * Arquivos:
  *
  * - lista_00.c
  * - lista_00     ( no Linux   )
  * - lista_00.exe ( no Windows )
  * - io.h         ( na mesma pasta )
  *
  * Forma de compilacao:
  * - acionar o compilador no modo console (terminal/janela de comandos):
  *
  *   Linux  : gcc -o ./lista_00 ./lista_00.c
  *   Windows: gcc -o   lista_00   lista_00.c
  *
  * Forma de uso:
  * - acionar o programa   no modo console (terminal/janela de comandos):
  *
  *   Linux  :  ./lista_00
  *   Windows:    lista_00
  *
  * Referencias:
  * - Exemplos mostrados em sala de aula
  * - Apostila: Fundamentos de Programacao - Notas de aulas
  *
  */

// -------------------------- classes nativas ou auxiliares

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// -------------------------- definicao de classe

/**
  * Modelo para definir exemplo de um programa.
  * Obs.: E' recomendado ter o nome do programa
  *       sem espacos em branco, acentos ou cedilha.
  */

// -------------------------- tratamento de erro


// -------------------------- definicao de constantes

const int MAX_SIZE = 100;

// -------------------------- definicao de armazenadores globais

// -------------------------- definicao de prototipos

// -------------------------- definicao de metodos

/**
   Metodo para inicializar posicoes de matriz.
   @param value   - valor inicial
   @param rows    - quantidade de linhas
   @param columns - quantidade de colunas
   @param matrix  - matriz a ser preenchida
 */
void int_matrix_init ( int value,
                       int rows , int columns ,
                       int matrix [ ][MAX_SIZE] )
{
 // definir dados locais
    int x = 0;
    int y = 0;
    for ( x = 0; x < rows; x = x + 1 )
    {
      for ( y = 0; y < columns; y = y + 1 )
      {
          matrix [x][y] = value;
      } // end for
    } // end for
} // int_matrix_init ( )

/**
   Metodo para montar matriz identidade.
   @param rows    - quantidade de linhas
   @param columns - quantidade de colunas
   @param matrix  - matriz a ser preenchida
 */
void int_matrix_id ( int rows , int columns ,
                     int matrix [ ][MAX_SIZE] )
{
 // definir dados locais
    int x = 0;
    int y = 0;
    if ( rows == columns )
    {
       for ( x = 0; x < rows; x = x + 1 )
       {
           for ( y = 0; y < columns; y = y + 1 )
           {
               matrix [x][y] = 0;
           } // end for
           matrix [x][x] = 1;
       } // end for
    } // end if
} // int_matrix_id ( )

/**
   Metodo para mostrar valores em matriz.
   @param rows    - quantidade de linhas
   @param columns - quantidade de colunas
   @param matrix  - matriz a ser mostrada
 */
void int_matrix_print ( int rows , int columns ,
                        int matrix [ ][MAX_SIZE] )
{
 // definir dados locais
    int x = 0;
    int y = 0;
    printf ( "\n" );
    for ( x = 0; x < rows; x = x + 1 )
    {
      for ( y = 0; y < columns; y = y + 1 )
      {
          printf ( "%d\t", matrix [x][y] );
      } // end for
      printf ( "\n" );
    } // end for
    printf ( "\n" );
    getchar( );
} // int_matrix_print ( )

/**
   Metodo para mostrar valores em matriz.
   @param rows    - linhas  (passagem por referencia)
   @param columns - colunas (passagem por referencia)
   @param matrix  - matriz a ser mostrada
 */
void int_matrix_scan  ( int *rows, int *columns,
                        int matrix [ ][MAX_SIZE] )
{
 // definir dados locais
    int x = 0;
    int y = 0;
    int k = 0;

    int m = 0;
    int n = 0;

    printf ( "\n" );
    printf ( "\nLinhas  = " ); scanf ( "%d", &m ); getchar( );
    printf ( "\nColunas = " ); scanf ( "%d", &n ); getchar( );
    for ( x = 0; x < m; x = x + 1 )
    {
      for ( y = 0; y < n; y = y + 1 )
      {
          printf ( "%d, %d: ", x, y );
          scanf  ( "%d", &k );
          matrix [x][y] = k;
      } // end for
      printf ( "\n" );
    } // end for
    printf ( "\n" );
    getchar( );
 // retornar valores lidos usando referencias
    *rows    = m;
    *columns = n;
} // int_matrix_scan ( )

/**
   Metodo para mostrar valores em matriz.
   @param rows    - linhas  (passagem por referencia)
   @param columns - colunas (passagem por referencia)
   @param matrix  - matriz a ser mostrada
 */
void int_matrix_scan2  ( int rows , int columns,
                         int matrix [ ][MAX_SIZE] )
{
 // definir dados locais
    int x = 0;
    int y = 0;
    int k = 0;

    int m = rows   ;
    int n = columns;

    printf ( "\n" );
    for ( x = 0; x < m; x = x + 1 )
    {
      for ( y = 0; y < n; y = y + 1 )
      {
          printf ( "%d, %d: ", x, y );
          scanf  ( "%d", &k );
          matrix [x][y] = k;
      } // end for
      printf ( "\n" );
    } // end for
    printf ( "\n" );
    getchar( );
} // int_matrix_scan2 ( )

/**
   Metodo para gravar em arquivo valores em matriz.
   @param filename - nome do arquivo
   @param rows     - quantidade de linhas
   @param columns  - quantidade de colunas
   @param matrix   - matriz a ser gravada
 */
void int_matrix_fprint ( char filename [ ],
                         int  rows , int columns ,
                         int  matrix [ ][MAX_SIZE] )
{
 // definir dados locais
    int x = 0;
    int y = 0;
 // testar validade de nome de arquivo
    FILE *arquivo = fopen ( filename, "wt" );
    fprintf ( arquivo, "%d\n", rows    ); // linhas
    fprintf ( arquivo, "%d\n", columns ); // colunas
    for ( x = 0; x < rows; x = x + 1 )
    {
      for ( y = 0; y < columns; y = y + 1 )
      {
        fprintf ( arquivo, "%d\n", matrix [x][y] );
      } // end for
    } // end for
    fclose ( arquivo );
} // int_matrix_fprint ( )

/**
   Metodo para ler valores de arquivo e guardar em matriz.
   @param filename - nome de arquivo
   @param rows     - quantidade de linhas
   @param columns  - quantidade de colunas
   @param matrix   - matriz a ser lida
 */
void int_matrix_fscan ( char filename [ ],
                        int  rows , int columns,
                        int  matrix [ ][MAX_SIZE] )
{
 // definir dados locais
    int k = 0;
    int x = 0;
    int y = 0;
    int m = 0;
    int n = 0;
    FILE *arquivo = NULL;
 // testar validade de nome de arquivo
    if ( strlen( filename ) <= 0 )
    {
       printf ( "\n[int_matrix] ERRO: Nome invalido.\n" );
    }
    else
    {
       arquivo = fopen ( filename, "rt" );
       fscanf ( arquivo, "%d", &m ); // linhas
       fscanf ( arquivo, "%d", &n ); // colunas
    // testar se havera' dados
       if ( rows > m || columns > n )
       {
          printf ( "\n[int_matrix] ERRO: Dados insuficientes.\n" );
       }
       else
       {
          x = 0;
     	  while ( ! feof ( arquivo ) && x < rows )
          {
              y = 0;
              while ( ! feof ( arquivo ) && y < columns )
              {
                fscanf ( arquivo, "%d", &k );
                matrix [x][y] = k;
                y = y + 1;
              } // end while
              x = x + 1;
          } // end while
       } // end if
       fclose ( arquivo );
    } // end if

} // int_matrix_fscan ( )

/**
   Metodo para ler valores de arquivo e guardar em matriz.
   @param filename - nome de arquivo
   @param rows     - linhas  (passagem por referencia)
   @param columns  - colunas (passagem por referencia)
   @param matrix   - matriz a ser lida
 */
void int_matrix_fscan2 ( char filename [ ],
                         int *rows , int *columns,
                         int  matrix [ ][MAX_SIZE] )
{
 // definir dados locais
    int k = 0;
    int x = 0;
    int y = 0;

    int m = 0;
    int n = 0;

    FILE *arquivo = NULL;

 // testar validade de nome de arquivo
    if ( strlen( filename ) <= 0 )
    {
       printf ( "\n[int_matrix] ERRO: Nome invalido.\n\n" );
    }
    else
    {
       arquivo = fopen ( filename, "rt" );
       fscanf ( arquivo, "%d", &m ); // linhas
       fscanf ( arquivo, "%d", &n ); // colunas

       x = 0;
       while ( ! feof ( arquivo ) && x < m )
       {
           y = 0;
           while ( ! feof ( arquivo ) && y < n )
           {
               fscanf ( arquivo, "%d", &k );
               matrix [x][y] = k;
               y = y + 1;
           } // end while
           x = x + 1;
       } // end while
       fclose ( arquivo );
    } // end if

 // retorno dos valores lidos usando referencias
    *rows    = m;
    *columns = n;
} // int_matrix_fscan2 ( )

/**
   Metodo para somar valores em matrizes.
   @param rows    - quantidade de linhas
   @param columns - quantidade de colunas
   @param matrix3 - matriz com o resultado
   @param k1      - constante 1
   @param matrix1 - matriz com o primeiro operando
   @param k2      - constante 2
   @param matrix2 - matriz com o segundo  operando
 */
void int_matrix_op ( int rows   , int columns ,
                     int matrix_3 [ ][MAX_SIZE],
                     int k1     ,
                     int matrix_1 [ ][MAX_SIZE],
                     int k2     ,
                     int matrix_2 [ ][MAX_SIZE] )
{
 // definir dados locais
    int x = 0;
    int y = 0;
    for ( x = 0; x < rows; x = x + 1 )
    {
      for ( y = 0; y < columns; y = y + 1 )
      {
          matrix_3 [x][y] = k1 * matrix_1 [x][y]
                          + k2 * matrix_2 [x][y];
      } // end for
    } // end for
} // int_matrix_op ( )

/**
   Metodo para multiplicar valores em matrizes.
   @param rows    - quantidade de linhas
   @param columns - quantidade de colunas
   @param matrix3 - matriz com o resultado
   @param matrix1 - matriz com o primeiro operando
   @param matrix2 - matriz com o segundo  operando
 */
void int_matrix_mul ( int rows_3 , int columns_3 ,
                      int matrix_3 [ ][MAX_SIZE] ,
                      int rows_1 , int columns_1 ,
                      int matrix_1 [ ][MAX_SIZE] ,
                      int rows_2 , int columns_2 ,
                      int matrix_2 [ ][MAX_SIZE] )
{
 // definir dados locais
    int x = 0;
    int y = 0;
    int z = 0;
    int soma = 0;
    if ( rows_3    != rows_1    ||
         columns_3 != columns_2 ||
         columns_1 != rows_2 )
    {
       printf ( "\n[int_matrix] ERRO: Dimensoes incompativeis.\n" );
    }
    else
    {
       for ( x = 0; x < rows_3; x = x + 1 )
       {
           for ( y = 0; y < columns_3; y = y + 1 )
           {
              soma = 0;
//            for ( z = 0; z < rows_2; z = z + 1 )
              for ( z = 0; z < columns_1; z = z + 1 )
              {
                  soma = soma
                       + matrix_1 [x][z] * matrix_2 [z][y];
           } // end for
           matrix_3 [x][y] = soma;
         } // end for
       } // end for
    } // end if
} // int_matrix_mul ( )

/**
  * Metodo01.
  */
void method_01 ( void )
{
 // dados e resultados
    int matriz [ MAX_SIZE ][ MAX_SIZE ];

 // identificar
    printf ( "\nMetodo01\n\n" );

 // acoes
    int_matrix_init  ( 0, 3, 3, matriz );
    int_matrix_print (    3, 3, matriz );

    int_matrix_init  ( 2, 2, 2, matriz );
    int_matrix_print (    2, 2, matriz );

} // fim metodo01 ( )

/**
  * Metodo02.
  */
void method_02 ( void )
{
 // dados e resultados
    int matriz1 [ MAX_SIZE ][ MAX_SIZE ];
    int matriz2 [ MAX_SIZE ][ MAX_SIZE ];

 // identificar
    printf ( "\nMetodo02\n\n" );

 // acoes
    int_matrix_init  ( 1, 3, 3, matriz1 );
    int_matrix_print (    3, 3, matriz1 );

    int_matrix_init  ( 2, 2, 2, matriz2 );
    int_matrix_print (    2, 2, matriz2 );

} // fim metodo02 ( )

/**
  * Metodo03.
  */
void method_03 ( void )
{
 // dados e resultados
    int matriz_1 [ MAX_SIZE ][ MAX_SIZE ];
    int matriz_2 [ MAX_SIZE ][ MAX_SIZE ];

 // identificar
    printf ( "\nMetodo03\n\n" );

 // acoes
    printf ( "\nmatriz_1:\n" );
    int_matrix_init   ( 0, 3, 3, matriz_1 );
    int_matrix_print  (    3, 3, matriz_1 );

    int_matrix_init   ( 4, 3, 3, matriz_1 );
    int_matrix_print  (    3, 3, matriz_1 );
    int_matrix_fprint ( "matrix_1.txt", 3,3, matriz_1 );

    printf ( "\nmatriz_2:\n" );
    int_matrix_init   ( 0, 3, 3, matriz_2 );
    int_matrix_print  (    3, 3, matriz_2 );

    int_matrix_fscan  ( "matrix_1.txt", 3, 3, matriz_2 );
    int_matrix_print  (    3, 3, matriz_2 );

} // fim metodo03 ( )

/**
  * Metodo04.
  */
void method_04 ( void )
{
 // dados e resultados
    int m = 3;
    int n = 3;
    int matriz_1 [ m ][ n ];
    int matriz_2 [ m ][ n ];
    int matriz_3 [ m ][ n ];
    int x = 0;
    int y = 0;
    int z = 0;

 // identificar
    printf ( "\nMetodo04\n\n" );

 // acoes
    int_matrix_init  ( 4, 3, 3, matriz_1 );
    int_matrix_print (    3, 3, matriz_1 );

    int_matrix_init  ( 5, 3, 3, matriz_2 );
    int_matrix_print (    3, 3, matriz_2 );

    int_matrix_op    (    3, 3, matriz_3, 
                             1, matriz_1, 1, matriz_2 );
    int_matrix_print (    3, 3, matriz_3 );

    printf ( "\n" );
} // fim metodo04 ( )

/**
  * Metodo05.
  */
void method_05 ( void )
{
 // dados e resultados
    int m = 3;
    int n = 3;
    int matriz_1 [ m ][ n ];
    int matriz_2 [ m ][ n ];
    int matriz_3 [ m ][ n ];
    int x = 0;
    int y = 0;
    int z = 0;

 // identificar
    printf ( "\nMetodo05\n\n" );

 // acoes
    int_matrix_init  ( 4, 3, 3, matriz_1 );
    int_matrix_print (    3, 3, matriz_1 );

    int_matrix_init  ( 5, 3, 3, matriz_2 );
    int_matrix_print (    3, 3, matriz_2 );

    int_matrix_op    (    3, 3, matriz_3, 
                                1, matriz_1, -1, matriz_2 );
    int_matrix_print (    3, 3, matriz_3 );

    printf ( "\n" );
} // fim metodo05 ( )

/**
  * Metodo06.
  */
void method_06 ( void )
{
 // dados e resultados
    int m = 3;
    int n = 3;
    int matriz_1 [ m ][ n ];
    int matriz_2 [ m ][ n ];
    int matriz_3 [ m ][ n ];

 // identificar
    printf ( "\nMetodo06\n\n" );

 // acoes
    int_matrix_init  ( 4, 3, 3, matriz_1 );
    int_matrix_print (    3, 3, matriz_1 );

    int_matrix_init  ( 5, 3, 3, matriz_2 );
    int_matrix_print (    3, 3, matriz_2 );

    int_matrix_op    (    3, 3, matriz_3, 
                            -1, matriz_1, 1, matriz_2 );
    int_matrix_print (    3, 3, matriz_3 );

    printf ( "\n" );
} // fim metodo06 ( )

/**
  * Metodo07.
  */
void method_07 ( void )
{
 // dados e resultados
    int m = 3;
    int n = 3;
    int matriz_1 [ m ][ n ];
    int matriz_2 [ m ][ n ];
    int matriz_3 [ m ][ n ];

 // identificar
    printf ( "\nMetodo07\n\n" );

 // acoes
    int_matrix_init  ( 4, 3, 3, matriz_1 );
    int_matrix_print (    3, 3, matriz_1 );

    int_matrix_init  ( 5, 3, 3, matriz_2 );
    int_matrix_print (    3, 3, matriz_2 );

    int_matrix_op    (    3, 3, matriz_3, 
                            -1, matriz_1, -1, matriz_2 );
    int_matrix_print (    3, 3, matriz_3 );

    printf ( "\n" );
} // fim metodo07 ( )

/**
  * Metodo08.
  */
void method_08 ( void )
{
 // dados e resultados
    int m = 3;
    int n = 3;
    int matriz_1 [ m ][ n ];
    int matriz_2 [ m ][ n ];
    int matriz_3 [ m ][ n ];

 // identificar
    printf ( "\nMetodo08\n\n" );

 // acoes
    int_matrix_init  ( 4, 3, 3, matriz_1 );
    int_matrix_print (    3, 3, matriz_1 );

    int_matrix_init  ( 5, 3, 3, matriz_2 );
    int_matrix_print (    3, 3, matriz_2 );

    int_matrix_op    (    3, 3, matriz_3,
                            -2, matriz_1, 3, matriz_2 );
    int_matrix_print (    3, 3, matriz_3 );

    printf ( "\n" );
} // fim metodo08 ( )

/**
  * Metodo09.
  */
void method_09 ( void )
{
 // dados e resultados
    int matriz [ MAX_SIZE ][ MAX_SIZE ];
    int linhas  = 0;
    int colunas = 0;

 // identificar
    printf ( "\nMetodo09\n\n" );

 // acoes
    int_matrix_scan  ( &linhas, &colunas, matriz );
    printf ( "\nmatriz %dx%d\n", linhas, colunas );
    int_matrix_print (  linhas,  colunas, matriz );

} // fim metodo09 ( )

/**
  * Metodo10.
  */
void method_10 ( void )
{
 // dados e resultados
    int matriz1 [ MAX_SIZE ][ MAX_SIZE ];
    int matriz2 [ MAX_SIZE ][ MAX_SIZE ];

 // identificar
    printf ( "\nMetodo10\n\n" );

 // acoes
    printf ( "\nmatriz1 %dx%d\n", 2, 3 );
    int_matrix_scan2 ( 2, 3, matriz1   );
    printf ( "\nmatriz1 %dx%d\n", 2, 3 );
    int_matrix_print ( 2, 3, matriz1   );

    printf ( "\nmatriz2 %dx%d\n", 3, 2 );
    int_matrix_scan2 ( 3, 2, matriz2   );
    printf ( "\nmatriz2 %dx%d\n", 3, 2 );
    int_matrix_print ( 3, 2, matriz2   );
} // fim metodo10 ( )

/**
  * Metodo11.
  */
void method_11 ( void )
{
 // dados e resultados
    int matriz_1 [ MAX_SIZE ][ MAX_SIZE ];
    int linhas  = 0;
    int colunas = 0;

 // identificar
    printf ( "\nMetodo11\n\n" );

 // acoes
    int_matrix_fscan2 ( "matrix_1.txt",
                        &linhas, &colunas,
                         matriz_1 );

    printf ( "\nmatriz_1 %dx%d\n", linhas, colunas );
    int_matrix_print  (  linhas, colunas, matriz_1 );

} // fim metodo11 ( )

/**
  * Metodo12.
  */
void method_12 ( void )
{
 // dados e resultados
    int matriz_1 [ 2 ][MAX_SIZE];
    int matriz_2 [ 3 ][MAX_SIZE];

 // identificar
    printf ( "\nMetodo12\n" );

 // acoes
    int_matrix_id    (    2, 2, matriz_1 );
    int_matrix_print (    2, 2, matriz_1 );

    int_matrix_id    (    3, 3, matriz_2 );
    int_matrix_print (    3, 3, matriz_2 );

    printf ( "\n" );
} // fim metodo12 ( )

/**
  * Metodo13.
  */
void method_13 ( void )
{
 // dados e resultados
    int matriz_1 [ 2 ][MAX_SIZE];
    int matriz_2 [ 2 ][MAX_SIZE];
    int matriz_3 [ 2 ][MAX_SIZE];

 // identificar
    printf ( "\nMetodo13\n" );

 // acoes
    int_matrix_id    (    2, 2, matriz_1 );
    int_matrix_print (    2, 2, matriz_1 );

    matriz_2 [0][0] = 1; matriz_2 [0][1] = 2;
    matriz_2 [1][0] = 3; matriz_2 [1][1] = 4;

    int_matrix_print (    2, 2, matriz_2 );

    int_matrix_init  ( 0, 2, 2, matriz_3 );

    int_matrix_mul   (    2, 2, matriz_3,
                          2, 2, matriz_1,
                          2, 2, matriz_2 );

    int_matrix_print (    2, 2, matriz_3 );

    printf ( "\n" );
} // fim metodo13 ( )

/**
  * Metodo14.
  */
void method_14 ( void )
{
 // dados e resultados
    int matriz_1 [ 2 ][MAX_SIZE];
    int matriz_2 [ 2 ][MAX_SIZE];
    int matriz_3 [ 2 ][MAX_SIZE];

 // identificar
    printf ( "\nMetodo14\n" );

 // acoes
    matriz_1 [0][0] = 1; matriz_1 [0][1] = 2;
    matriz_1 [1][0] = 3; matriz_1 [1][1] = 4;

    int_matrix_print (    2, 2, matriz_1 );

    int_matrix_id    (    2, 2, matriz_2 );
    int_matrix_print (    2, 2, matriz_2 );

    int_matrix_init  ( 0, 2, 2, matriz_3 );

    int_matrix_mul   (    2, 2, matriz_3,
                          2, 2, matriz_1,
                          2, 2, matriz_2 );

    int_matrix_print (    2, 2, matriz_3 );

    printf ( "\n" );
} // fim metodo14 ( )

/**
  * Metodo15.
  */
void method_15 ( void )
{
 // dados e resultados
    int matriz_1 [ 2 ][MAX_SIZE];
    int matriz_2 [ 2 ][MAX_SIZE];
    int matriz_3 [ 2 ][MAX_SIZE];

 // identificar
    printf ( "\nMetodo15\n" );

 // acoes
    int_matrix_id    (    2, 2, matriz_1 );
    int_matrix_print (    2, 2, matriz_1 );

    int_matrix_id    (    2, 2, matriz_2 );
    int_matrix_print (    2, 2, matriz_2 );

    int_matrix_init  ( 0, 2, 2, matriz_3 );

    int_matrix_mul   (    2, 2, matriz_3,
                          2, 2, matriz_1,
                          2, 2, matriz_2 );

    int_matrix_print (    2, 2, matriz_3 );

    printf ( "\n" );
} // fim metodo15 ( )

/**
  * Metodo16.
  */
void method_16 ( void )
{
 // dados e resultados
    int matriz_1 [ 2 ][MAX_SIZE];
    int matriz_2 [ 2 ][MAX_SIZE];
    int matriz_3 [ 2 ][MAX_SIZE];

 // identificar
    printf ( "\nMetodo16\n" );

 // acoes
    int_matrix_init  ( 0, 2, 2, matriz_1 );
    int_matrix_print (    2, 2, matriz_1 );

    int_matrix_id    (    2, 2, matriz_2 );
    int_matrix_print (    2, 2, matriz_2 );

    int_matrix_init  ( 0, 2, 2, matriz_3 );

    int_matrix_mul   (    2, 2, matriz_3,
                          2, 2, matriz_1,
                          2, 2, matriz_2 );

    int_matrix_print (    2, 2, matriz_3 );

    printf ( "\n" );
} // fim metodo16 ( )

/**
  * Metodo17.
  */
void method_17 ( void )
{
 // dados e resultados
    int matriz_1 [ 2 ][MAX_SIZE];
    int matriz_2 [ 3 ][MAX_SIZE];
    int matriz_3 [ 2 ][MAX_SIZE];

 // identificar
    printf ( "\nMetodo17\n" );

 // acoes
    matriz_1 [0][0] = 1; matriz_1 [0][1] = 2; matriz_1 [0][2] = 3;
    matriz_1 [1][0] = 4; matriz_1 [1][1] = 5; matriz_1 [1][2] = 6;

    int_matrix_print (    2, 3, matriz_1 );

    matriz_2 [0][0] = 1; matriz_2 [0][1] = 2;
    matriz_2 [1][0] = 3; matriz_2 [1][1] = 4;
    matriz_2 [2][0] = 5; matriz_2 [2][1] = 6;

    int_matrix_print (    3, 2, matriz_2 );

    int_matrix_init  ( 0, 2, 2, matriz_3 );

    int_matrix_mul   (    2, 2, matriz_3,
                          2, 3, matriz_1,
                          3, 2, matriz_2 );

    int_matrix_print (    2, 2, matriz_3 );

    printf ( "\n" );
} // fim metodo17 ( )

/**
  * Metodo18.
  */
void method_18 ( void )
{
 // dados e resultados
    int x = 0;
    int y = 0;
    int linhas  = 2;
    int colunas = 3;
    int matriz_1 [ linhas ][ colunas ];

 // identificar
    printf ( "\nMetodo18\n" );

 // acoes
    matriz_1 [0][0] = 1; matriz_1 [0][1] = 2; matriz_1 [0][2] = 3;
    matriz_1 [1][0] = 4; matriz_1 [1][1] = 5; matriz_1 [1][2] = 6;

    for ( x = 0; x < linhas; x = x + 1 )
    {
        for ( y = 0; y < colunas; y = y + 1 )
        {                      //        base  + deslocamento
            printf ( "%d\t", *(&matriz_1 [x][0]+ y) );
        } // end for
        printf ( "\n" );
    } // end for

    printf ( "\n" );
} // fim metodo18 ( )

/**
  * Metodo19.
  */
void method_19 ( void )
{
 // dados e resultados
    int x = 0;
    int y = 0;
    int linhas  = 2;
    int colunas = 3;
    int matriz_1 [ linhas ][ colunas ];

    int *base = NULL;

 // identificar
    printf ( "\nMetodo19\n" );

 // acoes
    matriz_1 [0][0] = 1; matriz_1 [0][1] = 2; matriz_1 [0][2] = 3;
    matriz_1 [1][0] = 4; matriz_1 [1][1] = 5; matriz_1 [1][2] = 6;

    for ( x = 0; x < linhas; x = x + 1 )
    {
        base = &matriz_1 [x][0]; // primeiro da linha
        for ( y = 0; y < colunas; y = y + 1 )
        {
            printf ( "%d\t", *(base + y) );
        } // end for
        printf ( "\n" );
    } // end for

    printf ( "\n" );
} // fim metodo19 ( )

/**
  * Metodo20.
  */
void method_20 ( void )
{
 // dados e resultados
    int   x = 0;
    int   y = 0;
    int   linhas   = 2;
    int   colunas  = 3;
    int **matriz_1 = NULL;

    // reservar arranjo de linhas
    matriz_1 = malloc ( linhas * sizeof(int *) );
    // reservar arranjo de colunas para cada linha
    for ( x = 0; x < linhas; x = x + 1 )
    {
        matriz_1 [x] = malloc ( colunas * sizeof(int) );
    } // end for

 // identificar
    printf ( "\nMetodo20\n\n" );

 // acoes
    matriz_1 [0][0] = 1; matriz_1 [0][1] = 2; matriz_1 [0][2] = 3;
    matriz_1 [1][0] = 4; matriz_1 [1][1] = 5; matriz_1 [1][2] = 6;

    for ( x = 0; x < linhas; x = x + 1 )
    {
        for ( y = 0; y < colunas; y = y + 1 )
        {
            printf ( "%d\t", matriz_1 [x][y] );
        } // end for
        printf ( "\n" );
    } // end for

    // dispensar arranjo de colunas para cada linha
    for ( x = 0; x < linhas; x = x + 1 )
    {
        free ( matriz_1 [x] );
    } // end for
    // dispenar arranjo de linhas
    free ( matriz_1 );
    // dispensar a referencia
    matriz_1 = NULL;

    printf ( "\n" );
} // fim metodo20 ( )

// -------------------------- definicao da acao principal

int main ( void )
{
 // definir dados
    int opcao = 0;

 // repetir ate' desejar parar
    do
    {
     // identificar
        printf ( "Lista_00 - v.0.0 - 01/mm/20aa\n"       );
        printf ( "Matricula: 999999 Nome: xxx yyy zzz\n" );
        printf ( "" );          // para saltar linha

     // mostrar opcoes
        printf ( "\n Opcoes:"                       );
        printf ( "\n 0 - parar"                     );
        printf ( "\n 1 - metodo 01   2 - metodo 02" );
        printf ( "\n 3 - metodo 03   4 - metodo 04" );
        printf ( "\n 5 - metodo 05   6 - metodo 06" );
        printf ( "\n 7 - metodo 07   8 - metodo 08" );
        printf ( "\n 9 - metodo 09  10 - metodo 10" );
        printf ( "\n11 - metodo 11  12 - metodo 12" );
        printf ( "\n13 - metodo 13  14 - metodo 14" );
        printf ( "\n15 - metodo 15  16 - metodo 16" );
        printf ( "\n17 - metodo 17  18 - metodo 18" );
        printf ( "\n19 - metodo 19  20 - metodo 20" );
        printf ( "" );     // para saltar linha

     // ler opcao
        printf ( "\n\n%s", "Qual a sua opcao? " );
        scanf  ( "%d", &opcao );   getchar( );

     // escolher acao
        switch ( opcao )
        {
          case  0: /* nao fazer nada */ break;
          case  1: method_01( ); break; case  2: method_02( ); break;
          case  3: method_03( ); break; case  4: method_04( ); break;
          case  5: method_05( ); break; case  6: method_06( ); break;
          case  7: method_07( ); break; case  8: method_08( ); break;
          case  9: method_09( ); break; case 10: method_10( ); break;
          case 11: method_11( ); break; case 12: method_12( ); break;
          case 13: method_13( ); break; case 14: method_14( ); break;
          case 15: method_15( ); break; case 16: method_16( ); break;
          case 17: method_17( ); break; case 18: method_18( ); break;
          case 19: method_19( ); break; case 20: method_20( ); break;
          default: printf ( "\nERRO: Opcao invalida.\n\n" );   break;
        } // fim escolher
    }
    while ( opcao != 0 );

 // encerrar execucao
    printf ( "\n\nApertar ENTER para terminar.\n" );
    getchar( );
    return ( 0 );
} // end main ( )

/*
----------------------------- documentacao complementar


----------------------------- notas / observacoes / comentarios


----------------------------- previsao de testes


----------------------------- historico

Versao	Data		      Modificacao
  0.1	__/__		      esboco

 ---------------------------- testes

Versao	Teste
  0.1	01. ( OK )	      identificacao de programa

*/

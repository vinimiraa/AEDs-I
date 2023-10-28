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

/**
  * Modelo para definir exemplo de um programa.
  * Obs.: E' recomendado ter o nome do programa
  *       sem espacos em branco, acentos ou cedilha.
  */

// -------------------------- definicao de estrutura/classe

#define ref     *
#define deref   * 
#define ref_int int*

typedef
  struct s_intArray // descricao
  {
    int   length; 
    int * data  ;  
  } // end struct s_intArray
intArray;           // nome do tipo

//      descricao  nome do tipo
typedef intArray * ref_intArray;

// -------------------------- tratamento de erro

// -------------------------- definicao de constantes

// -------------------------- definicao de armazenadores globais

// -------------------------- definicao de prototipos

// -------------------------- definicao de metodos

/**
   Metodo para mostrar dados em arranjo em estrutura.
   @param a - referencia para estrutura de dados/arranjo
 */
void intArray_print ( ref_intArray a )
{
  // definir dado local
     int x = 0;
  // mostrar cada valor
     for ( x=0; x < a->length; x=x+1 )
     {
         printf ( "%d ", a->data [x] ); 
     } // end for	 
} // end intArray_print ( )

/**
   Metodo para guardar dados em arranjo em estrutura.
   @param a - referencia para estrutura de dados/arranjo
 */
void intArray_scan  ( ref_intArray a )
{
  // definir dado local
     int x = 0, y = 0;
  // guardar cada valor
     for ( x=0; x < a->length; x=x+1 )
     {
         printf ( "%2d: ",  x );
         scanf  ( "%d"   , &y ); getchar ( );
         a->data [x] = y; 
     } // end for	 
} // end intArray_scan ( )

/**
   Metodo para gravar dados em arranjo em estrutura.
   @param filename - nome de arquivo
   @param a        - referencia para estrutura de dados/arranjo
 */
void intArray_fprint ( char * filename, ref_intArray a )
{
  // definir dado local
     int x = 0;
     FILE * file = fopen ( filename, "wt" );
  // mostrar cada valor
     for ( x=0; x < a->length; x=x+1 )
     {
         printf (       "%d ", a->data [x] ); 
        fprintf ( file, "%d ", a->data [x] ); 
     } // end for	 
     fclose ( file );
} // end intArray_fprint ( )

/**
   Metodo para ler dados para arranjo em estrutura.
   @param filename - nome de arquivo
   @param a        - referencia para estrutura de dados/arranjo
 */
void intArray_fscan  ( char * filename, ref_intArray a )
{
  // definir dado local
     int x = 0, y = 0;
     FILE * file = fopen ( filename, "rt" );
  // guardar cada valor
     for ( x=0; x < a->length; x=x+1 )
     {
         fscanf ( file, "%d"   , &y ); fgetc ( file );
         a->data [x] = y; 
     } // end for	 
     fclose ( file );
} // end intArray_fscan ( )

// ---

/**
   Funcao para copiar valor em arranjo em estrutura
   de forma mais segura.
   @return        valor em certa posicao do arranjo
   @param a     - estrutura/arranjo onde buscar
   @param index - posicao onde buscar
 */
int  intArray_get ( ref_intArray a, int index )
{
 //  definir dado local
     int value = -1;   // retorno arbitrario em caso de erro
 //       limite fisico          limite logico
     if ( a->data      && (0 <= index && index < a->length) )
     {
        value = a->data [ index ];
     }
     else
     {
        printf ( "\nERRO: Posicao invalida.\n" );
     } // end if
     return ( value );
} // end intArray_get ( )

/**
   Funcao para atribuir valor para arranjo em estrutura
          de forma mais segura.
   @param a     - estrutura/arranjo onde buscar
   @param index - posicao onde buscar
 */
void intArray_set ( ref_intArray a, int index, int value )
{
 //      limite fisico         limite logico
    if ( a->data     && (0 <= index && index < a->length) )
    {
       a->data [ index ] = value;
    }
    else
    {
       printf ( "\nERRO: Posicao invalida.\n" );
    } // end if
} // end intArray_set ( )

/**
   Metodo para guardar valores iniciais
          em arranjo em estrutura
          a partir de uma referencia.
   @param             a - referencia para estrutura/arranjo
   @param             n - quantidade de dados
   @param initial_value - valor inicial para todas as posicoes
 */
void intArray_init ( ref_intArray a, int n, int initial_value )
{
  // definir dados locais
     int  x = 0;
	 
  // testar se quantidade valida	 
     if ( n > 0 )
     {
      // guardar o tamanho
         a->length = n;
      // tentar reservar espaco	 
         a->data   = malloc ( a->length * sizeof(int) );
      // testar se espaco reservado
         if ( a->data ) // a->data != NULL
         {  // se existir espaco reservado
            // guardar valor inicial em todas as posicoes
            for ( x=0; x<a->length; x=x+1 )
            {   a->data [x] = initial_value;   }
         } // end if
     } // end if 
} // end intArray_init ( )

/**
   Funcao para criar referencia para estrutura/arranjo.
   @return                referencia para arranjo
   @param             n - quantidade de dados
   @param initial_value - valor inicial para todas as posicoes
 */
ref_intArray intArray_new ( int n, int initial_value )
{
  // definir dados locais
     int          x  = 0;
     ref_intArray a  = NULL;
	 
  // testar se quantidade valida	 
     if ( n > 0 )
     {
      // reservar espaco para o descritor da estrura
         a = malloc ( 1 * sizeof(intArray) );
      // se existir espaco	 
         if ( a ) // a != NULL
         {
          // guardar valores iniciais		 
             intArray_init ( a, n, initial_value );
         } // end if
     } // end if
     return ( a );
} // end intArray_new ( )

/**
   Metodo para liberar referencia para arranjo em estrutura.
   @param a - referencia (apontador) para estrutura
              OBS.: Necessario ser referencia (apontador)
                    pois os valores serao modificados.
 */
void intArray_delete ( ref_intArray a )
{
 // se existir
    if ( a )
    {
       a->length = 0;
       free ( a->data );
       a->data   = NULL;
       a         = NULL; // liberar completamente
    } // end if 
} // end intArray_delete ( )

// ---

/**
  * Metodo01.
  */
void metodo01 ( void )
{
 // definir dados
             intArray a;
    struct s_intArray b; 
    int n = 5;
    int x = 0;
	
 // identificar
    printf ( "\n%s\n", "Metodo01" );
	
 // acoes
    intArray_init ( &a, n, 0 ); // passar referencia
    intArray_init ( &b, n, 1 ); // passar referencia

 // guardar valores	
    for ( x=0; x < a.length; x=x+1 )
    {
        a.data [x] = x+1; 
    } // end for	 
	 
 // guardar valores
    for ( x=0; x < b.length; x=x+1 )
    {
        b.data [x] = (x+1)*2; 
    } // end for	 
	
 // mostrar cada valor
    printf ( "\nValores guardados em (a):\n" );
    intArray_print ( &a ); // passar referencia
    printf ( "\n" );
	 
 // mostrar cada valor
    printf ( "\nValores guardados em (b):\n" );
    intArray_print ( &b ); // passar referencia
    printf ( "\n" );

 // liberar area reservada
    free  ( a.data );
    a.data = NULL;
    free  ( b.data );
    b.data = NULL;

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
    ref_intArray a = NULL; 
    ref_intArray b = NULL;  
    int n = 5;
    int x = 0;
	
 // identificar
    printf ( "\n%s\n", "Metodo02" );
	
 // acoes
    a = intArray_new ( 5, 0 ); 
    b = intArray_new ( 5, 1 ); 

 // guardar valores	
    for ( x=0; x < a->length; x=x+1 )
    {
        a->data [x] = x+1; 
    } // end for	 
	 
 // guardar valores
    for ( x=0; x < b->length; x=x+1 )
    {
        b->data [x] = (x+1)*2; 
    } // end for	 
	
 // mostrar cada valor
    printf ( "\nValores guardados em (a):\n" );
    intArray_print ( a );
    printf ( "\n" );
	 
 // mostrar cada valor
    printf ( "\nValores guardados em (b):\n" );
    intArray_print ( b );
    printf ( "\n" );

 // liberar area reservada
    intArray_delete ( a );
    intArray_delete ( b );

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
    ref_intArray a = NULL;
    ref_intArray b = NULL;
    int n = 5;
    int x = 0;
	
 // identificar
    printf ( "\n%s\n", "Metodo03" );
	
 // acoes
    a = intArray_new ( 5, 0 ); 
    b = intArray_new ( 5, 0 ); 

 // guardar valores	
    printf ( "\nGuardar valores   em (a):\n" );
    intArray_scan  ( a );
    printf ( "\n" );
	 
 // guardar valores
    printf ( "\nGuardar valores   em (b):\n" );
    intArray_scan  ( b );
	
 // mostrar cada valor
    printf ( "\nValores guardados em (a):\n" );
    intArray_print ( a );
    printf ( "\n" );
	 
 // mostrar cada valor
    printf ( "\nValores guardados em (b):\n" );
    intArray_print ( b );
    printf ( "\n" );

 // liberar area reservada
    intArray_delete ( a );
    intArray_delete ( b );

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
    ref_intArray a = NULL; 
    ref_intArray b = NULL; 
    int n = 5;
    int x = 0;
	
 // identificar
    printf ( "\n%s\n", "Metodo04" );
	
 // acoes
    a = intArray_new ( 5, 0 ); 
    b = intArray_new ( 5, 0 ); 

 // guardar valores	
    printf ( "\nGuardar valores   em (a):\n" );
    intArray_scan   ( a );
    printf ( "\n" );
	 
 // mostrar cada valor
    printf ( "\nValores guardados em (a):\n" );
    intArray_print  ( a );
    printf ( "\n" );

 // mostrar cada valor
    printf ( "\nValores guardados em (b):\n" );
    intArray_print  ( b );
    printf ( "\n" );

 // gravar valores
    printf ( "\nGravar  valores   em (a):\n" );
    intArray_fprint ( "A.TXT", a );
    printf ( "\n" );
	
 // ler    valores
    printf ( "\nLer     valores para (b):\n" );
    intArray_fscan  ( "A.TXT", b );
	
 // mostrar cada valor
    printf ( "\nValores guardados em (b):\n" );
    intArray_print  ( b );
    printf ( "\n" );

 // liberar area reservada
    intArray_delete ( a );
    intArray_delete ( b );

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
    ref_intArray a = intArray_new ( 5, 0 );
    int x =  0;
	
 // identificar
    printf ( "\n%s\n", "Metodo05" );
	
 // acoes
    intArray_print ( a );
    printf ( "\n" );

 // guardar dados de forma mais segura
    for ( x=0; x<a->length; x=x+1 )
    {
        intArray_set ( a, x, (x+1) );
    } // end for

 // mostrar dados de forma mais segura
    printf ( "\nValores guardados em (a):\n" );
    for ( x=0; x<a->length; x=x+1 )
    {
        printf ( "%2d: %d\n", x, intArray_get ( a, x ) );
    } // end for
    printf ( "\n" );
 
 // liberar area reservada
    intArray_delete ( a );
	
 // encerrar
    printf ( "\n%s\n", "Apertar ENTER para continuar." );
    getchar( );
} // fim metodo05 ( )

/**
  * Metodo para deslocar dados para a esquerda.
  * @param a - referencia para estrutura com arranjo
  */
void intArray_shift_left_a ( ref_intArray a )
{
 //  definir dados locais
     int x     = 0;
     int value = 0;
 //  deslocar para a esquerda (doadora)
     if ( a )
     {
        value = intArray_get ( a, 0 );      // separar o primeiro
        for ( x = 1; x < a->length; x=x+1 )
        {
            intArray_set ( a, x-1, intArray_get ( a, x ) );
        } // end for
        intArray_set ( a, a->length-1, 0 ); // preencher o ultimo 
     } // end if
} // end intArray_shift_left ( )

/**
  * Metodo para deslocar dados para a esquerda.
  * @param a - referencia para estrutura com arranjo
  */
void intArray_shift_left_b ( ref_intArray a )
{
 //  definir dados locais
     int x     = 0;
     int value = 0;
 //  deslocar para a esquerda (receptora)
     if ( a )
     {
        value = intArray_get ( a, 0 );      // separar o primeiro
        for ( x = 0; x < a->length-1; x=x+1 )
        {
            intArray_set ( a, x, intArray_get ( a, x+1 ) );
        } // end for
        intArray_set ( a, a->length-1, 0 ); // preencher o ultimo 
     } // end if
} // end intArray_shift_left ( )

/**
  * Metodo06.
  */
void metodo06 ( void )
{
 // definir dados
    ref_intArray a = intArray_new ( 5, 0 );
    int x =  0;
	
 // identificar
    printf ( "\n%s\n", "Metodo06" );
	
 // acoes
    intArray_print ( a );
    printf ( "\n" );

 // guardar dados de forma mais segura
    for ( x=0; x<a->length; x=x+1 )
    {
        intArray_set ( a, x, (x+1) );
    } // end for

 // mostrar dados
    intArray_print ( a );
    printf ( "\n" );
    
 // deslocar dados
    intArray_shift_left_a ( a ); 
 
 // mostrar dados
    intArray_print ( a );
    printf ( "\n" );
    
 // liberar area reservada
    intArray_delete ( a );
	
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
    ref_intArray a = intArray_new ( 5, 0 );
    int x =  0;
	
 // identificar
    printf ( "\n%s\n", "Metodo07" );
	
 // acoes
    intArray_print ( a );
    printf ( "\n" );

 // guardar dados de forma mais segura
    for ( x=0; x<a->length; x=x+1 )
    {
        intArray_set ( a, x, (x+1) );
    } // end for

 // mostrar dados
    intArray_print ( a );
    printf ( "\n" );
    
 // deslocar dados
    intArray_shift_left_b ( a ); 
 
 // mostrar dados
    intArray_print ( a );
    printf ( "\n" );
    
 // liberar area reservada
    intArray_delete ( a );
	
 // encerrar
    printf ( "\n%s\n", "Apertar ENTER para continuar." );
    getchar( );
} // fim metodo07 ( )

/**
  * Metodo para deslocar dados para a direita.
  * @param a - referencia para estrutura com arranjo
  */
void intArray_shift_right_a ( ref_intArray a )
{
 //  definir dados locais
     int x     = 0;
     int value = 0;
 //  deslocar para a esquerda (doadora)
     if ( a )
     {
        value = intArray_get ( a, a->length-1 ); // separar o ultimo
        for ( x = a->length-2; x >= 0; x=x-1 )
        {
            intArray_set ( a, x+1, intArray_get ( a, x ) );
        } // end for
        intArray_set ( a, 0, 0 );                // preencher o primeiro 
     } // end if
} // end intArray_shift_right ( )

/**
  * Metodo para deslocar dados para a direita.
  * @param a - referencia para estrutura com arranjo
  */
void intArray_shift_right_b ( ref_intArray a )
{
 //  definir dados locais
     int x     = 0;
     int value = 0;
 //  deslocar para a esquerda (receptora)
     if ( a )
     {
        value = intArray_get ( a, a->length-1 ); // separar o ultimo
        for ( x = a->length-1; x > 0; x=x-1 )
        {
            intArray_set ( a, x, intArray_get ( a, x-1 ) );
        } // end for
        intArray_set ( a, 0, 0 );                // preencher o primeiro 
     } // end if
} // end intArray_shift_right ( )

/**
  * Metodo08.
  */
void metodo08 ( void )
{
 // definir dados
    ref_intArray a = intArray_new ( 5, 0 );
    int x =  0;
	
 // identificar
    printf ( "\n%s\n", "Metodo08" );
	
 // acoes
    intArray_print ( a );
    printf ( "\n" );

 // guardar dados de forma mais segura
    for ( x=0; x<a->length; x=x+1 )
    {
        intArray_set ( a, x, (x+1) );
    } // end for

 // mostrar dados
    intArray_print ( a );
    printf ( "\n" );
    
 // deslocar dados
    intArray_shift_right_a ( a ); 
 
 // mostrar dados
    intArray_print ( a );
    printf ( "\n" );
    
 // liberar area reservada
    intArray_delete ( a );
	
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
    ref_intArray a = intArray_new ( 5, 0 );
    int x =  0;
	
 // identificar
    printf ( "\n%s\n", "Metodo09" );
	
 // acoes
    intArray_print ( a );
    printf ( "\n" );

 // guardar dados de forma mais segura
    for ( x=0; x<a->length; x=x+1 )
    {
        intArray_set ( a, x, (x+1) );
    } // end for

 // mostrar dados
    intArray_print ( a );
    printf ( "\n" );
    
 // deslocar dados
    intArray_shift_right_b ( a ); 
 
 // mostrar dados
    intArray_print ( a );
    printf ( "\n" );
    
 // liberar area reservada
    intArray_delete ( a );
	
 // encerrar
    printf ( "\n%s\n", "Apertar ENTER para continuar." );
    getchar( );
} // fim metodo09 ( )

/**
  * Metodo para rotacionar dados para a esquerda.
  * @param a - referencia para estrutura com arranjo
  */
void intArray_rotate_left_a ( ref_intArray a )
{
 //  definir dados locais
     int x     = 0;
     int value = 0;
 //  deslocar para a esquerda (doadora)
     if ( a )
     {
        value = intArray_get ( a, 0 );          // separar o primeiro
        for ( x = 1; x < a->length; x=x+1 )
        {
            intArray_set ( a, x-1, intArray_get ( a, x ) );
        } // end for
        intArray_set ( a, a->length-1, value ); // preencher o ultimo 
     } // end if
} // end intArray_rotate_left ( )

/**
  * Metodo para rotacionar dados para a esquerda.
  * @param a - referencia para estrutura com arranjo
  */
void intArray_rotate_left_b ( ref_intArray a )
{
 //  definir dados locais
     int x     = 0;
     int value = 0;
 //  deslocar para a esquerda (receptora)
     if ( a )
     {
        value = intArray_get ( a, 0 );          // separar o primeiro
        for ( x = 0; x < a->length-1; x=x+1 )
        {
            intArray_set ( a, x, intArray_get ( a, x+1 ) );
        } // end for
        intArray_set ( a, a->length-1, value ); // preencher o ultimo 
     } // end if
} // end intArray_rotate_left ( )

/**
  * Metodo10.
  */
void metodo10 ( void )
{
 // definir dados
    ref_intArray a = intArray_new ( 5, 0 );
    int x =  0;
	
 // identificar
    printf ( "\n%s\n", "Metodo10" );
	
 // acoes
    intArray_print ( a );
    printf ( "\n" );

 // guardar dados de forma mais segura
    for ( x=0; x<a->length; x=x+1 )
    {
        intArray_set ( a, x, (x+1) );
    } // end for

 // mostrar dados
    intArray_print ( a );
    printf ( "\n" );
    
 // deslocar dados
    intArray_rotate_left_a ( a ); 
 
 // mostrar dados
    intArray_print ( a );
    printf ( "\n" );
    
 // liberar area reservada
    intArray_delete ( a );
	
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
    ref_intArray a = intArray_new ( 5, 0 );
    int x =  0;
	
 // identificar
    printf ( "\n%s\n", "Metodo11" );
	
 // acoes
    intArray_print ( a );
    printf ( "\n" );

 // guardar dados de forma mais segura
    for ( x=0; x<a->length; x=x+1 )
    {
        intArray_set ( a, x, (x+1) );
    } // end for

 // mostrar dados
    intArray_print ( a );
    printf ( "\n" );
    
 // deslocar dados
    intArray_rotate_left_b ( a ); 
 
 // mostrar dados
    intArray_print ( a );
    printf ( "\n" );
    
 // liberar area reservada
    intArray_delete ( a );
	
 // encerrar
    printf ( "\n%s\n", "Apertar ENTER para continuar." );
    getchar( );
} // fim metodo11 ( )

/**
  * Metodo para rotacionar dados para a direita.
  * @param a - referencia para estrutura com arranjo
  */
void intArray_rotate_right_a ( ref_intArray a )
{
 //  definir dados locais
     int x     = 0;
     int value = 0;
 //  deslocar para a esquerda (doadora)
     if ( a )
     {
        value = intArray_get ( a, a->length-1 ); // separar o ultimo
        for ( x = a->length-2; x >= 0; x=x-1 )
        {
            intArray_set ( a, x+1, intArray_get ( a, x ) );
        } // end for
        intArray_set ( a, 0, value );           // preencher o primeiro 
     } // end if
} // end intArray_rotate_right ( )

/**
  * Metodo para rotacionar dados para a direita.
  * @param a - referencia para estrutura com arranjo
  */
void intArray_rotate_right_b ( ref_intArray a )
{
 //  definir dados locais
     int x     = 0;
     int value = 0;
 //  deslocar para a esquerda (receptora)
     if ( a )
     {
        value = intArray_get ( a, a->length-1 ); // separar o ultimo
        for ( x = a->length-1; x > 0; x=x-1 )
        {
            intArray_set ( a, x, intArray_get ( a, x-1 ) );
        } // end for
        intArray_set ( a, 0, value );            // preencher o primeiro 
     } // end if
} // end intArray_rotate_right ( )

/**
  * Metodo12.
  */
void metodo12 ( void )
{
 // definir dados
    ref_intArray a = intArray_new ( 5, 0 );
    int x =  0;
	
 // identificar
    printf ( "\n%s\n", "Metodo12" );
	
 // acoes
    intArray_print ( a );
    printf ( "\n" );

 // guardar dados de forma mais segura
    for ( x=0; x<a->length; x=x+1 )
    {
        intArray_set ( a, x, (x+1) );
    } // end for

 // mostrar dados
    intArray_print ( a );
    printf ( "\n" );
    
 // deslocar dados
    intArray_rotate_right_a ( a ); 
 
 // mostrar dados
    intArray_print ( a );
    printf ( "\n" );
    
 // liberar area reservada
    intArray_delete ( a );
	
 // encerrar
    printf ( "\n%s\n", "Apertar ENTER para continuar." );
    getchar( );
} // fim metodo12 ( )

/**
  * Metodo13.
  */
void metodo13 ( void )
{
 // definir dados
    ref_intArray a = intArray_new ( 5, 0 );
    int x =  0;
	
 // identificar
    printf ( "\n%s\n", "Metodo13" );
	
 // acoes
    intArray_print ( a );
    printf ( "\n" );

 // guardar dados de forma mais segura
    for ( x=0; x<a->length; x=x+1 )
    {
        intArray_set ( a, x, (x+1) );
    } // end for

 // mostrar dados
    intArray_print ( a );
    printf ( "\n" );
    
 // deslocar dados
    intArray_rotate_right_b ( a ); 
 
 // mostrar dados
    intArray_print ( a );
    printf ( "\n" );
    
 // liberar area reservada
    intArray_delete ( a );
	
 // encerrar
    printf ( "\n%s\n", "Apertar ENTER para continuar." );
    getchar( );
} // fim metodo13 ( )

/**
  * Funcao para procurar dado em estrutura com arranjo.
  * @return        true, se encontrar; false, caso contrario
  * @param a     - referencia para estrutura com arranjo
  * @param value - dado a ser procurado 
  */
bool intArray_search ( ref_intArray a, int value )
{
 //  definir dados locais
     bool result = false;
     int  x      = 0;
 //  procurar por valor
     if ( a )
     {
        while ( x < a->length && ! result )
        {
            result = ( value == intArray_get ( a, x ) );
            x      = x + 1; // proximo
        } // end while
     } // end if
 //  retornar
     return ( result ); 
} // end intArray_search ( )

/**
  * Metodo14.
  */
void metodo14 ( void )
{
 // definir dados
    ref_intArray a = intArray_new ( 5, 0 );
    int x =  0;
	
 // identificar
    printf ( "\n%s\n", "Metodo14" );
	
 // acoes
    intArray_print ( a );
    printf ( "\n" );

 // guardar dados de forma mais segura
    for ( x=0; x<a->length; x=x+1 )
    {
        intArray_set ( a, x, (x+1) );
    } // end for

 // mostrar dados
    intArray_print ( a );
    printf ( "\n" );
    
 // procurar dados
    printf ( "\nprocurar ( 3) = %d\n", intArray_search ( a, 3 ) ); 
    printf ( "\nprocurar (-3) = %d\n", intArray_search ( a,-3 ) ); 
    
 // liberar area reservada
    intArray_delete ( a );
	
 // encerrar
    printf ( "\n%s\n", "Apertar ENTER para continuar." );
    getchar( );
} // fim metodo14 ( )

/**
  * Funcao para procurar dado em estrutura com arranjo.
  * @return        posicao onde encontrar; -1, caso contrario
  * @param a     - referencia para estrutura com arranjo
  * @param value - dado a ser procurado 
  */
int intArray_search_at ( ref_intArray a, int value )
{
 //  definir dados locais
     int  result = -1;
     int  x      =  0;
 //  procurar por valor
     if ( a )
     {
        while ( x < a->length && 
              ( value != intArray_get ( a, x ) ) )
        {
            x = x + 1; // proximo
        } // end while
        if ( x < a->length )
        {
           result = x;
        } // end if
     } // end if
 //  retornar
     return ( result ); 
} // end intArray_search_at ( )

/**
  * Metodo15.
  */
void metodo15 ( void )
{
 // definir dados
    ref_intArray a = intArray_new ( 5, 0 );
    int x =  0;
	
 // identificar
    printf ( "\n%s\n", "Metodo15" );
	
 // acoes
    intArray_print ( a );
    printf ( "\n" );

 // guardar dados de forma mais segura
    for ( x=0; x<a->length; x=x+1 )
    {
        intArray_set ( a, x, (x+1) );
    } // end for

 // mostrar dados
    intArray_print ( a );
    printf ( "\n" );
    
 // procurar dados
    printf ( "\nprocurar ( 3) = %d\n", intArray_search_at ( a, 3 ) ); 
    printf ( "\nprocurar (-3) = %d\n", intArray_search_at ( a,-3 ) ); 
    
 // liberar area reservada
    intArray_delete ( a );
	
 // encerrar
    printf ( "\n%s\n", "Apertar ENTER para continuar." );
    getchar( );
} // fim metodo15 ( )

/**
  * Metodo para ordenar dados em estrutura com arranjo.
  * @param a     - referencia para estrutura com arranjo
  */
void intArray_sort_up_1 ( ref_intArray a )
{
 //  definir dados locais
     int  x     = 0;
     int  y     = 0;
     int  value = 0;
 //  ordenar 
     if ( a )
     {
        for ( x = 1; x < a->length; x = x+1 )    // (n-1) vezes
        {
           for ( y = 1; y < a->length; y = y+1 ) // (n-1) testes
           {
               if ( intArray_get ( a, y-1 ) > intArray_get ( a, y ) )
               {
                  value        = intArray_get ( a, y );
                  intArray_set ( a, y, intArray_get ( a, y-1 ) );
                  intArray_set ( a, y-1, value );
               } // end if
           } // end for
        } // end if
     } // end for
} // end intArray_sort_up_1 ( )

/**
  * Metodo16.
  */
void metodo16 ( void )
{
 // definir dados
    ref_intArray a = intArray_new ( 5, 0 );
    int x =  0;
	
 // identificar
    printf ( "\n%s\n", "Metodo16" );
	
 // acoes
    intArray_print ( a );
    printf ( "\n" );

 // guardar dados de forma mais segura
    for ( x=0; x<a->length; x=x+1 )
    {
        intArray_set ( a, x, a->length-x );
    } // end for

 // mostrar dados
    intArray_print ( a );
    printf ( "\n" );
    
 // ordenar dados
    intArray_sort_up_1 ( a );
    
 // mostrar dados
    intArray_print ( a );
    printf ( "\n" );
    
 // liberar area reservada
    intArray_delete ( a );
	
 // encerrar
    printf ( "\n%s\n", "Apertar ENTER para continuar." );
    getchar( );
} // fim metodo16 ( )

/**
  * Metodo para ordenar dados em estrutura com arranjo.
  * @param a     - referencia para estrutura com arranjo
  */
void intArray_swap_in ( ref_intArray a, int x, int y )
{
 //  definir dados locais
     int  value = 0;
 //  trocar valores de lugar
     if ( a )
     {     
        value = intArray_get ( a, y );
        intArray_set ( a, y, intArray_get ( a, x ) );
        intArray_set ( a, x, value );
     } // end if
} // end intArray_swap_in ( )

/**
  * Metodo para ordenar dados em estrutura com arranjo.
  * @param a     - referencia para estrutura com arranjo
  */
void intArray_sort_up_2 ( ref_intArray a )
{
 //  definir dados locais
     int  x     = 0;
     int  y     = 0;
 //  ordenar 
     if ( a )
     {
        for ( x = 1; x < a->length; x = x+1 )    // (n-1) vezes
        {
           for ( y = 1; y < a->length; y = y+1 ) // (n-1) testes
           {
               if ( intArray_get ( a, y-1 ) > intArray_get ( a, y ) )
               {
                  intArray_swap_in  ( a, y-1, y );
               } // end if
           } // end for
        } // end if
     } // end for
} // end intArray_sort_up_2 ( )

/**
  * Metodo17.
  */
void metodo17 ( void )
{
 // definir dados
    ref_intArray a = intArray_new ( 5, 0 );
    int x =  0;
	
 // identificar
    printf ( "\n%s\n", "Metodo17" );
	
 // acoes
    intArray_print ( a );
    printf ( "\n" );

 // guardar dados de forma mais segura
    for ( x=0; x<a->length; x=x+1 )
    {
        intArray_set ( a, x, a->length-x );
    } // end for

 // mostrar dados
    intArray_print ( a );
    printf ( "\n" );
    
 // ordenar dados
    intArray_sort_up_2 ( a );
    
 // mostrar dados
    intArray_print ( a );
    printf ( "\n" );
    
 // liberar area reservada
    intArray_delete ( a );
	
 // encerrar
    printf ( "\n%s\n", "Apertar ENTER para continuar." );
    getchar( );
} // fim metodo17 ( )

/**
  * Metodo para ordenar dados em estrutura com arranjo.
  * @param a     - referencia para estrutura com arranjo
  */
void intArray_sort_down_1 ( ref_intArray a )
{
 //  definir dados locais
     int  u = 0;
     int  v = 0;
     int  x = 0;
     int  y = 0;
     int  z = 0;
 //  ordenar 
     if ( a )
     {
        for ( x = 1; x < a->length; x = x+1 )
        {
           for ( y = 1; y < a->length; y = y+1 )
           {
               u = intArray_get ( a, y-1 );
               v = intArray_get ( a, y   );
               if ( u < v )
               {
                  z = u;
                  u = v;
                  v = z;
               } // end if
               intArray_set ( a, y-1, u );
               intArray_set ( a, y  , v );
           } // end for
        } // end if
     } // end for
} // end intArray_sort_down_1 ( )

/**
  * Metodo18.
  */
void metodo18 ( void )
{
 // definir dados
    ref_intArray a = intArray_new ( 5, 0 );
    int x =  0;
	
 // identificar
    printf ( "\n%s\n", "Metodo18" );
	
 // acoes
    intArray_print ( a );
    printf ( "\n" );

 // guardar dados de forma mais segura
    for ( x=0; x<a->length; x=x+1 )
    {
        intArray_set ( a, x, (x+1) );
    } // end for

 // mostrar dados
    intArray_print ( a );
    printf ( "\n" );
    
 // ordenar dados
    intArray_sort_down_1 ( a );
    
 // mostrar dados
    intArray_print ( a );
    printf ( "\n" );
    
 // liberar area reservada
    intArray_delete ( a );
	
 // encerrar
    printf ( "\n%s\n", "Apertar ENTER para continuar." );
    getchar( );
} // fim metodo18 ( )

/**
  * Metodo para trocar dados.
  * @param x     - referencia para o primeiro dado
  * @param y     - referencia para o segundo  dado
  */
void swap ( int * x, int * y )
{
    int z = *x;
       *x = *y;
       *y =  z;    
} // end swap ( )

/**
  * Metodo para ordenar dados em estrutura com arranjo.
  * @param a     - referencia para estrutura com arranjo
  */
void intArray_sort_down_2 ( ref_intArray a )
{
 //  definir dados locais
     int  x     = 0;
     int  y     = 0;
     int  u     = 0;
     int  v     = 0;
 //  ordenar 
     if ( a )
     {
        for ( x = 1; x < a->length; x = x+1 )
        {
           for ( y = 1; y < a->length; y = y+1 )
           {
               u = intArray_get ( a, y-1 );
               v = intArray_get ( a, y   );
               if ( u < v )
               {
                  swap ( &u, &v );
               } // end if
               intArray_set ( a, y-1, u );
               intArray_set ( a, y  , v );
           } // end for
        } // end if
     } // end for
} // end intArray_sort_down_1 ( )

/**
  * Metodo19.
  */
void metodo19 ( void )
{
 // definir dados
    ref_intArray a = intArray_new ( 5, 0 );
    int x =  0;
	
 // identificar
    printf ( "\n%s\n", "Metodo19" );
	
 // acoes
    intArray_print ( a );
    printf ( "\n" );

 // guardar dados de forma mais segura
    for ( x=0; x<a->length; x=x+1 )
    {
        intArray_set ( a, x, (x+1) );
    } // end for

 // mostrar dados
    intArray_print ( a );
    printf ( "\n" );
    
 // ordenar dados
    intArray_sort_down_2 ( a );
    
 // mostrar dados
    intArray_print ( a );
    printf ( "\n" );
    
 // liberar area reservada
    intArray_delete ( a );
	
 // encerrar
    printf ( "\n%s\n", "Apertar ENTER para continuar." );
    getchar( );
} // fim metodo19 ( )

/**
  * Metodo para operar dados em estrutura com arranjo.
  * @return        referencia para resultado
  * @param a     - referencia para estrutura com arranjo (1)
  * @param k     - constante  a ser aplicada sobre os dados 
  * @param b     - referencia para estrutura com arranjo (2)
  */
ref_intArray intArray_op ( ref_intArray a, 
                           int k, 
                           ref_intArray b )
{
 //  definir dados locais
     ref_intArray c = NULL;
     int  x         = 0;
 //  operar se houver dados validos
     if ( a && b && a->length == b->length )
     {
        c = intArray_new ( a->length, 0 );
        for ( x = 0; x < a->length; x = x+1 )
        {
            intArray_set ( c,  x,  
                               intArray_get ( a, x )
                         + k * intArray_get ( b, x ) );
        } // end if
     } // end for
 //  retornar 
     return ( c ); 
} // end intArray_op ( )

/**
  * Metodo20.
  */
void metodo20 ( void )
{
 // definir dados
    ref_intArray a = intArray_new ( 5, 0 );
    ref_intArray b = intArray_new ( 5, 0 );
    ref_intArray c = intArray_new ( 5, 0 );
    int x =  0;
	
 // identificar
    printf ( "\n%s\n", "Metodo20" );
	
 // acoes
    intArray_print ( a );
    printf ( "\n" );

 // guardar dados
    for ( x=0; x<a->length; x=x+1 )
    {
        intArray_set ( a, x,   (x+1) );
        intArray_set ( b, x, 2*(x+1) );
    } // end for

 // mostrar dados
    intArray_print ( a );
    printf ( "\n" );
    intArray_print ( b );
    printf ( "\n" );
    
 // operar dados
    c = intArray_op ( a, -1, b );
    
 // mostrar dados
    intArray_print ( c );
    printf ( "\n" );
    
 // liberar area reservada
    intArray_delete ( a );
    intArray_delete ( b );
    intArray_delete ( c );
	
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

Versao	Data                  Modificacao
  0.1	__/__	              esboco

 ---------------------------- testes

Versao	Teste
  0.1	01. ( OK )            identificacao de programa

*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
  Method_01.
  Estrutura estatica (fixa), local, sem metodos.
*/
void method_01 ( void )
{
 // definir dado (static)
    struct               // descricao
    {
      int length;
      int data [5];      // tamanho fixo
    } a;                 // variavel

 // atribuir valores iniciais
    a.length = 5;
    for ( int x=0; x<a.length; x=x+1 )
    {
        a.data [x] = 0;
    } // end for

 // modificar dados
    for ( int x=0; x<a.length; x=x+1 )
    {
        a.data [x] = (x+1);
    } // end for
 // mostrar   dados
    for ( int x=0; x<a.length; x=x+1 )
    {
        printf ( "%d ", a.data [x] );
    } // end for
    printf ( "\n" );
} // end method_01 ( )

/*
  Method_02.
  Estrutura estatica (fixa), local, sem metodos.
*/
void method_02 ( void )
{
 // definir dado (static)
    struct s_intArray    // descricao
    {
      int length;
      int data [5];      // tamanho fixo
    };

    struct s_intArray a; // variavel

 // atribuir valores iniciais
    a.length = 5;
    for ( int x=0; x<a.length; x=x+1 )
    {
        a.data [x] = 0;
    } // end for

 // modificar dados
    for ( int x=0; x<a.length; x=x+1 )
    {
        a.data [x] = (x+1);
    } // end for
 // mostrar   dados
    for ( int x=0; x<a.length; x=x+1 )
    {
        printf ( "%d ", a.data [x] );
    } // end for
    printf ( "\n" );
} // end method_02 ( )

/*
  Method_03.
  Estrutura estatica (variavel), local, sem metodos.
*/
void method_03 ( void )
{
 // definir dado (static)
    struct s_intArray    // descricao
    {
      int  length;
      int *data  ;       // tamanho variavel
    };

    struct s_intArray a; // variavel

 // atribuir valores iniciais
    a.length = 5;
    // reservar espaco para guardar dados
    a.data   = (int*) malloc ( a.length*sizeof(int) );
    for ( int x=0; x<a.length; x=x+1 )
    {
        a.data [x] = 0;
    } // end for

 // modificar dados
    for ( int x=0; x<a.length; x=x+1 )
    {
        a.data [x] = (x+1);
    } // end for
 // mostrar   dados
    for ( int x=0; x<a.length; x=x+1 )
    {
        printf ( "%d ", a.data [x] );
    } // end for
    printf ( "\n" );
} // end method_03 ( )

// definir tipo (global) 
// para descritor de arranjo
typedef
 struct s_intArray  // descricao
 {
    int  length;
    int *data  ;
 }
intArray;           // nome do tipo

// definir tipo (global) para referencia
// para descritor de arranjo
typedef 
 intArray*          // descricao
ref_intArray;       // nome do tipo

/*
  Method_04.
  Estrutura estatica (variavel), sem metodos.
*/
void method_04 ( void )
{
 // definir dado (static)
    intArray a;
    a.length = 5;
    a.data   = (int*) malloc ( a.length*sizeof(int) );
    for ( int x=0; x<a.length; x=x+1 )
    {
        a.data [x] = 0;
    } // end for

 // modificar dados
    for ( int x=0; x<a.length; x=x+1 )
    {
        a.data [x] = (x+1);
    } // end for
 
 // mostrar   dados
    for ( int x=0; x<a.length; x=x+1 )
    {
        printf ( "%d ", a.data [x] );
    } // end for
    printf ( "\n" );
} // end method_04 ( )

/*
  Funcao para reservar area para inteiros.
  @return apontador para a area reservada
  @param  n - quantidade de inteiros
*/
int* ints_new ( int n )
{
    return ((int*) malloc ( n*sizeof(int) ));
} // end ints_new ( )

// -------------------------- metodos para definicoes estaticas

/*
  Funcao para reservar area para estrutura/arranjo.
  @return arranjo atualizado
  @param  n - quantidade de dados
*/
intArray intArray_static_new ( intArray a, int n )
{
 // guardar quantidade
    a.length = n;
 // reservar area
    a.data   = ints_new ( n );
 // retornar modificado
    return ( a );
} // end intArray_static_new ( )

/*
  Metodo para atribuir valor inicial a posicoes de arranjo.
  @param a     - arranjo
  @paran n     - quantidade de dados
  @param value - valor inicial a ser atribuido
*/
intArray intArray_static_init ( intArray a, int n, int value )
{
 // atribuir dados
    a.length = n;
    for ( int x=0; x<a.length; x=x+1 )
    {
        a.data [x] = value;
    } // end for
    return ( a );
} // end intArray_static_init ( )

/*
  Metodo para modificar valores em posicoes de arranjo.
  @param a     - arranjo
*/
void intArray_static_modify ( intArray a )
{
    for ( int x=0; x<a.length; x=x+1 )
    {
        a.data [x] = (x+1);
    } // end for
} // end intArray_static_modify ( )

/*
  Metodo para mostrar valores em posicoes de arranjo.
  @param a     - arranjo
*/
void intArray_static_print ( intArray a )
{
    for ( int x=0; x<a.length; x=x+1 )
    {
        printf ( "%d ", a.data [x] );
    } // end for
    printf ( "\n" );
} // end intArray_static_init ( )

/*
  Method_05.
*/
void method_05 ( void )
{
 // definir dado (static)
    intArray a;

    a.data = ints_new        ( 5 );

    a = intArray_static_init ( a, 5, 0 );

    intArray_static_modify   ( a );

    intArray_static_print    ( a );
} // end method_05 ( )

// -------------------------- metodos para definicoes dinamicas

#define var(x) &(x)  // endereco de variavel (referencia)
#define val(x) *(x)  // valor na referencia

/*
  Funcao para reservar area para estrutura/arranjo.
  @return referencia para descritor de arranjo;
          ou NULL, caso nao houver area reservada
  @param  n - quantidade de dados
*/
ref_intArray intArray_new ( int n )
{
 // definir referencia
    ref_intArray a = NULL;
 // reservar area para descritor
    a = (ref_intArray) malloc ( 1*sizeof(intArray) );
 // testar se ha' area reservada
    if ( a )
    { // guardar quantidade de dados
         a->length = n;
      // reservar area para guardar dados
         a->data   = ints_new ( n );
    } // end if
    return ( a );
} // end intArray_new ( )

/*
  Method_06.
*/
void method_06 ( void )
{
 // definir referencia para arranjo
    ref_intArray a = intArray_new  ( 5 );
        
    intArray_static_init   ( val(a), 5, 0 );
    
    intArray_static_modify ( val(a) );

    intArray_static_print  ( val(a) );
} // end method_06 ( )

/*
  Method_07.
*/
void method_07 ( void )
{
 // definir referencia para arranjo
    ref_intArray a = intArray_new  ( 5 );

    intArray_static_init   ( *a, 5, 0 );

    intArray_static_modify ( *a );

    intArray_static_print  ( *a );
} // end method_07 ( )

/*
  Metodo para atribuir valor inicial a posicoes de arranjo.
  @param a     - referencia para arranjo
  @paran n     - quantidade de dados
  @param value - valor inicial a ser atribuido
*/
void intArray_init ( ref_intArray a, int n, int value )
{
 // atribuir valores
    a->length = n;
    for ( int x=0; x<a->length; x=x+1 )
    {
        a->data [x] = value;
    } // end for
} // end intArray_init ( )

/*
  Metodo para modificar valores em posicoes de arranjo.
  @param a     - arranjo
*/
void intArray_modify ( ref_intArray a )
{
    for ( int x=0; x<a->length; x=x+1 )
    {
        a->data [x] = (x+1);
    } // end for
} // end intArray_modify ( )

/*
  Metodo para mostrar valores em posicoes de arranjo.
  @param a     - referencia para arranjo
*/
void intArray_print ( ref_intArray a )
{
    for ( int x=0; x<a->length; x=x+1 )
    {
        printf ( "%d ", a->data [x] );
    } // end for
    printf ( "\n" );
} // end intArray_print ( )

/*
  Method_08.
*/
void method_08 ( void )
{
 // definir referencia para arranjo
    ref_intArray a = intArray_new ( 5 );

    intArray_init   ( a, 5, 0 );

    intArray_modify ( a );

    intArray_print  ( a );
} // end method_08 ( )

/*
  Method_09.
*/
void method_09 ( void )
{
 // definir dado
    intArray a;
    
    a = intArray_static_new ( a, 5 );

    intArray_init       ( var(a), 5, 0 );

    intArray_modify     ( var(a) );

    intArray_print      ( var(a) );
} // end method_09 ( )

/*
  Method_10.
*/
void method_10 ( void )
{
 // definir dado
    intArray a;
    
    a = intArray_static_new (  a, 5 );

    intArray_init           ( &a, 5, 0 );

    intArray_modify         ( &a );

    intArray_print          ( &a );
} // end method_10 ( )

// definir tipo para referencia para inteiro
typedef int* ref_int;

/*
  Acao principal.
*/
int main ( void )
{
 // heap                          // stack
    ref_int option = ints_new(1); // int *option;
 // val(option)    = 1;           //  *option = 4;
    printf ( "\nOpcao = " );
    scanf  ( "%d", option );      // OBS: sem &
    switch ( val(option) )        // (*option)
    {
     case  1: method_01 ( ); break;
     case  2: method_02 ( ); break;
     case  3: method_03 ( ); break;
     case  4: method_04 ( ); break;
     case  5: method_05 ( ); break;
     case  6: method_06 ( ); break;
     case  7: method_07 ( ); break;
     case  8: method_08 ( ); break;
     case  9: method_09 ( ); break;
     case 10: method_10 ( ); break;
    } // end switch
    return ( 0 );
} // end main ( )

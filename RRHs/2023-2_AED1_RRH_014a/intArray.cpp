#include <iostream>          // para entrada e saida em C++
#include "intArray.hpp"      // para converter dados em C++

// ---
                                  //  secao de testes
/*
  Teste para criar/dispensar objeto.
*/
void method_01 ( void )
{
    std::cout << "\n01. Teste para criar/dispensar.\n";
    ref_intArray array = new intArray ( 5 );
    if ( array )
    {  // se existir
       array->free  ( );
       delete       ( array );
    } // end if
} // end method_01 ( )

/*
  Teste para criar/dispensar objeto com valores iniciais.
*/
void method_02 ( void )
{
    std::cout << "\n02. Teste para inicializar.\n";
    ref_intArray array = new intArray ( 5 );
    if ( array )
    {  // se existir
       array->init  ( 0 );
       array->free  ( );
       delete       ( array );
    } // end if
} // end method_02 ( )

/*
  Teste para criar/dispensar e
  mostrar objeto com valores iniciais.
*/
void method_03 ( void )
{
    std::cout << "\n03. Teste para mostrar.\n\n";
    ref_intArray array = new intArray ( 5 );
    if ( array )
    {  // se existir
       array->init  ( 0 );
       array->print ( );
       array->free  ( );
       delete       ( array );
    } // end if
} // end method_03 ( )

/*
  Teste para criar/dispensar, ler e
  mostrar objeto com valores iniciais.
*/
void method_04 ( void )
{
    std::cout << "\n04. Teste para ler.\n";
    ref_intArray array = new intArray ( 5 );
    if ( array )
    {  // se existir
       array->init  ( 0 );
       array->scan  ( );
       array->print ( );
       array->free  ( );
       delete       ( array );
    } // end if
} // end method_04 ( )

/*
  Teste para criar/dispensar, atribuir e
  mostrar objeto com acessos individuais.
*/
void method_05 ( void )
{
    int x = 0;
    std::cout << "\n05. Teste para acessos individuais.\n";
    ref_intArray array = new intArray ( 5 );
    std::cout << "\n05. Teste para acessos individuais.\n";
    if ( array && array->exists ( ) )
    {  // se existir e houver dados
       for ( x = 0; x < array->get_length( ); x = x + 1 )
       {
           array->set ( x, (x+1) );
       } // end for
       array->print ( );
       array->free  ( );
       delete       ( array );
    } // end if
} // end method_05 ( )

/*
  Teste para criar/dispensar, atribuir e
  mostrar objeto com acessos individuais.
*/
void method_06 ( void )
{
    int x = 0;
    std::cout << "\n06. Teste para acessos individuais.\n";
    ref_intArray array = new intArray ( 5 );
    if ( array && array->exists ( ) )
    {  // se existir e houver dados
       for ( x = 0; x < array->get_length( ); x = x + 1 )
       {
           array->set ( x, (x+1) );
       } // end for
       std::cout << "\nsize = "
                 << array->get_size( )
                 << std::endl;
       for ( x = 0; x < array->get_size( ); x = x + 1 )
       {
           std::cout << array->get ( x ) << std::endl;
       } // end for
       array->free ( );
       delete      ( array );
   } // end if
} // end method_06 ( )

/*
  Teste para criar/dispensar, atribuir e
  mostrar objeto com acessos individuais.
*/
void method_07 ( void )
{
    int x = 0;
    std::cout << "\n07. Teste para acessos individuais.\n";
    ref_intArray array = new intArray ( 5 );
    if ( array && array->exists ( ) )
    {  // se existir e houver dados
       for ( x = 0; x < array->get_length( ); x = x + 1 )
       {
           array->set ( x, (x+1) );
       } // end for
       std::cout << "\n" << array->toString( ) << std::endl;
       array->free ( );
       delete      ( array );
    } // end if
} // end method_07 ( )

/*
  Teste para criar/dispensar, atribuir e
  mostrar objeto com acessos individuais.
*/
void method_08 ( void )
{
    int x = 0;
    std::cout << "\n08. Teste para acessos individuais.\n";
    ref_intArray array1 = new intArray ( 5 );
    ref_intArray array2 = new intArray ( 5 );
    if ( array1 && array1->exists ( ) &&
         array2 && array2->exists ( ) )
    {  // se existir e houver dados
       for ( x = 0; x < 5; x = x + 1 )
       {
           array1->set ( x, (x+1)   );
           array2->set ( x, (x+1)*2 );
       } // end for
       std::cout << "\n" << array1->toString( ) << std::endl;
       std::cout << "\n" << array2->toString( ) << std::endl;
       array1->free ( );
       array2->free ( );
       delete       ( array1 );
       delete       ( array2 );
    } // end if
} // end method_08 ( )

/*
  Teste para criar/dispensar, atribuir e
  mostrar objeto com acessos individuais.
*/
void method_09 ( void )
{
    int x = 0;
    std::cout << "\n09. Teste para acessos individuais.\n";
    ref_intArray array1 = new intArray ( 5 );
    ref_intArray array2 = new intArray ( 5 );
    ref_intArray array3 = new intArray ( 5 );
    if ( array1 && array1->exists ( ) &&
         array2 && array2->exists ( ) &&
 	 array3 && array3->exists ( ) )
    {  // se existir e houver dados
       for ( x = 0; x < 5; x = x + 1 )
       {
           array1->set ( x, (x+1)   );
           array2->set ( x, (x+1)*2 );
       } // end for
       std::cout << "\n" << array1->toString( ) << std::endl;
       std::cout << "\n" << array2->toString( ) << std::endl;
       for ( x = 0; x < 5; x = x + 1 )
       {
           array3->set ( x,
                         array1->get ( x ) +
                         array2->get ( x ) );
       } // end for
       std::cout << "\n" << array3->toString( ) << std::endl;
       array1->free ( );
       array2->free ( );
       array3->free ( );
       delete       ( array1 );
       delete       ( array2 );
       delete       ( array3 );
    } // end if
} // end method_09 ( )

/*
  Metodo para subtrair valores em arranjos.
  @param c - arranjo para os resultados
  @param a - arranjo com os dados (1)
  @param b - arranjo com os dados (2)
*/
void sub_Arrays ( ref_intArray c, 
                  ref_intArray a, ref_intArray b )
{
    int x = 0;
    if ( a && a->exists ( ) &&
         b && b->exists ( ) &&
	 c && c->exists ( )  )
    {  // se existirem e houver dados
       if ( a && b && c )
       {
          for ( x = 0; x < 5; x = x + 1 )
          {
              c->set ( x, a->get ( x ) - b->get ( x ) );
          } // end for
       } // end if
    } // end if
} // end sub_Arrays ( )

/*
  Teste para criar/dispensar, atribuir e
  mostrar objeto com acessos individuais.
*/
void method_10 ( void )
{
    int x = 0;
    std::cout << "\n10. Teste para acessos individuais.\n";
    ref_intArray array1 = new intArray ( 5 );
    ref_intArray array2 = new intArray ( 5 );
    ref_intArray array3 = new intArray ( 5 );
    if ( array1 && array1->exists ( ) &&
         array2 && array2->exists ( ) &&
 	 array3 && array3->exists ( ) )
    {  // se existir e houver dados
       for ( x = 0; x < 5; x = x + 1 )
       {
           array1->set ( x, (x+1)   );
           array2->set ( x, (x+1)*2 );
       } // end for
       std::cout << "\n" << array1->toString( ) << std::endl;
       std::cout << "\n" << array2->toString( ) << std::endl;
       sub_Arrays ( array3, array1, array2 );
       std::cout << "\n" << array3->toString( ) << std::endl;
       array1->free ( );
       array2->free ( );
       array3->free ( );
       delete       ( array1 );
       delete       ( array2 );
       delete       ( array3 );
	} // end if
} // end method_10 ( )

// ---

/*
    Funcao principal.
*/
int main ( void )
{
 // identificar
    std::cout << "\nTestes para a classe para valores inteiros.\n"
	      << std::endl;
 // testar todos os metodos
    method_01 ( );
    method_02 ( );
    method_03 ( );
    method_04 ( );
    method_05 ( );
    method_06 ( );
    method_07 ( );
    method_08 ( );
    method_09 ( );
    method_10 ( );

 // encerrar
    std::cout << std::endl;
    return ( 0 );
} // end main ( )

/*
  Testes e comentarios.

*/

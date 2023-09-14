/*
  Modelo de lista para testar metodos.
  
  Compilar: gcc -o lista lista.c -lm
  Executar: ./lista
*/

// 999999_AED1
#include "io.h" // dependencia (necessario estar na mesma pasta)

void method_01 ( void )
{
 // identificar
    IO_println ( "999999_AED1_Method_01\n" );
 // encerrar
    IO_pause   ( "Apertar ENTER" );
} // end method_01 ( )

void method_02 ( void )
{
 // identificar
    IO_println ( "999999_AED1_Method_02\n" );
 // encerrar
    IO_pause ( "Apertar ENTER" );
} // end method_02 ( )

void method_03 ( void )
{
 // identificar
    IO_println ( "999999_AED1_Method_03\n" );
 // encerrar
    IO_pause ( "Apertar ENTER" );
} // end method_03 ( )

void menu ( void )
{
  IO_printf ( "%s\n", "Menu"          );
  IO_printf ( "%s\n", "0 - Terminar"  );
  IO_printf ( "%s\n", "1 - Method_01" );
  IO_printf ( "%s\n", "2 - Method_02" );
  IO_printf ( "%s\n", "3 - Method_03" );
} // end menu ( )

int main ( void )
{
 // definir dados
    int opcao = 0;
    
    do
    {
     // acoes
        menu ( );
        opcao = IO_readint ( "Qual a opcao? " );
        switch ( opcao )
        {
           case 0: /* nao fazer nada */
             break;
           case 1:  method_01 ( );
             break;
           case 2:  method_02 ( );
             break;
           case 3:  method_03 ( );
             break;
           default: IO_printf ( "%s\n\n", "ERRO: Valor invalido." );
                    IO_pause  ( "Apertar ENTER." );
             break;
	} // end switch
    } while ( opcao != 0 );
 // encerrar
    IO_pause ( "Apertar ENTER" );
    return ( 0 );
} // end main ( )

/*
  Testes e observacoes
*/
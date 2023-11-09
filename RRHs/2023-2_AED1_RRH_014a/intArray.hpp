#include <iostream>  // para entrada e saida em C++: cin, cout
#include <sstream>   // para converter dados em C++: ostringstream

/*
  Classe para tratar arranjo com valores inteiros.
*/
class intArray
{
 private:                         // secao privada (encapsulamento)
 
   int  length;                   // capacidade
   int  size  ;                   // tamanho efetivo
   int *data  ;                   // referencia para dados

   /*
      Metodo para reservar area para dados.
      @param n - quantidade de dados
   */
   void alloc ( int n )
   {
      length = 0;
      size   = 0;
      if ( n > 0 )
      {
         data = new int [ n ];
         if ( data )
         {
            length = n;
         } // end if
      } // end if
   } // end alloc ( )

 protected:                       // secao protegida (heranca)

   /*
      Metodo para alterar a quantidade de dados.
      @param n - quantidade de dados
   */
   void set_length ( int n )
   {
      if ( n > 0 )
      {
         alloc ( n );
      } // end if
   } // end set_length ( )

 public:                          // secao publica

    /*
      Construtor padrao.
      @param n - quantidade de dados
   */
   intArray ( )
   {
      length = 0 ;
      size   = 0 ;
      data   = nullptr;
   } // end constructor ( )

   /*
      Construtor alternativo.
      @param n - quantidade de dados
   */
   intArray ( int n )
   {
      length = 0 ;
      size   = 0 ;
      data   = nullptr;
      set_length ( n );
   } // end constructor ( )

   /*
      Procedimento para colocar valores iniciais.
      @param value - valor inicial
   */
   void init ( int value )
   {
      int x = 0;
      if ( this->data )           // this = autoreferencia
      {
         for ( x = 0; x < this->length; x = x+1 )
         {
             this->data [ x ] = value;
         } // end if
      } // end if
   } // end init ( )

   /*
      Procedimento para dispensar area reservada.
   */
   void free ( void )
   {
      delete ( data );
      data   =  nullptr;
      length = 0;
      size   = 0 ;
   } // end free ( )

// ---

   /*
      Procedimento para mostrar dados armazenados.
   */
   void print ( )
   {
      int x = 0, value = 0;
      if ( data )
      {
         for ( x = 0; x < length; x = x+1 )
         {
             value = data [ x ];
             std::cout << value << " ";
         } // end for
      } // end if
      std::cout << "\n";
   } // end print ( )

   /*
      Procedimento para ler dados.
   */
   void scan ( ); // prototipo (definicao em separado)

   /*
      Funcao para verificar a existencia de area reservada.
      @return true, se houver; false, caso contrario
   */
   bool exists ( )
   {
      return ( data );
   } // end exists ( )

   // getters (metodos para obter informacoes)

   /*
      Funcao para obter o tamanho.
      @return quantidade de dados
   */
   int get_length ( )
   {
      return ( length );
   } // end get_length ( )

   /*
      Funcao para obter o tamanho.
      @return quantidade de dados
   */
   int get_size ( )
   {
      return ( size );
   } // end get_size ( )

   /*
      Funcao para obter valor em certa posicao.
      @return valor em certa posicao, se valido
      @param index - posicao desejada
   */
   int get ( int index )
   {
      int value = 0;
      if ( 0 <= index && index < size )
      {
         value = data [ index ];
      } // end if
      return ( value );
   } // end get ( )

   // setters (metodos para alterar informacoes)

   /*
      Procedimento para alterar valor em certa posicao.
      @param index - posicao desejada
      @param value - valor a ser guardado
   */
   void set ( int index, int value )
   {
      if ( 0 <= index && index < length )
      {
         data [ index ] = value;
         if ( index >= size )
         {
            size = index+1;
         }
      } // end if
   } // end set ( )

   /*
      Funcao para converter dados para string.
      @return representacao de dados em caracteres
   */
   std::string toString ( )
   {
      std::ostringstream buffer; // armazenador
      int x = 0;
      if ( ! data )
      {
         buffer << "";           // vazio
      }
      else
      {
         for ( x = 0; x < size; x = x+1 )
         {
             buffer << data [ x ] << ' ';
         } // end for
      } // end if
	  return ( buffer.str( ) );  // conversao para caracteres
   } // end toString ( )
}; // end class intArray

// definicao de tipo para referencia a objeto (C compativel)
typedef
 intArray *
ref_intArray;

/*
  Funcao para ler dados (definicao externa 'a classe).
*/
void intArray::scan ( )
{
   int x = 0, y = 0, value = 0;
   if ( data )
   {
      std::cout << std::endl; // mudar de linha
      std::cout << "size = ";
      std::cin  >> y;
      if ( 0 < y && y <= length )
      {
         for ( x = 0; x < y; x = x+1 )
         {
             std::cout << "? ";
             std::cin  >> value; std::cin.get( );
             set ( x, value );
         }
      } // end for
   } // end if
} // end intArray::scan ( )

// ---

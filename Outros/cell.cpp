/*
 *  ----------------------------------------------------------------------------
 *  Implementação da Biblioteca Cell em C++ - "cell.cpp"
 *  ----------------------------------------------------------------------------
 *  Copyright (c) 2023, Vinicius Miranda de Araujo
 *  Todos os direitos reservados.
 *  
 *  Este código fonte é propriedade exclusiva de Vinicius Miranda de Araujo e não pode ser
 *  copiado, modificado, distribuído, ou sublicenciado por qualquer outra pessoa
 *  sem autorização expressa por escrito do autor. O uso deste código está
 *  sujeito aos termos e condições estabelecidos no contrato de licença, se fornecido,
 *  ou, na ausência de tal contrato, pelos termos padrão da Licença MIT.
 *  ----------------------------------------------------------------------------
*/

// ---------------------------------- Lista de Dependências

#include "cell.hpp"
#include <iostream>
#include <iomanip>
using std::cout;
using std::endl;
using std::setw;

// ---------------------------------- Implementação dos Métodos

/**
 *  Default Constructor.
 *  Construtor Padrão.  
*/
template <typename T>
Cell<T>::Cell( void )
{
    this->value = 0;
    this->left  = nullptr;
    this->right = nullptr;
} // end Cell::Cell ( ) 

/**
 *  Alternative Constructor.
 *  Construtor Alternativo.
*/
template <typename T>
Cell<T>::Cell( T value )
{
    this->value = value;
    this->left  = nullptr;
    this->right = nullptr;
} // end Cell::Cell ( )

/**
 *  Alternative Constructor.
 *  Construtor Alternativo.
*/
template <typename T>
Cell<T>::Cell( T value, Cell* left, Cell* right )
{
    this->value = value;
    this->left  = left ;
    this->right = right;
} // end Cell::Cell ( )

/**
 *  Method to change the value.
 *  Método para mudar o valor.
*/
template <typename T>
void Cell<T>::set_value( T value )
{
    this->value = value;
} // end Cell::set_value ( )

/**
 *  Method to access the value.
 *  Método para acessar o valor.
*/
template <typename T>
T Cell<T>::get_value( void )
{
    return ( this->value );
} // end Cell::get_value ( )

/**
 *  Method to link the left side.
 *  Método para linkar o lado esquerdo.
*/
template <typename T>
void Cell<T>::set_left( Cell* link   )
{
    this->left = link;
} // end Cell::set_left ( )

/**
 *  Method to access the link on the left.
 *  Método para acessar o link do lado esquerdo.
*/
template <typename T>
Cell<T>* Cell<T>::get_left( void )
{
    Cell* link = nullptr;
    link = this->left;
    return ( link );
} // end Cell::get_left ( )

/**
 *  Method to link the right side.
 *  Método para linkar o lado direito.
*/
template <typename T>
void Cell<T>::set_right( Cell* link   )
{
    this->right = link;
} // end Cell::set_rigth ( )

/**
 *  Method to access the link on the right.
 *  Método para acessar o link do lado direito.
*/
template <typename T>
Cell<T>* Cell<T>::get_right( void )
{
    Cell* link = nullptr;
    link = this->right;
    return ( link );
} // end Cell::get_right ( )

/**
 *  Method for connecting a cell.
 *  Método para conectar uma célula.
*/
template <typename T>
void Cell<T>::connect( Cell* second )
{
    if( second )
    {
        second->set_left( this );
        this->set_right( second );
    } // end if
} // end Cell::connect ( )

/**
 *  Method to disconnect a cell.
 *  Método para desconectar uma célula.
*/
template <typename T>
void Cell<T>::disconnect( Cell* second )
{
    if( this->get_right( ) == second )
    {
        second->set_left( nullptr );
        this->set_right( nullptr );
    } // end if
} // end Cell::disconnect ( )

/**
 *  Method to show cells on the right side.
 *  Método para mostrar as células do lado direito.
*/
template <typename T>
void Cell<T>::rprint( void )
{
    Cell* tmp = this; 
    if( !tmp )           
    {
        cout << "[]";
    }
    else
    {
        while( tmp )
        {
            cout << tmp->get_value( ) << setw( 3 );
            tmp = tmp->get_right( ); 
        } // end while
    } // end if
    cout << endl;
} // end Cell::rprint ( )

/**
 *  Method to show cells on the left side.
 *  Método para mostrar as células do lado esquerdo.
*/
template <typename T>
void Cell<T>::lprint( void )
{
    Cell* tmp = this; 
    if( !tmp )           
    {
        cout << "[]";
    }
    else
    {
        while( tmp )
        {
            cout << tmp->get_value( ) << setw( 3 );
            tmp = tmp->get_left( ); 
        } // end while
    } // end if
    cout << endl;
} // end 

/**
 *  Method to obtain the number of cells.
 *  Método para obter a quantidade de células.
*/
template <typename T>
int Cell<T>::length( void )
{
    Cell* tmp    = this;
    int   length = 0;
    while( tmp )
    {
        length = length + 1;
        tmp    = tmp->get_right( );
    } // end while
    return ( length );
} // end Cell:length ( )

/**
 *  Method to insert new cell at the end.
 *  Método para inserir nova célula no final.
*/
template <typename T>
Cell<T>* Cell<T>::push_back( T value )
{
    Cell* tmp  = new Cell( value );
    Cell* back = this;
    if( back && tmp )
    {
        while( back->right != nullptr )
        {
            back = back->get_right( );
        } // end while
        back->connect( tmp );
        back = tmp;
    } // end if
    return ( back );
} // end Cell::push_back ( )

/**
 *  Method to remove cell from end.
 *  Método para remover célula do final.
*/
template <typename T>
Cell<T>* Cell<T>::pop_back( void )
{
    Cell* back = nullptr;
    Cell* last = nullptr;
    back = this;
    last = this;
    while( back->right ) 
    {
        last = back;
        back = back->right;
    } // end while	
    if( last != back )
    {
        last->disconnect( back );
    } // end if
    return ( back );
} // end Cell::pop_back ( )

/**
 *  Method to insert a cell at the beginning.
 *  Método para inserir uma célula no inicio.
*/
template <typename T>
Cell<T>* Cell<T>::push_front( T value )
{
    Cell* tmp = new intCell ( 0 );
    if( tmp )
    {
        tmp->set_left( this->get_left( ) );
        tmp->set_right( this->get_right( ) );
        tmp->set_value( this->get_value( ) );
        this->Cell::set_value( value );
        this->Cell::connect( tmp   );
    } // end if
    return ( this );
} // end Cell::push_front ( )

/**
 *  Method to remove cell from the beginning.
 *  Método para remover célula do inicio.
*/
template <typename T>
Cell<T>* Cell<T>::pop_front( void )
{
    int value = 0;
    Cell* tmp = nullptr;
    if ( this->get_right( ) )
    {
        value = this->get_value( );
        tmp   = this->get_right( );
        this->set_right( tmp->get_right( ) );

        if( tmp->get_right( ) )
            tmp->get_right( )->set_left( this );

        this->set_value( tmp->get_value( ) );
        tmp->set_value( value );
        
        if( tmp->get_right( ) )
            tmp->disconnect( tmp->get_right( ) );
        else
            this->set_right( nullptr );
    } // end if
    return ( tmp );
} // end Cell:pop_front ( )

/**
 *  Method to get the contents of a cell at a certain position.
 *  Método para obter o conteúdo de uma célula em certa posição.
*/
template <typename T>
T Cell<T>::at( unsigned int index )
{
    int value = 0;
    int x     = 0;
    Cell* cursor = this;
    if ( 0 <= index && index < this->intCell::length( ) )
    {
        x = index;
        while ( x > 0 )
        {
            cursor = cursor->get_right( );
            x = x - 1;
        } // end while
        value = cursor->get_value( );
    } // end if
    return ( value );
} // end Cell:at ( )

/**
 *  Method for exchanging cell contents.
 *  Método para trocar conteúdos de células.
*/
template <typename T>
void Cell<T>::swap( Cell* second    )
{
    int value = 0;
    if ( second )
    {
        value  = this->get_value( );
        this->set_value( second->get_value( ) );
        second->set_value( value );
    } // end if
} // end Cell:swap ( )

// ---------------------------------- Fim

/*
 *  ----------------------------------------------------------------------------
 *  Definições da Biblioteca de Arranjos em C++ - "array.cpp"
 *  ----------------------------------------------------------------------------
 *  Copyright (c) 2023, Vinicius MIranda de Araujo
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

#include "array.hpp"
#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>
using std::cin;
using std::cout;
using std::endl;
using std::setw;
using std::ifstream;
using std::ofstream;
using std::string;

// ---------------------------------- Definições de Métodos

/**
 *  Construtor padrão.
*/
template <typename T>
Array<T>::Array ( void )
{
    this->size = 0;
    this->data = nullptr;
    this->ix = -1;
} // end Array::Array ( )

/**
 *  Construtor Alternativo.
*/
template <typename T>
Array<T>::Array ( int size )
{
    this->size = 0;
    this->data = nullptr;
    this->ix = -1;
    if( size > 0 )
    {
        this->size = size;
        this->data = new T [ size ];
        this->ix = 0;
    } // end if
} // end Array::Array ( )

/**
 *  Construtor Alternativo.
*/
template <typename T>
Array<T>::Array ( int size, T optional )
{
    this->size = 0;
    this->data = nullptr;
    this->ix = -1;
    if( size > 0 )
    {
        this->size = size;
        this->data = new T [ size ];
        for( this->ix = 0; this->ix < size; this->ix = this->ix + 1 )
        {
            this->data[this->ix] = optional;
        } // end for
        this->ix = 0;
    } // end if
} // end Array::Array ( )

/**
 *  Inserir o tamanho do arranjo.
*/
template <typename T>
void Array<T>::set_size( int size )
{
    if( size > 0 )
    {
        this->size = size;
    } // end if
} // end Array::set_size ( )

/**
 *  Acessar o tamanho do arranjo.
 *  @return tamanho do arranjo.
*/
template <typename T>
int Array<T>::get_size( void )
{
    int value = 0;
    value = this->size;
    return ( value );
} // end Array::get_size( );

/**
 *  Inserir um valor em uma posição específica.
*/
template <typename T>
void Array<T>::set( int index, T value )
{
    if( 0 <= index && index < this->size )
    {
        this->data[index] = value;
    } // end if
} // end Array::set ( )

/**
 *  Acessar um valor em uma posição específica.
 *  @return valor na posição.
*/
template <typename T>
T Array<T>::get( int index )
{
    T value = optional;
    if( 0 <= index && index < this->size )
    {
        value = this->data[index];
    }
    return ( value );
} // end Array::get ( )

/**
 *  Mostrar na saída padrão os dados do arranjo.
*/
template <typename T>
void Array<T>::print( void )
{
    cout << endl;
    for( this->ix = 0; this->ix < this->size; this->ix = this->ix + 1 )
    {
        cout << setw( 3 ) << this->ix << " : " << setw( 3 ) 
            << this->data[this->ix] << endl; 
    } // end for
    cout << endl;
} // end Array::print ( )

/**
 *  Ler da entrada padrão os dados do arranjo.
*/
template <typename T>
void Array<T>::read( void )
{
    cout << endl; 
    for( this->ix = 0; this->ix < this->size; this->ix = this->ix + 1 ) 
    { 
        cout << setw( 3 ) << this->ix << " : "; 
        cin >> data[ this->ix ]; 
    } // end for 
    cout << endl;
} // end Array::read ( )

/**
 *  Gravar em um arquivo os dados do arranjo;
*/
template <typename T>
void Array<T>::fprint( string filename )
{
    ofstream afile;
    afile.open( filename ); 
    afile << this->size << endl; 
    for( this->ix = 0; this->ix < this->size; this->ix = this->ix + 1 ) 
    { 
        afile << this->data[ this->ix ] << endl; 
    } // end for 
    afile.close( ); 
} // end Array::fprint ( )

/**
 *  Ler os dados de um arquivo e armazená-los no arranjo.
*/
template <typename T>
void Array<T>::fread( string filename )
{
    ifstream afile;
    int n = 0; 
    afile.open ( filename ); 
    afile >> n; 
    if( n <= 0 ) 
    { 
        cout << "\n[ERRO]: Invalid size.\n" << endl; 
    } 
    else 
    { 
        this->size  = n; 
        this->data = new T [ n ]; 
        for( this->ix = 0; this->ix < this->size; this->ix = this->ix + 1 ) 
        { 
            afile >> data[ this->ix ]; 
        } // end for 
    } // end if 
    afile.close( ); 
} // end Array::fread ( )

/**
 *  Ordenar o arranjo em ordem crescente.
*/
template <typename T>
void Array<T>::sort_up( void )
{
    int x = 0, y = 0;
    T value = optional;
    for ( x = 1; x < this->size; x = x+1 )
    {
        for ( y = 1; y < this->size; y = y+1 )
        {
            if ( get ( y-1 ) > get ( y ) )
            {
                value = get ( y );
                set ( y, get ( y-1 ) );
                set ( y-1, value );
            } // end if
        } // end for
    } // end for
} // end Array::sort_up ( )

/**
 *  Sobrecarga do operardor de igualdade.
 *  Copiar um arranjo para outro arranjo.
*/
template <typename T>
Array<T>& Array<T>::operator=( const Array <T> other ) 
{ 
    if ( other.size <= 0 ) 
    { 
        cout << "\n[ERROR]: Missing data.\n" << endl; 
    } 
    else 
    { 
        this->size = other.size; 
        this->data = new T [ other.size ]; 
        for ( this->ix = 0; this->ix < this->size; this->ix = this->ix + 1 ) 
        { 
            data [ this->ix ] = other.data [ this->ix ]; 
        } // end for 
    } // end if 
    return ( *this ); 
} // end operator= ( )

// ---------------------------------- Fim

/*
 *  ----------------------------------------------------------------------------
 *  Biblioteca de Arranjos em C++ - "array.hpp"
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

#include <string>
using std::string;

// ---------------------------------- Definições Úteis

#ifndef _ARRAY_HPP_
#define _ARRAY_HPP_

// ---------------------------------- Protótipo da Classe

template <typename T>
class Array
{
private:
    int size;
    T  *data;
    T   optional;
    int ix  ;

public:
    /**/   Array     ( void );
    /**/   Array     ( int size );
    /**/   Array     ( int size, T optional );
    void   set_size  ( int size );
    int    get_size  ( void );
    void   set       ( int index, T value );
    T      get       ( int index );
    void   print     ( void );
    void   read      ( void );
    void   fprint    ( string filename );
    void   fread     ( string filename );
    void   sort_up   ( void );
    Array& operator= ( const Array<T> other );
};

// ---------------------------------- Fim
#endif

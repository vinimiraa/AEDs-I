/*
 *  ----------------------------------------------------------------------------
 *  Biblioteca Cell em C++ - "cell.hpp"
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

#ifndef _CELL_HPP_
#define _CELL_HPP_

#include <iostream>

// ---------------------------------- Protótipo da Classe

template <typename T>
class Cell
{
    protected:
        T     value;
        Cell *right;
        Cell *left ;
    
    public:
        Cell             ( void );
        Cell             ( T value );
        Cell             ( T value, Cell* left, Cell* right );
        void  set_value  ( T value );
        T     get_value  ( void );
        void  set_left   ( Cell* link   );
        Cell* get_left   ( void );
        void  set_right  ( Cell* link   );
        Cell* get_right  ( void );
        void  connect    ( Cell* second );
        void  disconnect ( Cell* second );
        void  rprint     ( void );
        void  lprint     ( void );
        int   length     ( void );
        Cell* push_back  ( T value );
        Cell* pop_back   ( void );
        Cell* push_front ( T value );
        Cell* pop_front  ( void );
        T     at         ( unsigned int index );
        void  swap       ( Cell* second    );
}; // end class Cell

// ---------------------------------- Fim
#endif 

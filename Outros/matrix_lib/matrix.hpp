/*
 *  ----------------------------------------------------------------------------
 *  Biblioteca Matrix em C++ - "matrix.hpp"
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

#ifndef _MATRIX_HPP_
#define _MATRIX_HPP_

// ---------------------------------- Lista de Dependências

#include <string>

// ---------------------------------- Protótipo da Classe

template <typename T>
class Matrix
{
private:
    // Atributos
    int   row;
    int   col;
    T   **data;

public:
    // Construtores e Destrutor
    Matrix  ( void );
    Matrix  ( int row, int col );
    ~Matrix ( );

    // Get
    int getRow ( );
    int getCol ( );
    T   get     ( int row, int col );

    // Set
    void setRow ( int row );
    void setCol ( int col );
    void set     ( int row, int col, T value );

    // Métodos
    void print  ( );
    void read   ( );
    void fprint ( std::string fileName );
    void fread  ( std::string fileName );
    Matrix transpose ( );
    Matrix transpose ( const Matrix<T> &other );
    Matrix scalar    ( T k );

    // Sobrecarga de Operadores
    Matrix &operator+ ( const Matrix<T> &other );
    Matrix &operator- ( const Matrix<T> &other );
    Matrix &operator* ( const Matrix<T> &other );
    Matrix &operator= ( const Matrix<T> &other );
    bool   operator!= ( const Matrix<T> &other );
    bool   operator== ( const Matrix<T> &other );

}; // end class Matrix

// ---------------------------------- Fim
#endif

/*
 *  ----------------------------------------------------------------------------
 *  Biblioteca Matrix em C - "matrix.h"
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

#ifndef _MATRIX_H_
#define _MATRIX_H_

// ---------------------------------- Definições de Constantes

// Tamanho padrão para matrizes sem estruturas
const int MAX_SIZE = 10 ;  

// ---------------------------------- Definições de Variáveis Globais

// Definição de tipos booleanos
#define bool  int
#define false 0
#define true (!false)

// Estrutura para matriz de inteiros.
typedef struct s_intMatrix intMatrix;

// Referência para matriz com inteiros baseado em estrutura.
typedef intMatrix* ref_intMatrix;

// Estrutura para matriz real.
typedef struct s_doubleMatrix doubleMatrix;

// Referência para matriz real baseado em estrutura.
typedef doubleMatrix* ref_doubleMatrix;

// Estrutura para matriz booleana.
typedef struct s_boolMatrix boolMatrix;

// Referência para matriz booleana baseado em estrutura.
typedef boolMatrix* ref_boolMatrix;

// ---------------------------------- Protótipo de Funções

// ---------------------- Protótipo de intMatrix

bool exist_intMatrix( intMatrix* matrix );

intMatrix* new_intMatrix( int rows, int columns );

void init_intMatrix( intMatrix* matrix, int init_value );

void free_intMatrix( intMatrix* matrix );

void print_intMatrix( intMatrix* matrix );

intMatrix* read_intMatrix( );

void fprint_intMatrix( char* filename , intMatrix* matrix );

intMatrix* fread_intMatrix( char* filename );

void set_int_intMatrix( intMatrix* matrix, int row, int col, int value );

int get_int_intMatrix( intMatrix* matrix, int row, int col );

intMatrix* transpose_intMatrix( intMatrix* matrix );

bool iszero_intMatrix ( intMatrix* matrix );

bool compare_intMatrix( intMatrix* matrix1, intMatrix* matrix2 );

intMatrix* copy_intMatrix( intMatrix* matrix );

intMatrix* add_intMatrix( intMatrix* matrix1, intMatrix* matrix2 );

intMatrix* diff_intMatrix( intMatrix* matrix1, intMatrix* matrix2 );

intMatrix* product_intMatrix( intMatrix* matrix1, intMatrix* matrix2 );

intMatrix* scalar_intMatrix( intMatrix* matrix, int k );

// ---------------------- Protótipo de doubleMatrix

bool exist_doubleMatrix( doubleMatrix* matrix );

doubleMatrix* new_doubleMatrix( int rows, int columns );

void init_doubleMatrix( doubleMatrix* matrix, double init_value );

void free_doubleMatrix( doubleMatrix* matrix );

void print_doubleMatrix( doubleMatrix* matrix );

doubleMatrix* read_doubleMatrix( );

void fprint_doubleMatrix( char* filename , doubleMatrix* matrix );

doubleMatrix* fread_doubleMatrix( char* filename );

void set_double_doubleMatrix( doubleMatrix* matrix, int row, int col, double value );

double get_double_doubleMatrix( doubleMatrix* matrix, int row, int col );

doubleMatrix* transpose_doubleMatrix( doubleMatrix* matrix );

bool iszero_doubleMatrix ( doubleMatrix* matrix );

bool compare_doubleMatrix( doubleMatrix* matrix1, doubleMatrix* matrix2 );

doubleMatrix* copy_doubleMatrix( doubleMatrix* matrix );

doubleMatrix* add_doubleMatrix( doubleMatrix* matrix1, doubleMatrix* matrix2 );

doubleMatrix* diff_doubleMatrix( doubleMatrix* matrix1, doubleMatrix* matrix2 );

doubleMatrix* product_doubleMatrix( doubleMatrix* matrix1, doubleMatrix* matrix2 );

doubleMatrix* scalar_doubleMatrix( doubleMatrix* matrix, double k );

// ---------------------- Protótipo de boolMatrix

bool exist_boolMatrix( boolMatrix* matrix );

boolMatrix* new_boolMatrix( int rows, int columns );

void init_boolMatrix( boolMatrix* matrix, bool init_value );

void free_boolMatrix( boolMatrix* matrix );

void print_boolMatrix( boolMatrix* matrix );

boolMatrix* read_boolMatrix( );

void fprint_boolMatrix( char* filename , boolMatrix* matrix );

boolMatrix* fread_boolMatrix( char* filename );

boolMatrix* and_boolMatrix( boolMatrix* matrix1, boolMatrix* matrix2 );

boolMatrix* or_boolMatrix( boolMatrix* matrix1, boolMatrix* matrix2 );

boolMatrix* not_boolMatrix( boolMatrix* matrix ); 

void set_bit_boolMatrix( boolMatrix* matrix, int row, int col );

int get_bit_boolMatrix( boolMatrix* matrix, int row, int col );

void clear_bit_boolMatrix( boolMatrix* matrix, int row, int col );

bool test_bit_boolMatrix( boolMatrix* matrix, int row, int col );

boolMatrix* copy_boolMatrix( boolMatrix* matrix );

// ---------------------------------- Fim
#endif

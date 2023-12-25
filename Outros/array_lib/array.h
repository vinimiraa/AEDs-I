/*
 *  ----------------------------------------------------------------------------
 *  Biblioteca de Arranjos em C - "array.h"
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

#ifndef _ARRAY_H_
#define _ARRAY_H_

// ---------------------------------- Definições de Constantes

const int MAX_LENGTH =  80;

// ---------------------------------- Definições de Variáveis 

// Definição de tipos booleanos
#define bool  int
#define false 0
#define true (!false)

// Estrutura para arranjos de inteiros.
typedef struct s_intArray intArray;

// Referência para arranjos com inteiros baseado em estrutura.
typedef intArray* ref_intArray;

// Estrutura para arranjos real.
typedef struct s_doubleArray doubleArray;

// Referência para arranjos real baseado em estrutura.
typedef doubleArray* ref_doubleArray;

// Estrutura para arranjos booleana.
typedef struct s_boolArray boolArray;

// Referência para arranjos booleana baseado em estrutura.
typedef boolArray* ref_boolArray;

// ---------------------------------- Protótipo de Funções

// ---------------------- Protótipo de intArray

bool exist_intArray( intArray* array );

intArray* new_intArray( int size );

void init_intArray( intArray* array, int init_value );

void free_intArray( intArray* array );

void print_intArray( intArray* array );

intArray* read_intArray( void );

void fprint_intArray( char* filename , intArray* array );

intArray* fread_intArray( char* filename );

void set_int_intArray( intArray* array, int index, int value );

int get_int_intArray( intArray* array, int index );

// ---------------------------------- Fim
#endif
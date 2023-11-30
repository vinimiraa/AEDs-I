#ifndef _INTARRAY_HPP_
#define _INTARRAY_HPP_

#include <iostream>
using std::cout;
using std::endl;
using std::cin;

typedef struct s_intArray { int length; int *data; } intArray; 

typedef intArray* ref_intArray;

bool exist_intArray( intArray* array )
{
    bool result = false;
    if( array != nullptr &&  array->data != nullptr )
    {
        result = true;
    }
    return ( result );
} // end exist_intArray ( )

intArray* new_intArray( int size )
{
    intArray* array = new (intArray);
    if( array )
    {
        array->length = 0;
        array->data = nullptr;
        if( size > 0 )
        {
            array->length = size;
            array->data = new int[size];
            if( array->data != nullptr )
            {
                for( int x = 0; x < array->length; x = x + 1 )
                {
                    *(array->data+x) = 0;
                } // end for
            } // end if
        } // end if
    } // end if
    return ( array );
} // end new_intArray ( )

void delete_intArray( intArray* array )
{
    if( exist_intArray( array ) )
    {
        delete[] array->data;
        delete array;
    } // end if
} // end delete_intArray ( )

void print_intArray( intArray* array )
{
    unsigned int x = 0;
    if( exist_intArray( array ) )
    {
        for( x = 0; x < array->length; x = x + 1 )
        {
            cout << x << ": " << *(array->data+x) << endl;
        } // end for
    } // end if
} // end print_intArray ( )

intArray* read_intArray( )
{
    intArray* array = nullptr;
    int size = 0;
    
    do
    {
        cout << "Tamanho do arranjo: ";
        cin >> size;
    }while( size <= 0 );
    
    array = new_intArray( size );
    
    if( array != nullptr )
    {
        if( array->data == nullptr )
        {
            size = 0;
        }
        else
        {
            for( int x = 0; x < array->length; x = x + 1 )
            {
                cout << "[" << x  << "]" << " = ";
                cin >> *(array->data+x);
            } // end for
        } // end if
    } // end if
    
    return ( array );
    
} // end read_intArray ( )
    

/**  
    Funcao para comparar arranjos de inteiros 
    por meio de apontadores. 
    @return zero, se forem iguais; 
            negativo, se o valor da diferenca for menor e estiver no primeiro arranjo 
            positivo, se o valor da diferenca for maior e estiver no primeiro arranjo 
    @param p - apontador para inicio do primeiro  arranjo 
    @param q - apontador para inicio do segundo arranjo 
*/ 
int intArray_cmp ( ref_intArray p, ref_intArray q )
{
    unsigned int x = 0;
    int z = -69;
    if( p && q )
    {
        if( p->length == q->length )
        {
            while( *(p->data+x) && *(q->data+x) && !( *(p->data+x) - *(q->data+x) != 0 ) )
            {
                x = x + 1;
            } // end while
            if( *(p->data+x) - *(q->data+x) < 0 )
                { z = -1; }
            else if( *(p->data+x) - *(q->data+x) > 0 )
                { z = 1; }
            else
                { z = 0; }
        } // end if    
    } // end if
    return ( z );
} // end intArray_cmp

/**  
    Funcao para juntar arranjos de inteiros 
    por meio de apontadores. 
    @return apontador para inicio do arranjo com a uniao 
    @param p - apontador para inicio do primeiro  arranjo 
    @param q - apontador para inicio do segundo arranjo 
*/ 
ref_intArray intArray_cat ( ref_intArray p, ref_intArray q )
{
    intArray* result = nullptr;
    unsigned int x = 0;
    unsigned int y = 0;
    if( exist_intArray( p ) && exist_intArray( q ) )
    {
        if( p->length > 0 && q->length > 0 )
        {
            result = new_intArray( p->length + q->length );
            if( exist_intArray( result ) )
            {
                while( *(p->data+x) ) { *(result->data+x) = *(p->data+x); x = x + 1;}
                while( *(q->data+y) ) { *(result->data+x) = *(q->data+y); y = y + 1; }
            } // end if
        } // end if
    } // end if
    return ( result );
} // end intArray_cat ( )

/**  
    Funcao para procurar pela primeira ocorrencia de valor em arranjo 
    por meio de apontador. 
    @return apontador para a primeira ocorrência; NULL, caso contrario 
    @param a - apontador para arranjo de inteiros 
    @param x - valor ser procurado 
*/ 
ref_intArray intArray_seek ( ref_intArray a, int x );

/**  
    Funcao para separar sequencia de valores em arranjo 
    por meio de apontador. 
    @return apontador para inicio da sequencia de inteiros; NULL, caso contrario 
    @param a      - apontador para arranjo de inteiros 
    @param start - posicao inicial 
    @param size  - quantidade de dados 
*/ 
ref_intArray intArray_sub ( ref_intArray a, int start, int size ); 

/**  
    Funcao para intercalar arranjos de inteiros 
    por meio de apontadores. 
    @return apontador para inicio do arranjo com a uniao 
    @param p - apontador para inicio do primeiro  arranjo 
    @param q - apontador para inicio do segundo arranjo 
*/ 
ref_intArray intArray_merge ( ref_intArray p, ref_intArray q );

/**  
    Funcao para intercalar arranjos de inteiros em ordem crescente 
    por meio de apontadores. 
    @return apontador para inicio do arranjo com a uniao 
    @param p - apontador para inicio do primeiro  arranjo 
    @param q - apontador para inicio do segundo arranjo 
*/ 
ref_intArray intArray_mergeUp ( ref_intArray p, ref_intArray q );


#endif
                    // C++ compativeis com C
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <cmath>
                    // C++ exclusivas
#include <ios>      
#include <iostream> // cin, cout
#include <iomanip>  // setw, setprecision
#include <fstream>  // ifstream, ofstream
#include <sstream>  // ostringstream
#include <string>   

/*
typedef
    struct s_intMatrix
    {
        int   rows;
        int   columns;
        int **data;
    }
intMatrix;
*/
    class intMatrix     // C++ compativel
    {
      public:           // todos os atributos visiveis
        int   rows;
        int   columns;
        int **data;
    }; // end class

void method_01 ( void )
{
 // definir dados
    intMatrix a;        // objeto estatico
    int k  = 1;
    int OK = 1;
                        // atribuicoes
    a.rows    = 2;
    a.columns = 3;
    a.data = (int **) malloc ( a.rows * sizeof (int*) );
    if ( a.data )
    {  // se existir
       for ( int x=0; x<a.rows; x=x+1 )
       {   a.data[x] 
           = (int*) malloc ( a.columns * sizeof (int) ); 
           if ( a.data[x] )
           {  // se existir
              for ( int y=0; y<a.columns; y=y+1 )
              {   a.data[x][y] = k; k=k+1;      }
           }
           else
           {  // se nao existir, parar
              OK = 0; x=a.rows;
           } // end if
       } // end for
    } // end if
    printf ( "\n" );
    if ( OK )
    {  // mostrar dados
       for ( int x=0; x<a.rows; x=x+1 )
       {    
           for ( int y=0; y<a.columns; y=y+1 )
           {
               printf ( "%d ", a.data[x][y] );
           } // end for
           printf ( "\n" );
       } // end for
       // dispensar area reservada
       for ( int x=0; x<a.rows; x=x+1 )
       {   free ( a.data[x] );        }
       free ( a.data );
       a.data = NULL;
    } // end if
    printf ( "\n" );
} // end method_01 ( )

void method_02 ( void )
{
 // definir dados
    intMatrix *a = nullptr;  // referencia para objeto
    int k  = 1;
    int OK = 1;

    // construir o descritor
    a = (intMatrix*) malloc ( 1*sizeof(intMatrix) );

    if ( a )
    {  // se existir
       a->rows    = 2;
       a->columns = 3;
       a->data 
       = (int **) malloc ( a->rows * sizeof (int*) );
       if ( a->data )
       {  // se existir
          for ( int x=0; x<a->rows; x=x+1 )
          {   a->data[x] 
              = (int*) malloc ( a->columns * sizeof (int) ); 
              if ( a->data[x] )
              {  // se existir
                 for ( int y=0; y<a->columns; y=y+1 )
                 {   a->data[x][y] = k; k=k+1;      }
              }
              else
              {  // se nao existir, parar
                 OK = 0; x=a->rows;
              } // end if
          } // end for
      } // end if
      printf ( "\n" );
      if ( OK )
      {  // mostrar
         for ( int x=0; x<a->rows; x=x+1 )
         {
             for ( int y=0; y<a->columns; y=y+1 )
             {
                 printf ( "%d ", a->data[x][y] );
             } // end for
             printf ( "\n" );
         } // end for
      } // end if
      free ( a->data );
      a->data = nullptr;
      free ( a );
      a = nullptr;
    } // end if
    printf ( "\n" );
} // end method_02 ( )

void method_03 ( void )
{
 // definir dados
    intMatrix *a = nullptr;
    int k  = 1;
    int OK = 1;

    // construir o descritor
    // a = (intMatrix*) malloc ( 1*sizeof(intMatrix) );
    a = new intMatrix( );
    if ( a )
    {  // se existir
       a->rows    = 2;
       a->columns = 3;
       // a->data 
       // = (int **) malloc ( a->rows * sizeof (int*) );
       a->data = new int* [ a->rows ];
       for ( int x=0; x<a->rows; x=x+1 )
       {// se existir
        // a->data[x]
        // = (int*) malloc ( a->columns * sizeof (int) );
           a->data[x] = new int [ a->columns ];
           if ( a->data[x] )
           {  // se existir
              for ( int y=0; y<a->columns; y=y+1 )
              {   a->data[x][y] = k; k=k+1;      }
           }
           else
           {  // se nao existir, parar
               OK = 0; x=a->rows;
           } // end if
       } // end for
    } // end if
    printf ( "\n" );
    if ( OK )
    {  // mostrar
       for ( int x=0; x<a->rows; x=x+1 )
       {
           for ( int y=0; y<a->columns; y=y+1 )
           {
               printf ( "%d ", a->data[x][y] );
           } // end for
           printf ( "\n" );
       } // end for
    } // end if
    printf ( "\n" );   
} // end method_03 ( )

void method_04 ( void )
{
 // definir dados
    intMatrix *a = nullptr;
    int k  = 1;
    int OK = 1;

    a = new intMatrix( );
    if ( a )
    {  // se existir
       a->rows    = 2;
       a->columns = 3;
       a->data = new int* [a->rows];
       for ( int x=0; x<a->rows; x=x+1 )
       {   a->data[x] = new int [a->columns];
           if ( a->data[x] )
           {  // se existir
              for ( int y=0; y<a->columns; y=y+1 )
              {   a->data[x][y] = k; k=k+1;      }
           }
           else
           {  // se nao existr, parar
              OK = 0; x=a->rows;
           } // end if
       } // end for
       // printf ( "\n" );
       std::cout << std::endl;
       if ( OK )
       {  // mostrar
          for ( int x=0; x<a->rows; x=x+1 )
          {    
              for ( int y=0; y<a->columns; y=y+1 )
              {
               // printf ( "%d ", a->data[x][y] );   
                  std::cout << a->data[x][y] << " ";
              } // end for
              std::cout << "\n";
          } // end for
       } // end if
       std::cout << std::endl;
    } // end if
} // end method_04 ( )

void method_05 ( void )
{
 // definir dados
    intMatrix *a = nullptr;
    int k  = 1;
    int OK = 1;

 // definir e abrir arquivo para gravar
    std::ofstream arquivo ( "MATRIZ1.TXT" );

    a = new intMatrix( );
    if ( a )
    {  // se existir
       a->rows    = 2;
       a->columns = 3;
       a->data = new int* [a->rows];
       for ( int x=0; x<a->rows; x=x+1 )
       {   a->data[x] = new int[a->columns];
           if ( a->data[x] )
           {  // se existir
              for ( int y=0; y<a->columns; y=y+1 )
              {   a->data[x][y] = k; k=k+1;      }
           }
           else
           {  // se nao existir, para
              OK = 0; x=a->rows;
           } // end if
       } // end for
       std::cout << std::endl;
       if ( OK )
       {  // mostrar e gravar
          arquivo   << a->rows    << "\n";
          arquivo   << a->columns << std::endl;
          for ( int x=0; x<a->rows; x=x+1 )
          {
              for ( int y=0; y<a->columns; y=y+1 )
              {
                  std::cout << a->data[x][y] << " ";
                  arquivo   << a->data[x][y] << "\n";
              } // end for
              std::cout << "\n";
          } // end for
          arquivo.close ( );
       } // end if
       std::cout << std::endl;
    } // end if
} // end method_05 ( )

void method_06 ( void )
{
 // definir dados
    intMatrix *a = nullptr;
    int OK = 1;

 // definir e abrir arquivo para gravar
    std::ifstream arquivo ( "MATRIZ1.TXT" );

    a = new intMatrix( );
    if ( a )
    {  // se existir
       arquivo >> a->rows;
       arquivo >> a->columns;
       a->data = new int* [a->rows];
       for ( int x=0; x<a->rows; x=x+1 )
       {   a->data[x] = new int [a->columns]; 
           if ( a->data[x] )
           {  // se existir
              for ( int y=0; y<a->columns; y=y+1 )
              {   arquivo >> a->data[x][y];      }
           }
           else
           {  // se nao existir, parar
              OK = 0; x=a->rows;
           } // end if
       } // end for
       std::cout << std::endl;
       if ( OK )
       {  // mostrar e gravar
          std::cout << "linhas = " << a->rows    << "\n";
          std::cout << "colunas= " << a->columns << "\n";
          for ( int x=0; x<a->rows; x=x+1 )
          {
              for ( int y=0; y<a->columns; y=y+1 )
              {
                  std::cout << a->data[x][y] << " ";
              } // end for
              std::cout << "\n";
          } // end for
          arquivo.close ( );
       } // end if
       std::cout << std::endl;
    } // end if
} // end method_06 ( )

void method_07 ( void )
{
 // definir dados
    intMatrix *a = nullptr;
    int OK = 1;
   
    a = new intMatrix( );
    if ( a )
    {  // se existir
       std::cout << "linhas ? ";
       std::cin  >> a->rows;    std::cin.get();
       std::cout << "colunas? ";
       std::cin  >> a->columns; std::cin.get();
       a->data = new int* [a->rows];
       for ( int x=0; x<a->rows; x=x+1 )
       {   a->data[x] = new int [a->columns]; 
           if ( a->data[x] )
           {  // se existir
              for ( int y=0; y<a->columns; y=y+1 )
              {
                  std::cout << x << ", " << y << " ? ";
                  std::cin  >> a->data[x][y];      
              } // end if
           }
           else
           {  // se nao existir, parar
              OK = 0; x=a->rows;
           } // end if
       } // end for
       std::cout << std::endl;
       if ( OK )
       {  // mostrar
          std::cout << "linhas = " << a->rows    << "\n";
          std::cout << "colunas= " << a->columns << "\n";
          for ( int x=0; x<a->rows; x=x+1 )
          {
              for ( int y=0; y<a->columns; y=y+1 )
              {
                  std::cout << std::setw(3)
                            << a->data[x][y];
              } // end for
              std::cout << "\n";
          } // end for
       } // end if
       std::cout << std::endl;
    } // end if
} // end method_07 ( )

    class intMatrix2         // classe com metodos
    {
      public:                // todos os dados visiveis
        int   rows;
        int   columns;
        int **data;
        
        // constructor padrao
        intMatrix2( )
        {  // valores iniciais
           rows    = 0;
           columns = 0;
           data    = nullptr;
        } // end constructor ( )

        // constructor alternativo
        intMatrix2( int m, int n )
        {  // valores iniciais
           int OK  = true;
           rows    = 0;
           columns = 0;
           data    = nullptr;
           if ( m > 0 && n > 0 )
           {  // se validos
              int **new_data = new int* [m];
              if ( new_data )
              {  // se existir
                 for ( int x=0; x<m; x=x+1 )
                 {   new_data[x] = new int [n];
                     OK = OK && ( new_data[x] != nullptr );
                 } // end for
                 if ( OK )
                 {  // atribuir valores
                    rows = m; columns = n;
                    data = new_data;
                    for ( int x=0; x<m; x=x+1 )
                        for ( int y=0; y<n; y=y+1 )
                        {   data[x][y] = 0;       }
                 }
                 else
                 {  // se nao existir
                    delete [] new_data;
                    std::cerr 
                    << "\n[intMatrix2()] ERRO: Espaco insuficiente\n";
                 } // end if
              } // end if
           } // end if
        } // end constructor ( )
      
        void print ( )
        {  // mostrar
           if ( data )
           {  // se existir
              for ( int x=0; x<rows; x=x+1 )
              {    
                  if ( data[x] )
                  {  // se existir
                     for ( int y=0; y<columns; y=y+1 )
                     {
                         std::cout << data[x][y] << " ";
                     } // end for
                  } // end if
                  std::cout << "\n";
              } // end for
           } // end if
           std::cout << "\n";
        } // end print ( )
        
        int get ( int x, int y )
        {   // buscar valor, se posicao valida
            int value = -1; // valor arbitrario
            if ( data    &&
                 0 <= x  && x < rows && 
                 data[x] && 
                 0 <= y  && y < columns )
            {   value = data[x][y];  }
            return ( value );
        } // end get ( )
        
        void set ( int x, int y, int value )
        {   // atribuir valor, se posicao valida
            if ( data    &&
                 0 <= x  && x < rows && 
                 data[x] && 
                 0 <= y  && y < columns )
            {    data[x][y] = value;  }
        } // end set ( )
        
    }; // end class

void method_08 ( void )
{
 // definir dados
    intMatrix2 *a = nullptr;
    int k  = 1;
    int OK = 1;

    a = new intMatrix2( );
    if ( a )
    {  // se existir
       std::cout << "linhas = " << a->rows    << "\n";
       std::cout << "colunas= " << a->columns << "\n";

       a->rows    = 2;
       a->columns = 3;
       a->data = new int* [a->rows];
       if ( a->data )
       {  // se existir
          for ( int x=0; x<a->rows; x=x+1 )
          {   a->data[x] = new int [a->columns]; 
              if ( a->data[x] )
              {  // se existir
                 for ( int y=0; y<a->columns; y=y+1 )
                 {   a->data[x][y] = k; k=k+1;      }
              }
              else
              {  // se nao existir, parar
                 OK = 0; x=a->rows;
              } // end if
          } // end for
          std::cout << std::endl;
          if ( OK )
          {  // mostrar
             for ( int x=0; x<a->rows; x=x+1 )
             {    
                 for ( int y=0; y<a->columns; y=y+1 )
                 {
                     std::cout << a->data[x][y] << " ";
                 } // end for
                 std::cout << "\n";
             } // end for
          } // end if
          std::cout << std::endl;  
       } // end if
    } // end if
} // end method_08 ( )

void method_09 ( void )
{
 // definir dados
    intMatrix2 *a = nullptr;

    a = new intMatrix2(2,3);
    if ( a )
    {  // se existir
       std::cout << "linhas = " << a->rows    << "\n";
       std::cout << "colunas= " << a->columns << "\n";
       std::cout << std::endl;
       for ( int x=0; x<a->rows; x=x+1 )
       {    
           for ( int y=0; y<a->columns; y=y+1 )
           {
            // std::cout << a->data[x][y] << " ";
               std::cout << a->get(x,y) << " ";
           } // end for
           std::cout << "\n";
       } // end for
    } // end if
    std::cout << std::endl;  
} // end method_09 ( )

void method_10 ( void )
{
 // definir dados
    intMatrix2 *a = nullptr;
    int k  = 1;

    a = new intMatrix2(2,3);
    if ( a )
    {  // se existir
       std::cout << "linhas = " << a->rows    << "\n";
       std::cout << "colunas= " << a->columns << "\n";

       if ( a->data )
       {  // se existir
          std::cout << std::endl;
          a->print ( );
          std::cout << std::endl;

          for ( int x=0; x<a->rows; x=x+1 )
              for ( int y=0; y<a->columns; y=y+1 )
              {   a->set (x,y,k); k=k+1; }

          std::cout << std::endl;
          a->print ( );
          std::cout << std::endl;

          for ( int x=0; x<a->rows; x=x+1 )
          {   if ( a->data[x] )
              { // dispensar coluna
                   delete [] a->data[x];
              } // end if
          } // end for
          // dispensar linhas
          delete [] a->data;
       } // end if
       delete (a);
       // dispensar descritor
       a = nullptr;
    } // end if
} // end method_10 ( )

// --- Acao principal

int main ( )
{
    method_01 ( );
    method_02 ( );
    method_03 ( );
    method_04 ( );
    method_05 ( );
    method_06 ( );
    method_07 ( );

    method_08 ( );
    method_09 ( );
    method_10 ( );

    return ( 0 );
} // end main ( )

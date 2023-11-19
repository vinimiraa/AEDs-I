// 999999_AED1
#include <stdio.h>
#include <stdlib.h>

#define byte unsigned char

void method_01 ( void )
{
 // definir dados
    int x = 0;
    int m = 0;
    int n = 10;
    int array1 [n];
    int array2 [n];

 // abrir arquivos para gravar
    FILE *arquivo_t = fopen ( "DADOS1.txt", "wt" );
    FILE *arquivo_b = fopen ( "DADOS1.bin", "wb" );

 // identificar
    printf ( "\nMethod_01\n" );

 // carregar dados em arranjo
    for ( x=0; x<n; x=x+1 )
    {
        array1[x] = rand( ) % 100;
    } // end for

 // gravar a quantidade de dados
    fprintf ( arquivo_t, "%d\n", n );
    for ( x=0; x<n; x=x+1 )
    {
      // gravar em arquivo texto, um por um
         printf (            "%2d " , array1[x] );
        fprintf ( arquivo_t, "%2d\n", array1[x] );
    } // end for
 // fechar arquivo
    fclose ( arquivo_t );

    printf ( "\n" );
    printf ( "\n" );

 // gravar quantidade em arquivo binario (unitario)
    fwrite ( &n, sizeof(int), 1, arquivo_b );
    for ( x=0; x<n; x=x+1 )
    {
      // gravar em arquivo binario, um por um
         printf (          "%2d ", array1[x] );
         fwrite ( (array1+x), sizeof(int), 1, arquivo_b );
      // informar posicao em bytes apos gravar
         printf ( "%2d. p = %2ld", (x+1), ftell(arquivo_b) );
         getchar( );
    } // end for
 // fechar arquivo
    fclose ( arquivo_b );
    printf ( "\n" );
} // end method_01 ( )

void method_02 ( void )
{
 // definir dados
    int x = 0;
    int m = 0;
    int n = 10;
    int array1 [n];
    int array2 [n];

 // abrir arquivos para ler
    FILE *arquivo_t = fopen ( "DADOS1.txt", "rt" );
    FILE *arquivo_b = fopen ( "DADOS1.bin", "rb" );

 // identificar
    printf ( "\nMethod_02\n" );

 // ler a quantidade de dados de arquivo texto
    fscanf ( arquivo_t, "%d", &n );
    for ( x=0; x<n; x=x+1 )
    {
      // ler de arquivo texto, um por um
         fscanf ( arquivo_t,  "%d", &array1[x] );
      // informar linha lida
         printf ( "%2d. %2d", (x+1), array1[x] );
         getchar( );
    } // end for
 // fechar arquivo
    fclose ( arquivo_t );

 // mostrar dados
    printf ( "\n" );
    for ( x=0; x<n; x=x+1 )
    {
        printf ( "%d ", array1[x] );
    } // end for
 //
    printf ( "\n" );
    printf ( "\n" );

 // ler a quantidade de dados de arquivo binario
    fread  ( &m,             sizeof(int), 1, arquivo_b );
    for ( x=0; x<m; x=x+1 )
    {
      // ler de arquivo binario, um por um
         fread ( (array2+x), sizeof(int), 1, arquivo_b );
         printf (           "%2d " , array2[x] );
      // informar posicao em bytes apos gravar
         printf ( "%2d. p = %2ld", (x+1), ftell(arquivo_b) );
         getchar( );
    } // end for
 // fechar arquivo
    fclose ( arquivo_b );

 // mostrar dados
    printf ( "\n" );
    for ( x=0; x<m; x=x+1 )
    {
        printf ( "%d ", array2[x] );
    } // end for
 //
    printf ( "\n" );
    printf ( "\n" );
} // end method_02 ( )

void method_03 ( void )
{
 // definir dados
    int x = 0;
    int m = 0;
    int n = 10;
    int array1 [n];
    int array2 [n];

 // abrir arquivos para ler
    FILE *arquivo_t = fopen ( "DADOS1.txt", "wt" );
    FILE *arquivo_b = fopen ( "DADOS1.bin", "wb" );

 // identificar
    printf ( "\nMethod_03\n" );

 // carregar dados em arranjo
    for ( x=0; x<n; x=x+1 )
    {
        array1[x] = rand( ) % 100;
    } // end for
    printf ( "\n" );

 // gravar a quantidade de dados
    fprintf ( arquivo_t, "%d\n", n );
    for ( x=0; x<n; x=x+1 )
    {
      // gravar em arquivo texto, um por um
         printf (            "%d " , array1[x] );
        fprintf ( arquivo_t, "%d\n", array1[x] );
    } // end for
 // fechar arquivo
    fclose ( arquivo_t );
    printf ( "\n" );

 // gravar quantidade em arquivo binario (unitario)
    fwrite ( &n,         sizeof(int), 1, arquivo_b );
 // gravar em arquivo binario, todos os dados de uma vez
    fwrite ( &array1, n* sizeof(int), 1, arquivo_b );
 // fechar arquivo
    fclose ( arquivo_b );
    printf ( "\n" );
} // end method_03 ( )

void method_04 ( void )
{
 // definir dados
    int x = 0;
    int m = 0;
    int n = 10;
    int array1 [n];
    int array2 [n];

 // abrir arquivos para ler
    FILE *arquivo_t = fopen ( "DADOS1.txt", "rt" );
    FILE *arquivo_b = fopen ( "DADOS1.bin", "rb" );

 // identificar
    printf ( "\nMethod_04\n" );

 // ler a quantidade de dados de arquivo texto
    fscanf  ( arquivo_t, "%d", &n );
    for ( x=0; x<n; x=x+1 )
    {
      // ler de arquivo texto, um por um
         fscanf ( arquivo_t, "%d", &array1[x] );
    } // end for
 // fechar arquivo
    fclose ( arquivo_t );

 // mostrar dados
    printf ( "\n" );
    for ( x=0; x<n; x=x+1 )
    {
        printf ( "%d ", array1[x] );
    } // end for
 //
    printf ( "\n" );

 // ler a quantidade de dados de arquivo binario
    fread  ( &m,         sizeof(int), 1, arquivo_b );
 // ler dados de arquivo binario, todos de uma vez
    fread  ( &array2, n* sizeof(int), 1, arquivo_b );
 // fechar arquivo
    fclose ( arquivo_b );

 // mostrar dados
    printf ( "\n" );
    for ( x=0; x<m; x=x+1 )
    {
        printf ( "%d ", array2[x] );
    } // end for
 //
    printf ( "\n" );
} // end method_04 ( )

void method_05 ( void )
{
 // definir dados
    int x = 0;
    int m = 0;
    int n = 10;
    int array1 [n];
    int array2 [n];

 // abrir arquivos para ler
    FILE *arquivo_t = fopen ( "DADOS1.txt", "wt" );
    FILE *arquivo_b = fopen ( "DADOS1.bin", "wb" );

 // identificar
    printf ( "\nMethod_05\n" );

 // carregar dados em arranjo
    for ( x=0; x<n; x=x+1 )
    {
        array1[x] = (rand( ) - rand ( )) % 100;
    } // end for
    printf ( "\n" );

 // gravar a quantidade de dados
    fprintf ( arquivo_t, "%d\n", n );
    for ( x=0; x<n; x=x+1 )
    {
      // gravar em arquivo texto, um por um
         printf (       "%2d. %3d\n", x, array1[x] );
        fprintf ( arquivo_t,  "%d\n",    array1[x] );
    } // end for
 // fechar arquivo
    fclose ( arquivo_t );
    printf ( "\n" );

 // gravar quantidade em arquivo binario (unitario)
    fwrite ( &n,      sizeof(int), 1, arquivo_b );
 // gravar em arquivo binario, todos os dados de uma vez
 // (alternativo)
    fwrite ( &array1, sizeof(int), n, arquivo_b );
 // fechar arquivo
    fclose ( arquivo_b );
    printf ( "\n" );
} // end method_05 ( )

void method_06 ( void )
{
 // definir dados
    int x = 0;
    int m = 0;
    int n = 10;
    int array1 [n];
    int array2 [n];

 // abrir arquivos para ler
    FILE *arquivo_t = fopen ( "DADOS1.txt", "rt" );
    FILE *arquivo_b = fopen ( "DADOS1.bin", "rb" );

 // identificar
    printf ( "\nMethod_06\n" );

 // ler a quantidade de dados de arquivo texto
    fscanf  ( arquivo_t, "%d", &n );
    for ( x=0; x<n; x=x+1 )
    {
      // ler de arquivo texto, um por um
         fscanf ( arquivo_t, "%d", &array1[x] );
    } // end for
 // fechar arquivo
    fclose ( arquivo_t );

 // mostrar dados
    printf ( "\n" );
    for ( x=0; x<n; x=x+1 )
    {
        printf ( "%3d ", array1[x] );
    } // end for
 //
    printf ( "\n" );

 // ler a quantidade de dados de arquivo binario
    fread  ( &m,         sizeof(int), 1, arquivo_b );
 // ler dados de arquivo binario, todos de uma vez
 // (alternativo)
    fread  ( &array2,    sizeof(int), m, arquivo_b );
 // fechar arquivo
    fclose ( arquivo_b );

 // mostrar dados
    printf ( "\n" );
    for ( x=0; x<m; x=x+1 )
    {
        printf ( "%3d ", array2[x] );
    } // end for
 //
    printf ( "\n" );
} // end method_06 ( )

void method_07 ( void )
{
 // definir dados
    int x = 0;
    int m = 0;
    int n = 10;
    int array1 [n];
    int array2 [n];

 // abrir arquivos para ler
    FILE *arquivo_t = fopen ( "DADOS1.txt", "rt" );
    FILE *arquivo_b = fopen ( "DADOS1.bin", "rb" );

 // identificar
    printf ( "\nMethod_07\n" );

 // ler a quantidade de dados de arquivo texto
    fscanf  ( arquivo_t, "%d", &n );
    for ( x=0; x<n; x=x+1 )
    {
      // ler de arquivo texto, um por um
         fscanf ( arquivo_t, "%d", &array1[x] );
    } // end for
 // fechar arquivo
    fclose ( arquivo_t );

 // mostrar dados
    printf ( "\n" );
    for ( x=0; x<n; x=x+1 )
    {
        printf ( "%3d ", array1[x] );
    } // end for
 //
    printf ( "\n" );

 // ler a quantidade de dados de arquivo binario
    fread  ( &m,         sizeof(int), 1, arquivo_b );
 // ler dados de arquivo binario, todos de uma vez
 // (alternativo)
    fread  ( &array2,    sizeof(int), m, arquivo_b );
 // fechar arquivo
 //   fclose ( arquivo_b );

 // mostrar dados
    printf ( "\n" );
    for ( x=0; x<m; x=x+1 )
    {
        printf ( "%3d ", array2[x] );
    } // end for
    printf ( "\n" );

 // voltar ao inicio do arquivo binario
    rewind ( arquivo_b );
    printf ( "\n" );

 // ler a quantidade de dados de arquivo binario
    fread  ( &n,               sizeof(int), 1,  arquivo_b  );
    for ( x=0; x<n; x=x+1 )
    {
      // ler de arquivo binario, um por um
         fread  ( (array1+x), sizeof(int),  1,  arquivo_b  );
         printf (          "%3d ", array1[x] );
      // informar posicao em bytes apos gravar
         printf ( "%2d. p = %3ld", (x+1), ftell(arquivo_b) );
         getchar( );
    } // end for
 // fechar arquivo
    fclose ( arquivo_b );
 //
    printf ( "\n" );
} // end method_07 ( )

// ---

/*
  Funcao principal.
 */
int main ( void )
{
 // dados/resultados
    int option = 0;
     
 // identificar
    printf ( "999999_AED1\n");

 // acoes
    do
    {
        printf ( "\nOpcao? " );
        scanf  ( "%d", &option );
        getchar( );
        switch ( option )
        {
                case  0:               break;
                case  1: method_01( ); break;
                case  2: method_02( ); break;
                case  3: method_03( ); break;
                case  4: method_04( ); break;
                case  5: method_05( ); break;
                case  6: method_06( ); break;
                case  7: method_07( ); break;
//                case  8: method_08( ); break;
                default:               break;
        }
    }
    while ( option != 0 );
    
 // encerrar
    printf ( "\nApertar ENTER para terminar.\n" );
    getchar( );   
    return (0);
}

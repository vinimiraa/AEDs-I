// 999999_AED1
#include <iostream>
#include <fstream>

using namespace std;

void method_01 ( void )
{
 // definir dados
    int x = 0;
    int m = 0;
    int n = 10;
    int array1 [n];
    int array2 [n];

 // abrir arquivos para gravar
    fstream arquivo_t ( "DADOS1.txt", ios::out );
    fstream arquivo_b ( "DADOS1.bin", ios::out|ios::binary );

 // identificar
    printf ( "\nMethod_01\n" );

    for ( x=0; x<n; x=x+1 )
    {
        array1[x] = rand( ) % 100;
    } // end for
    std::cout << std::endl;

 // gravar em arquivo texto
    arquivo_t << n << std::endl;
    for ( x=0; x<n; x=x+1 )
    {
        std::cout << array1[x] << " ";
        arquivo_t << array1[x] << std::endl;
    }
    arquivo_t.close( );

 // gravar em arquivo binario
    arquivo_b.write ( (char*) &n     ,   sizeof(int) );
    arquivo_b.write ( (char*) &array1, n*sizeof(int) );
    arquivo_b.close ( );
    std::cout << std::endl;

    std::cout << std::endl;
    std::cout << std::endl;
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
    fstream arquivo_t ( "DADOS1.txt", ios::in );
    fstream arquivo_b ( "DADOS1.bin", ios::in|ios::binary );

 // identificar
    printf ( "\nMethod_02\n" );

 // ler dados de arquivo binario
    arquivo_b.read  ( (char*) &m     ,   sizeof(int) );
    arquivo_b.read  ( (char*) &array2, m*sizeof(int) );

 // mostrar dados lidos
    std::cout << std::endl;
    for ( x=0; x<m; x=x+1 )
    {
        std::cout << array2[x] << " ";
    } // end for
    arquivo_b.close ( );

    std::cout << std::endl;
    std::cout << std::endl;
} // end method_02 ( )

void method_03 ( void )
{
 // definir dados
    int x = 0;
    int y = 0;
    int m = 0;
    int n = 10;
    int array2 [20];

 // abrir arquivos para gravar
    fstream arquivo_t ( "DADOS1.txt", ios::app );
    fstream arquivo_b ( "DADOS1.bin", ios::app|ios::binary );

 // identificar
    printf ( "\nMethod_03\n" );

 // gravar em arquivo texto
    arquivo_t << n << std::endl;
    for ( x=0; x<n; x=x+1 )
    {
        y = 100+rand( ) % 100;
        std::cout << y << " ";
        arquivo_t << y << std::endl;
        arquivo_b.write ( (char*) &y, 1*sizeof(int) );
    }
    arquivo_t.close( );
    arquivo_b.close( );

 // abrir arquivos para alterar
    arquivo_t.open ( "DADOS1.txt", ios::in|ios::out );
    arquivo_b.open ( "DADOS1.bin", ios::in|ios::out|ios::binary );

 // regravar a quantidade de elementos
 // CUIDADO: PODE NAO FUNCIONAR SE VALOR DIFERENTE DE DOIS DIGITOS
    arquivo_t << 20 << std::endl;
 // CUIDADO: PRECISA USAR UM VARIAVEL INTEIRA (TAMANHO IGUAL)
    y = 20;
    arquivo_b.write ( (char*) &y, 1*sizeof(int) );
    arquivo_t.close( );
    arquivo_b.close( );

    std::cout << std::endl;
    std::cout << std::endl;

 // reabrir o arquivo binario para leitura
    arquivo_b.open ( "DADOS1.bin", ios::in|ios::out|ios::binary );

 // ler dados de arquivo binario
    arquivo_b.read  ( (char*) &m     ,   sizeof(int) );
    arquivo_b.read  ( (char*) &array2, m*sizeof(int) );

 // mostrar dados lidos
    std::cout << std::endl;
    for ( x=0; x<m; x=x+1 )
    {
        std::cout << array2[x] << " ";
    } // end for
    arquivo_b.close ( );

    std::cout << std::endl;
    std::cout << std::endl;
} // end method_03 ( )

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
                default:               break;
        }
    }
    while ( option != 0 );
    
 // encerrar
    printf ( "\nApertar ENTER para terminar.\n" );
    getchar( );   
    return (0);
}

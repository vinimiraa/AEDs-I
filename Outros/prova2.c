/**
 * Prova de Algum Semestre de AED 1,
 * Autor : Vinicius MIranda de Araujo - 812839
 * Data  : 09/10/2023
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void q01( int a[], int n, int x, int y )
{
    // int z = 0;
    if( x < y )
    {
        a[x] = a[x]+a[y];
        a[y] = a[x]-a[y];
        a[x] = a[x]-a[y];
        printf("%d ", a[x]);
        q01( a, n, x+1, y-1 );
    }
}

void p_01(void)
{
    int n =7;
    int a[ ] = { 2, 4, 6, 7, 5, 3, 1 };
    q01( a, n, 0, n-1 );  // 1 3 5
}

int q02( char a[ ], int y, int x )
{
    y = y - 1;
    if( x <= y && a[x] == a[y] ) return ( 1 + q02( a, y, x ) );
    else if( x < y )             return (     q02( a, y, x ) );
}

void p_02(void)
{
    char a[ ] = "abracadabra";
    printf( "\n%d\n", q02( a, strlen(a), 0 ) );  // 5
}

void q03( int n, int a[ ][ n ] )
{
    int x = 0, y = 0 /*z = 0*/;
    while( x < n )
    {
        y = x + 1;
        while( y < n )
        {
            if( a[x][y] < a[y][x] )
            {
                a[x][y] = a[x][y] + a[y][x];
            }
            printf("%2d\t", a[x][y] );
            y = y + 1;
        }
        x = x + 1;
        printf("\n");
    }
}
void p_03(void)
{
    int a[3][3] = { {1,2,3}, {4,5,6}, {7,8,9} };
    q03( 3, a );  // 6 10 14
}

struct s { int a; double b; double c; };

double q04( struct s x )
{
    int y = x.a;
    double z = 1.0;
    x.c = x.b;
    while( y > 0 )
    {
        x.c = x.c * 10; 
        z = z * 10;
        y = y - 1;
    }
    return ( (int)x.c/ z );
}

void p_04(void)
{
    struct s x = { 2, 0.12345, 0.0 };
    printf("\n%lf\n", q04( x ) );  // 0.120000
}

void q05( int* a, int* b, int* c )
{
    int d = *a, e = *b; if( d > e ) { *a = e; *b = d; }
        d = *b, e = *c; if( d > e ) { *b = e; *c = d; }
        d = *a, e = *b; if( d > e ) { *a = e; *b = d; }
}
void p_05(void)
{
    int x = 3, y = 1, z = 2;
    q05( &x, &y, &z );
    printf( "\n%d %d %d", x, y, z );  // 1 2 3
}

void centralizeString(char S[], int N) 
{
    int tam = strlen(S);

    if (N > tam) {
        int spaces = (N - tam) / 2;
        char result[N + 1];

        for (int i = 0; i < spaces; i++) {
            result[i] = '-';
        }

        for (int i = spaces; i < spaces + tam; i++) {
            result[i] = S[i - spaces];
        }

        for (int i = spaces + tam; i < N; i++) {
            result[i] = '-';
        }

        result[N] = '\0';
        printf("%s\n", result);
    }
}

void p_06(void)
{
    char S[80];
    int N = 0;

    printf( "%s", "Palavra = " );
    scanf( "%s", S ); getchar( );
    
    printf( "%s", "Valor = " );
    scanf( "%d", &N ); getchar( );

    centralizeString( S, N );
}

void metodo7( int row, int col, int matrix[][col], int arranjo[] )
{
    int coluna = 0;
    int maior  = matrix[0][0];

    for( int x = 0; x < row; x = x + 1 )
    {
        for( int y = 0; y < col; y = y + 1 )
        {
            if( maior < matrix[x][y])
            {
                maior = matrix[x][y];
                coluna = y;
            }
        }
    }

    for( int x = 0; x < col; x = x + 1 )
    {
        arranjo[x] = matrix[x][coluna];
    }
}

void p_07(void)
{
    int col = 3;
    int m[3][3] = { {1,2,3}, {7,8,9}, {4,5,6} };
    int array[col];
    
    metodo7(3,3, m, array);

    for( int x = 0; x < col; x = x + 1 )
    {
        printf("%d ", array[x]);
    }
}

void p_08(void)
{
    FILE *dados = fopen( "DADOS.TXT", "rt" );
    FILE *resultado = fopen( "RESULTADOS.TXT", "wt" );

    int array[7];
    int valor = 0;
    int x = 0; 
    int contador = 0;

    if( dados == NULL || resultado == NULL )
    {
        printf( "ERRO ao abrir o aqruivo." );
    }
    else
    {   
        fscanf(dados,"%d", &valor); fgetc(dados);
        if(valor % 10 == 1  && valor / 10000 == 3)
        {
            array[x] = valor;
            contador++;
        }

        x = 1;
        while( !feof( dados ) )
        {
            fscanf(dados, "%d", &valor ); fgetc(dados);
            if(valor % 10 == 1  && valor / 10000 == 3)
            {
                array[x] = valor;
                contador++;
            }
            x = x + 1;
        }

        for( x = 0; x < contador; x++ )
        {
            fprintf( resultado, "%d\n", array[x] );
        }
    }

    fclose(dados);
    fclose(resultado);
}

int main()
{   
    int opcao = 0;

    do
    {
        printf( "\n%s\n","Digite um numero: ");
        printf("\n%s", "1 - p_01");
        printf("\n%s", "2 - p_02");
        printf("\n%s", "3 - p_03");
        printf("\n%s", "4 - p_04");
        printf("\n%s", "5 - p_05");
        printf("\n%s", "6 - p_06");
        printf("\n%s", "7 - p_07");
        printf("\n%s", "8 - p_08");
        printf("\n%s", "Opcao = ");
        scanf("%d", &opcao);

        printf("\n===============\n");
        switch (opcao)
        {
        case 0:
            printf("\n%s\n", "ENCERRANDO PROGRAMA...");
            break;
        case 1: p_01(); break;
        case 2: p_02(); break;
        case 3: p_03(); break;
        case 4: p_04(); break;
        case 5: p_05(); break;
        case 6: p_06(); break;
        case 7: p_07(); break;
        case 8: p_08(); break;
        default:
            printf("\n%s\n", "INVALIDO!");
            break;
        }
        printf("\n===============\n");

    } while (opcao != 0);
    
    return 0;
}

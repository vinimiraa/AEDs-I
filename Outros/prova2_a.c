/**
 * Prova de Algum Semestre de AED 1,
 * Autor : Vinicius MIranda de Araujo - 812839
 * Data  : 09/10/2023
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void p_01(void)
{
    int array [ ] = { 0,1,2,3,4,5,6,7,8,9 };
    int x = 0, y = 0, z = 0;
    for( x = 3; x < 7; x = x + 1 )
    {
        z = array[x];
        for( y= x; y < 10; y = y + 1)
        {
            array[y] = array[y+1];
        }
        array[y-1] = z;
    }
    for( x  = 0; x < 10; x = x + 1 )
    {
        printf( "%d ", array[x] );
    }
    printf("\n");
}


void p_02(void)
{
    int array [ ][ 3 ] = { {0,1,2}, {3,4,5}, {6,7,8} };
    int x = 0, y = 0, z = 0;
    for( x = 0; x < 3; x = x + 1 )
    {
        z = array[2-x][2-x];
        for( y = 2; y >= 0; y = y - 1 )
        {
            array[y][x] = array[x][y];
            if( x == y )
            {
                array[x][y] = z;
            }
        }
    }
    for( x = 0; x < 3; x = x + 1 )
    {
        for( y = 0; y < 3; y = y + 1 )
        {
            printf("%d\t", array[x][y] );
        }
        printf("\n");
    }
}

char* substring( int start, int end, char *source )
{
    char* destiny = NULL;
    int x = 0, y = 0;
    destiny = malloc( strlen(source) * sizeof(char) );
    destiny[y] = '\0';
    for( x = start; x < end; x = x + 1 )
    {
        destiny[y] = source[x];
        y = y + 1;
    }
    return ( destiny );
}
void p_03(void)
{
    printf( "\n%s\n", substring( 1, 4, "abcde" ) );
    printf( "\n%s\n", substring( 4, 6, "abcde" ) );
    printf( "\n%s\n", substring( 0, 3, "abcde" ) );
    printf( "\n%s\n", substring( 3, 5, "abcde" ) );
}

int f04( int x, char *s )
{
    int result = 0;
    if( 0 <= x && x < (int)strlen(s) )
    {
        result = ( s[x] == '0' || s[x] == 1 )&& f04( x+1, s );
    }
    else 
    {
        result = 1;
    }

    return ( result );
}

void p_04(void)
{
    printf("\n%d\n", f04( 3, "01|O" ) );
    printf("\n%d\n", f04( 2, "0|10" ) );
    printf("\n%d\n", f04( 1, "O101" ) );
    printf("\n%d\n", f04( 0, "0101" ) );
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

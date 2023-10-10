/**
 * Primeira Prova do Primeiro Semestre de 2023 de AED 1,
 * As 5 primeiras questões eram fechadas e as 3 ultimas eram abertas.
 * 
 * Autor : Vinicius MIranda de Araujo - 812839
 * Data  : 09/10/2023
*/

#include "libshow.h"

void p_01(void)
{
    print("\nQ1\n");
    print("\na)%d = %d", (4/(2+2)/4), (4/2+2/4) );
    print("\nb)%d = %d", ((4/2)+(2/4)), (2-(4/2)+2*(2*2/4)) );
    print("\nc)%d = %d", ((4+2)*2-4), (4+2*2-4) );
    print("\nd)%d = %d\n", ((4+2/4)+(4-2)), ((4/2)+(2+2*4)/(2+4)) );
}

void p_02(void)
{
    print("\nQ2\n");
    bool   a = (int)(PI * 1.0f)/3;
    char   b = (char)( ((int)'2' - 1) - 48 );
    double c = 4/3 + (int)(double)3/5;
    int    d = (a < 4)&&(c <= 2%3);
    print("\na = %d", a);
    print("\nb = %d", b);
    print("\nc = %d", c);
    print("\nd = %d\n", d);
}

void p_03(void)
{
    print("\nQ3\n");
    int a = 10, b= 20, c = 30, d= 0;
    if      ( b>a && a>c || b>c && a>b ) { d = c; }
    else if ( a>b && c>b || b<c && a>b ) { d = b; }
    else if ( a<b && b>c || a<b && c>b ) { d = a; }
    print("\nd = %d\n", d);
}

void p_04(void)
{
    print("\nQ4\n");
    int x = 0, y = 0, n = 5;

    y = n * (n + 1) / 2;
    for( x = 2; x <= n; x = x + 1 )
    {
        y = y - x;
        print("\n%d\n", y);
    }

}

int f1(int x, int y)
{
    int z = 0;
    if( x < 0 ) { z = f1( -x, 1); }
    else
    {
        if( y <= 1 ) { z = f1( x, 2 ); }
        else
        if ( x >= y/2 && x%y == 0 ) { z = y + f1( x, y+2 ); }
        else          if( x >= y/2) { z = f1( x , y+2 ); }
    }
    return (z);
}
void p_05(void)
{
    print("\nQ5\n");
    print("\nf1(18,1) = %d\n", f1(18,1));
}

int potencia(int m, int n)
{
    int resultado = 1;
    for(int i = 0; i < n; i++)
    {
        resultado = resultado * m;
    }
    return ( resultado );
}
void p_06(void)
{
    print("\nQ6\n");
    int m = 0, n = 0;

    print("Numero = ");
    scanf("%d", &m);
    print("Potencia = ");
    scanf("%d", &n);

    for( int i = 0; i < 10; i++)
    {
        if( potencia(m,n) == potencia(n,m) ) 
        {
            print("\nm = %2d   n = %2d   pot(m,n) = %10d   pot(n,m) = %10d -> satisfazem m^n e n^m",
                        m,          n, potencia(m,n), potencia(n,m));
        }
        else
        {
            print("\nm = %2d   n = %2d   pot(m,n) = %10d   pot(n,m) = %10d -> nao satisfazem m^n e n^m",
                        m,          n, potencia(m,n), potencia(n,m));
        }
        m = m + 1;
        n = n + 1;
    }
    print("\n");
}

void p_07(void)
{
    print("\nQ7\n");
    char palavra[80];
    int tam = 0;

    print("\nPalavra = ");
    scanf("%s", palavra);
    tam = strlen(palavra);

    while(strcmp(palavra,"PARAR") != 0 )
    {
        for(int i = 0; i < tam; i = i + 1)
        {
            if(palavra[i] == 'p' || palavra[i] == 'b')
            {
                if(palavra[i-1] == 'm')
                    print("Correto");
                else if ( palavra [i-1] == 'n')
                    print("Errado");
            }
        }
        print("\nPalavra = ");
        scanf("%s", palavra);
    }
}

double somar(int n)
{
    double soma = 0;
    double numerador = 1.0;
    double denominador = n;
    for(int i = 0; i < n; i++)
    {
        soma = soma + numerador/denominador;
        numerador++;
        denominador--;
    }
    return (soma);
}
void p_08(void)
{
    print("\nQ8\n");
    int a = 0, b = 0, c = 0;
    double soma1 = 0.0, soma2 = 0.0, soma3 = 0.0;

    print("\nA = ");
    scanf("%d", &a);
    print("B = ");
    scanf("%d", &b);
    print("C = ");
    scanf("%d", &c);
    
    if( a != b && a != c && b != c)
    {
        soma1 = somar(a);
        soma2 = somar(b);
        soma3 = somar(c);
        print("\nA = %lf", soma1);
        print("\nB = %lf", soma2);
        print("\nC = %lf", soma3);
    }

    if( soma1 < soma2 && soma1 < soma3)
        print("\nA tem menor soma");
    else if( soma2 < soma1 && soma2 < soma3)
        print("\nB tem menor soma");
    else
        print("\nC tem menor soma");
}

int main()
{   
    int opcao = 0;

    do
    {
        print( "\n%s\n","Digite um numero: ");
        print("\n%s", "1 - p_01");
        print("\n%s", "2 - p_02");
        print("\n%s", "3 - p_03");
        print("\n%s", "4 - p_04");
        print("\n%s", "5 - p_05");
        print("\n%s", "6 - p_06");
        print("\n%s", "7 - p_07");
        print("\n%s", "8 - p_08");
        print("\n%s", "Opcao = ");
        scanf("%d", &opcao);

        print("\n===============\n");
        switch (opcao)
        {
        case 0:
            print("\n%s\n", "ENCERRANDO PROGRAMA...");
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
            print("\n%s\n", "INVALIDO!");
            break;
        }
        print("\n===============\n");

    } while (opcao != 0);
    
    return 0;
}

/*
 exercicios - v0.0. - 11 / 08 / 2023
 Author: Vinicius Miranda de Araujo

 Para compilar em terminal (janela de comandos):
 Linux : gcc -o exercicios exercicios.c
 Windows: gcc -o exercicios exercicios.c
 Para executar em terminal (janela de comandos):
 Linux : ./exercicios
 Windows: exercicios
*/

// dependencias
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// declaracao das funcoes secundarias
void identificacao();
void menuOpcoes();
void exercicio0111();
void exercicio0112();
void exercicio0113();
void exercicio0114();
void exercicio0115();
void exercicio0116();
void exercicio0117();
void exercicio0118();
void exercicio0119();
void exercicio0120();
void exercicio01E1();
void exercicio01E2();

// funcao principal
int main (void)
{
    int opcao = 0;
    // mostrar identificacao do autor e programa
    identificacao();

    do{
        // mostrar menu de opcoes
        menuOpcoes();

        // ler opcao do teclado
        printf("\n Opcao = ");
        scanf( "%d" , &opcao ); 
        getchar(); // limpar entrada de dados

        printf( "\n======== Opcao %d ========\n", opcao );

        switch (opcao)
        {
        case  0:                  break;
        case  1: exercicio0111(); break;
        case  2: exercicio0112(); break;
        case  3: exercicio0113(); break;
        case  4: exercicio0114(); break;
        case  5: exercicio0115(); break;
        case  6: exercicio0116(); break;
        case  7: exercicio0117(); break;
        case  8: exercicio0118(); break;
        case  9: exercicio0119(); break;
        case 10: exercicio0120(); break;
        case 11: exercicio01E1(); break;
        case 12: exercicio01E2(); break;
        default:
            printf( "\nERRO: OPCAO INVALIDA\n" );
            break;
        } // fim switch
        
        if( opcao == 0 ){
            printf("\n     Programa Encerrado     \n");
        }

        printf( "\n====== Fim Opcao %d ======\n\n", opcao );

    }while (opcao != 0);

    // encerrar
    printf( "\nAperte ENTER para terminar!\n" );
    getchar();

    return (0);
}

// definicao das funcoes secundarias

void identificacao()
{
    printf("\n");
    printf("%s\n", "Exercicios - Programa - v0.0");
    printf("%s\n", "Autor: Vinicius Miranda de Araujo - 812839");
    printf("\n");
} // fim identificacao()

void menuOpcoes()
{
    printf("Escolha alguma das opcoes a seguir:\n\n");
    printf("  0 - Encerrar programa\n");
    printf("  1 - Exercicio 0111\n");
    printf("  2 - Exercicio 0112\n");
    printf("  3 - Exercicio 0113\n");
    printf("  4 - Exercicio 0114\n");
    printf("  5 - Exercicio 0115\n");
    printf("  6 - Exercicio 0116\n");
    printf("  7 - Exercicio 0117\n");
    printf("  8 - Exercicio 0118\n");
    printf("  9 - Exercicio 0119\n");
    printf(" 10 - Exercicio 0120\n");
    printf(" 11 - Exercicio 01E1\n");
    printf(" 12 - Exercicio 01E2\n");
}

void exercicio0111()
{
    // identificacao
    printf( "\nExercicio 0111:\n\n" );

    // programa
    int x = 0, y = 0, a = 0;

    printf( "Digite um numero: " );
    scanf( "%d" , &x );
    getchar();
    printf( "\n" );

    printf( "Lado de um quadrado qualquer: %d\n" , x );
    y = 6 * x;

    printf( "Lado de um quadrado 6x maior: %d\n" , y);

    a = pow(y,2);

    printf( "Area de um quadrado com lado 6x maior: %d\n" , a );

    // encerrar
    printf( "\nAperte ENTER para terminar!\n" );
    getchar();
}
void exercicio0112()
{
    // identificacao
    printf( "\nExercicio 0112:\n\n" );

    // programa
    int x = 0;
    double y = 0, p = 0, a = 0;

    printf( "Digite um numero: " );
    scanf( "%d", &x );
    getchar();
    printf( "\n" );

    printf( "Lado de um quadrado qualquer: %d\n" , x );

    y = x / 3.0;

    printf( "Lado de um quadrado com 1/3 do tamanho do lado: %lf\n" , y );

    p = 4.0 * y;

    a = pow(y, 2.0);

    printf( "Perimetro de um quadrado com 1/3 do tamanho do lado: %lf\n" , p );
    printf( "Area de um quadrado com 1/3 do tamanho do lado: %lf\n" , a );

    // encerrar
    printf( "\nAperte ENTER para terminar!\n" );
    getchar();
}
void exercicio0113()
{
    // identificacao
    printf( "\nExercicio 0113:\n\n" );

    // programa
    int x = 0, y = 0;
    double a1 = 0, a2 = 0;

    printf( "Digite um numero: " );
    scanf( "%d", &x );
    getchar();

    printf( "Digite outro numero: " );
    scanf( "%d", &y );
    getchar();
    printf( "\n" );

    a1 = (double)x * y;

    printf( "Area de um retangulo qualquer: %lf\n" , a1 );

    a2 = a1 * 4;
    
    printf( "Area de um retangulo 4x maior: %lf\n" , a2 );
    
    // encerrar
    printf( "\nAperte ENTER para terminar!\n" );
    getchar();
}
void exercicio0114()
{
    // identificacao
    printf( "\nExercicio 0114:\n\n" );

    // programa
    int x1 = 0, y1 = 0;
    double x2 = 0, y2 = 0, a = 0, p = 0;

    printf( "Digite um numero: " );
    scanf( "%d", &x1 );
    getchar();

    printf( "Digite outro numero: " );
    scanf( "%d", &y1 );
    getchar();
    printf( "\n" );

    printf( "Area de um rentangulo: %d\n" , x1 * y1 );
    printf( "Perimetro de um rentangulo: %d\n" , 2 * x1 + 2 * y1 );

    x2 = (double)x1 / 5;
    y2 = (double)y1 /5;

    a = x2 * y2;
    p = 2 * x2 + 2 * y2;

    
    printf( "Area de um retangulo com 1/5 dos lados: %lf\n", a );
    printf( "Perimetro de um retangulo com 1/5 dos lados: %lf\n" , p );

    // encerrar
    printf( "\nAperte ENTER para terminar!\n" );
    getchar();
}
void exercicio0115()
{
    // identificacao
    printf( "\nExercicio 0115:\n\n" );

    // programa
    double x = 0, y = 0, a = 0; // x = base, y = altura

    printf( "Digite um numero: " );
    scanf( "%lf", &x );
    getchar();

    printf( "Digite outro numero: " );
    scanf( "%lf", &y );
    getchar();
    printf( "\n" );

    printf( "Area de um triangulo qualquer: %lf\n" , (x * y) / 2 );
    
    y = y / 2;

    a = (x * y) / 2;

    printf( "Area de um trianguo com metade da altura: %lf\n" , a );

    // encerrar
    printf( "\nAperte ENTER para terminar!\n" );
    getchar();
}
void exercicio0116()
{
    // identificacao
    printf( "\nExercicio 0116:\n\n" );

    // programa
    double x1 = 0, x2 = 0, a = 0, p = 0, h = 0;

    printf( "Digite um numero: " );
    scanf( "%lf" , &x1 );
    getchar();
    printf( "\n" );

    x2 = 2 * x1;

    h = (x2 * sqrt(3))/2;

    a = (pow(x2,2) * sqrt(3))/4;
    
    p = x2 * 3;

    printf( "A altura, área e o perímetro do triângulo com o dobro do lado: h = %lf, a = %lf, p = %lf\n" , h , a , p );

    // encerrar
    printf( "\nAperte ENTER para terminar!\n" );
    getchar();
}
void exercicio0117()
{
    // identificacao
    printf( "\nExercicio 0117:\n\n" );

    // programa
    double x1 = 0, x2 = 0,  v = 0;

    printf( "Digite um numero: " );
    scanf( "%lf" , &x1 );
    getchar();
    printf( "\n" );

    printf( "O lado de um cubo qualquer e: %lf\n" , x1 );
    printf( "O volume do cubo e: %lf\n" , pow( x1 , 3 ) );

    x2 = 7 * x1;

    v = pow( x2 , 3 );

    printf( "O volume de um cubo com 7x a medida do lado: %lf\n" , v );

    // encerrar
    printf( "\nAperte ENTER para terminar!\n" );
    getchar();
}
void exercicio0118()
{
    // identificacao
    printf( "\nExercicio 0118:\n\n" );

    // programa


    // encerrar
    printf( "\nAperte ENTER para terminar!\n" );
    getchar();
}
void exercicio0119()
{
    // identificacao
    printf( "\nExercicio 0119:\n\n" );

    // programa


    // encerrar
    printf( "\nAperte ENTER para terminar!\n" );
    getchar();
}
void exercicio0120()
{
    // identificacao
    printf( "\nExercicio 0120:\n\n" );

    // programa


    // encerrar
    printf( "\nAperte ENTER para terminar!\n" );
    getchar();
}
void exercicio01E1()
{
    // identificacao
    printf( "\nExercicio 01E1:\n\n" );

    // programa


    // encerrar
    printf( "\nAperte ENTER para terminar!\n" );
    getchar();
}
void exercicio01E2()
{
    // identificacao
    printf( "\nExercicio 01E2:\n\n" );

    // programa


    // encerrar
    printf( "\nAperte ENTER para terminar!\n" );
    getchar();
}
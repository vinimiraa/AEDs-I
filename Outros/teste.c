
// -------------------------- lista de dependencias

#include "libshow.h"

// -------------------------- tratamento de erro

// -------------------------- definicao de constantes

// -------------------------- definicao de variaveis globais

// -------------------------- definicao de prototipos

void identificacao();
void menuOpcoes();
void metodo01();
void metodo02();
void metodo03();
void metodo04();
void metodo05();
void metodo06();
void metodo07();
void metodo08();
void metodo09();
void metodo10();

// -------------------------- definicao do metodo principal

int main(void)
{
    int opcao = 0;
    // mostrar identificacao do autor e programa
    identificacao();

    do
    {
        // mostrar menu de opcoes
        menuOpcoes();
        // ler opcao do teclado
        printf("\n %s", "Opcao = ");
        scanf("%d", &opcao);
        getchar(); // limpar entrada de dados

        // executar a opcao escolhida
        switch (opcao)
        {
        case 0:
            printf("\n%s\n\n", "Programa Encerrado");
            break;
        case 1:
            metodo01();
            break;
        case 2:
            metodo02();
            break;
        case 3:
            metodo03();
            break;
        case 4:
            metodo04();
            break;
        case 5:
            metodo05();
            break;
        case 6:
            metodo06();
            break;
        case 7:
            metodo07();
            break;
        case 8:
            metodo08();
            break;
        case 9:
            metodo09();
            break;
        case 10:
            metodo10();
            break;
        default:
            printf("\n%s\n\n", "ERRO: opcao invalida");
            break;
        } // fim switch

    } while (opcao != 0);

    // encerrar
    printf("\n%s\n", "Aperte ENTER para terminar!");
    getchar();

    return (0);
}

// -------------------------- definicao de metodos

/**
 * Identificacao do Autor e Programa
 */
void identificacao()
{
    printf("\n");
    printf("%s\n", "Exercicios0X - Programa - v0.0");
    printf("%s\n", "Autor: Vinicius Miranda de Araujo - 812839");
    printf("\n");
} // fim identificacao()

/**
 * Menu de opcoes
 */
void menuOpcoes()
{
    printf("%s\n\n", "Escolha alguma das opcoes a seguir:");
    printf("%s\n", "  0 - Encerrar programa");
    printf("%s\n", "  1 - Metodo 01");
    printf("%s\n", "  2 - Metodo 02");
    printf("%s\n", "  3 - Metodo 03");
    printf("%s\n", "  4 - Metodo 04");
    printf("%s\n", "  5 - Metodo 05");
    printf("%s\n", "  6 - Metodo 06");
    printf("%s\n", "  7 - Metodo 07");
    printf("%s\n", "  8 - Metodo 08");
    printf("%s\n", "  9 - Metodo 09");
    printf("%s\n", " 10 - Metodo 10");
} // fim menuOpcoes()

/**
 * Metodo01.
 */
void metodo01()
{
    // identificacao
    printf("\n%s\n\n", "Metodo 01:");

    // programa
    int nLin = 0, nCol = 0;
    int opcao = 0;

    nLin = readint("Digite o numero de linhas da matrix: ");
    nCol = readint("Digite o numero de colunas da matrix: ");

    int matriz[nLin][nCol];

    opcao = readint("\n1 - preencher a matriz, 2 - matriz aleatoria:\n");
    print("\n");

    if (opcao == 1)
    {
        for (int i = 0; i < nLin; i++)
        {
            for (int j = 0; j < nCol; j++)
            {
                matriz[i][j] = readint("Digite um numero: ");
            }
        }
    }
    else
    {
        if (opcao == 2)
        {
            for (int i = 0; i < nLin; i++)
            {
                for (int j = 0; j < nCol; j++)
                {
                    matriz[i][j] = rand() % 100;
                }
            }
        }
        else
        {
            print("Opcao Invaliada!");
        }
    }

    print("\n%s\n", "Matriz:");
    printMatrix(nLin, nCol, matriz);

    if (nLin != nCol)
    {
        print("\n%s\n", "ERRO: Matriz nao e quadrada!");
    }
    else
    {
        print("\n%s\n", "Diagonal Principal:");
        leadingMatrix(nLin, nCol, matriz);

        print("\n%s\n", "Diagonal Secundaria:");
        secondaryMatrix(nLin, nCol, matriz);

        print("\n%s\n", "Elementos Abaixo da Diagonal Principal:");
        inferiorMatrix(nLin, nCol, matriz);

        print("\n%s\n", "Elementos Acima da Diagonal Principal:");
        superiorMatrix(nLin, nCol, matriz);
    }
    print("\n%s\n", "Matriz Transposta:");
    transposedMatrix(nLin, nCol, matriz);

    // encerrar
    printf("\n%s\n", "Aperte ENTER para continuar!");
    getchar();
} // fim metodo01

/**
 * Metodo02.
 */
void metodo02()
{
    // identificacao
    printf("\n%s\n\n", "Metodo 02:");

    // programa
    int n = 0;
    int opcao = 0;

    n = readint("Digite o numero de elementos do vetor: ");

    int v[n];

    opcao = readint("\n1 - preencher o vetor, 2 - vetor aleatoria:\n");

    if (opcao == 1)
    {
        for (int i = 0; i < n; i++)
        {
            v[i] = readint("Digite um numero: ");
        }
    }
    else
    {
        if (opcao == 2)
        {
            for (int i = 0; i < n; i++)
            {
                v[i] = rand() % 100;
            }
        }
        else
        {
            print("Opcao Invaliada!");
        }
    }

    printArray(v, n);   // mostrar o vetor
    reverseArray(v, n); // inverter o vetor
    printArray(v, n);   // mostrar o vetor

    // encerrar
    printf("\n%s\n", "Aperte ENTER para continuar!");
    getchar();
} // fim metodo02

/**
 * Metodo03.
 */
void metodo03()
{
    // identificacao
    printf("\n%s\n\n", "Metodo 03:");

    // programa
    int n = 7;
    int v[n];

    for (int i = 0; i < n; i++)
    {
        v[i] = rand() % 100;
    }
    for (int i = 0; i < n; i++)
    {
        if (isEven(v[i]))
        {
            printf("%d%s", v[i], " e par\n");
        }
        if (isOdd(v[i]))
        {
            printf("%d%s", v[i], " e impar\n");
        }
        if (isPrime(v[i]))
        {
            print("%d%s", v[i], " e primo\n");
        }
    }

    // encerrar
    printf("\n%s\n", "Aperte ENTER para continuar!");
    getchar();
} // fim metodo03

/**
 * Metodo04.
 */
void metodo04()
{
    // identificacao
    printf("\n%s\n\n", "Metodo 04:");

    // programa
    char *palavra[5];

    for (int i = 0; i < 5; i = i + 1)
    {
        palavra[i] = readstring("Digite um carro: ");
    }
    print("\n");

    for (int i = 0; i < 5; i = i + 1)
    {
        print("%d. %s\n", i + 1, palavra[i]);
    }
    print("\n");

    for (int i = 0; i < 5; i = i + 1)
    {
        print("%d. %d\n", i + 1, (int)strlen(palavra[i]));
    }
    print("\n");

    // encerrar
    printf("\n%s\n", "Aperte ENTER para continuar!");
    getchar();
} // fim metodo04

/**
 * Metodo05.
 */
void metodo05()
{
    // identificacao
    printf("\n%s\n\n", "Metodo 05:");

    // programa
    double x = 0.0, a = 0.0, b = 0.0;
    x = readdouble("Digite um numero: ");
    a = readdouble("Digite o extremo esquerdo do intervalo: ");
    b = readdouble("Digite o extremo direito do intervalo: ");

    if (inOpenInterval(x, a, b))
        print("\nDentro do Intervalo Aberto!");
    else if( (!inOpenInterval(x, a, b)) )
        print("\nFora do Intervalo Aberto!");

    if ( inClosedInterval(x, a, b))
        print("\nDentro do Intervalo Fechado!");
    else if( !inClosedInterval(x, a, b))
        print("\nFora do Intervalo Fechado!");
    print("\n");
    // encerrar
    printf("\n%s\n", "Aperte ENTER para continuar!");
    getchar();
} // fim metodo05

/**
 * Metodo06.
 */
void metodo06()
{
    // identificacao
    printf("\n%s\n\n", "Metodo 06:");

    // programa
    char c;

    c = readchar("Digite um caractere: ");
    if (isAlnum(c))
        print("\nAlfanumerico");
    if (isAlpha(c))
        print("\nLetra");
    if (isDigit(c))
        print("\nDigito");
    if (isPunct(c))
        print("\nPontuacao");
    if (isUpper(c))
        print("\nMaisucula");
    if (isLower(c))
        print("\nMinuscula");
    if(isSpace(c))
        print("\nEspaco em branco");
    c = toUpper(c);
    print("\nto upper = %c",c);
    c= toLower(c);
    print("\nto lower = %c",c);

    // encerrar
    printf("\n%s\n", "Aperte ENTER para continuar!");
    getchar();
} // fim metodo06

void funcao_b(int n)
{
    if( n > 0)
    {
        for(int i = 1; i < n; i++)
        {    print("*");}
        print("\n");
        funcao_b( n - 1 );
    }
}

void funcao_a(int n)
{
    if( n > 0)
    {
        funcao_a( n - 1 );
        for(int i = 0; i < n; i++)
        {    print("*");}
        print("\n");
    }
}
/**
 * Metodo07.
 */
void metodo07()
{
    // identificacao
    printf("\n%s\n\n", "Metodo 07:");

    // programa
    funcao_a(5);
    funcao_b(5);
    // encerrar
    printf("\n%s\n", "Aperte ENTER para continuar!");
    getchar();
} // fim metodo07

/**
 * Metodo08.
 */
void metodo08()
{
    // identificacao
    printf("\n%s\n\n", "Metodo 08:");

    // programa

    // encerrar
    printf("\n%s\n", "Aperte ENTER para continuar!");
    getchar();
} // fim metodo08

/**
 * Metodo09.
 */
void metodo09()
{
    // identificacao
    printf("\n%s\n\n", "Metodo 09:");

    // programa

    // encerrar
    printf("\n%s\n", "Aperte ENTER para continuar!");
    getchar();
} // fim metodo09

/**
 * Metodo10.
 */
void metodo10()
{
    // identificacao
    printf("\n%s\n\n", "Exercicio 0X20:");

    // programa

    // encerrar
    printf("\n%s\n", "Aperte ENTER para continuar!");
    getchar();
} // fim metodo10

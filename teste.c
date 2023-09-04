
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

    nLin = readint("Digite o numero de linhas da matrix: ");
    nCol = readint("Digite o numero de colunas da matrix: ");

    int matriz[nLin][nCol];

    int opcao = 0;
    opcao = readint("\n1 - preencher a matriz, 2 - matriz aleatoria:\n");

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

    printMatrix(nLin, nCol, matriz);
    leadingMatrix(nLin, nCol, matriz);
    secondaryMatrix(nLin, nCol, matriz);
    inferiorMatrix(nLin, nCol, matriz);
    superiorMatrix(nLin, nCol, matriz);

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
    printReArray(v, n); // mostrar o vetor invertido
    reverseArray(v, n); // inverter o vetor
    printArray(v, n);   // mostrar o vetor
    printReArray(v, n); // mostrar o vetor invertido

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
        if (iseven(v[i]))
        {
            printf("%d%s", v[i], " e par\n");
        }
        if (isodd(v[i]))
        {
            printf("%d%s", v[i], " e impar\n");
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
    char *palavra;
    palavra = readstring("Digite uma cadeia de caracteres: ");

    print("\n%s\n", palavra);
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

    // encerrar
    printf("\n%s\n", "Aperte ENTER para continuar!");
    getchar();
} // fim metodo06

/**
 * Metodo07.
 */
void metodo07()
{
    // identificacao
    printf("\n%s\n\n", "Metodo 07:");

    // programa

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

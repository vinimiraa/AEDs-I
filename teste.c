#include "libshow.h"

int main(void)
{
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

    return (0);
}
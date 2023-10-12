/**
 * Prova de Algum Semestre de AED 1,
 * Autor : Vinicius MIranda de Araujo - 812839
 * Data  : 09/10/2023
*/

#include "libshow.h"

void p_01(void)
{

}

void p_02(void)
{

}

void p_03(void)
{

}

void p_04(void)
{

}

void p_05(void)
{

}

void p_06(void)
{

}

void p_07(void)
{

}

bool isComposto(char *palavra)
{
    bool resultado = false;
    int i = 0;
    int tamanho = strlen(palavra);
    char aux1[tamanho];
    char aux2[tamanho];

    while( i < tamanho && palavra[i] != '-')
    {
        i++;
    }
    
    for(int x = 0; x < i; x++)
    {
        aux1[x] = palavra[x];
    }
    aux1[i] = '\0';

    for(int y = i + 1, p = 0; y < tamanho; y++, p++)
    {
        aux2[p] = palavra[y];
    }
    aux2[i] = '\0';

    if( strcmp(aux1, aux2) == 0 )
    {
        resultado = true;
    }

    return(resultado);
}
void p_08(void)
{
    char palavra[80];
    
    do
    {
        printf("Palavra = ");
        scanf("%s", palavra);
        if( isComposto(palavra) ) {
            printf("A palavra e composta\n\n");
        }
        else {
            printf("A palavra nao e composta\n\n");
        }
    }while (strcmp(palavra, "PARAR") != 0 );
    


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

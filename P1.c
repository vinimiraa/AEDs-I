

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*
    Questão 5:
    Qual a saida da função abaixo:
*/
int f1 ( int x, int y )
{
    int z = 0;
    if( x < 0 )
    {
        z = f1(-x, 1);
    }
    else
    {
        if( y <= 1 )
        {
            z = f1( x , 2);
        }
        else
        {
            if( x >= y/2 && x%y == 0 )
            {
                z = y + f1(x , y+2); //2+(18,3) 3+(18,5) 9+(18,11)
            }
            else
            {
                if( x >= y/2 )
                {
                    z = f1(x , y+2); // (18,7) (18,9) (18,13) (18,15) (18,17)
                }
            }
        }
    }
    return (z);
}

int main (void)
{
    printf( "\nf1(18,1) = %d\n", f1(18,1) );
    
    return (0);
}
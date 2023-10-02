/**
  * ----------------------------------- Documentacao preliminar
  * Pontificia Universidade Catolica de Minas Gerais
  * Curso de Ciencia da Computacao
  * Algoritmos e Estruturas de Dados I
  *
  * Trabalho pratico: lista 00
  *
  * Objetivo:
  * Modelo de programa para a disciplina AED I
  * Sugestao para montar um trabalho pratico
  *
  * Autor:   Matricula: 999999  Nome: xxx yyy zzz
  * Versao:  1.0                Data: 01/mm/20aa
  *
  * Dados:
  * - opcao de execucao escolhida pelo usuario
  *
  * Resultados:
  * - execucao de um teste de cada vez a escolha do usuario
  *
  * Condicoes:
  * - so' aceitara' as opcoes oferecidas.
  *
  * Arquivos:
  *
  * - lista_00.c
  * - lista_00     ( no Linux   )
  * - lista_00.exe ( no Windows )
  *
  * Forma de compilacao:
  * - acionar o compilador no modo console 
  *   (terminal/janela de comandos):
  *
  *   Linux  : gcc -o ./lista_00 ./lista_00.c
  *   Windows: gcc -o   lista_00   lista_00.c
  *
  * Forma de uso:
  * - acionar o programa   no modo console
  *   (terminal/janela de comandos):
  *
  *   Linux  :  ./lista_00
  *   Windows:    lista_00
  *
  * Referencias:
  * - Exemplos mostrados em sala de aula
  * - Apostila: Fundamentos de Programacao - Notas de aulas
  *
  */

// -------------------------- classes nativas
//                            ou auxiliares

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>

// -------------------------- definicao de classe

/**
  * Modelo para definir exemplo de um programa.
  * Obs.: E' recomendado ter o nome do programa
  *       sem espacos em branco, acentos ou cedilha.
  */

// -------------------------- tratamento de erro


// -------------------------- definicao de constantes


// -------------------------- definicao de armazenadores globais


// -------------------------- definicao de prototipos


// -------------------------- definicao de metodos

/**
  * Metodo01.
  */
void metodo01 ( void )
{
 // definir dado
    int x = 0;
 // identificar
    printf ( "\n%s\n", "Metodo01" );
 // acoes
    for ( x=1; x<=5; x=x+1 )
    {
        printf ( "\n%d", x );
    }  // end for
 // encerrar
    printf ( "\n%s\n", "Apertar ENTER para continuar." );
    getchar( );
} // fim metodo01 ( )

/**
  * Metodo02.
  */
void metodo02 ( void )
{
 // definir dado
    int x = 0;
 // identificar
    printf ( "\n%s\n", "Metodo02" );
 // acoes
    x = 1; 
    while ( x<=5 )
    {
        printf ( "\n%d", x );
        x=x+1;
    }  // end while
 // encerrar
    printf ( "\n%s\n", "Apertar ENTER para continuar." );
    getchar( );
} // fim metodo02 ( )

/**
  * Acao a ser executada.
  * @param x - valor a ser mostrado
  */
void block_01 ( int x )
{
     printf ( "\n%d", x );
}  // end while

/**
  * Metodo03.
  */
void metodo03 ( void )
{
 // definir dado
    int x = 0;
 // identificar
    printf ( "\n%s\n", "Metodo03" );
 // acoes
    x=1;
    while ( x<=5 )
    {
     // executar acao
 	block_01 ( x );
     // passar 'a proxima
	x=x+1;
    }  // end while
 // encerrar
    printf ( "\n%s\n", "Apertar ENTER para continuar." );
    getchar( );
} // fim metodo03 ( )

/**
  * Acao a ser executada, recursivamente.
  * @param x - valor a ser mostrado
  */
void block_02 ( int x )
{
 // testar se e' possivel executar
    if ( x<=5 )
    {
     // executar acao
        printf ( "\n%d", x );
     // fazer de novo
        x = x + 1;	    // passar 'a proxima
        block_02 ( x );	// motor
    } // end if
}  // end while

/**
  * Metodo04.
  */
void metodo04 ( void )
{
 // definir dado
    int x = 0;
 // identificar
    printf ( "\n%s\n", "Metodo04" );
 // acoes
    x = 1;
    block_02 ( x );
 // encerrar
    printf ( "\n%s\n", "Apertar ENTER para continuar." );
    getchar( );
} // fim metodo04 ( )

/**
  * Acao a ser executada, recursivamente.
  * @param x - valor a ser mostrado
  */
void block_03 ( int x )
{
 // testar se e' possivel executar
    if ( x<=5 )
    {
     // executar acao
        printf ( "\n%d", x );
     // fazer de novo
        block_03 ( x+1 );	// motor
    } // end if
}  // end block_03

/**
  * Metodo05.
  */
void metodo05 ( void )
{
 // identificar
    printf ( "\n%s\n", "Metodo05" );
 // acoes
    block_03 ( 0 );
 // encerrar
    printf ( "\n%s\n", "Apertar ENTER para continuar." );
    getchar( );
} // fim metodo05 ( )

/**
  * Funcao para somar valores em sequencia: 1+2+3+...+(n-1)+n
  * @return soma dos primeiros naturais
  * @param  x - valor a ser mostrado
  */
int block_04 ( int x )
{
 // definir dado
    int soma = 0;
 // testar se e' possivel executar
    if ( x<=5 )
    {
     // executar acao
        printf ( "\nAntes  : x = %d soma = %d", x, soma );
     // fazer de novo (ascendente)
        soma = x + block_04 ( x+1 );	// motor
        printf ( "\nDepois : x = %d soma = %d", x, soma );
    } // end if
    return ( soma );
}  // end block_04 ( )

/**
  * Metodo06.
  */
void metodo06 ( void )
{
 // definir dado
    int soma = 0;
 // identificar
    printf ( "\n%s\n", "Metodo06" );
 // acoes
    soma = block_04 ( 1 );
    printf ( "\nsoma = %d\n", soma );
 // encerrar
    printf ( "\n%s\n", "Apertar ENTER para continuar." );
    getchar( );
} // fim metodo06 ( )

/**
  * Funcao para somar valores em sequencia: n+(n-1)+...+3+2+1
  * @return soma dos primeiros naturais
  * @param  x - valor a ser mostrado
  */
int block_05 ( int x )
{
 // definir dado
    int soma = 0;
 // testar se e' possivel executar
    if ( x>0 )
    {
       printf ( "\nAntes  : x = %d soma = %d", x, soma );
    // fazer de novo (descendente)
       soma = x + block_05 ( x-1 );	// motor
       printf ( "\nDepois : x = %d soma = %d", x, soma );
    } // end if
    return ( soma );
}  // end block_05 ( )

/**
  * Metodo07.
  */
void metodo07 ( void )
{
 // definir dado
    int soma = 0;
 // identificar
    printf ( "\n%s\n", "Metodo06" );
 // acoes
    soma = block_05 ( 5 );
    printf ( "\nsoma = %d\n", soma );
 // encerrar
    printf ( "\n%s\n", "Apertar ENTER para continuar." );
    getchar( );
} // fim metodo07 ( )

/**
  * Mostrar sequencia em ordem crescente.
  * @param  x - valor a ser mostrado
  */
void block_06 ( int x )
{
 // testar se e' possivel executar
    if ( x>0 )
    {
     // mostrar valor da vez (descendente)
        printf ( "\n%d", x );
     // fazer de novo        (descendente)
        block_06 ( x-1 );	// motor
    } // end if
}  // end block_06 ( )

/**
  * Metodo08.
  */
void metodo08 ( void )
{
 // identificar
    printf ( "\n%s\n", "Metodo08" );
 // acoes
    block_06 ( 5 );
 // encerrar
    printf ( "\n%s\n", "Apertar ENTER para continuar." );
    getchar( );
} // fim metodo08 ( )

/**
  * Mostrar sequencia em ordem crescente.
  * @param  x - valor a ser mostrado
  */
void block_07 ( int x )
{
 // testar se e' possivel executar
    if ( x>0 )
    {
     // fazer de novo          (descendente)
        block_07 ( x-1 );	// motor
     // mostrar o valor da vez (ascendente )
        printf ( "\n%d", x );
    } // end if
}  // end block_07 ( )

/**
  * Metodo09.
  */
void metodo09 ( void )
{
 // identificar
    printf ( "\n%s\n", "Metodo09" );
 // acoes
    block_07 ( 5 );
 // encerrar
    printf ( "\n%s\n", "Apertar ENTER para continuar." );
    getchar( );
} // fim metodo09 ( )

/**
  * Funcao para calular o fatorial: n*(n-1)*...*3*2*1
  * @return fatorial (real, podera' representar valores maiores)
  * @param  n - valor cujo fatorial a ser calculado
  */
double fatorial ( int n )
{
 // definir dado
    double result = 0;
 // testar caso especial
    if ( n == 0 )
    {
       result = 1;                    // base
    }
    else
 // testar caso geral
    if ( n>0 )
    {
     // fazer de novo
        result = n * fatorial ( n-1 ); // motor
    } // end if
    return ( result );
}  // end fatorial ( )

/**
  * Metodo10.
  */
void metodo10 ( void )
{
 // definir dado
    int x = 0;
 // identificar
    printf ( "\n%s\n", "Metodo10" );
 // acoes
    printf ( "\nfatorial (%d) = %d", (-5), fatorial ( -5 ) );
    printf ( "\nfatorial (%d) = %d", ( 0), fatorial (  0 ) );
    printf ( "\nfatorial (%d) = %d", ( 5), fatorial (  5 ) );
    for ( x=15; x<=175; x=x+1 )
    {
        printf ( "\nfatorial (%d) = %.0lf", (x), fatorial (x) );
    } // end for
 // encerrar
    printf ( "\n%s\n", "Apertar ENTER para continuar." );
    getchar( );
} // fim metodo10 ( )

/**
  * Procedimento recursivo para mostrar cadeia de caracteres.
  * @param  palavra - cadeia de caracteres
  * @param  posicao - onde mostrar caractere
  */
void mostrar_simbolo_1 ( char palavra [], int posicao )
{
 // definir dados
    char simbolo = '0';
 // testar se posicao e' valida
    if ( posicao < strlen (palavra) )
    {
     // separar simbolo da palavra
        simbolo = palavra [ posicao ];
     // mostrar posicao e simbolo da vez
  	printf ( "\nposicao = %d simbolo = %c", posicao, simbolo );
     //	getchar( );
        mostrar_simbolo_1 ( palavra, posicao+1 ); // ascendente
    } // end if
} // end mostrar_simbolo_1 ( )

/**
  * Metodo11.
  */
void metodo11 ( void )
{
 // definir dado
    int x = 0;
 // identificar
    printf ( "\n%s\n", "Metodo11" );
 // acoes
    mostrar_simbolo_1 ( "abcde", 0 ); 
 // encerrar
    printf ( "\n%s\n", "Apertar ENTER para continuar." );
    getchar( );
} // fim metodo11 ( )

/**
  * Procedimento recursivo para mostrar cadeia de caracteres.
  * @param  palavra - cadeia de caracteres
  * @param  posicao - onde mostrar caractere
  */
void mostrar_simbolo_2 ( char palavra [], int posicao )
{
 // definir dados
    char simbolo = '0';
 // testar se posicao e' valida
    if ( posicao >= 0 )
    {
     // separar simbolo da palavra
        simbolo = palavra [ posicao ];
     // mostrar posicao e simbolo da vez
 	printf ( "\nposicao = %d simbolo = %c", posicao, simbolo );
     //	getchar( );
        mostrar_simbolo_2 ( palavra, posicao-1 ); // descendente
    } // end if
} // end mostrar_simbolo_2 ( )

/**
  * Metodo12.
  */
void metodo12 ( void )
{
 // definir dado
    int x = 0;
 // identificar
    printf ( "\n%s\n", "Metodo12" );
 // acoes
    mostrar_simbolo_2 ( "abcde", 5-1 );
 // encerrar
    printf ( "\n%s\n", "Apertar ENTER para continuar." );
    getchar( );
} // fim metodo12 ( )

/**
  * Procedimento recursivo para mostrar cadeia de caracteres.
  * @param  palavra - cadeia de caracteres
  * @param  posicao - onde mostrar caractere
  */
void mostrar_simbolo_3 ( char palavra [], int posicao )
{
 // definir dados
    char simbolo = '0';
 // testar se posicao e' valida
    if ( posicao < strlen (palavra) )
    {
     // avancar
        mostrar_simbolo_3 ( palavra, posicao+1 ); // descendente
     // separar simbolo da palavra
        simbolo = palavra [ posicao ];
     // mostrar posicao e simbolo da vez
  	printf ( "\nposicao = %d simbolo = %c", posicao, simbolo );
     //	getchar( );
    } // end if
} // end mostrar_simbolo_3 ( )

/**
  * Metodo13.
  */
void metodo13 ( void )
{
 // definir dado
    int x = 0;
 // identificar
    printf ( "\n%s\n", "Metodo13" );
 // acoes
    mostrar_simbolo_3 ( "abcde", 0 );
 // encerrar
    printf ( "\n%s\n", "Apertar ENTER para continuar." );
    getchar( );
} // fim metodo13 ( )

/**
  * Funcao recursiva para contar maiusculas
  * @return quantidade de maiusculas
  * @param  palavra - na qual procurar maiusculas
  * @param  posicao - onde    procurar maiusculas
  */
int r_maiusculas_1 ( char palavra [], int posicao )
{
 // definir dados
    int  soma    =  0 ;
    char simbolo = '0';
 // testar se posicao e' valida
    if ( posicao >= 0 )
    {
     // separar simbolo da palavra
        simbolo = palavra [ posicao ];
     // mostrar posicao e simbolo da vez
    	printf ( "\nposicao = %d simbolo = %c", posicao, simbolo );
     //	getchar( );
    	if ( 'A' <= simbolo && simbolo <= 'Z' )
 	{ // caso achar     (1) mais o resto a ser testado
             soma = 1 + r_maiusculas_1 ( palavra, posicao-1 );
	}
	else
	{ // caso nao achar (0) mais o resto a ser testado
             soma = 0 + r_maiusculas_1 ( palavra, posicao-1 );
	} // end if
    } // end if
    return ( soma );
} // end r_maiusculas_1 ( )

/**
  * Funcao (de servico) para preparar a execucao recursiva.
  * @return quantidade de maiusculas
  * @param  palavra - na qual procurar maiusculas
  */
int maiusculas_1 ( char palavra [] )
{
 // definir dados
    int soma    = 0;
    int tamanho = strlen( palavra );
 // verificar se ha' dados
    if ( tamanho > 0 )
    {
       soma = r_maiusculas_1 ( palavra, tamanho-1 );
    } // end if
    return ( soma );
} // end maiusculas_1 ( )

/**
  * Metodo14.
  */
void metodo14 ( void )
{
 // definir dado
    int x = 0;
 // identificar
    printf ( "\n%s\n", "Metodo14" );
 // acoes
    printf ( "\nmaisculas (%s) = %d", ""   , maiusculas_1 ( ""    ) );
    printf ( "\nmaisculas (%s) = %d", "A"  , maiusculas_1 ( "A"   ) );
    printf ( "\nmaisculas (%s) = %d", "a"  , maiusculas_1 ( "a"   ) );
    printf ( "\nmaisculas (%s) = %d", "AbC", maiusculas_1 ( "AbC" ) );
    printf ( "\nmaisculas (%s) = %d", "ABC", maiusculas_1 ( "ABC" ) );
 // encerrar
    printf ( "\n%s\n", "Apertar ENTER para continuar." );
    getchar( );
} // fim metodo14 ( )

/**
  * Funcao recursiva para contar maiusculas
  * @return quantidade de maiusculas
  * @param  palavra - na qual procurar maiusculas
  * @param  posicao - onde    procurar maiusculas
  */
int r_maiusculas_2 ( char palavra [], int posicao )
{
 // definir dados
    int  soma    =  0 ;
    char simbolo = '0';
 // testar se posicao e' valida
    if ( posicao >= 0 )
    {
     // separar simbolo da palavra
        simbolo = palavra [ posicao ];
     // mostrar posicao e simbolo da vez
  	printf ( "\nposicao = %d simbolo = %c", posicao, simbolo );
     //	getchar( );
   	if ( 'A' <= simbolo && simbolo <= 'Z' )
 	{ // caso achar
             soma = 1;
	} // end if
     // acumular o valor atual e os seguintes
        soma = soma + r_maiusculas_2 ( palavra, posicao-1 );
    } // end if
    return ( soma );
} // end r_maiusculas_2 ( )

/**
  * Funcao (de servico) para preparar a execucao recursiva.
  * @return quantidade de maiusculas
  * @param  palavra - na qual procurar maiusculas
  */
int maiusculas_2 ( char palavra [] )
{
 // definir dados
    int soma    = 0;
    int tamanho = strlen( palavra );
 // verificar se ha' dados
    if ( tamanho > 0 )
    {
       soma = r_maiusculas_2 ( palavra, tamanho-1 );
    } // end if
    return ( soma );
} // end maiusculas ( )

/**
  * Metodo15.
  */
void metodo15 ( void )
{
 // definir dado
    int x = 0;
 // identificar
    printf ( "\n%s\n", "Metodo15" );
 // acoes
    printf ( "\nmaisculas (%s) = %d", ""   , maiusculas_2 ( ""    ) ); 
    printf ( "\nmaisculas (%s) = %d", "A"  , maiusculas_2 ( "A"   ) ); 
    printf ( "\nmaisculas (%s) = %d", "a"  , maiusculas_2 ( "a"   ) ); 
    printf ( "\nmaisculas (%s) = %d", "AbC", maiusculas_2 ( "AbC" ) ); 
    printf ( "\nmaisculas (%s) = %d", "ABC", maiusculas_2 ( "ABC" ) ); 
 // encerrar
    printf ( "\n%s\n", "Apertar ENTER para continuar." );
    getchar( );
} // fim metodo15 ( )

/**
  * Funcao recursiva para contar maiusculas
  * @return quantidade de maiusculas
  * @param  palavra - na qual procurar maiusculas
  * @param  posicao - onde    procurar maiusculas
  * @param  tamanho - quantidade de caracteres
  */
int r_maiusculas_3 ( char palavra [], int posicao, int tamanho )
{
 // definir dados
    int soma     =  0 ;
    char simbolo = '0';
 // testar se posicao valida
    if ( 0 <= posicao && posicao < tamanho )
    {
     // separar simbolo da palavra
        simbolo = palavra [ posicao ];
  	printf ( "\nposicao = %d simbolo = %c", posicao, simbolo );
     //	getchar( );
	if ( 'A' <= simbolo && simbolo <= 'Z' )
	{  soma = 1;  }
        soma = soma + r_maiusculas_3 ( palavra, posicao+1, tamanho );
    } // end if
    return ( soma );
} // end r_maiusculas_3 ( )

/**
  * Funcao (de servico) para preparar a execucao recursiva.
  * @return quantidade de maiusculas
  * @param  palavra - na qual procurar maiusculas
  */
int maiusculas_3 ( char palavra [] )
{
 // definir dados
    int soma    = 0;
    int tamanho = strlen( palavra );
 // verificar se ha' dados
    if ( tamanho > 0 )
    {
       soma = r_maiusculas_3 ( palavra, 0, tamanho );
    } // end if
    return ( soma );
} // end maiusculas_3 ( )

/**
  * Metodo16.
  */
void metodo16 ( void )
{
 // definir dado
    int x = 0;
 // identificar
    printf ( "\n%s\n", "Metodo16" );
 // acoes
    printf ( "\nmaisculas (%s) = %d", ""   , maiusculas_3 ( ""    ) );
    printf ( "\nmaisculas (%s) = %d", "A"  , maiusculas_3 ( "A"   ) );
    printf ( "\nmaisculas (%s) = %d", "a"  , maiusculas_3 ( "a"   ) );
    printf ( "\nmaisculas (%s) = %d", "AbC", maiusculas_3 ( "AbC" ) );
    printf ( "\nmaisculas (%s) = %d", "ABC", maiusculas_3 ( "ABC" ) );
 // encerrar
    printf ( "\n%s\n", "Apertar ENTER para continuar." );
    getchar( );
} // fim metodo16 ( )

/**
  * Funcao recursiva para contar maiusculas
  * @return quantidade de maiusculas
  * @param  palavra - na qual procurar maiusculas
  * @param  posicao - onde    procurar maiusculas
  */
int r_maiusculas_4 ( char palavra [], int posicao )
{
 // definir dados
    int  soma    =  0 ;
    char simbolo = '0';
    int  tamanho = strlen (palavra);
 // testar se posicao valida
    if ( 0 <= posicao && posicao < tamanho )
    {
     // separar simbolo da palavra
        simbolo = palavra [ posicao ];
 	printf ( "\nposicao = %d simbolo = %c", posicao, simbolo );
     //	getchar( );
 	if ( 'A' <= simbolo && simbolo <= 'Z' )
	{  soma = 1;  }
        soma = soma + r_maiusculas_4 ( palavra, posicao+1 );
    } // end if
    return ( soma );
} // end r_maiusculas_4 ( )

/**
  * Funcao (de servico) para preparar a execucao recursiva.
  * @return quantidade de maiusculas
  * @param  palavra - na qual procurar maiusculas
  */
int maiusculas_4 ( char palavra [] )
{
 // definir dados
    int soma    = 0;
    int tamanho = strlen( palavra );
 // verificar se ha' dados
    if ( tamanho > 0 )
    {
       soma = r_maiusculas_4 ( palavra, 0 );
    } // end if
    return ( soma );
} // end maiusculas ( )

/**
  * Metodo17.
  */
void metodo17 ( void )
{
 // definir dado
    int x = 0;
 // identificar
    printf ( "\n%s\n", "Metodo17" );
 // acoes
    printf ( "\nmaisculas (%s) = %d", ""   , maiusculas_4 ( ""    ) );
    printf ( "\nmaisculas (%s) = %d", "A"  , maiusculas_4 ( "A"   ) );
    printf ( "\nmaisculas (%s) = %d", "a"  , maiusculas_4 ( "a"   ) );
    printf ( "\nmaisculas (%s) = %d", "AbC", maiusculas_4 ( "AbC" ) );
    printf ( "\nmaisculas (%s) = %d", "ABC", maiusculas_4 ( "ABC" ) );
 // encerrar
    printf ( "\n%s\n", "Apertar ENTER para continuar." );
    getchar( );
} // fim metodo17 ( )

/**
  * Funcao recursiva para contar maiusculas
  * @return quantidade de maiusculas
  * @param  palavra - na qual procurar maiusculas
  * @param  posicao - onde    procurar maiusculas
  */
int r_maiusculas_5 ( char palavra [], int posicao )
{
 // definir dados
    int  soma    =  0 ;
    char simbolo = '0';
    int  tamanho = strlen (palavra);
 // testar se posicao valida
    if ( 0 <= posicao && posicao < tamanho )
    {
     // separar simbolo da palavra
        simbolo = palavra [ posicao ];
 	printf ( "\nposicao = %d simbolo = %c", posicao, simbolo );
     //	getchar( );
 	if ( 'A' <= simbolo && simbolo <= 'Z' )
	{  soma = 1;  }
        soma = soma + r_maiusculas_4 ( palavra, posicao+1 );
    } // end if
    return ( soma );
} // end r_maiusculas_5 ( )

/**
  * Funcao (de servico) para preparar a execucao recursiva.
  * @return quantidade de maiusculas
  * @param  palavra - na qual procurar maiusculas
  */
int maiusculas_5 ( char palavra [] )
{
    return ( r_maiusculas_5 ( palavra, 0 ) );
} // end maiusculas_5 ( )

/**
  * Metodo18.
  */
void metodo18 ( void )
{
 // definir dado
    int x = 0;
 // identificar
    printf ( "\n%s\n", "Metodo18" );
 // acoes
    printf ( "\nmaisculas (%s) = %d", ""   , maiusculas_5 ( ""    ) );
    printf ( "\nmaisculas (%s) = %d", "A"  , maiusculas_5 ( "A"   ) );
    printf ( "\nmaisculas (%s) = %d", "a"  , maiusculas_5 ( "a"   ) );
    printf ( "\nmaisculas (%s) = %d", "AbC", maiusculas_5 ( "AbC" ) );
    printf ( "\nmaisculas (%s) = %d", "ABC", maiusculas_5 ( "ABC" ) );
 // encerrar
    printf ( "\n%s\n", "Apertar ENTER para continuar." );
    getchar( );
} // fim metodo18 ( )

/**
  * Funcao recursiva para calcular somatorio.
  * @return somatorio dos primeiros naturais
  * @param  n - valor limite
  */
int somatorio_1 ( int n )
{
 // definir dado
    int soma = 0;
 // testar se e' possível calcular
    if ( n > 0 )
    {
       soma = n + somatorio_1 ( n-1 );
    } // end if
    return ( soma );
} // end somatorio_1 ( )

/**
  * Metodo19.
  */
void metodo19 ( void )
{
 // identificar
    printf ( "\n%s\n", "Metodo19" );
 // acoes
    printf ( "\nsomatorio (%2d) = %2d", (-5), somatorio_1 ( -5 ) );
    printf ( "\nsomatorio (%2d) = %2d", ( 0), somatorio_1 (  0 ) );
    printf ( "\nsomatorio (%2d) = %2d", ( 5), somatorio_1 (  5 ) );
 // encerrar
    printf ( "\n%s\n", "Apertar ENTER para continuar." );
    getchar( );
} // fim metodo19 ( )

/**
  * Funcao recursiva para calcular somatorio.
  * @return somatorio dos primeiros naturais
  * @param  n - valor limite
  */
int somatorio_2b ( int y, int n )
{
 // definir dado
    int soma = 0;
 // testar se e' possivel calcular
    if ( y <= n )
    {
       soma = y + somatorio_2b ( y+1, n );
    } // end if
    return ( soma );
} // end somatorio_2a ( )

/**
  * Funcao (de servico) para disparar somatorio recursivamente.
  * @return somatorio dos primeiros naturais
  * @param  n - valor limite
  */
int somatorio_2a ( int n )
{
    return ( somatorio_2b ( 1, n ) );
} // end somatorio_2a ( )

/**
  * Metodo20.
  */
void metodo20 ( void )
{
 // identificar
    printf ( "\n%s\n", "Metodo20" );
 // acoes
    printf ( "\nsomatorio (%2d) = %2d", (-5), somatorio_2a ( -5 ) );
    printf ( "\nsomatorio (%2d) = %2d", ( 0), somatorio_2a (  0 ) );
    printf ( "\nsomatorio (%2d) = %2d", ( 5), somatorio_2a (  5 ) );
 // encerrar
    printf ( "\n%s\n", "Apertar ENTER para continuar." );
    getchar( );
} // fim metodo20 ( )

// -------------------------- definicao do metodo principal

int main ( void )
{
 // definir dados/resultados
    int opcao = 0;

 // repetir ate' desejar parar
    do
    {
     // identificar
        printf ( "\n" );             // para saltar linha
        printf ( "%s\n", "Lista_00 - v.0.0 - 01/mm/20aa"       );
        printf ( "%s\n", "Matricula: 999999 Nome: xxx yyy zzz" );

     // mostrar opcoes
        printf ( "%s\n", "Opcoes:"         );
        printf ( "%s\n", " 0 - parar"      );
        printf ( "%s\n", " 1 - metodo 01   2 - metodo 02" );
        printf ( "%s\n", " 3 - metodo 03   4 - metodo 04" );
        printf ( "%s\n", " 5 - metodo 05   6 - metodo 06" );
        printf ( "%s\n", " 7 - metodo 07   8 - metodo 08" );
        printf ( "%s\n", " 9 - metodo 09  10 - metodo 10" );
        printf ( "%s\n", "11 - metodo 11  12 - metodo 12" );
        printf ( "%s\n", "13 - metodo 13  14 - metodo 14" );
        printf ( "%s\n", "15 - metodo 15  16 - metodo 16" );
        printf ( "%s\n", "17 - metodo 17  18 - metodo 18" );
        printf ( "%s\n", "19 - metodo 19  20 - metodo 20" );
        printf ( "%s\n", "" );        // para saltar linha

     // ler opcao
        printf ( "%s", "Qual a sua opcao? " );
        scanf  ( "%d", &opcao ); getchar ( );
        printf ( "%d",  opcao );

     // escolher acao
        switch ( opcao )
        {
           case  0:               break;
           case  1: metodo01 ( ); break; case  2: metodo02 ( ); break;
           case  3: metodo03 ( ); break; case  4: metodo04 ( ); break;
           case  5: metodo05 ( ); break; case  6: metodo06 ( ); break;
           case  7: metodo07 ( ); break; case  8: metodo08 ( ); break;
           case  9: metodo09 ( ); break; case 10: metodo10 ( ); break;
           case 11: metodo11 ( ); break; case 12: metodo12 ( ); break;
           case 13: metodo13 ( ); break; case 14: metodo14 ( ); break;
           case 15: metodo15 ( ); break; case 16: metodo16 ( ); break;
           case 17: metodo17 ( ); break; case 18: metodo18 ( ); break;
           case 19: metodo19 ( ); break; case 20: metodo20 ( ); break;
           default:
                    printf ( "\n%s\n\n", "ERRO: Opcao invalida." );
              break;
        } // fim escolher
    }
    while ( opcao != 0 );

 // encerrar execucao
    printf ( "\n%s\n\n", "Apertar ENTER para terminar." );
    getchar( );

} // end main ( )

/*
----------------------------- documentacao complementar


----------------------------- notas / observacoes / comentarios


----------------------------- previsao de testes


----------------------------- historico

Versao	Data	              Modificacao
  0.1	__/__	              esboco

 ---------------------------- testes

Versao	Teste
  0.1	01. ( OK )            identificacao de programa

*/

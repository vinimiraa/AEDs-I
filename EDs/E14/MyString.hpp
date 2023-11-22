/*
    Contato.hpp - v0.0. - 22 / 11 / 2023
    Author: Vinícius Miranda de Araújo
*/

#ifndef _MYSTRING_HPP_
#define _MYSTRING_HPP_

// dependencias
#include "libshow.hpp"  // Minha Biblioteca
#include "Erro.hpp"     // Classe de Tratamento de Erro

using std::cin;         // para entrada
using std::cout;        // para saida
using std::endl;        // para mudar de linha
using std::setw;        // para definir espacamento
using std::string;      // para cadeia de caracteres
using std::ifstream;    // para ler arquivo
using std::ofstream;    // para gravar arquivo


class MyString : public Erro
{
private:

    string s;

public:

    /**
     *  Construtor Padrão
    */
    MyString ( void )
    {
        this->s = "0";
    } // end construtor ( padrão )

    /**
     *  Construtor Alternativo
    */
    MyString ( std::string text )
    {
        this->s = text;
    } // end construtor ( alternativo )

    /**
     *  Método para atribuir conteúdo a String
    */
    void setString( std::string s )
    {
        this->s = s;
    } // end setString ( );

    /**
     *  Método para pegar conteúdo da String
    */
    std::string getString( )
    {
        return ( this->s );
    } // end getString ( )

    /**
     *  Método para converter String para Inteiro.
     *  @return Numero Inteiro.
    */
    int getInt( )
    {
        int  num      = 0;     // resposta;
        int  casas    = 1;     // quantidade de numeros;
        int  ponto    = -1;    // posicao da string em que o ponto esta;
        bool temPonto = false; // TRUE: tem ponto, logo real; FALSE: nao tem ponto, logo inteiro;
        bool sinal    = true;  // TRUE: positivo; FALSE: negativo;
        bool temSinal = false; // TRUE: tem sinal; FALSE: nao tem sinal;

        if ( s.empty( ) )
        {
            setErro( 1 );
            return ( -1 );
        }
        else
        {
            // testar se a string tem sinal ou ponto
            for (int x = 0; x < (int)s.size(); x = x + 1)
            {
                if ( s[0] == '-' || s[0] == '+' )
                {
                    temSinal = true;
                    if ( s[0] == '-' )
                    {
                        sinal = false;
                    }
                    else if ( s[0] == '+' )
                    {
                        sinal = true;
                    }
                }
                if ( s[x] == '.' ) 
                {
                    temPonto = true;
                    ponto = x;
                }
                else if( isAlpha( s[x] ) )
                {
                    setErro( 1 );
                    return ( -1 );
                }
            } // end for

            // converter para inteiro
            if ( temPonto && temSinal )
            {
                for ( int x = ponto - 1; x >= 1; x = x - 1 )
                {
                    num = num + ( ( s[x] - 48 ) * casas );
                    casas = casas * 10;
                } // end for
            } 
            else if ( temPonto )
            {
                for ( int x = ponto - 1; x >= 0; x = x - 1 )
                {
                    num = num + ( ( s[x] - 48 ) * casas );
                    casas = casas * 10;
                } // end for
            }
            else if ( temSinal )
            {
                for ( int x = s.size() - 1; x >= 1; x = x - 1 )
                {
                    num = num + ( ( s[x] - 48 ) * casas );
                    casas = casas * 10;
                } // end for
            }
            else
            {
                for ( int x = s.size() - 1; x >= 0; x = x - 1 )
                {
                    num = num + ( ( s[x] - 48 ) * casas );
                    casas = casas * 10;
                } // end for
            }
        } // end if

        if ( sinal )
            return ( num );
        else
            return ( num * (-1) );

    } // end getInt ( )

    /**
     *  Metodo para converter String para Real.
     *  @return Numero Real.
    */
    double getDouble( )
    {
        double  num      = 0.0;   // resposta
        double  decimal  = 0.0;   // parte decimal do numero
        double  inteira  = 0.0;   // parte inteira do numero
        double  casas    = 1.0;   // quantidade de numeros;
        int     ponto    = -1;    // posicao da string em que o ponto esta;
        bool    temPonto = false; // TRUE: tem ponto, logo real; FALSE: nao tem ponto, logo inteiro;
        bool    sinal    = true;  // TRUE: positivo; FALSE: negativo;
        bool    temSinal = false; // TRUE: tem sinal; FALSE: nao tem sinal;

        if ( s.empty( ) )
        {
            setErro( 2 );
            return ( 0.0 );
        }
        else
        {
            // testar se a string tem sinal ou ponto
            for (int x = 0; x < (int)s.size(); x = x + 1)
            {
                if ( s[0] == '-' || s[0] == '+' )
                {
                    temSinal = true;
                    if ( s[0] == '-' )
                    {
                        sinal = false;
                    }
                    else if ( s[0] == '+' )
                    {
                        sinal = true;
                    }
                }
                if ( s[x] == '.' ) 
                {
                    temPonto = true;
                    ponto = x;
                }
                else if( isAlpha( s[x] ) )
                {
                    setErro( 2 );
                    return ( 0.0 );
                }
            } // end for

            // somar a parte decimal
            if( temPonto )
            {
                casas = 10.0;
                for( int x = ponto + 1; x < (int)s.size( ); x = x + 1 )
                {
                    decimal = decimal + ( s[x] - 48 ) / casas;
                    casas = casas * 10.0;
                } // end for
            } 
            else
            {
                ponto = s.size( );
            } // end if
            
            casas = 1.0;
            // somar a parte inteira
            if( temSinal )
            {
                for( int x = ponto-1; x >= 1; x = x - 1 )
                {
                    inteira = inteira + ( s[x] - 48 ) * casas;
                    casas = casas * 10.0;
                } // end for
            } 
            else
            {
                for( int x = ponto-1; x >= 0; x = x - 1 )
                {
                    inteira = inteira + ( s[x] - 48 ) * casas;
                    casas = casas * 10.0;
                } // end for
            } // end if

            num = inteira + decimal;
        } // end if

        if ( sinal )
            return ( num * (1.0) );
        else
            return ( num * (-1.0) );
        
    } // end getDouble ( )

    /**
     *  Método para converter String para maiusculo.
     *  @return String maiuscula.
    */
    std::string toUpperCase( std::string str )
    {
        for( int x = 0; x < (int)str.size( ); x = x + 1 )
        {
            str[x]= toUpper( str[x] );
        }
        return ( str );
    }

    /**
     *  Método para converter String para minusculo.
     *  @return String minuscula.
    */
    std::string toLowerCase( std::string str )
    {
        for( int x = 0; x < (int)str.size( ); x = x + 1 )
        {
                str[x]= toLower( str[x] );
        }
        return ( str );
    }
    /**
     *  Método para converter String para Boolean.
     *  @return True ou False.
    */
    bool getBoolean( )
    {
        bool result = false;

        if( s == "1" || s == "T" || toUpperCase( s ) == "TRUE" )
        {
            result = true;
        }
        else if( s == "0" || s == "F" || toUpperCase( s ) == "FALSE" )
        {
            result = false;
        }
        else
        {
            setErro( 3 );
            result = false;
        } // end if

        return ( result );

    } // end getBoolean ( )

    bool contains( std::string text )
    {
        bool result = false;

        

        return ( result );
    }

    std::string getErroMsg()
    {

        std::string erroMsg = "";

        switch( getErro( ) )
        {
            case 0: 
                erroMsg = NO_ERROR; 
                break;
            case 1: 
                erroMsg = "[ERRO] Nao foi possivel converter para inteiro"; 
                break;
            case 2: 
                erroMsg = "[ERRO] Nao foi possivel converter para real"; 
                break;
            case 3: 
                erroMsg = "[ERRO] Nao foi possivel converter para valor logico"; 
                break;
            case 4: 
                erroMsg = "[ERRO] Nao foi possivel encontrar a substring"; 
                break;
            case 5: 
                erroMsg = "[ERRO] Nao foi possivel alocar memoria para dividir string"; 
                break;
            case 6: 
                erroMsg = "[ERRO] Nao foi possivel inverter a string"; 
                break;
            default: 
                erroMsg = "Codigo de erro invalido"; 
                break;
        }

        return ( erroMsg );

    } // end getErroMsg ( )


}; // end class MyString

#endif

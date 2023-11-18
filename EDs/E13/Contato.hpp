/*
    Contato.hpp - v0.0. - 14 / 11 / 2023
    Author: Vinícius Miranda de Araújo 
*/

// ----------------------------------------------- definicoes globais

#ifndef _CONTATO_H_
#define _CONTATO_H_

// dependencias
#include <iostream>
using std::cin ; // para entrada
using std::cout; // para saida
using std::endl; // para mudar de linha

#include <iomanip>
using std::setw; // para definir espacamento

#include <string>
using std::string; // para cadeia de caracteres

#include <fstream>
using std::ofstream; // para gravar arquivo
using std::ifstream; // para ler arquivo

#include "Erro.hpp"

// ---------------------------------------------- definicao de classe

/**
 * Classe para tratar contatos, derivada da classe Erro.
 */
class Contato : public Erro
{
    /**
        atributos privados.
    */
    private:
        string nome;
        string fone;
        string fone2;
        
        bool phoneIsValid_a ( )
        {
            bool result = true;
            int x = 0;
            while( x < fone.size( ) && result )
            {
                if( ( '0' > fone[x] || fone[x] > '9' ) && fone[x] != '-' )
                {
                    result = false;
                } // end if
                x = x + 1;
            } // end while
            
            return ( result );
        } // end phoneIsValid ( )
        
    /**
        definicoes publicas.
    */
    public:

    /**
        Destrutor.
    */
    ~Contato ( )
    { }

    /**
    *   Construtor padrao.
    */
    Contato ( )
    {
        setErro ( 0 ); // nenhum erro, ainda
        // atribuir valores iniciais vazios
        nome  = "";
        fone  = "";
        fone2 = "";
    } // end constructor (padrão)
    
    // ----------------------------------- metodos para acesso

    /**
    *   Metodo para atribuir nome.
    *   @param nome a ser atribuido
    */
    void setNome ( std::string nome )
    {
        if ( nome.empty ( ) )
            setErro ( 1 ); // nome invalido
        else
            this->nome = nome;
    } // end setNome ( )

    /**
    *   Metodo para atribuir telefone.
    *   @param fone a ser atribuido
    */
    void setFone ( std::string fone )
    {
        if ( fone.empty ( ) )
            setErro ( 2 ); // fone invalido
        else
            this->fone = fone;
    } // end setFone ( )
    
    /**
    *   Metodo para atribuir telefone.
    *   @param fone2 a ser atribuido
    */
    void setFone2 ( std::string fone2 )
    {
        if ( fone2.empty ( ) )
            setErro ( 2 ); // fone invalido
        else
            this->fone2 = fone2;
    } // end setFone ( )

    /**
    *   Funcao para obter nome.
    *   @return nome armazenado
     */
    std::string getNome ( )
    {
        return ( this->nome );
    } // end getNome ( )

    /**
    *   Funcao para obter fone.
    *   @return fone armazenado
    */
    std::string getFone ( )
    {
        return ( this->fone );
    } // end getFone ( )
    
    /**
    *   Funcao para obter fone.
    *   @return fone armazenado
    */
    std::string getFone2 ( )
    {
        return ( this->fone2 );
    } // end getFone ( )
    
    /**
    *   Funcao para obter dados de uma pessoa.
    *   @return dados de uma pessoa
    
    std::string toString ( )
    {
        return ( "{ "+getNome( )+", "+getFone( )+" }" );
    } // end toString ( )
    */
    
    /**
    *   Funcao para obter dados de uma pessoa.
    *   @return dados de uma pessoa
    */
    std::string toString ( )
    {
        return ( "{ "+getNome( )+", "+getFone( )+", "+getFone2( )+" }" );
    } // end toString ( )

    /**
    *   Construtor alternativo.
    *   @param nome_inicial a ser atribuido
    *   @param fone_inicial a ser atribuido
    */
    Contato ( std::string nome_inicial, std::string fone_inicial, std::string fone2_inicial )
    {
        setErro ( 0 ); // nenhum erro, ainda
        // atribuir valores iniciais
        setNome ( nome_inicial ); // nome = nome_inicial;
        setFone ( fone_inicial ); // fone = fone_inicial;
        setFone2( fone2_inicial); // fone2= fone2_inicial;
    } // end constructor (alternativo)

    /**
    *   Construtor alternativo baseado em copia.
    */
    Contato ( Contato const & another )
    {
        // atribuir valores iniciais por copia
        setErro ( 0 ); // copiar erro
        setNome ( another.nome ); // copiar nome
        setFone ( another.fone ); // copiar fone
        setFone2( another.fone2); // copiar fone 2
    } // end constructor (alternativo)
    
    void readName( std::string text )
    {
        std::string name;
        cout << text;
        cin >> name;
        // getchar( );
        setNome( name );
    } // end readName ( ) 
    
    void readPhone( std::string text )
    {
        std::string phone;
        cout << text;
        cin >> phone;
        // getchar( );
        setFone( phone );
    }
    
    bool phoneIsValid ( )
    {
        return ( phoneIsValid_a( ) );
    } // end phoneIsValid ( )
    
    void readFromFile( std::string fileName )
    {
        ifstream afile;
        std::string n = "0";
        std::string f = "0";

        afile.open( fileName );
        afile >> n;
        afile >> f;
        
        if ( n.empty() || f.empty() )
        {
            cout << "\nERROR: missing datas.\n" << endl;
        }
        else
        {
            nome = n;
            fone = f;
        } // end if
        
        afile.close();
    } // end readFromFile ( )
    
    void writeToFile( std::string fileName )
    {
        ofstream afile;
        std::string n = "0";
        std::string f = "0";
        
        afile.open(fileName);
        
        cout << "Nome = ";
        cin >> n;
        
        cout << "Telefone = ";
        cin >> f;
        
        afile << n << endl;
        afile << f << endl;
        
        afile.close();
    } // end writeToFile ( )
    
    int phones( )
    {
        int n = 0;
        
        if( fone.empty( ) && fone2.empty( ) )
            n = 0;
        else if( fone.empty( ) || fone2.empty( ) )
            n = 1;
        else
            n = 2;
        
        return ( n );
    } // end phones ( )
    
}; // fim da classe Contato

using ref_Contato = Contato*; // similar a typedef Contato* ref_Contato;

#endif
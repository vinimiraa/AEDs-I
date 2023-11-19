#include <cstring>  // C compativel

#include <iostream>
#include <string>   // C++ exclusiva

void method_01 ( )
{
 // definir dados
    std::string s0 = "abcde";
    std::string s1;

 // identificar
    std::cout << "\nTestes com strings e atribuicoes\n\n";

 // testes
    s1.assign ( "fghij" );  // atribuir
    std::cout << "s0 = " << s0 << std::endl;
    std::cout << "s1 = " << s1 << std::endl;
    std::cout << std::endl;

    s1 = s0;                // atribuir
    std::cout << "s1 = " << s1 << std::endl;
    std::cout << std::endl;

    s0 = "ABCDE";           // atribuir
    std::cout << "s0 = " << s0 << std::endl;
    std::cout << "s1 = " << s1 << std::endl;
    std::cout << std::endl;
} //end method_01 ( )

void method_02 ( )
{
 // definir dados
    std::string *ref_s0 = new std::string;
    std::string *ref_s1 = new std::string ( "56789" );

 // identificar
    std::cout << "\nTestes com referencias para strings\n\n";

 // testes
    ref_s0->assign ( "01234" );
    std::cout << "ref_s0 = "
              << *ref_s0
              << std::endl;
    std::cout << "ref_s1 = "
              <<  ref_s1->c_str( )
              << std::endl;
    std::cout << std::endl;

    ref_s1 = ref_s0; // apontam o mesmo objeto
    std::cout << "ref_s1 = "
              << *ref_s1
              << std::endl;
    std::cout << std::endl;

    ref_s0->assign ( "43210" );
    std::cout << "ref_s0 = "
              << *ref_s0
              << std::endl;
    std::cout << "ref_s1 = "
              <<  ref_s1->c_str( )
              << std::endl;
    std::cout << std::endl;
} //end method_02 ( )

void method_03 ( )
{
 // definir dados
    std::string s0 = "abcde";
    std::string s1 = "fghij";

    std::string *ref_s0 = new std::string ( "01234" );
    std::string *ref_s1 = new std::string ( "56789" );

    char c_s0 [80];
    char c_s1 [80];

 // identificar
    std::cout << "\nTestes com strings e cadeias de caracteres\n\n";

 // testes
 // strcpy ( c_s0,  ref_s0 );           // ERRO
 // strcpy ( c_s0, *ref_s0 );           // ERRO
 // strcpy ( c_s0,  ref_s0->data );     // ERRO
    strcpy ( c_s0, ref_s1->c_str( ) );  // C   <- C++
    std::cout << "c_s0 = " << c_s0 << std::endl;
    strcpy ( c_s1, "98765" );
    s1 = c_s1;                          // C++ <- C
    std::cout << "s1 = " << s1 << std::endl;
    ref_s1->assign ( c_s1 );
    std::cout << "ref_s1 = "
              <<  ref_s1->c_str( )
              << std::endl;
//  c_s1 = s1;   // ERRO: C <- C++, sem conversao
    strcpy ( c_s1, s1.c_str( ) );
    std::cout << "c_s1 = "
              <<  c_s1
              << std::endl;
    std::cout << std::endl;
} //end method_03 ( )

void method_04 ( )
{
 // definir dados
    std::string s0 = "abcde";
    std::string s1 = "fghij";

    std::string *ref_s0 = new std::string ( "01234" );
    std::string *ref_s1 = new std::string ( "56789" );

    char c_s0 [80];
    char c_s1 [80];

 // identificar
    std::cout << "\nTestes com strings e extremidades\n\n";

 // testes
    std::cout << "s0 = " << s0      << std::endl;
    std::cout << "front(s0) = "
              << s0.front( )        << std::endl;
    std::cout << "front(s0) = " 
              << s0[0]              << std::endl;
    std::cout << "front(s0) = " 
              << s0.at(0)           << std::endl;
    std::cout << "back (s0) = " 
              << s0.back ( )        << std::endl;
    std::cout << "back (s0) = " 
              << s0[s0.length()-1]  << std::endl;
    std::cout << "back (s0) = " 
              << s0.at(s0.size()-1) << std::endl;
    std::cout << std::endl;
} //end method_04 ( )

void method_05 ( )
{
 // definir dados
    std::string s0 = "abcde";
    std::string s1 = "fghij";

    std::string *ref_s0 = new std::string ( "01234" );
    std::string *ref_s1 = new std::string ( "56789" );

    char c_s0 [80];
    char c_s1 [80];

 // identificar
    std::cout << "\nTestes com strings e manipulacoes de extremidades\n\n";

 // testes
    s0.push_back ( 'F' ); // string+char
    std::cout << "push_back(s0,'F') = "
              << s0
              << "\ns0.length   = " << s0.length( )
              << "\ns0.size     = " << s0.size( )
              << "\ns0.capacity = " << s0.capacity( )
              << std::endl;
    s0.append ( "G" );   // string+string
    std::cout << "append(s0,\"G\") = "
              << s0
              << std::endl;

    s0.pop_back  ( );
    std::cout << "pop_back(s0)= "
              << s0
              << "\ns0.length   = " << s0.length( )
              << "\ns0.size     = " << s0.size( )
              << "\ns0.capacity = " << s0.capacity( )
              << std::endl;
    s0.erase (s0.length()-1,1);
    std::cout << "pop_back(s0)= "
              << s0
              << std::endl;
    std::cout << std::endl;
} //end method_05 ( )

//  ---
                      // heranca
class mystring : public std::string 
{
 public:
    std::string push_front ( char c )
    {
       this->insert(0,1,c);
       return (*this);
    }
    
    std::string pop_front ( )
    {
       this->erase(0,1);
       return (*this);
    }

    std::string my_append ( char c )
    {
       this->insert(this->length(),1,c);
       return (*this);
    }
   
    std::string concat ( std::string s )
    {
       this->append ( s );
       return (*this);
    }

    std::string concat ( char c )
    {
       this->insert(this->length(),1,c);
       return (*this);
    }
   
    std::string concat ( const char *s )
    {
       this->append ( s );
       return (*this);
    }

    std::string concat ( mystring s )
    {
       this->append ( s );
       return (*this);
    }

}; // end class mystring

void method_06 ( )
{
 // definir dados
    std::string s0 = "abcde";
    std::string s1 = "fghij";

    std::string *ref_s0 = new std::string ( "01234" );
    std::string *ref_s1 = new std::string ( "56789" );

    char c_s0 [80];
    char c_s1 [80];

 // identificar
    std::cout << "\nTestes com strings em classe derivada\n\n";

 // testes
    mystring m_s0;

    m_s0.assign ( "FGHIJ" );
    std::cout << "m_s0 = " << m_s0 << std::endl;
    m_s0.push_back  ( 'K' );
    std::cout << "m_s0 = " << m_s0 << std::endl;
    m_s0.push_front ( 'E' );  // so' em mystring
    std::cout << "m_s0 = " << m_s0 << std::endl;
    m_s0.pop_back   ( );
    std::cout << "m_s0 = " << m_s0 << std::endl;
    m_s0.pop_front  ( );      // so' em mystring
    std::cout << "m_s0 = " << m_s0 << std::endl;
    m_s0.my_append  ( 'K' );  // so' em mystring
    std::cout << "m_s0 = " << m_s0 << std::endl;
    std::cout << std::endl;
} //end method_06 ( )

void method_07 ( )
{
 // definir dados
    std::string s0 = "abcde";
    std::string s1 = "fghij";

    std::string *ref_s0 = new std::string ( "01234" );
    std::string *ref_s1 = new std::string ( "56789" );

    char c_s0 [80];
    char c_s1 [80];

    mystring m_s0;

 // identificar
    std::cout << "\nTestes com strings e conversoes\n\n";

 // testes
    int  x = 54321;

    s0 = std::to_string ( x );
    std::cout << "s0 = " << s0 << std::endl;
    s1 = std::to_string ( x/100.0 );
    std::cout << "s1 = " << s1 << std::endl;
    std::cout << std::endl;
    m_s0.assign ( std::to_string ( x ) );
    std::cout << "m_s0 = " << m_s0 << std::endl;
    m_s0.assign ( std::to_string ( x/100.0 ) );
    std::cout << "m_s0 = " << m_s0 << std::endl;
    m_s0.assign ( std::to_string ( 'A' ) );
    std::cout << "m_s0 = " << m_s0 << std::endl;
    m_s0.assign ( std::to_string ( (char)'A' ) );
    std::cout << "m_s0 = " << m_s0 << std::endl;
    m_s0.assign ( std::string ( 1,'A' ) );
    std::cout << "m_s0 = " << m_s0 << std::endl;
    std::cout << std::endl;

    s1 = std::to_string ( x );
    std::cout << "s0 = " << s0 << std::endl;
    std::cout << "s1 = " << s1 << std::endl;
    std::cout << std::endl;
} //end method_07 ( )

void method_08 ( )
{
 // definir dados
    std::string s0 = "abcde";
    std::string s1 = "abcde";

    std::string *ref_s0 = new std::string ( "01234" );
    std::string *ref_s1 = new std::string ( "56789" );

    char c_s0 [80];
    char c_s1 [80];

    mystring  m_s0;
    
    int  x = 54321;

 // identificar
    std::cout << "\nTestes com strings e comparacoes\n\n";

 // testes
    if ( s0 == s1 )
    {
       std::cout << "s0 == s1" << std::endl;
    }
    else
    {
       std::cout << "s0 != s1" << std::endl;
    }
    x = s0.compare( s1 );
    std::cout << "x = " << x << std::endl;
    if ( s0.compare( s1 ) == 0 )
    {
       std::cout << "s0 == s1" << std::endl;
    }
    else
    {
       std::cout << "s0 != s1" << std::endl;
    }

    s1.resize ( s1.size( )+1 );
    if ( s0.compare( s1 ) == 0 )
    {
       std::cout << "s0 == s1" << std::endl;
    }
    else
    {
       std::cout << std::endl;
       std::cout << "s0 != s1" << std::endl;
       std::cout << std::endl;
       std::cout << "[" << s0 << "]"
                 << "\ns0.length   = " << s0.length( )
                 << "\ns0.size     = " << s0.size( )
                 << "\ns0.capacity = " << s0.capacity( )
                 << std::endl;

       std::cout << std::endl;
       std::cout << "[" << s1 << "]"
                 << "\ns1.length   = " << s1.length( )
                 << "\ns1.size     = " << s1.size( )
                 << "\ns1.capacity = " << s1.capacity( )
                 << std::endl;
    }
    std::cout << std::endl;
} //end method_08 ( )

void method_09 ( )
{
 // definir dados
    std::string s0 = "abcde";
    std::string s1 = "fghij";

    std::string *ref_s0 = new std::string ( "01234" );
    std::string *ref_s1 = new std::string ( "56789" );

    char c_s0 [80];
    char c_s1 [80];

    mystring  m_s0;

 // identificar
    std::cout << "\nTestes com strings e concatenacoes\n\n";

 // testes
    s0 = "123";
    s1 = "456";

    s0 = s0+s1;
    std::cout << "s0 = " << s0 << std::endl;

    s0 = "123";
    s0.append ( s1 );
    std::cout << "s0 = " << s0 << std::endl;
    std::cout << std::endl;

    m_s0.assign ( "" );
    m_s0.concat ( "123");
    std::cout << "m_s0 = " << m_s0 << std::endl;
    m_s0.concat ( '4' );
    std::cout << "m_s0 = " << m_s0 << std::endl;
    m_s0.concat ( "5" );
    std::cout << "m_s0 = " << m_s0 << std::endl;
    m_s0.concat ( "67" );
    std::cout << "m_s0 = " << m_s0 << std::endl;
    m_s0.concat ( std::string ("89") );
    std::cout << "m_s0 = " << m_s0 << std::endl;
    std::cout << std::endl;
} //end method_09 ( )

void method_10 ( )
{
 // definir dados
    std::string s0 = "abcde";
    std::string s1 = "fghij";

    std::string *ref_s0 = new std::string ( "01234" );
    std::string *ref_s1 = new std::string ( "56789" );

    char c_s0 [80];
    char c_s1 [80];

    mystring  m_s0;

 // identificar
    std::cout << "\nTestes com strings e outras manipulacoes\n\n";

 // testes
    for ( int x=0; x<s0.length( ); x=x+1 )
    {   std::cout << s0.at(x) << " ";    }
    std::cout << std::endl;
    std::cout << std::endl;
    for ( int x=ref_s0->length( )-1; x>=0;  x=x-1 )
    {   std::cout << ref_s0->at(x) << " ";  }
    std::cout << std::endl;
    std::cout << std::endl;
    for ( const char c : s0 )
    {   std::cout << c << " ";   }
    std::cout << std::endl;
    std::cout << std::endl;
} //end method_10 ( )

// ---

int main ( void )
{
 // ---
    method_01 ( );
    method_02 ( );
    method_03 ( );
    method_04 ( );
    method_05 ( );

    method_06 ( );
    method_07 ( );
    method_08 ( );
    method_09 ( );
    method_10 ( );
//  ---
    std::cout << std::endl;
    std::cout << std::endl;
    return ( 0 );
}
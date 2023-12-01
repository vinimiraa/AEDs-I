#include <cstdio>
#include <cstdlib>

/**/
class intCell
{
 // data
    protected:
        int      value;
        intCell *link ;
 // methods prototypes
    public:
        intCell             ( void );
        intCell             ( int value );
        intCell             ( int value, intCell* link );
        void     set_value  ( int value );
        int      get_value  ( void );
        void     set_link   ( intCell* link   );
        intCell* get_link   ( void );
        void     connect    ( intCell* second );
        void     disconnect ( intCell* second );
        void     print      ( void );
        int      length     ( void );
        intCell* push_back  ( int value );
        intCell* pop_back   ( void );
        intCell* push_front ( int value );
        intCell* pop_front  ( void );
        int      at         ( unsigned int index );
        void     swap       ( intCell* second    );
        void     test       ( void );
}; // end class

/**/

/*
    _______   
   | value |  
   |_______|  
   | link --->
   |_______|  
              
    intCell   
*/
/*
typedef
  struct s_Cell              // descritor da celula
  {
	 int            value;
	 struct s_Cell *link;
  }
intCell;
*/
/*
    _______   
   |  ptr --->
   |_______|  
   
  ref_intCell
*/
typedef                      // referencia para celula
  intCell *
ref_intCell;


// montadores

/*
// Criar nova celula
1.
    _______   
   | this --->               // referencia estrutural/primaria
   |_______|  
   
  ref_intCell

2. 
    _______             
   | this ---+               // referencia + celula vazia
   |_______| |          
             |          
             v_______   
             | value |  
             |_______|  
             | link ---> ???
             |_______|  
                        
    intCell

3.
    _______                 
   | this ---+               // referencia + celula com valores
   |_______| |           
             |           
             v_______    
             |   x   |   
             |_______|   
             |      ---+ 
             |_______| | 
    intCell           _v_ NULL
                       _ 

	
*/
intCell::intCell ( void )
{
}
intCell::intCell ( int value )
{
    this->value = value;
}
intCell::intCell ( int value, ref_intCell link )
{
    this->value = value;
    this->link  = link ;
} // end new_intCell ( )

// Metodos para acessos a atributos
void intCell::set_value ( int value )
{
    this->value = value;
} // end intCell::set_value ( )

int intCell::get_value ( void )
{
    int value = 0;
    value = this->value;
    return ( value );
} // end intCell::get_value ( )

void intCell::set_link ( ref_intCell link )
{
    this->link = link;
} // end intCell::set_link ( )

ref_intCell intCell::get_link ( void )
{
    ref_intCell link = nullptr;
    link = this->link;
    return ( link );
} // end intCell::get_link ( )

/*
// Conectar uma celula a outra
1.
    apontador                  apontador de 
    estrutural                 servico (auxiliar)
    _______                    _______              
   | 1st  ---+                | 2nd  ---+           
   |_______| |                |_______| |           
             |                          |           
             v_______                   v_______    
             |   x   |                  |   y   |   
             |_______|                  |_______|   
             |      ---+                |      ---+ 
             |_______| |                |_______| | 
    intCell           _v_      intCell           _v_
                       -                          - 

2.	
    _______                    _______              
   | 1st  ---+                | 2nd  ---+           
   |_______| |                |_______| |           
             |                          |           
             v_______                   v_______    
             |   x   | +--------------->|   y   |   
             |_______| |                |_______|   
             |      ---+                |      ---+ 
             |_______|                  |_______| | 
    intCell                    intCell           _v_
                                                  - 

3.	
    _______                                         
   | 1st  ---+                                      
   |_______| |                                      
             |                                      
             v_______                    _______    
             |   x   | +--------------->|   y   |   
             |_______| |                |_______|   
             |      ---+                |      ---+ 
             |_______|                  |_______| | 
    intCell                    intCell           _v_
                                                  - 

*/
void intCell::connect ( ref_intCell second )
{
    if ( second )
	{
       intCell::set_link ( second );
	} // end if
} // end intCell::connect ( )

/*
// Desconectar uma celula de outra
1.	
    _______               _______              
   | 1st  ---+           | 2nd  ---+           
   |_______| |           |_______| |           
             |                     |           
             v_______              v_______    
             |   x   | +---------->|   y   |   
             |_______| |           |_______|   
             |      ---+           |      ---+ 
             |_______|             |_______| | 
    intCell               intCell           _v_
                                             - 

2.	
    _______               ________              
   | 1st  ---+           |  2nd  ---+           
   |_______| |           |________| |           
             |                      |           
             v_______               v_______    
             |   x   |              |   y   |   
             |_______|              |_______|   
             |      ---+            |      ---+ 
             |_______| |            |_______| | 
    intCell           _v_ intCell           _v_ 
                       -                     -  

*/
void intCell::disconnect ( ref_intCell second )
{
    if ( intCell::get_link ( ) == second )
    {
       intCell::set_link ( nullptr );
    } // end if
} // end intCell::disconnect ( )

/*
// Mostrar conteudos de celulas
1.	
    _______              _______              
   | this ---+       +--- tmp   |             
   |_______| |       |  |_______|               tmp = this;
             |       |                              
             v_______v              _______    
             |   x   | +---------->|   y   |   
             |_______| |           |_______|   
             |      ---+           |      ---+ 
             |_______|             |_______| | 
    intCell              intCell            _v_
                                             - 

2.	
    _______               _______              
   | this ---+           | tmp  ---+            tmp = this->link; 
   |_______| |           |_______| |           
             |                     |           
             v_______              v_______    
             |   x   | +---------->|   y   |   
             |_______| |           |_______|   
             |      ---+           |      ---+ 
             |_______|             |_______| | 
    intCell               intCell           _v_
                                             - 

3.	
    _______               _______              
   | this ---+           | tmp  -------------+ tmp = tmp->link = NULL;
   |_______| |           |_______|           | 
             |                               | 
             v_______               _______  | 
             |   x   | +---------->|   y   | | 
             |_______| |           |_______| v 
             |      ---+           |      ---+ 
             |_______|             |_______| | 
    intCell               intCell           _v_
                                             - 

*/
void intCell::print ( void )
{
    ref_intCell tmp = this; // apontador de servico
	if ( ! tmp )            // se nao existir
	{
		printf ( "[]" );    // vazio
	}
	else
	{
        while ( tmp )       // enquanto existir dado
        {
            printf ( "%d ", tmp->intCell::get_value ( ) );
            tmp = tmp->intCell::get_link ( ); // proximo
		} // end while
    } // end if
    printf ( "\n" );
} // end intCell::print ( )

// Obter a quantidade de celulas 
int intCell::length ( void )
{
    ref_intCell tmp    = this; // apontador de servico
    int         length = 0;
    while ( tmp )              // enquanto houver dado
    {
        length = length + 1;
        tmp    = tmp->intCell::get_link ( ); // proximo
    } // end while
    return ( length );
} // end intCell::length ( )

/*
// Inserir nova celula no final
1.
    _______             _______               _______              
   | this ---+       +--- back |             | tmp  ---+           
   |_______| |       | |_______|             |_______| |           
             |       |                                 |           
             v_______v            _______              v_______    
             |   x   | +-------->|   y   |             |   z   |   
             |_______| |         |_______|             |_______|   
             |      ---+         |      ---+           |      ---+ 
             |_______|           |_______| |           |_______| | 
    intCell             intCell           _v_                   _v_
                                           -                     - 

2.	
    _______             _______               _______              
   | this ---+         | back ---+           | tmp  ---+           
   |_______| |         |_______| |           |_______| |           
             |                   |                     |           
             v_______            v_______              v_______    
             |   x   | +-------->|   y   |             |   z   |   
             |_______| |         |_______|             |_______|   
             |      ---+         |      ---+           |      ---+ 
             |_______|           |_______| |           |_______| | 
    intCell             intCell           _v_ intCell           _v_
                                           -                     - 

3.	
    _______             _______               _______              
   | this ---+         | back ---+           | tmp  ---+           
   |_______| |         |_______| |           |_______| |           
             |                   |                     |           
             v_______            v_______              v_______    
             |   x   | +-------->|   y   | +---------->|   z   |   
             |_______| |         |_______| |           |_______|   
             |      ---+         |      ---+           |      ---+ 
             |_______|           |_______|             |_______| | 
    intCell             intCell               intCell           _v_
                                                                 - 

*/
ref_intCell intCell::push_back ( int value )
{
 // guardar o dado em uma celula (provisoriamente)
    ref_intCell tmp  = new intCell ( value, nullptr );
    ref_intCell back = this;
    if ( back && tmp )
    { // procurar a referencia para conexao
         while ( back->link != nullptr )
         {
            back = back->intCell::get_link ( );
         } // end while
      // conectar a celula nova		 
         back->intCell::connect ( tmp );
	  // atualizar o ultimo
         back = tmp;	  
    } // end if
 // retornar a ultima inserida	
    return ( back );
} // end intCell::push_back ( )

/*
// Remover celula do final
// OBS.: NAO removera' a primeira celula.
1.	
    _______             _______               _______              
   | this ---+       +--- last |           +--- back |             
   |_______| |       | |_______|           | |_______|             
             |       |     +---------------+                       
             |       |	   |                                       
             v_______v <---+      _______               _______    
             |   x   | +-------->|   y   | +---------->|   z   |   
             |_______| |         |_______| |           |_______|   
             |      ---+         |      ---+           |      ---+ 
             |_______|           |_______|             |_______| | 
    intCell             intCell               intCell           _v_
                                                                 - 

2.	
    _______             _______               _______              
   | this ---+       +--- last |           +--- back |             
   |_______| |       | |_______|           | |_______|             
             |       |           +---------+                       
             |       |	         |                                 
             v_______v           v_______               _______    
             |   x   | +-------->|   y   | +---------->|   z   |   
             |_______| |         |_______| |           |_______|   
             |      ---+         |      ---+           |      ---+ 
             |_______|           |_______|             |_______| | 
    intCell             intCell               intCell           _v_
                                                                 - 

3.                                                                 
    _______             _______               _______              
   | this ---+         | last ---+           | back ---+           
   |_______| |         |_______| |           |_______| |           
             |                   |                     |           
             v_______            v_______              v_______    
             |   x   | +-------->|   y   | +---------->|   z   |   
             |_______| |         |_______| |           |_______|   
             |      ---+         |      ---+           |      ---+ 
             |_______|           |_______|             |_______| | 
    intCell             intCell               intCell           _v_
                                                                 - 

4.                                                                 
    _______             _______               _______              
   | this ---+         | last ---+           | back ---+           
   |_______| |         |_______| |           |_______| |           
             |                   |                     |           
             v_______            v_______              v_______    
             |   x   | +-------->|   y   |             |   z   |   
             |_______| |         |_______|             |_______|   
             |      ---+         |      ---+           |      ---+ 
             |_______|           |_______| |           |_______| | 
    intCell             intCell           _v_ intCell           _v_
                                           -                     - 


*/
ref_intCell intCell::pop_back ( void )
{
 // definir auxiliares (apontadores para servicos)
    ref_intCell back = nullptr;
    ref_intCell last = nullptr;
 // procurar o ultimo e o penultimo
    back = this; // ultimo
    last = this; // penultimo
    while ( back->link ) 
    {  // enquanto houver dado
       last = back;       // guardar 
       back = back->link; // avancar
    } // end while	
    if ( last != back )
    {  // se houver penultimo e ultimo
       last->intCell::disconnect ( back );
	   // back = last;
    } // end if
 // retornar o desconectado
    return ( back );
} // end intCell::pop_back ( )

/*
// Inserir nova celula no inicio
1.
    _______                                   _______              
   | this ---+                               | tmp  ---+           
   |_______| |                               |_______| |           
             |                                         |           
             v_______             _______              v_______    
             |   y   | +-------->|   z   |             |   0   |   
             |_______| |         |_______|             |_______|   
             |      ---+         |      ---+           |      ---+ 
             |_______|           |_______| |           |_______| | 
    intCell             intCell           _v_                   _v_
                                           -                     - 

2.	
    _______                                   _______              
   | this ---+                               | tmp  ---+           
   |_______| |                               |_______| |           
             |                           +-----------------------+ 
             |                           |			   |         | 
             v_______             _______v             v_______  | 
             |   y   | +-------->|   z   |             |   y   | | 
             |_______| |         |_______|             |_______| | 
             |      ---+         |      ---+           |      ---+ 
             |_______|           |_______| |           |_______|   
    intCell             intCell           _v_ intCell              
                                           -                       

3.	
    _______                                   _______              
   | this ---+                               | tmp  ---+           
   |_______| |                               |_______| |           
		     |         +-------------------------+     |           
             |         |                 +-------|---------------+ 
             |         |                 |		 |     |         | 
             v_______  |          _______v       |     v_______  | 
             |   x   | +         |   z   |       +---->|   y   | | 
             |_______| |         |_______|             |_______| | 
             |      ---+         |      ---+           |      ---+ 
             |_______|           |_______| |           |_______|   
    intCell             intCell           _v_ intCell              
                                           -                       

4.	
    _______                                                         
   | this ---+                                                      
   |_______| |                                                      
		     |                                                      
             |                            		                    
             v_______             _______               _______     
             |   x   | +-------->|   y   | +---------->|   z   |    
             |_______| |         |_______| |           |_______|    
             |      ---+         |      ---+           |      ---+  
             |_______|           |_______|             |_______| |  
    intCell             intCell               intCell           _v_ 
                                                                 -  

*/										   
ref_intCell intCell::push_front ( int value )
{
 // definir nova celula (com apontador para servico)
    ref_intCell tmp = new intCell ( 0, nullptr );
    if ( tmp )
    {  // se houver espaco, copiar a primeira para a nova
       tmp->intCell::set_link   ( this->intCell::get_link  ( ) );
       tmp->intCell::set_value  ( this->intCell::get_value ( ) );
	   // guardar o dado novo
       this->intCell::set_value ( value );
	   // conectar 'a primeira a celula nova, com dado antigo
       this->intCell::connect   ( tmp   );
    } // end if
 // retornar a referencia estrutural modificada	
    return ( this );
} // end intCell::push_front ( )

/*
// Remover celula do inicio
// OBS.: NAO removera' a primeira celula.
1.	
    _______                                                         
   | this ---+                                                      
   |_______| |                                                      
		     |                                                      
             |                            		                    
             v_______             _______               _______     
             |   x   | +-------->|   y   | +---------->|   z   |    
             |_______| |         |_______| |           |_______|    
             |      ---+         |      ---+           |      ---+  
             |_______|           |_______|             |_______| |  
    intCell             intCell               intCell           _v_ 
                                                                 -  

2.	
    _______                         _______                         
   | this ---+                   +--- tmp  |                        
   |_______| |                   | |_______|                        
		     |                   |                                  
             |                   |        		                    
             v_______            v_______               _______     
             |   x   | +-------->|   y   | +---------->|   z   |    
             |_______| |         |_______| |           |_______|    
             |      ---+         |      ---+           |      ---+  
             |_______|           |_______|             |_______| |  
    intCell             intCell               intCell           _v_ 
                                                                 -  

3.	
    _______                         _______                         
   | this ---+                   +--- tmp  |                        
   |_______| |                   | |_______|                        
		     |         +-------------------------------+            
             |         |         |        		       |            
             v_______  |         v_______              v_______     
             |   x   | |         |   y   | +---------->|   z   |    
             |_______| |         |_______| |           |_______|    
             |      ---+         |      ---+           |      ---+  
             |_______|           |_______|             |_______| |  
    intCell             intCell               intCell           _v_ 
                                                                 -  

4.	
    _______                         _______                         
   | this ---+                   +--- tmp  |                        
   |_______| |                   | |_______|                        
		     |         +-------------------------------+            
             |         |         |        		       |            
             v_______  |         v_______              v_______     
             |   y   | |         |   x   | +---------->|   z   |    
             |_______| |         |_______| |           |_______|    
             |      ---+         |      ---+           |      ---+  
             |_______|           |_______|             |_______| |  
    intCell             intCell               intCell           _v_ 
                                                                 -  

5.	
    _______                         _______                         
   | this ---+                   +--- tmp  |                        
   |_______| |                   | |_______|                        
		     |         +-------------------------------+            
             |         |         |        		       |            
             v_______  |         v_______              v_______     
             |   y   | |         |   x   |             |   z   |    
             |_______| |         |_______|             |_______|    
             |      ---+         |      ---+           |      ---+  
             |_______|           |_______| |           |_______| |  
    intCell             intCell           _v_ intCell           _v_ 
                                           -                     -  

6.	
    _______                                   _______               
   | this ---+                               |  tmp ---+            
   |_______| |                               |_______| |            
		     |                                         |            
             v_______             _______              v_______     
             |   y   | +-------->|   z   |             |   x   |    
             |_______| |         |_______|             |_______|    
             |      ---+         |      ---+           |      ---+  
             |_______|           |_______| |           |_______| |  
    intCell             intCell           _v_ intCell           _v_ 
                                           -                     -  

*/
ref_intCell intCell::pop_front ( void )
{
    int value       = 0;
    ref_intCell tmp = nullptr;
    if ( this->intCell::get_link ( ) )
    {
	 // trocar conteudos
        value = this->intCell::get_value ( );
        tmp   = intCell::get_link  ( );
        this->intCell::set_link    ( tmp->intCell::get_link  ( ) );
        this->intCell::set_value   ( tmp->intCell::get_value ( ) );
        tmp->intCell::set_value    ( value );        
	 // desconectar a seguinte com o valor da primeira celula	
        tmp->intCell::disconnect   ( tmp->intCell::get_link  ( ) );
    } // end if
    return ( tmp );
} // end intCell::pop_front ( )

// Obter conteudo de celula em certa posicao
int intCell::at ( unsigned int index )
{
    int value = 0;
    int x     = 0;
    ref_intCell cursor = this;
    if ( 0 <= index && index < this->intCell::length( ) )
    {  
       x = index;
       while ( x > 0 )
       {
           cursor = cursor->intCell::get_link ( );
           x = x - 1;           
       } // end while    
       value = cursor->intCell::get_value ( );       
    } // end if
    return ( value );
} // end intCell::at ( )

// Trocar conteudos de celulas
void intCell::swap ( ref_intCell second )
{
    int value = 0;
    if ( second )
    {
       value  = this->intCell::get_value ( );
       this->intCell::set_value   ( second->intCell::get_value ( ) );
       second->intCell::set_value ( value );
    } // end if
} // end intCell::swap ( )

// Realizar testes
void intCell::test ( void )
{
 // definir dados
    int x = 0;
    int y = 0;
    int z = 0;
	
    ref_intCell a = nullptr; // referencia estrutural
    
	ref_intCell c = nullptr;
    
/**/    
 // criar celula
    ref_intCell b = new intCell ( 0, nullptr );
    b->intCell::print     ( );
    getchar ( );
	
 // atribuir valor a celula
    b->intCell::set_value ( 1 );
 // atribuir 'a referencia estrutural	
    a = b;
 // mostrar 	
    a->intCell::print     ( );
    getchar ( );
	
/**/
/**/    
 // criar outra celula
    b = new intCell     ( 2, nullptr );
 // conectar	
	a->intCell::connect ( b );
 // mostrar celulas
    a->intCell::print   (   );
 // mostrar tamanho
    printf              ( "\nintCell::length ( a ) = %d\n", 
	                         a->intCell::length ( ) );
    printf              ( "\n" );
    getchar             ( );
/**/    
/**/    
 // criar mais outra celula
    b = new intCell   ( 3, nullptr );
 // conectar por atribuicao	
    a->intCell::get_link ( )->intCell::set_link ( b );
 // mostrar	
    a->intCell::print ( );
 // mostrar tamanho	
    printf            ( "\nintCell::length ( a ) = %d\n", 
	                       a->intCell::length ( ) );
    printf            ( "\n" );
    getchar           ( );
    
 // marcar a ultima celula	
    ref_intCell back = b;
    for ( x=4; x<10; x=x+1 )
    {
	 // acrescetar mais uma celula ligada 'a ultima 
        back->intCell::set_link ( new intCell ( x, nullptr ) );
	 // atualizar a ultima	
        back = back->intCell::get_link ( );
	 // mostrar
        a->intCell::print       ( );
    } // end for
 // mostrar o tamanho	
    printf            ( "\nintCell::length ( a ) = %d\n", 
	                       a->intCell::length ( ) );
    printf            ( "\n" );
    getchar           ( );
	
 // inserir no final
/*
    a->intCell::push_back ( 10 );
    a->intCell::push_back ( 11 );
    a->intCell::push_back ( 12 );
*/
    back =    a->intCell::push_back ( 10 );
	for ( int x=1; x<5; x=x+1 )
    {   back = back->intCell::push_back ( 10+x ); }
/**/	
 // mostrar
    b = a;
    while ( a->intCell::length( ) > 1 )
	{
      a->intCell::print ( );
      getchar           ( );
	  b = a->intCell::pop_back  ( );
      b->intCell::print ( );
	  printf ( "\nsize = %d\n", a->intCell::length( ));
	} // end while
    a->intCell::print ( );
    printf              ( "\n" );
	
 // inserir no inicio
    a->intCell::push_front ( 2 );
    a->intCell::push_front ( 3 );
	
 // mostrar
    b = a;
    while ( a->intCell::length( ) > 1 )
	{
      a->intCell::print ( );
      getchar           ( );
	  b = a->intCell::pop_front  ( );
	  printf ( "\nsize = %d\n", a->intCell::length( ) );
	} // end while
    a->intCell::print ( );
    printf              ( "\n" );
	
/**/    
 // inserir
    a->intCell::push_back  ( 4 );
    a->intCell::push_front ( 2 );
    a->intCell::push_back  ( 5 );
    a->intCell::push_front ( 1 );
	
    a->intCell::print      (   );
    printf                 ( "\n" );
    getchar                ( );

 // ordenar celulas
    printf            ( "\nReordenar\n\n" );
    for ( x=1; x<a->intCell::length( ); x=x+1 )
    {
        b = a;
        c = b->intCell::get_link ( );
        for ( y=1; y<a->intCell::length( ); y=y+1 )
        {
            if ( b->intCell::get_value ( ) < c->intCell::get_value ( ) )
            {
               b->intCell::swap ( c );
            } // end if
            b = c;
            c = c->intCell::get_link ( );
        } // end for
        a->intCell::print ( );
        getchar  ( );
    } // end for
    printf       ( "\n" );
/**/
    printf  ( "\n" );
} // end intCell::test ( )

#include <cstdio>
#include <cstdlib>

/**/
class intCell
{
 // data
    protected:
        int      value;
        intCell *left ;
        intCell *right;
 // methods prototypes
    public:
        intCell             ( void );
        intCell             ( int value );
        intCell             ( int value, 
                              intCell* left, 
                              intCell* right );
        void     set_value  ( int value );
        int      get_value  ( void );
        void     set_left   ( intCell* link   );
        intCell* get_left   ( void );
        void     set_right  ( intCell* link   );
        intCell* get_right  ( void );
        void     connect    ( intCell* second );
        void     disconnect ( intCell* second );
        void     rprint     ( void );
        void     lprint     ( void );
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
    ________   
   | value  |  
   |________|  
 <--- left  |  
   |________|  
   | right --->
   |________|  
    intCell   
*/
/*
typedef
  struct s_Cell              // descritor da celula
  {
	 int            value;
	 struct s_Cell *left ;
	 struct s_Cell *right;
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
// criar nova celula
1.
    _______   
   | this --->               // referencia estrutural/primaria
   |_______|  
   
  ref_intCell

2. 
    _______             
   | this ---+               // referencia + celula vazia
   |_______| |          
             v________   
             | value  |  
             |________|  
       ??? <--- left  |  
             |________|  
             | right ---> ???
             |________|  
              intCell          
3.
    _______                 
   | this ---+               // referencia + celula com valores
   |_______| |           
             v________    
             |   x    |   
             |________|  
           +---       |  
           | |________|   
           | |       ---+ 
           | |________| | 
		  _v_ intCell  _v_ NULL
           -            - 
*/
intCell::intCell ( void )
{
    this->value = 0;
    this->left  = nullptr;
    this->right = nullptr;
} // end intCell::intCell ( )
intCell::intCell ( int value )
{
    this->value = value;
    this->left  = nullptr;
    this->right = nullptr;
} // end intCell::intCell ( )
intCell::intCell ( int value, ref_intCell left, ref_intCell right )
{
    this->value = value;
    this->left  = left ;
    this->right = right;
} // end intCell::intCell ( )

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

void intCell::set_right ( ref_intCell link )
{
    this->right = link;
} // end intCell::set_right ( )

ref_intCell intCell::get_right ( void )
{
    ref_intCell link = nullptr;
    link = this->right;
    return ( link );
} // end intCell::get_right ( )

void intCell::set_left ( ref_intCell link )
{
    this->left = link;
} // end intCell::set_left ( )

ref_intCell intCell::get_left ( void )
{
    ref_intCell link = nullptr;
    link = this->left;
    return ( link );
} // end intCell::get_left ( )

/*
// conectar uma celula a outra
1.
    apontador                  apontador de 
    estrutural                 servico (auxiliar)
    _______                    _______              
   | 1st  ---+                | 2nd  ---+           
   |_______| |                |_______| |           
             v_______                   v_______    
             |   x   |                  |   y   |   
             |_______|                  |_______|   
           +---      |                +---      |   
           | |_______|                | |_______|   
           | |      ---+              | |      ---+ 
           | |_______| |              | |_______| | 
          _v_ intCell _v_            _v_ intCell _v_
           -           -              -           - 
2.	
    _______                    _______              
   | 1st  ---+                | 2nd  ---+           
   |_______| |                |_______| |           
             v_______                   v_______    
             |   x   |<---------------+ |   y   |   
             |_______|                | |_______|   
           +---      |                +---      |   
           | |_______|                  |_______|   
           | |      ---+                |      ---+ 
           | |_______| |                |_______| | 
          _v_ intCell _v_                intCell _v_
           -           -                          - 
3.	
    _______                    _______              
   | 1st  ---+                | 2nd  ---+           
   |_______| |                |_______| |           
             v_______                   v_______    
             |   x   | +--------------->|   y   |   
             |_______| |                |_______|   
           +---      | |              +---      |   
           | |_______| |              | |_______|   
           | |      ---+              | |      ---+ 
           | |_______|<---------------+ |_______| | 
          _v_ intCell                    intCell _v_
           -                                      - 
4.	
    _______                                         
   | 1st  ---+                                      
   |_______| |                                      
             v_______                    _______    
             |   x   | +--------------->|   y   |   
             |_______| |                |_______|   
           +---      | |              +---      |   
           | |_______| |              | |_______|   
           | |      ---+              | |      ---+ 
           | |_______|<---------------+ |_______| | 
          _v_ intCell                    intCell _v_
           -                                      - 
*/
void intCell::connect ( ref_intCell second )
{
    if ( second )
	{
       second->set_left (  this  );
       this->set_right  ( second );
	} // end if
} // end intCell::connect ( )

/*
// desconectar uma celula de outra
1.	
    _______                    _______              
   | 1st  ---+                | 2nd  ---+           
   |_______| |                |_______| |           
             v_______                   v_______    
             |   x   | +--------------->|   y   |   
             |_______| |                |_______|   
           +---      | |              +---      |   
           | |_______| |              | |_______|   
           | |      ---+              | |      ---+ 
           | |_______|<---------------+ |_______| | 
          _v_ intCell                    intCell _v_
           -                                      - 
2.	
    _______                    _______              
   | 1st  ---+                | 2nd  ---+           
   |_______| |                |_______| |           
             v_______                   v_______    
             |   x   | +--------------->|   y   |   
             |_______| |                |_______|   
           +---      | |              +---      |   
           | |_______| |              | |_______|   
           | |      ---+              | |      ---+ 
           | |_______|                | |_______| | 
          _v_ intCell                _v_ intCell _v_
           -                          -           - 
3.	
    _______                    _______              
   | 1st  ---+                | 2nd  ---+           
   |_______| |                |_______| |           
             v_______                   v_______    
             |   x   |                  |   y   |   
             |_______|                  |_______|   
           +---      |                +---      |   
           | |_______|                | |_______|   
           | |      ---+              | |      ---+ 
           | |_______| |              | |_______| | 
          _v_ intCell _v_            _v_ intCell _v_
           -           -              -           - 
*/
void intCell::disconnect ( ref_intCell second )
{
    if ( this->get_right ( ) == second )
    {
       second->set_left  ( nullptr );
       this->set_right   ( nullptr );
    } // end if
} // end intCell::disconnect ( )

/*
// mostrar conteudos de celulas
1.	
    _______              _______              
   | this ---+       +--- tmp   |             
   |_______| |       |  |_______|               tmp = this;
             v_______v              _______    
             |   x   | +---------->|   y   |   
             |_______| |           |_______|   
           +---      | |         +---      |   
           | |_______| |         | |_______|   
           | |      ---+         | |      ---+ 
           | |_______|<----------+ |_______| | 
          _v_ intCell               intCell _v_
           -                                 - 
2.	
    _______               _______              
   | this ---+           | tmp  ---+            tmp = this->right; 
   |_______| |           |_______| |           
             v_______              v_______    
             |   x   | +---------->|   y   |   
             |_______| |           |_______|   
           +---      | |         +---      |   
           | |_______| |         | |_______|   
           | |      ---+         | |      ---+ 
           | |_______|<----------+ |_______| | 
          _v_ intCell               intCell _v_
           -                                 - 
3.	
    _______               _______              
   | this ---+           | tmp  -------------+ tmp = tmp->right = NULL;
   |_______| |           |_______|           | 
             v_______               _______  | 
             |   x   | +---------->|   y   | | 
             |_______| |           |_______| | 
           +---      | |         +---      | | 
           | |_______| |         | |_______| | 
           | |      ---+         | |      ---+ 
           | |_______|<----------+ |_______| | 
          _v_ intCell               intCell _v_
           -                                 - 
*/
void intCell::rprint ( void )
{
    ref_intCell tmp = this; // apontador de servico
    if ( ! tmp )            // se nao existir
    {
       printf ( "[]" );     // vazio
    }
    else
    {
       while ( tmp )        // enquanto existir dado
       {
             printf ( "%d ", tmp->get_value ( ) );
             tmp = tmp->get_right ( ); // proximo
       } // end while
    } // end if
    printf ( "\n" );
} // end intCell::print ( )

void intCell::lprint ( void )
{
    ref_intCell tmp = this; // apontador de servico
    if ( ! tmp )            // se nao existir
    {
       printf ( "[]" );     // vazio
    }
    else
    {
       while ( tmp )        // enquanto existir dado
       {
             printf ( "%d ", tmp->get_value ( ) );
             tmp = tmp->get_left  ( ); // proximo
       } // end while
    } // end if
    printf ( "\n" );
} // end intCell::print ( )

// obter a quantidade de celulas
int intCell::length ( void )
{
    ref_intCell tmp    = this; // apontador de servico
    int         length = 0;
    while ( tmp )              // enquanto houver dado
    {
        length = length + 1;
        tmp    = tmp->get_right ( ); // proximo
    } // end while
    return ( length );
} // end intCell::length ( )

/*
// inserir nova celula no final
1.
    _______             _______               _______              
   | this ---+       +--- back |             | tmp  ---+           
   |_______| |       | |_______|             |_______| |           
             v_______v            _______              v_______    
             |   x   | +-------->|   y   |             |   z   |   
             |_______| |         |_______|             |_______|   
           +---      | |       +---      |           +---      |   
           | |_______| |       | |_______|           | |_______|   
           | |      ---+       | |      ---+         | |      ---+ 
           | |_______|<--------+ |_______| |         | |_______| | 
          _v_ intCell             intCell _v_       _v_         _v_
           -                               -         -           - 
2.	
    _______             _______               _______              
   | this ---+         | back ---+           | tmp  ---+           
   |_______| |         |_______| |           |_______| |           
             v_______            v_______              v_______    
             |   x   | +-------->|   y   |<----------+ |   z   |   
             |_______| |         |_______|           | |_______|   
           +---      | |       +---      |           +---      |   
           | |_______| |       | |_______|             |_______|   
           | |      ---+       | |      ---+           |      ---+ 
           | |_______|<--------+ |_______| |           |_______| | 
          _v_ intCell             intCell _v_                   _v_
           -                               -                     - 
3.	
    _______             _______               _______              
   | this ---+         | back ---+           | tmp  ---+           
   |_______| |         |_______| |           |_______| |           
             v_______            v_______              v_______    
             |   x   | +-------->|   y   | +---------->|   z   |   
             |_______| |         |_______| |           |_______|   
           +---      | |       +---      | |         +---      |   
           | |_______| |       | |_______| |         | |_______|   
           | |      ---+       | |      ---+         | |      ---+ 
           | |_______|<--------+ |_______|<----------+ |_______| | 
          _v_ intCell             intCell                       _v_
           -                                                     - 
*/
ref_intCell intCell::push_back ( int value )
{
 // guardar o dado em uma celula (provisoriamente)
    ref_intCell tmp  = new intCell ( value );
    ref_intCell back = this;
    if ( back && tmp )
    { // procurar a referencia para conexao
         while ( back->right != nullptr )
         {
            back = back->get_right ( );
         } // end while
      // conectar a celula nova		 
         back->connect ( tmp );
	  // atualizar o ultimo
         back = tmp;	  
    } // end if
 // retornar a ultima inserida	
    return ( back );
} // end intCell::push_back ( )

/*
// remover celula do final
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
           +---      | |       +---      | |         +---      |   
           | |_______| |       | |_______| |         | |_______|   
           | |      ---+       | |      ---+         | |      ---+ 
           | |_______|<--------+ |_______|<----------+ |_______| | 
          _v_ intCell             intCell                       _v_
           -                                                     - 
2.	
    _______             _______               _______              
   | this ---+       +--- last |           +--- back |             
   |_______| |       | |_______|           | |_______|             
             |       |           +---------+                       
             |       |	         |                                 
             v_______v           v_______               _______    
             |   x   | +-------->|   y   | +---------->|   z   |   
             |_______| |         |_______| |           |_______|   
           +---      | |       +---      | |         +---      |   
           | |_______| |       | |_______| |         | |_______|   
           | |      ---+       | |      ---+         | |      ---+ 
           | |_______|<--------+ |_______|<----------+ |_______| | 
          _v_ intCell             intCell                       _v_
           -                                                     - 
3.                                                                 
    _______             _______               _______              
   | this ---+         | last ---+           | back ---+           
   |_______| |         |_______| |           |_______| |           
             |                   |                     |           
             v_______            v_______              v_______    
             |   x   | +-------->|   y   | +---------->|   z   |   
             |_______| |         |_______| |           |_______|   
           +---      | |       +---      | |         +---      |   
           | |_______| |       | |_______| |         | |_______|   
           | |      ---+       | |      ---+         | |      ---+ 
           | |_______|<--------+ |_______|<----------+ |_______| | 
          _v_ intCell             intCell                       _v_
           -                                                     - 
4.                                                                 
    _______             _______               _______              
   | this ---+         | last ---+           | back ---+           
   |_______| |         |_______| |           |_______| |           
             |                   |                     |           
             v_______            v_______              v_______    
             |   x   | +-------->|   y   | +---------->|   z   |   
             |_______| |         |_______| |           |_______|   
           +---      | |       +---      | |         +---      |   
           | |_______| |       | |_______| |         | |_______|   
           | |      ---+       | |      ---+         | |      ---+ 
           | |_______|<--------+ |_______|           | |_______| | 
          _v_ intCell             intCell           _v_         _v_
           -                                         -           - 
5.                                                                 
    _______             _______               _______              
   | this ---+         | last ---+           | back ---+           
   |_______| |         |_______| |           |_______| |           
             |                   |                     |           
             v_______            v_______              v_______    
             |   x   | +-------->|   y   |             |   z   |   
             |_______| |         |_______|             |_______|   
           +---      | |       +---      |           +---      |   
           | |_______| |       | |_______|           | |_______|   
           | |      ---+       | |      ---+         | |      ---+ 
           | |_______|<--------+ |_______| |         | |_______| | 
          _v_ intCell             intCell _v_       _v_         _v_
           -                               -         -           - 
*/
ref_intCell intCell::pop_back ( void )
{
 // definir auxiliares (apontadores para servicos)
    ref_intCell back = nullptr;
    ref_intCell last = nullptr;
 // procurar o ultimo e o penultimo
    back = this; // ultimo
    last = this; // penultimo
    while ( back->right ) 
    {  // enquanto houver dado
       last = back;        // guardar 
       back = back->right; // avancar
    } // end while	
    if ( last != back )
    {  // se houver penultimo e ultimo
       last->disconnect ( back );
       // back = last;
    } // end if
 // retornar o desconectado
    return ( back );
} // end intCell::pop_back ( )

/*
// inserir nova celula no inicio
1.
    _______                                   _______              
   | this ---+                               | tmp  ---+           
   |_______| |                               |_______| |           
             |                                         |           
             v_______             _______              v_______    
             |   y   | +-------->|   z   |             |   0   |   
             |_______| |         |_______|             |_______|   
           +---      | |       +---      |           +---      |   
           | |_______| |       | |_______|           | |_______|   
           | |      ---+       | |      ---+         | |      ---+ 
           | |_______|<--------+ |_______| |         | |_______| | 
          _v_ intCell             intCell _v_       _v_         _v_
           -                               -         -           - 
2.	
    _______                                   _______              
   | this ---+                               | tmp  ---+           
   |_______| |                               |_______| |           
             |                           +-----------------------+ 
             |                           |			   |         | 
             v_______             _______v             v_______  | 
             |   y   | +-------->|   z   |             |   y   | | 
             |_______| |         |_______|             |_______| | 
           +---      | |       +---      |           +---      | | 
           | |_______| |       | |_______|           | |_______| | 
           | |      ---+       | |      ---+         | |      ---+ 
           | |_______|<--------+ |_______| |         | |_______|   
          _v_ intCell             intCell _v_       _v_            
           -                               -         -              
3.	
    _______                                   _______              
   | this ---+                               | tmp  ---+           
   |_______| |                               |_______| |           
	     |         +-------------------------+     |
             |         |                 +-------|---------------+
             |         |                 |	 |     |         |
             v_______  |          _______v       |     v_______  | 
             |   x   | |         |   z   |       +---->|   y   | | 
             |_______| |         |_______|             |_______| | 
           +---      | |       +---      |           +---      | | 
           | |_______| |       | |_______|           | |_______| | 
           | |      ---+       | |      ---+         | |      ---+ 
           | |_______|<--------+ |_______| |         | |_______|   
          _v_ intCell             intCell _v_       _v_            
           -                               -         -              
4.	
    _______                                   _______              
   | this ---+                               | tmp  ---+           
   |_______| |                               |_______| |           
	     |         +-------------------------+     |
             |         |                 +-------|---------------+
             |         |                 |	 |     |         |
             v_______  |          _______v       |     v_______  | 
             |   x   | |         |   z   |       +---->|   y   | | 
             |_______| |         |_______|             |_______| | 
           +---      | |       +---      |           +---      | | 
           | |_______| |       | |_______|           | |_______| | 
           | |      ---+       | |      ---+         | |      ---+ 
           | |_______|<========+ |_______| |         | |_______|   
          _v_ intCell          |  intCell _v_        |              
           -                   |           -         |               
			       +---------------------+
5.
    _______                                   _______
   | this ---+                               | tmp  ---+
   |_______| |                               |_______| |
	     |         +-------------------------+     |
             |         |                 +-------|---------------+
             |         |                 |	 |     |         |
             v_______  |          _______v       |     v_______  |
             |   x   | |         |   z   |       +---->|   y   | |
             |_______| |         |_______|             |_______| |
           +---      | |     +-----      |           +---      | |
           | |_______| |     |   |_______|           | |_______| |
           | |      ---+     |   |      ---+         | |      ---+
           | |_______|<------|-+ |_______| |         | |_______|
          _v_ intCell        | |  intCell _v_        | ^
           -                 | |           -         | |
			     | +---------------------+ |
			     +-------------------------+
6.
    _______
   | this ---+
   |_______| |
	     |
             |                            		                    
             v_______             _______               _______     
             |   x   | +-------->|   y   | +---------->|   z   |    
             |_______| |         |_______| |           |_______|    
           +---      | |       +---      | |         +---      |    
           | |_______| |       | |_______| |         | |_______|    
           | |      ---+       | |      ---+         | |      ---+  
           | |_______|<--------+ |_______|<----------+ |_______| |  
          _v_ intCell             intCell                       _v_ 
           -                                                     -  
*/										   
ref_intCell intCell::push_front ( int value )
{
 // definir nova celula (com apontador para servico)
    ref_intCell tmp = new intCell ( 0 );
    if ( tmp )
    {  // se houver espaco, copiar a primeira para a nova
       tmp->set_left    ( this->get_left  ( ) );
       tmp->set_right   ( this->get_right ( ) );
       tmp->set_value   ( this->get_value ( ) );
       // guardar o dado novo
       this->intCell::set_value ( value );
       // conectar 'a primeira a celula nova, com dado antigo
       this->intCell::connect   ( tmp   );
    } // end if
 // retornar a referencia estrutural modificada
    return ( this );
} // end intCell::push_front ( )

/*
// remover celula do inicio
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
           +---      | |       +---      | |         +---      |
           | |_______| |       | |_______| |         | |_______|
           | |      ---+       | |      ---+         | |      ---+
           | |_______|<--------+ |_______|<----------+ |_______| |
          _v_ intCell             intCell                       _v_
           -                                                     -
2.
    _______                         _______
   | this ---+                   +--- tmp  |
   |_______| |                   | |_______|
	     |                   |
             |                   |
             v_______            v_______               _______
             |   x   | +-------->|   y   | +---------->|   z   |
             |_______| |         |_______| |           |_______|
           +---      | |       +---      | |         +---      |
           | |_______| |       | |_______| |         | |_______|
           | |      ---+       | |      ---+         | |      ---+
           | |_______|<--------+ |_______|<----------+ |_______| |
          _v_ intCell             intCell                       _v_
           -                                                     -
3.
    _______                         _______
   | this ---+                   +--- tmp  |
   |_______| |                   | |_______|
	     |         +-------------------------------+
             |         |         |     		       |
             v_______  |         v_______              v_______
             |   x   | |         |   y   | +---------->|   z   |
             |_______| |         |_______| |           |_______|
           +---      | |       +---      | |         +---      |
           | |_______| |       | |_______| |         | |_______|
           | |      ---+       | |      ---+         | |      ---+
           | |_______|<--------+ |_______|<----------+ |_______| |
          _v_ intCell             intCell                       _v_
           -                                                     -
4.
    _______                         _______
   | this ---+                   +--- tmp  |
   |_______| |                   | |_______|
	     |         +-------------------------------+
             |         |         |     		       |
             v_______  |         v_______              v_______
             |   y   | |         |   x   | +---------->|   z   |
             |_______| |         |_______| |           |_______|
           +---      | |       +---      | |         +---      |
           | |_______| |       | |_______| |         | |_______|
           | |      ---+       | |      ---+         | |      ---+
           | |_______|<========+ |_______|           | |_______| |
          _v_ intCell          |  intCell            |          _v_
           -                   |                     |           -
                               +---------------------+
5.
    _______                         _______
   | this ---+                   +--- tmp  |
   |_______| |                   | |_______|
	     |         +-------------------------------+
             |         |         |     		       |
             v_______  |         v_______              v_______
             |   y   | |         |   x   |             |   z   |
             |_______| |         |_______|             |_______|
           +---      | |       +---      |           +---      |
           | |_______| |       | |_______|           | |_______|
           | |      ---+       | |      ---+         | |      ---+
           | |_______|<========+ |_______| |         | |_______| |
          _v_ intCell          |  intCell _v_        |          _v_
           -                   |           -         |           -
                               +---------------------+
6.
    _______                         _______
   | this ---+                   +--- tmp  |
   |_______| |                   | |_______|
	     |         +-------------------------------+
             |         |         |     		       |
             v_______  |         v_______              v_______
             |   y   | |         |   x   |             |   z   |
             |_______| |         |_______|             |_______|
           +---      | |     +-----      |           +---      |
           | |_______| |     |   |_______|           | |_______|
           | |      ---+     |   |      ---+         | |      ---+
           | |_______|<------|-+ |_______| |         | |_______| |
          _v_ intCell       _v_|  intCell _v_        |          _v_
           -                 - |           -         |           -
                               +---------------------+
7.
    _______                                   _______
   | this ---+                               |  tmp ---+
   |_______| |                               |_______| |
	     |                                         |
             v_______             _______              v_______
             |   y   | +-------->|   z   |             |   x   |
             |_______| |         |_______|             |_______|
           +---      | |       +---      |           +---      |
           | |_______| |       | |_______|           | |_______|
           | |      ---+       | |      ---+         | |      ---+
           | |_______|<--------+ |_______| |         | |_______| |
          _v_ intCell             intCell _v_       _v_         _v_
           -                               -         -           -
*/
ref_intCell intCell::pop_front ( void )
{
    int value       = 0;
    ref_intCell tmp = nullptr;
    if ( this->get_right ( ) )
    {
       // trocar conteudos
       value = this->get_value ( );
       tmp   = this->get_right ( );
       this->set_right    ( tmp->get_right ( ) );
       if ( tmp->get_right( ) )
          tmp->get_right  ( )->set_left ( this );
       this->set_value    ( tmp->get_value ( ) );
       tmp->set_value     ( value );
       // desconectar a seguinte com o valor da primeira celula
       if ( tmp->get_right( ) )
          tmp->disconnect ( tmp->get_right ( ) );
       else
          this->set_right ( nullptr );
    } // end if
    return ( tmp );
} // end intCell::pop_front ( )

// obter conteudo de celula em certa posicao
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
           cursor = cursor->get_right ( );
           x = x - 1;
       } // end while
       value = cursor->get_value ( );
    } // end if
    return ( value );
} // end intCell::at ( )

// trocar conteudos de celulas
void intCell::swap ( ref_intCell second )
{
    int value = 0;
    if ( second )
    {
       value  = this->get_value ( );
       this->set_value   ( second->get_value ( ) );
       second->set_value ( value );
    } // end if
} // end intCell::swap ( )

// realizar testes
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
    ref_intCell b = new intCell ( 0 );
    b->intCell::rprint    ( );
    getchar ( );

 // atribuir valor a celula
    b->intCell::set_value ( 1 );
 // atribuir 'a referencia estrutural
    a = b;
 // mostrar
    a->intCell::rprint    ( );
    getchar ( );
/**/
/**/
 // criar outra celula
    b = new intCell       ( 2 );
 // conectar
    a->intCell::connect   ( b );
 // mostrar celulas
    a->intCell::rprint    (   );
 // mostrar tamanho
    printf                ( "\nintCell::length ( a ) = %d\n",
                            a->intCell::length ( ) );
    printf  ( "\n" );
    getchar ( );
/**/    
/**/    
 // criar mais outra celula
    b = new intCell       ( 3 );
 // conectar por atribuicao	
    a->intCell::get_right ( )->intCell::set_right ( b );
 // mostrar	
    a->intCell::rprint    ( );
 // mostrar tamanho	
    printf                ( "\nintCell::length ( a ) = %d\n",
                            a->intCell::length ( ) );
    printf  ( "\n" );
    getchar ( );

 // marcar a ultima celula
    ref_intCell back = b;
    for ( x=4; x<10; x=x+1 )
    {
	// acrescetar mais uma celula ligada 'a ultima
        back->set_right ( new intCell ( x ) );
	// atualizar a ultima
        back = back->get_right ( );
	// mostrar
        a->intCell::rprint     ( );
    } // end for
 // mostrar o tamanho
    printf            ( "\nintCell::length ( a ) = %d\n",
	                a->intCell::length ( ) );
    printf  ( "\n" );
    getchar ( );
	
 // inserir no final
/*
    a->intCell::push_back ( 10 );
    a->intCell::push_back ( 11 );
    a->intCell::push_back ( 12 );
*/
    back =        a->push_back ( 10 );
    for ( int x=1; x<5; x=x+1 )
    {   back = back->push_back ( 10+x ); }
/**/
 // mostrar
    b = a;
    while ( a->length( ) > 1 )
    {
      a->rprint          ( );
      getchar            ( );
      b = a->pop_back    ( );
      b->rprint          ( );
      printf ( "\nsize = %d\n", a->length( ));
    } // end while
    a->intCell::rprint   ( );
    printf   ( "\n" );

 // inserir no inicio
    a->push_front ( 2 );
    a->push_front ( 3 );

 // mostrar
    b = a;
    while ( a->length( ) > 1 )
    {
      a->rprint         ( );
      getchar           ( );
      b = a->pop_front  ( );
      printf ( "\nsize = %d\n", a->length( ) );
    } // end while
    a->intCell::rprint  ( );
    printf   ( "\n" );

/**/
 // inserir
    a->push_back   ( 4 );
    a->push_front  ( 2 );
    a->push_back   ( 5 );
    a->push_front  ( 1 );

    a->rprint      (   );
    printf  ( "\n" );
    getchar ( );

 // ordenar celulas
    printf            ( "\nReordenar\n\n" );
    for ( x=1; x<a->length( ); x=x+1 )
    {
        b = a;
        c = b->get_right ( );
        for ( y=1; y<a->length( ); y=y+1 )
        {
            if ( b->get_value ( ) < c->get_value ( ) )
            {
               b->swap ( c );
            } // end if
            b = c;
            c = c->get_right ( );
        } // end for
        a->rprint ( );
        getchar   ( );
    } // end for
    printf  ( "\n" );
/**/
    printf  ( "\n" );
} // end intCell::test ( )

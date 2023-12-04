#include <stdio.h>
#include <stdlib.h>

/*
class intCell
{
 // data
    protected:
        int      value;
        intCell *link ;
 // methods
    public:
        intCell             ( void );
        intCell             ( int value );
        intCell             ( int value, intCell* left, intCell* right );
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
};
*/

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
typedef
  struct s_Cell              // descritor da celula
  {
	 int            value;
	 struct s_Cell *left ;
	 struct s_Cell *right;
  }
intCell;
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
ref_intCell new_intCell ( int         value,
                          ref_intCell left ,
                          ref_intCell right )
{
    ref_intCell self = malloc ( 1 * sizeof (intCell) );
    if ( self )
    {
       self->value = value;
       self->left  = left ;
       self->right = right;
    } // end if
    return ( self );
} // end new_intCell ( )

// Metodos para acessos a atributos
void intCell_set_value ( ref_intCell self, int value )
{
    if ( self )
    {
       self->value = value;
    } // end if
} // end intCell_set_value ( )

int intCell_get_value ( ref_intCell self )
{
    int value = 0;
    if ( self )
    {
       value = self->value;
    } // end if
    return ( value );
} // end intCell_get_value ( )

void intCell_set_left ( ref_intCell self, ref_intCell link )
{
    if ( self )
    {
       self->left = link;
    } // end if
} // end intCell_set_left ( )

ref_intCell intCell_get_left ( ref_intCell self )
{
    ref_intCell link = NULL;
    if ( self )
    {
       link = self->left;
    } // end if
    return ( link );
} // end intCell_get_left ( )

void intCell_set_right ( ref_intCell self, ref_intCell link )
{
    if ( self )
    {
       self->right = link;
    } // end if
} // end intCell_set_right ( )

ref_intCell intCell_get_right ( ref_intCell self )
{
    ref_intCell link = NULL;
    if ( self )
    {
       link = self->right;
    } // end if
    return ( link );
} // end intCell_get_right ( )

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
void intCell_connect ( ref_intCell first, ref_intCell second )
{
    if ( first && second )
    {
       intCell_set_left  ( second, first );
       intCell_set_right ( first, second );
    } // end if
} // end intCell_connect ( )

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
void intCell_disconnect ( ref_intCell first, ref_intCell second )
{
    if ( first && intCell_get_right ( first ) == second )
    {
       intCell_set_left  ( second, NULL );
       intCell_set_right ( first , NULL );
    } // end if
} // end intCell_disconnect ( )

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
void intCell_lprint ( ref_intCell self )
{
    ref_intCell tmp = self; // apontador de servico
    if ( ! tmp )            // se nao existir
    {
       printf ( "[]" );    // vazio
    }
    else
    {
       while ( tmp )       // enquanto existir dado
       {
             printf ( "%d ", intCell_get_value ( tmp ) );
             tmp = intCell_get_left ( tmp ); // proximo
		} // end while
    } // end if
    printf ( "\n" );
} // end intCell_lprint ( )

void intCell_rprint ( ref_intCell self )
{
    ref_intCell tmp = self; // apontador de servico
    if ( ! tmp )            // se nao existir
    {
       printf ( "[]" );    // vazio
    }
    else
    {
       while ( tmp )       // enquanto existir dado
       {
             printf ( "%d ", intCell_get_value ( tmp ) );
             tmp = intCell_get_right ( tmp ); // proximo
       } // end while
    } // end if
    printf ( "\n" );
} // end intCell_rprint ( )

// obter a quantidade de celulas
int intCell_length ( ref_intCell self )
{
    ref_intCell tmp    = self; // apontador de servico
    int         length = 0;
    while ( tmp )              // enquanto existir dado
    {
          length = length + 1;
          tmp    = intCell_get_right ( tmp ); // proximo
    } // end while
    return ( length );
} // end intCell_length ( )

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
ref_intCell intCell_push_back ( ref_intCell self, int value )
{
    ref_intCell tmp  = new_intCell ( value, NULL, NULL );
    ref_intCell back = self;
    if ( back && tmp )
    {
       while ( back->right )
       {
          back = intCell_get_right ( back );
       } // end while
       intCell_connect ( back, tmp );
    } // end if
    return ( back );
} // end intCell_push_back ( )

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
ref_intCell intCell_pop_back ( ref_intCell self  )
{
    ref_intCell back = NULL;
    ref_intCell last = NULL;

    back = self;
    if ( self )
    {
       last = self;
       while ( back->right )
       {
          last = back;
          back = back->right;
       } // end while
       if ( last != back )
       {
          intCell_disconnect ( last, back );
       } // end if
    } // end
    return ( back );
} // end intCell_pop_back ( )

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
ref_intCell intCell_push_front ( ref_intCell self, int value )
{
    ref_intCell tmp = new_intCell ( 0, NULL, NULL );
    if ( self && tmp )
    {
       intCell_set_left   ( tmp, intCell_get_left  ( self ) );
       intCell_set_right  ( tmp, intCell_get_right ( self ) );
       intCell_set_value  ( tmp, intCell_get_value ( self ) );
       intCell_set_value  ( self, value );
       intCell_connect    ( self, tmp   );
    } // end if
    return ( self );
} // end intCell_push_front ( )

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
ref_intCell intCell_pop_front ( ref_intCell self )
{
    int value       = 0;
    ref_intCell tmp = NULL;
    if ( intCell_get_right ( self ) )
    {
	 // trocar conteudos
        value = intCell_get_value ( self );
        tmp   = intCell_get_right ( self );
        intCell_set_right   ( self, intCell_get_right ( tmp ) );
        if ( intCell_get_right( tmp ) )
	   intCell_set_left ( intCell_get_right ( tmp ), self );

        intCell_set_value   ( self, intCell_get_value ( tmp ) );
        intCell_set_value   ( tmp , value );
	 // desconectar a seguinte com o valor da primeira celula
        if ( intCell_get_right( tmp ) )
           intCell_disconnect ( tmp , intCell_get_right ( tmp ) );
	else
	   intCell_set_right  ( self, NULL );

    } // end if
    return ( tmp );
} // end intCell_pop_front ( )

// obter conteudo de celula em certa posicao
int intCell_at ( ref_intCell self, unsigned int index )
{
    int value = 0;
    int x     = 0;
    ref_intCell cursor = self;
    if ( 0 <= index && index < intCell_length( self ) )
    {
       x = index;
       while ( x > 0 )
       {
           cursor = intCell_get_right ( cursor );
           x = x - 1;
       } // end while
       value = intCell_get_value ( cursor );
    } // end if
    return ( value );
} // end intCell_at ( )

// trocar conteudos de celulas
void intCell_swap ( ref_intCell first, ref_intCell second )
{
    int value = 0;
    if ( first && second )
    {
       value = intCell_get_value ( first );
       intCell_set_value ( first , intCell_get_value ( second ) );
       intCell_set_value ( second, value );
    } // end if
} // end intCell_swap ( )

// realizar testes
void intCell_test ( void )
{
 // definir dados
    int x = 0;
    int y = 0;
    int z = 0;

    ref_intCell a = NULL; // referencia estrutural

    ref_intCell c = NULL;

/**/
 // criar celula
    ref_intCell b = new_intCell ( 0, NULL, NULL );
    intCell_rprint     ( a );
    getchar ( );

 // atribuir valor a celula
    intCell_set_value ( b, 1 );
 // atribuir 'a referencia estrutural
    a = b;
 // mostrar
    intCell_rprint     ( a );
    getchar ( );

/**/
/**/
 // criar outra celula
    b = new_intCell   ( 2, NULL, NULL );
 // conectar
    intCell_connect   ( a, b );
 // mostrar celulas
    intCell_rprint    ( a );
 // mostrar tamanho
    printf            ( "\nintCell_length ( a ) = %d\n",
	                       intCell_length ( a ) );
    printf  ( "\n" );
    getchar ( );
/**/
/**/
 // criar mais outra celula
    b = new_intCell   ( 3, NULL, NULL );
 // conectar por atribuicao
    intCell_set_right ( intCell_get_right ( a ), b );
 // mostrar
    intCell_rprint    ( a );
 // mostrar tamanho
    printf            ( "\nintCell_length ( a ) = %d\n",
	                       intCell_length ( a ) );
    printf  ( "\n" );
    getchar ( );

 // marcar a ultima celula
    ref_intCell back = b;
    for ( x=4; x<10; x=x+1 )
    {
        // acrescentar mais uma celula ligada 'a ultima
        intCell_set_right ( back, new_intCell ( x, NULL, NULL ) );
        // atualizar a ultima
        back = intCell_get_right ( back );
        // mostrar
        intCell_rprint    ( a );
    } // end for
 // mostrar o tamanho
    printf            ( "\nintCell_length ( a ) = %d\n",
                           intCell_length ( a ) );
    printf  ( "\n" );
    getchar ( );

 // inserir no final
    intCell_push_back ( a, 10 );
    intCell_push_back ( a, 11 );
    intCell_push_back ( a, 12 );

 // mostrar
    b = a;
    while ( intCell_length(a) > 1 )
    {
      intCell_rprint        ( a );
      getchar               (   );
      b = intCell_pop_back  ( a );
      printf ( "\nsize = %d\n", intCell_length(a));
    } // end while
    intCell_rprint          ( a );
    printf  ( "\n" );

 // inserir no inicio
    intCell_push_front ( a, 2 );
    intCell_push_front ( a, 3 );

 // mostrar
    b = a;
    while ( intCell_length(a) > 1 )
    {
      intCell_rprint        ( a );
      getchar               (   );
      b = intCell_pop_front ( a );
      printf ( "\nsize = %d\n", intCell_length(a));
    } // end while
    intCell_rprint          ( a );
    printf  ( "\n" );

/**/
 // inserir
    intCell_push_back  ( a, 4 );
    intCell_push_front ( a, 2 );
    intCell_push_back  ( a, 5 );
    intCell_push_front ( a, 1 );

    intCell_rprint     ( a );
    printf  ( "\n" );
    getchar ( );

 // ordenar celulas
    printf             ( "\nReordenar\n\n" );
    for ( x=1; x<intCell_length(a); x=x+1 )
    {
        b = a;
        c = intCell_get_right ( b );
        for ( y=1; y<intCell_length(a); y=y+1 )
        {
            if ( intCell_get_value ( b ) < intCell_get_value ( c ) )
            {
               intCell_swap ( b, c );
            } // end if
            b = c;
            c = intCell_get_right ( b );
        } // end for
        intCell_rprint ( a );
        getchar  ( );
    } // end for
    printf  ( "\n" );
/**/
    printf  ( "\n" );
} // end intCell_test ( )

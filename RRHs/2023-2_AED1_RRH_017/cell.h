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
        intCell             ( int value, intCell *link );
        void     setValue   ( int value );
        int      getValue   ( void );
        void     setLink    ( intCell *link   );
        intCell* getLink    ( void );
        void     connect    ( intCell *second );
        void     disconnect ( intCell *second );
        void     print      ( void );
        int      length     ( void );
        intCell* push_back  ( int value );
        intCell* pop_back   ( void );
        intCell* push_front ( int value );
        intCell* pop_front  ( void );
        int      at         ( unsigned int index );
        void     swap       ( intCell *second    );
        void     test       ( void );
};
*/

/*
    _______   
   | value |  
   |_______|  
   | link --->
   |_______|  
              
    intCell   
*/
typedef
  struct s_Cell              // descritor da celula
  {
	 int            value;
	 struct s_Cell *link;
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
// Criar nova celula
1.
    _______   
   | self --->               // referencia estrutural/primaria
   |_______|  
   
  ref_intCell

2. 
    _______             
   | self ---+          
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
   | self ---+           
   |_______| |           
             |           
             v_______    
             |   x   |   
             |_______|   
             |      ---+ 
             |_______| | 
    intCell           _v_ NULL
                       - 
*/
ref_intCell new_intCell ( int value, ref_intCell link )
{
    ref_intCell self = malloc ( 1 * sizeof (intCell) );
    if ( self )
	{
	   self->value = value;
       self->link  = link ;
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

void intCell_set_link ( ref_intCell self, ref_intCell link )
{
    if ( self )
	{
	   self->link = link;
	} // end if 
} // end intCell_set_link ( )

ref_intCell intCell_get_link ( ref_intCell self )
{
    ref_intCell link = NULL;
    if ( self )
	{
	   link = self->link;
	} // end if
    return ( link );
} // end intCell_get_link ( )

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
void intCell_connect ( ref_intCell first, ref_intCell second )
{
    if ( first && second )
    {
       intCell_set_link ( first, second );
    } // end if
} // end intCell_connect ( )

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
    intCell           _v_ intCell            _v_ 
                       -                      -  

*/
void intCell_disconnect ( ref_intCell first, ref_intCell second )
{
    if ( first && intCell_get_link ( first ) == second )
    {
       intCell_set_link ( first, NULL );
    } // end if
} // end intCell_disconnect ( )

/*
// Mostrar conteudos de celulas
1.	
    _______              _______              
   | self ---+       +--- tmp   |             
   |_______| |       |  |_______|               tmp = self;
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
   | self ---+           | tmp  ---+            tmp = self->link; 
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
   | self ---+           | tmp  -------------+ tmp = tmp->link = NULL;
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
void intCell_print ( ref_intCell self )
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
            tmp = intCell_get_link ( tmp ); // proximo
		} // end while
    } // end if
    printf ( "\n" );
} // end intCell_print ( )

// Obter a quantidade de celulas 
int intCell_length ( ref_intCell self )
{
    ref_intCell tmp    = self; // apontador de servico
    int         length = 0;
    while ( tmp )              // enquanto existir dado
    {
        length = length + 1;
        tmp    = intCell_get_link ( tmp ); // proximo
    } // end while
    return ( length );
} // end intCell_length ( )

/*
// Inserir nova celula no final
1.
    _______             _______               _______              
   | self ---+       +--- back |             | tmp  ---+           
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
   | self ---+         | back ---+           | tmp  ---+           
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
   | self ---+         | back ---+           | tmp  ---+           
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
ref_intCell intCell_push_back ( ref_intCell self, int value )
{
    ref_intCell tmp  = new_intCell ( value, NULL );
    ref_intCell back = self;
    if ( back && tmp )
    {
       while ( back->link )
       {
          back = intCell_get_link ( back );
       } // end while 
       intCell_connect ( back, tmp );
    } // end if
    return ( back );
} // end intCell_push_back ( )

/*
// Remover celula do final
// OBS.: NAO removera' a primeira celula.
1.	
    _______             _______               _______              
   | self ---+       +--- last |           +--- back |             
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
   | self ---+       +--- last |           +--- back |             
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
   | self ---+         | last ---+           | back ---+           
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
   | self ---+         | last ---+           | back ---+           
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
ref_intCell intCell_pop_back ( ref_intCell self  )
{
    ref_intCell back = NULL;
    ref_intCell last = NULL;

    back = self;
	if ( self ) 
	{
       last = self;
       while ( back->link )
       {
          last = back;
          back = back->link;
       } // end while
       if ( last != back )
       {
          intCell_disconnect ( last, back );
       } // end if
	} // end 
    return ( back );
} // end intCell_pop_back ( )

/*
// Inserir nova celula no inicio
1.
    _______                                   _______              
   | self ---+                               | tmp  ---+           
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
   | self ---+                               | tmp  ---+           
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
   | self ---+                               | tmp  ---+           
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
   | self ---+                                                      
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
ref_intCell intCell_push_front ( ref_intCell self, int value )
{
    ref_intCell tmp = new_intCell ( 0, NULL );
    if ( self && tmp )
    {
       intCell_set_link   ( tmp, intCell_get_link  ( self ) );
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
   | self ---+                                                      
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
   | self ---+                   +--- tmp  |                        
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
   | self ---+                   +--- tmp  |                        
   |_______| |                   | |_______|                        
		     |         +-------------------------------+            
             |         |         |        		       |            
             v_______  |         v_______              v_______     
             |   x   | +-------->|   y   | +---------->|   z   |    
             |_______| |         |_______| |           |_______|    
             |      ---+         |      ---+           |      ---+  
             |_______|           |_______|             |_______| |  
    intCell             intCell               intCell           _v_ 
                                                                 -  

4.	
    _______                         _______                         
   | self ---+                   +--- tmp  |                        
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
   | self ---+                   +--- tmp  |                        
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
   | self ---+                               |  tmp ---+            
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
ref_intCell intCell_pop_front ( ref_intCell self )
{
    int value       = 0;
    ref_intCell tmp = NULL;
    if ( intCell_get_link ( self ) )
    {
	 // trocar conteudos
        value = intCell_get_value ( self );
        tmp   = intCell_get_link  ( self );
        intCell_set_link    ( self, intCell_get_link  ( tmp ) );
        intCell_set_value   ( self, intCell_get_value ( tmp ) );
        intCell_set_value   ( tmp , value );        
	 // desconectar a seguinte com o valor da primeira celula	
        intCell_disconnect  ( tmp , intCell_get_link  ( tmp ) );
    } // end if
    return ( tmp );
} // end intCell_pop_front ( )

// Obter conteudo de celula em certa posicao
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
           cursor = intCell_get_link ( cursor );
           x = x - 1;           
       } // end while    
       value = intCell_get_value ( cursor );       
    } // end if
    return ( value );
} // end intCell_at ( )

// Trocar conteudos de celulas
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

// Realizar testes
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
    ref_intCell b = new_intCell ( 0, NULL );
    intCell_print     ( a );
    getchar ( );
	
 // atribuir valor a celula
    intCell_set_value ( b, 1 );
 // atribuir 'a referencia estrutural	
    a = b;
 // mostrar 	
    intCell_print     ( a );
    getchar ( );
	
/**/
/**/    
 // criar outra celula
    b = new_intCell   ( 2, NULL );
 // conectar	
	intCell_connect   ( a, b );
 // mostrar celulas
    intCell_print     ( a );
 // mostrar tamanho
    printf            ( "\nintCell_length ( a ) = %d\n", 
	                       intCell_length ( a ) );
    printf            ( "\n" );
    getchar           ( );
/**/    
/**/    
 // criar mais outra celula
    b = new_intCell   ( 3, NULL );
 // conectar por atribuicao	
    intCell_set_link  ( intCell_get_link ( a ), b );
 // mostrar	
    intCell_print     ( a );
 // mostrar tamanho	
    printf            ( "\nintCell_length ( a ) = %d\n", 
	                       intCell_length ( a ) );
    printf            ( "\n" );
    getchar           ( );
    
 // marcar a ultima celula	
    ref_intCell back = b;
    for ( x=4; x<10; x=x+1 )
    {
	 // acrescetar mais uma celula ligada 'a ultima 
        intCell_set_link  ( back, new_intCell ( x, NULL ) );
	 // atualizar a ultima	
        back = intCell_get_link ( back );
	 // mostrar
        intCell_print     ( a );
    } // end for
 // mostrar o tamanho	
    printf            ( "\nintCell_length ( a ) = %d\n", 
	                       intCell_length ( a ) );
    printf            ( "\n" );
    getchar           ( );
	
 // inserir no final
    intCell_push_back ( a, 10 );
    intCell_push_back ( a, 11 );
    intCell_push_back ( a, 12 );
	
 // mostrar
    b = a;
    while ( intCell_length(a) > 1 )
	{
      intCell_print     ( a );
      getchar           ( );
	  b = intCell_pop_back  ( a );
	  printf ( "\nsize = %d\n", intCell_length(a));
	} // end while
    printf            ( "\n" );
	
	
 // inserir no inicio
    intCell_push_front ( a, 2 );
    intCell_push_front ( a, 3 );
	
 // mostrar
    b = a;
    while ( intCell_length(a) > 1 )
	{
      intCell_print     ( a );
      getchar           ( );
	  b = intCell_pop_back  ( a );
	  printf ( "\nsize = %d\n", intCell_length(a));
	} // end while
    printf            ( "\n" );
	
/**/    
 // inserir
    intCell_push_back  ( a, 4 );
    intCell_push_front ( a, 2 );
    intCell_push_back  ( a, 5 );
    intCell_push_front ( a, 1 );
	
    intCell_print      ( a );
    printf             ( "\n" );
    getchar            ( );

 // ordenar celulas
    printf            ( "\nReordenar\n\n" );
    for ( x=1; x<intCell_length(a); x=x+1 )
    {
        b = a;
        c = intCell_get_link ( b );
        for ( y=1; y<intCell_length(a); y=y+1 )
        {
            if ( intCell_get_value ( b ) < intCell_get_value ( c ) )
            {
               intCell_swap ( b, c );
            } // end if
            b = c;
            c = intCell_get_link ( b );
        } // end for
        intCell_print ( a );
        getchar  ( );
    } // end for
    printf            ( "\n" );
/**/
    printf  ( "\n" );
} // end intCell_test ( )

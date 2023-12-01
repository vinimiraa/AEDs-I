#include "cell.hpp"

int main ( void )
{
    ref_intCell a = new intCell ( 0, nullptr );
    a->intCell::test ( );
	
	printf ( "\n" );
	getchar( );
	return ( 0 );
}
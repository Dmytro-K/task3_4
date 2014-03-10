#include "task3_4_funcs.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main( void )
{
	size_t i;
	unsigned char num;
	char buffer[256];
	srand( _time32( NULL ) );
	rand();

	for( i = 0; i < 14; i++ ) {
		num = rand() % 100;
		NumToWord( buffer, num );
		printf( "%4d :\t%s\n", num, buffer );
	}
	return 0;
}
#include "task3_4_funcs.h"
#include <memory.h>

size_t StrLen( const char* str )
{
	size_t i;
	if( str == NULL )
	{
		return 0;
	}
	for( i = 0;; i++ )
	{
		if( *str == 0 )
		{
			break;
		}
		str++;
	}
	return i;
}

char *StrCat( char *dest, const char *src )
{
	char *s1 = dest;
	const char *s2 = src;
	char c;

	do
	{
		c = *s1++;
	} while( c != '\0' );

	s1 -= 2;

	do
	{
		c = *s2++;
		*++s1 = c;
	} while( c != '\0' );

	return dest;
}

void func( char* buffer, char num )
{
	char nums1[12][15] = { "one", "two", "three", "four", "five", "six",
		"seven", "eight", "nine", "ten", "eleven", "twelve" };
	char nums2[8][15] = { "twenty ", "thirty ", "forty ", "fifty ", "sixty ", "seventy ", "eighty ", "ninety "};
	//char twenty[] = "twenty ";
	char minus[] = "minus ";
	//char *ptr;
	char decs;
	//size_t len;


	if( buffer == NULL )
	{
		return;
	}

	buffer[0] = 0;

	if( num > 99 || num < -99 )
	{
		return;
	}

	//ptr = buffer;

	if( num < 0 )
	{
		/*len = StrLen( minus );
		memcpy( ptr, minus, minus );
		ptr += len;*/
		StrCat( buffer, minus );
	}

	//if( num == 20 )
	//{
	//	StrCat( buffer, twenty );
	//}

	decs = num / 10;

	if( num >= 20 )
	{
		/*len = StrLen( nums1[decs] );
		memcpy( buffer, nums1[decs], len );
		ptr += 1;*/
		StrCat( buffer, nums2[decs-2] );
		//StrCat( buffer, "ty " );
		num %= 10;
	}
	else 
	{
		if( num == 0 ) {
			StrCat( buffer, "zero" );
			return;
		}
	}

	if( num < 20  )
	{
		if( num <= 12 )
		{
			//memcpy( ptr, nums1[num], StrLen( nums1[num] ) );
			StrCat( buffer, nums1[num-1] );
		}
		else
		{
			num -= 10;
			/*len = StrLen( nums1[num] );
			memcpy( ptr, nums1[num], len );
			ptr += */
			StrCat( buffer, nums1[num-1] );
			StrCat( buffer, "teen " );
		}
	}
}
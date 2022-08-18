#include"main.h"

/**
 *binary_to_uint - conversion of binary to intt
 *@b: bbinary
 *
 * REturn: unsigned int
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int i = 0;
	int len ,k;

	if (!b)
		return (0);
	for (len = 0; b[len] != '\0'; len++)
		;
		for (len--, k = 1;len >=0; len-- k*=2)
		{
			if ( b[len] != '0' && b[len] != '1')
				return (0);
		}
	return (i);
}


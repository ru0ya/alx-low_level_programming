#include"main.h"

/*
 * int _isupper- checks for uppercase letters
 * Returns: 1 (alphabet) 0(lowercase)
*/

int _isupper(int c)
{
	int i;

	for (i = 'A'; i <= 'Z'; ; i++)
	{
		if (c == i)
			return (1);
	}
	return (0);
}

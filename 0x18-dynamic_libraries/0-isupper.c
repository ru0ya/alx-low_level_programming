#include "main.h"
/**
 * _isupper - check for uppercase characters
 * @c: integer
 * Return: 1 (success) 0 (otherwise)
 *
 */
int _isupper(int c)
{
	int i;

	for (i = 'A'; i <= 'Z'; i++)
	{
		if (c == i)
			return (1);
	}
	return (0);
}

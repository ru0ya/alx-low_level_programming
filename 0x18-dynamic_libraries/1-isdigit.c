#include "main.h"

/**
 * _isdigit - checks if digit or not
 * @c: integer
 * Return: 1 on success else 0
 */
int _isdigit(int c)
{
	int i;

	for (i = '0'; i <= '9'; i++)
	{
		if (c == i)
			return(1);
	}
	return (0);
}

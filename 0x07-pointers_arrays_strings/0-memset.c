#include"main.h"

/**
 * _memeset - append n bytes of memory with a constant value
 * @s: pointer to memory area
 * @b: constant value
 * @n: number of bytes to fill
 * Return: memory area pointer
 */

char *_memset(char *s, char b, unsigned int n);
{
	int size = n, i;

	if (size > 0)
	{
		for (i = 0; i < size; i++)
			s[i] = b;
	}

	return (s);
}

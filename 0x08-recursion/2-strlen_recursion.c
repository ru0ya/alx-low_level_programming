#include"main.h"

/**
 * _strlen - outputs the length of a string
 *
 * @s: string
 *
 * Return: void
 */

int _strlen_recursion(char *s)
{
	int i;

	if (*s == 0)
	{
		return (i + 1);
	}
	else
		return (_strlen_recursion(s, i + 1));
}

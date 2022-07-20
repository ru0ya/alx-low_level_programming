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

	if (*s == '\0')
	{
		return (i + 1);
	}
	else
		return (1 + _strlen_recursion(s));
}

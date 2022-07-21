#include"main.h"

/**
 *_print_rev_recursion - prints a string in reverse
 *
 * @s: string to be reversed
 *
 * Return: void
 */

void _print_rev_recursion(char *s)
{
	if (*s)
	{
	char *p = s;
	char c;

	do {
		c = *p;
		*p = *(p + 1);
		*(p + 1) = c;
	}
	while
	{
		(*p++);

		reverse(s);
	}

	c = *p;
	*p = *(p - 1);
	*(p - 1) = c;
	}
	return (_print_rev_recursion(s));
}

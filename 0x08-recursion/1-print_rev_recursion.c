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
	int i, len, temp;

	len = strlen(s);

	if (i < len / 2)
	{
		temp = s[i];
		s[i] = s[len - i - 1];
		s[len - i - 1] = temp;
		i++;

		rev_recursion(s);
	}
}

#include"main.h"

/**
 *  _puts_recursion - prints a string
 *
 *  @s: string
 *
 * Return:  void
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
	_putchar('\n');
	}
	else
		putchar(*s);


	_puts_recursio(n(s + 1));

}

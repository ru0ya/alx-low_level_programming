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

	_puts_recursion(s);
	s++;

	putchar('\n');
}

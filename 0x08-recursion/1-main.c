#include"main.h"
#include<stdio.h>
#include<ctype.h>
/**
 *_print_rev_recursion - prints a string in reverse
 *
 * @s: string to be reversed
 *
 * Return: void
 */

void _print_rev_recursion(char *s)
{
	if (*s == '\0')
		return;

	_print_rev_recursion(s + 1);
	_putchar(*s);
}
/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    _print_rev_recursion("\nColton Walker");
    return (0);
}

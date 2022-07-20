#include<stdio.h>
#include "main.h"

void _puts_recursion(char *s)
{
	puts ("   ");

	return (s);
}

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    _puts_recursion("Puts with recursion");
    return (0);
}

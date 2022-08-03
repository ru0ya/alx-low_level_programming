#include"function_point"
#include<stdio.h>

/**
 * print_name: outputs name
 *
 * Return: void
 */

void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);


}

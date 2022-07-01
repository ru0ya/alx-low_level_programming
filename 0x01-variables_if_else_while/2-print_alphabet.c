#include<stdio.h>
/**
 * main-Entry point
 * Code that prints a-z using putchar
 * Return:Always 0 (success)
*/

int main(void)
{
	for (int y = 'A' ;  y <= 'Z'; y++)
	{
		putchar(tolower(y));
		putchar('\n');
	}
	return (0);
}

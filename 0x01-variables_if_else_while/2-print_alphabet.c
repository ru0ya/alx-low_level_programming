#include<stdio.h>
/**
 * main-Entry point
 * Code that prints a-z using putchar
 * Return:Always 0 (success)
*/

int main(void)
{
	for (int y = 'a' ;  y <= 'z'; y++)
	{
		putchar(tolower(y));
		putchar('\n');
	}
	return (0);
}

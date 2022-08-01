#include<stdio.h>
/**
 * main-Entry point
 * Code that prints a-z using putchar
 * Return:Always 0 (success)
*/

int main(void)
{
	char alphabet;

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
		putchar(alphabet);
	putchar('\n');

	return (0);
}

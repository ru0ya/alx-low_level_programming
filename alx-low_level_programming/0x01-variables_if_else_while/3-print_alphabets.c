#include<stdio.h>
/**
 * main-Entry point
 * Return:0 success
*/

int main(void)
{
	char alphabet;
	/* Program */
	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
		putchar(alphabet);
	for (alphabet = 'A'; alphabet <= 'Z'; alphabet++)
		putchar(alphabet);
	putchar('\n');
	return (0);
}


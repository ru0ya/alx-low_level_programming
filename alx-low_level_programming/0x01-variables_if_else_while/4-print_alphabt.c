#include<stdio.h>
/**
 * main-Entry function
 * Return:0 success
*/

int main(void)
{
	char x;
	/* Program */
	for (x = 'a'; x <= 'z'; x++)
	{
		if (x != 'e' && x != 'q')
			putchar(x);
	}
	putchar('\n');
	return (0);
}

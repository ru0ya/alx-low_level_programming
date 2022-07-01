#include <stdio.h>

/**
 * main - Program entry point
 *
 * Return: 0 indicates success
 */

int main(void)
{
	int num, x, y;

	for (num = 0; num < 8; num++)
	{
	for (x = num + 1; x < 9; x++)
	{
	for (y = x + 1; y < 10; y++)
		{
			putchar(num + '0');
			putchar(x + '0');
			putchar(y + '0');
			if (num == 7 && x == 8 && y == 9)
				continue;
			putchar(',');
			putchar(' ');
	}
		}
			}
	putchar('\n');
	return (0);
}

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
#include <stdio.h>

int main(void)
{
int x, y;

for (y = 48 ; y < 58 ; y++)
{
for (x = y + 1 ; x < 58 ; x++)
{
putchar(y);
putchar(x);
if (y != 56 || x != 57)
{
putchar(44);
putchar(32);
}
}
}
putchar('\n');
return (0);
}

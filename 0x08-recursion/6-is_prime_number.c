#include"main.h"
/**
 * is_prime_number - checks whether digit is
 * a prime number
 *
 * @n: digit
 *
 * Return: void
 */

int is_prime_number(int n)
{
	if (n % 2 == 0)
	{
		return (0);
	}
	if (n == 1)
	{
		return (1);
	}
	else
	{
		return (1);
	}
	n++;
	return (is_prime_number(n));
}

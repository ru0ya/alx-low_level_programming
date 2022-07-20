#include"main.h"
/**
 * _sqrt_recursion - outputs squareroot of n
 *
 * @n: value
 * Return: void
 */

int _sqrt_recursion(int n)
{
	if (n == 0)
	{
		return (-1);
	}
	else
		return (_sqrt_recursion(n));
}

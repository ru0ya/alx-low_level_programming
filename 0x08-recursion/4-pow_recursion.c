#include"main.h"
/**
 * _pow_recursion - outputs the result of x raised to y
 *
 * @x: value
 * @y: value
 * Return: void
 */

int _pow_recursion(int x, int y);
{
	if (y < 0)
	{
		return (-1);
	}
	else
		return (x * f(x, y - 1));
}

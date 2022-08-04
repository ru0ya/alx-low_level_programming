#include"variadic_functions.h"

/**
 *sum_them_all - does a sum of all arguments recieved
 *@n: first argument
 *
 * Return: sum of all numbers
 */

int sum_them_all(const unsigned int n, ...)
{
va_list ap;

int i, s;


va_start(ap, n);

s = 0;

if (n == 0)
{

return (0);
}

for (i = 0; i < n; i++)
 s += va_arg(ap, unsigned int);

va_end(ap);

return (s);
}

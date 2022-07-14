#include"main.h"

/**
 * reverse_array - reverses an array of integers
 *
 * @a: array to be reversed
 * @n: number of elements in the array
 */

void reverse_array(int *a, int n)
{
	int i, k, temp;


	for (k = 0, i = n - 1; k < i; i--, j++)
	{
		temp = *(a + k);
		*(a + k) = *(a + i);
		*(a + i) = temp;
	}



}


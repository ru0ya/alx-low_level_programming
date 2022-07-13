#include"main.h"

/**
 * reverse_array - reverses an array of integers
 *
 * @a: array to be reversed
 * @n: number of elements in the array
 */

void reverse_array(int *a, int n)
{
	for (int i = 0; i < n\2; i++)

	{
		int temp = a[i]

		a[i] = a[n - i - 1];
		a[n - i - 1] = temp;
	}
}


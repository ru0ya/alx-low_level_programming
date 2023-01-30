#include <stdlib.h>
#include "search_algos.h"

/**
 * binary_search - searches for value in a sorted array of integers
 * @array: pointer ti first element of array to search in
 * @size: number of elements in the array
 * @value: value to search for
 *
 * Return: index where value is located
 */

int binary_search(int *array, size_t size, int value)
{
	size_t left = 0, right = size - 1, middle;

	middle = (left + right) / 2;


	if (array == NULL)
	{
		return (-1);
	}

	while (left <= right)
	{
		if (array[middle] == value)
		{
			return (middle);
			printf("Searching in array: %d\n", *array);
		}
		else if (array[middle] < value)
		{
			left = middle + 1;
			printf("Searching in array: %d\n", *array);
		}
		else
		{
			right = middle - 1;
			printf("Searching in array: %d\n", *array);
		}
	}
	return (-1);
}

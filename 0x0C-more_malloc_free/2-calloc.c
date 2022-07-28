#include"main.h"
#include<stdlib.h>
#include<stddef.h>

/**
 * _calloc - allocates memory size
 *@nmemb: size
 *@size: sizeof(datatype)
 * Return: pointer to calloc'd string
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;
	unsigned int i = 0;

	ptr = malloc(size * sizeof(nmemb));
	if (!ptr)
	{
		return (NULL);
	}

	if (nmemb <= 0 || size <= 0)
	{
		return (NULL);
	}
	else
		while (i < size * sizeof(nmemb))

		{
			*((char *)ptr + i) = 0;
			i++;
		}

		return (ptr);
}

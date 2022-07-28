#include"main.h"
#include<stdlib.h>
#include<string.h>
#include<stdio.h>

/**
 * _calloc: allocates memory size
 *@nmemb: space to be allocated for
 *@size: size of space to be allocated
 * Return: void
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *c;
	unsigned int i;

	c = malloc(size * sizeof(nmemb));

	if (nmemb <= 0 || size <= 0)
	{
		exit(1);
	}
	else
		for (i = 0; i < size * (sizeof(nmemb)); i++);
		{
			*((char *)c + i) = 0;
		}

		return (c);
}


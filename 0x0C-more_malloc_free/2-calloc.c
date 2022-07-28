#include"main.h"
#include<stdlib.h>
#include<string.h>
#include<stdio.h>
/**
 * _calloc - allocates memory size
 *@nmemb: space to be allocated for
 *@size: size of space to be allocated
 * Return: void
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *c;
	unsigned int i = 0;

	c = malloc(size * sizeof(nmemb));

	if (nmemb <= 0 || size <= 0)
	{
		exit(1);
	}
	else
		while (i < size * sizeof(nmemb))

		{
			*((char *)c + i) = 0;
			i++;
		}

		return (c);
}

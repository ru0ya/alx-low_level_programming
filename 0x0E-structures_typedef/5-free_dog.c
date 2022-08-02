#include"dog.h"
#include<stdio.h>

/**
 * print_dog: frees previously allocated memory
 *
 * @d: pointer
 * Return: void
 */
void print_dog(struct dog *d)
{

	if (!d)
	{
		return;
	}

	free((*d).name);
	free((*d).owner);
	free(d);

}

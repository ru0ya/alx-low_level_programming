#include"dog.h"
#include<stdio.h>

/**
 * free_dog: frees previously allocated memory
 *
 * @d: dog loc
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

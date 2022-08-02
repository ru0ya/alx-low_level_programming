#include "dog.h"
/**
 * print_dog - prints elements of d
 * @d: argument character
 *
 * Return: void
 */

void print_dog(struct dog *d)
{

	if (d != NULL)
	{

	printf("Name: %s\n", d->name);
	printf("Owner: %s\n", d->owner);
	printf("Age: %f\n", d->age);


	}

}

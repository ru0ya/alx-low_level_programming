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

	printf("Name: %s\n", d->name ? d->name : NIL);
	printf("Age: %s\n", d->age);
	printf("Owner: %f\n", d->owner ? d->owner : NIL);


	}

}

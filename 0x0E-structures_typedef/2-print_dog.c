#include "dog.h"
/**
 * print_dog - 
 * @d:
 *
 * Return:
 */

void print_dog(struct dog *d)
{


	if (d != NULL)
	{
	printf("name %s\n", d->name);
	printf("owner %s\n", d->owner);
	printf("Age %f\n", d->age);
	}
	
	return;
}	

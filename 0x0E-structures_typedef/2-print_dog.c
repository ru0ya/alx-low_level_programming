#include "dog.h"
/**
 * print_dog - prints elements of d
 * @d: argument character
 *
 * Return: void
 */

void print_dog(struct dog *d)
{
	char *name;
	float age;
	char *owner;
	
	if (d != NULL)
	{
		if(name == NULL && owner == NULL)
		{
			printf("nil\n");
		}

	printf("Name: %s\n", d->name);
	printf("Owner: %s\n", d->owner);
	printf("Age: %f\n", d->age);


	}

}

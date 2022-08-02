#include"dog.h"
#include<stdlib.h>

/**
 * init_dog - initializes dog
 *@d: argument
 * @name: character parameter
 * @age: integer parameter
 * @owner: character parameter
 * Return: void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)

	d->name = name;
	d->age = age;
	d->owner;
}

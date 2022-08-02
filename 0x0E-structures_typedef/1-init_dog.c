#include<stdio.h>
#include"dog.h"

/**
 * init_dog - initializes dog
 *
 * @name: character parameter
 * @age: integer parameter
 * @owner: character parameter
 * Return: void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	struct dog *d;

	d -> name = name;
	d -> age = age;
	d -> owner;
}

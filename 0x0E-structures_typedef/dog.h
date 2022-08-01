#include<stdio.h>
#include<stdlib.h>

/**
 * struct dog - entry point
 *
 * @name: parameter of character value
 * @age: parameter of integer value
 * @owner: parameter of character value
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};
struct dog *my_dog(char *name, float age, char *owner)
{
	struct dog *my_dog;

	my_dog = malloc(sizeof(struct dog));
	if (my_dog == NULL)
	{
		return (NULL);
	}
	my_dog -> name = name;
	my_dog -> age = age;
	my_dog -> owner = owner;

	return (my_dog);
}

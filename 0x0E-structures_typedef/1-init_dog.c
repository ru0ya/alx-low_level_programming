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
	if (d == NULL)
	{
		return;
	}

	d -> name = name;
	d -> age = age;
	d -> owner;
}
int main(void)
{
    struct dog my_dog;

    init_dog(&my_dog, "Poppy", 3.5, "Bob");
    printf("My name is %s, and I am %.1f :) - Woof!\n", my_dog.name, my_dog.age);
    return (0);
}

#include "dog.h"
/**
 * print_dog - 
 * @d:
 *
 * Return:
 */

void print_dog(struct dog *d)
{
	struct dog *d;

	if (d == NULL)
	{
		return;
	}
	printf("name %s\n", d->name);
	printf("owner %s\n", d->owner);
	printf("Age %d\n", d->age);
	
	return (0);
}
int main(void)
{
    struct dog my_dog;

    my_dog.name = "Poppy";
    my_dog.age = 3.5;
    my_dog.owner = "Bob";
    print_dog(&my_dog);
    return (0);
}
	

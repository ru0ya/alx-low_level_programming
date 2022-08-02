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
		return(1);
	}
	printf("Name %s\n", d->Name);
	printf("Owner %s\n", d->Owner);
	printf("Age %d\n", d=>Age);
	
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
	

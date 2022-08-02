#ifndef DOG_H
#define DOG_H

#include<stdio.h>
#include<stdlib.h>

/**
 * struct dog - entry point
 *
 * @name: first parameter
 * @age: second parameter
 * @owner: third parameter
 */

typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);

void print_dog(struct dog *d);





#endif /*DOG_H*/

#include"dog.h"
#include<stdio.h>

void print_dog(struct dog *d)
{

	if (d != NULL)
	{

	free((*d).name);
	free((*d).owner);
	free(d);
	}
	return;

}

#include"dog.h"
#include<stdio.h>

void print_dog(struct dog *d)
{

	if (d == NULL)
	{
		return;
	}

	free((*d).name);
	free((*d).owner);
	free(d);

}

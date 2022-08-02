#include"dog.h"

/**
 * 
 *
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *r;
	int namelen, ownlen, i;

	r = malloc(sizeof(dog_t));

	if (r == NULL)
	{
		return (NULL);
	}
	namelen = strlen(name) + 1;
	ownlen = strlen(owner) + 1;

	r->name = malloc(sizeof(r->name) * namelen);
	if (r->name == NULL)
	{
		free (r);
		return (NULL);
	}
	for (i = 0; i < namelen - 1; i++)
	{
		r->name[i] = name[i];
		 printf("name: %c %c\n", r->name[i], name[i]);

	}
	r->age = age;

	r->owner = malloc(sizeof(r->owner) * ownlen);
	if (r->owner == NULL)
	{
		free(r->name);
		free(r);
		return (NULL);
	}
	for (i = 0; i < ownlen; i++)
	{
		r->owner[i] = owner[i];
	printf("owner: %c %c\n", r->owner[i], owner[i]);
	}

	return (r);

}

#include"main.h"
#include<string.h>
/**
 * string_nconcat: concatenates s1 to s2
 *
 *@n: memory space to be allocated
 * Return: void
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *p;

	p = malloc(n);

	if (p == NULL)
	{
		exit(1);
	}
	for (n = 0; n >= 2; n++)
	{
		*s1++ = *s2++;

		exit(0);
	}

		return (NULL);
}
int main(void)
{
    char *concat;

    concat = string_nconcat("Best ", "School !!!", 6);
    printf("%s\n", concat);
    free(concat);
    return (0);
}

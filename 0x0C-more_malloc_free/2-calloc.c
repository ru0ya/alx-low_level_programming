#include"main.h"
#include<stdlib.h>
#include<stddef.h>

/**
 * _calloc - allocates memory size
 *@nmemb: size
 *@size: sizeof(datatype)
 * Return: pointer to calloc'd string
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;
	unsigned int i = 0;

	ptr = malloc(size * sizeof(nmemb));
	if (!ptr)
	{
		return (NULL);
	}

	if (nmemb <= 0 || size <= 0)
	{
		return (NULL);
	}
	else
		while (i < size * sizeof(nmemb))

		{
			*((char *)ptr + i) = 0;
			i++;
		}

		return (ptr);
}

void simple_print_buffer(char *buffer, unsigned int size)
{
    unsigned int i;

    i = 0;
    while (i < size)
    {
        if (i % 10)
        {
            printf(" ");
        }
        if (!(i % 10) && i)
        {
            printf("\n");
        }
        printf("0x%02x", buffer[i]);
        i++;
    }
    printf("\n");
}

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    char *a;

    a = _calloc(98, sizeof(char));
    strcpy(a, "Best");
    strcpy(a + 4, " School! :)\n");
    a[97] = '!';
    simple_print_buffer(a, 98);
    free(a);
    return (0);
}

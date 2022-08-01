#include<stdio.h>

/**
 * @main:arguments supplied to program
 * @argv:first command line argument
 * @argc: points last argument
 *
 * @count: number of arguments
 *Return: 0 success
 */

int main(int argc, char *argv[])
{
	int count;

	printf("my name is\"%s\" .\n", argv[0]);

	if (argc > 1)
	{
		for (count = 1; count < argc; count++)
		{
			printf("argv[%d] = %s\n", count, argv[count]);
		}
	}
		else
		{
			printf("my new name is\n");
		}
	}

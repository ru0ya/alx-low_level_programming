#include"main.h"

/**
 * main - Entry point
 * @argc: number of arguments
 *
 * @argv: array of strings
 *
 * Return: 0 success
 */

int main(int argc, char *argv[])
{
	long result = 1;

	for (int i = 1; i < argc; i++)
	{
		long num;
		char *p;
		errno = 0;

		num = strtol(argv[i], &p, 10);

		if (*p != '\0')
		{
			printf("Error\n");

			return (1);
		}
		else if(argc <= 1)
		{
			printf("0\n");

			return (0);
		}

		result = result + num;

		printf("%ld\n", result);

		return (0);
	}


}

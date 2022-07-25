#include"main.h"

/**
 * main - Entry point
 *
 * @argc: number of arguments
 * @argv: name of arguments
 *@errno: converts char to int
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
		result = result * num;
	}
	printf("%ld\n", result);

	return (0);
}

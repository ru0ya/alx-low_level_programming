#include"main.h"

/**
 * main - Entry point
 *
 * @argc: number of arguments
 * @argv: name of arguments
 *
 * Return: 0 success
 */

int main(int argc, char *argv[])
{

	if (argc != 3)
	{
		goto ERROR;

		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));

		return (0);
	}
	else
	{
ERROR:	printf("Error\n");

		return (1);
	}
}

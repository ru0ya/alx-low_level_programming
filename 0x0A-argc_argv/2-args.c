/*#include"main.h"*/
#include<stdio.h>

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
	int i = 0;

	while (i < argc)
	{
		printf("%s\n", argv[i++]);
	}
	return (0);
}


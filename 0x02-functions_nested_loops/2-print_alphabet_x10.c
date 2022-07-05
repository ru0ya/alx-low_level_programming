#include <stdio.h>
#include"main.h"
/**
 * main- Entry point
 * Return: 0 (success)
*/
void print_alphabet(void)
{
	char letter;

	letter = ' a ';
	while (letter <= ' z ')
	{
	putchar(letter);
	letter++;
	}
}

int main(void)
{
	int i;
	for(i=1; i<=10; i++)
	{
	putchar(' a ');

	print_alphabet();
	}
    
	return (0);
}

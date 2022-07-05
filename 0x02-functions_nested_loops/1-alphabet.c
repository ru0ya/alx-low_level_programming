#include"main.h"
/**
 * print_alphabet - print the alphabet in lowercase
 * followed by a new line
 */
void print_alphabet(void)
{
	char letter;

	letter = 'a';
	while (letter <= 'z')
	{
		putchar(letter);
		letter++;
	}
}
/**
 * main - Entry point
 * Return:0 (success)
*/

int main(void)
{
	print_alphabet();
	return (0);
}

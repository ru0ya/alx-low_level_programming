#include"main.h"

/**
 * _isalpha - function to know if
 * character is a letter or not
 *
 * @c: variable to evaluate
 *
 * Return: 1 if letter 0 otherwise
 */

int _isalpha(int c)
{
	int alpha;
	for(alpha = 'a'; alpha <= 'z'; alpha++)
	{
		if (c == alpha)
			return (1);
	}
	for (alpha = 'A'; alpha <= 'Z'; alpha++)
	{
		if (c == alpha)
			return(1);
	}
	return (0);
}

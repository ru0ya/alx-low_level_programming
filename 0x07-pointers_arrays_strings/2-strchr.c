#include"main.h"

/**
 * _strchr - searches for a string
 * @s: character
 * @c: character value
 *
 * Return: pointer to first occurence
 */

char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s != c)
		s++;

		else
			return (s);
	}
	if (c == '\0')

		return (s);


	return (NULL);
}

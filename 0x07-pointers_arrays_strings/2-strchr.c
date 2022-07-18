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
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}

	return (NULL);
}

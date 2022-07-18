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
	for (;; s++)
	{
		if (*s == c)
			return (s);
		if (!*s)
			return (NULL);
	}
	return (NULL);
}

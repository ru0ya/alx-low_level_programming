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
	f0r (; *s != '\0'; s++)
	{
		if (*s == c)
			return (char *) s;
	}
	return (NULL);
}

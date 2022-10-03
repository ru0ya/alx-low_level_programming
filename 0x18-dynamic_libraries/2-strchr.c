#include "main.h"

/**
 * _strchr - searches for a string
 * @s: character
 * @c: character value
 *
 * Return: pointer to first occurence
 */
char *_strchr(char *s, char c)
{
	int i = 0;

	while(s[i] != '\0' && s[i] != c)
		i++;
	if (s[i] == c)
		return (&s[i]);
	else
		return(0);
}

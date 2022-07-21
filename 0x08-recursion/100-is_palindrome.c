#include"main.h"
/**
 * is_palindrome - checks whether a string in reverse
 * is same as in normal state
 *
 * startindex: beginning of string
 * endindex: end of string
 *@s: string
 * Return: void
 */

int is_palindrome(char *s)
{

	if (*s[startIndex] != *s[endIndex])
	{
		return (0);
	}
	else
	{
		return (1);
	}

	return (is_palindrome(s));
}

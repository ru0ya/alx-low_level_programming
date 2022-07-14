#include"main.h"

/**
 * string_toupper - change to uppercase
 *
 * @*s: string name
 *char * - parameter
 * Return: void
 */

char *string_toupper(char *)
{
	char *s = name;

	while (*s)
	{
		*s = toupper((unsigned char) *s);
		s++;
	}
}

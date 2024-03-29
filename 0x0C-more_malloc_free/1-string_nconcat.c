#include"main.h"
#include<string.h>
/**
 * string_nconcat: concatenates s1 to s2
 * 
 *@s1: argument
*@s2:argument
 *@n: memory space to be allocated
 * Return: void
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s;
	int num, len, i, j;

	num = n;

	if (!s1)
		s1 = EMPTY;
	if (!s2)
		s2 = EMPTY;
	if (num >= (int) strlen(s2))
		num = strlen(s2);

	len = strlen(s1) + num + 1;

	s = malloc(sizeof(*s) * len);
	if (!s)
		return (NULL);

	for (i = 0; s1[i] != END; i++)
		s[i] = s1[i];
	for (j = 0; j < num; j++)
		s[i + j] = s2[j];
	s[i + j] = END;

	return (s);
}

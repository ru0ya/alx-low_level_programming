#include "lists.h"

/**
 *size_t - prints list
 *@h: 
 *
 * Returns: count of list
 */

size_t print_list(const list_t *h)
{
	size_t count = 0;
	unsigned int;

	if(h == NULL)
		return (0);
	while(h)
	{
		h -> next != 0;
		
		if (!h -> str)
		{
		printf("[%d][%s]\n", 0, "(nil)");
		}
	else
		{	
		printf("[%u][%s]\n", h->len, h->str);
		count++;
		h = h->next;
		}
	}

	return (count);
}

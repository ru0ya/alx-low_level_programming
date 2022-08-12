#include "lists.h"

/**
 *
 *
 *
 */

list_t *add_node_end(list_t **head, const char *str)
{
	int *new_node;
	int *last;
	size_t n;

	new_node = malloc(sizeof(list_t));

	if (new_node == NULL)
		return (NULL);
	new_node->str = strdup(str);
	for(n = 0;str[n]; n++)
	{
		last = *head;
		*new_node-> len = n;

		if(*last == NULL)
		{
			return (NULL);
			*head = new_node;
		}
		else
			while (*last->next != NULL)
			{
				last->next = new_node;
			}
	}
		return(new_node);
}

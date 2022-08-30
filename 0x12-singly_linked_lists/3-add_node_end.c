#include "lists.h"

/**
 *add_node_end - returns length of string
 *@str:  string to count
 *@head: head of linked list
 *Return: length of string
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node, *last;
	int n;

	new_node = malloc(sizeof(list_t));

	if (new_node == NULL)
		return (NULL);
	new_node->str = strdup(str);

	for (n = 0; str[n]; n++)

		new_node->len = n;
		new_node = NULL;

		if (*head == NULL)
		{
			*head = new_node;
		}
		else
		{
			 last = *head;

			while (last->next != NULL)
				last = last->next;
			last->next = new_node;
		}
	}
		return (*head);
}

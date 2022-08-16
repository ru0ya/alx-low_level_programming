#include "lists.h"

/**
 * add_nodeint_end - adds node at the end
 *@head: start of node
 *@n: list of nodes
 *
 * Return: end of nodes
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node;
	listint_t *last;

	new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
		return (NULL);
	last = *head;
	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
	}
	else
	{
		while (last->next != NULL)
			last = last->next;
		last->next = new_node;
	}
	return (*head);
}

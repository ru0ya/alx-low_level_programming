#include "lists.h"

/**
 * print_listint - number of nodes
 *
 * @h: header to the program
 * Return: number of elements
 */

size_t print_listint(const listint_t *h)
{
	size_t nodes = 0;

	while (h != 0)
	{
		printf("%d\n", h->n);
		h = h->next;
		nodes++;
	}
	return (nodes);
}

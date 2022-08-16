#include "lists.h"

/**
 * listint_len - number of elements
 *
 * @h: header
 *
 * Return: number of elements
 */

size_t listint_len(const listint_t *h)
{
	size_t nodes = 0;

	while (h != 0)
	{
		h = h->next;
		nodes++
	}
	return (nodes);
}

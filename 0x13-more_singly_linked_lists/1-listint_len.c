#include "lists.h"

/**
 * listint_len - It returns the number of elements in
 * a linked listint_t list.
 * @h: This is a head of a list.
 *
 * Return: The numbers of nodes.
 */
size_t listint_len(const listint_t *h)
{
	size_t nnodes = 0;

	while (h != NULL)
	{
		h = h->next;
		nnodes++;
	}
	return (nnodes);
}


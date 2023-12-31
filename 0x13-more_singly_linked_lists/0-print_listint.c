#include "lists.h"

/**
 * print_listint - a function that prints all the elements of a list.
 * @h: This is the head of a list.
 *
 * Return: The numbers of nodes.
 */
size_t print_listint(const listint_t *h)
{
	size_t nnodes = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		nnodes++;
	}
	return (nnodes);
}

